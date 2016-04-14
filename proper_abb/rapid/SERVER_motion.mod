MODULE SERVER_motion


LOCAL CONST zonedata DEFAULT_CORNER_DIST := z10;
LOCAL VAR robtarget trajectoryTargets{MAX_BUFFER};
LOCAL VAR speeddata trajectorySpeeds{MAX_BUFFER};
LOCAL VAR zonedata trajectoryZones{MAX_BUFFER};
LOCAL VAR bool trajectoryTriggSet{MAX_BUFFER};
LOCAL VAR bool trajectoryTrigg{MAX_BUFFER};
LOCAL VAR num trajectory_size := 0;
LOCAL VAR intnum intr_new_trajectory;
LOCAL VAR intnum intr_cancel_motion;
!//Control of the laser
VAR triggdata laserON_fl015;
VAR triggdata laserOFF_fl015;

!//Parameter initialization
!// Loads default values for
!// - Tool.
!// - WorkObject.
!// - Zone.
!// - Speed.
PROC Initialize()
    !currentTool := [TRUE,[[0,0,0],[1,0,0,0]],[0.001,[0,0,0.001],[1,0,0,0],0,0,0]];
    !currentWobj := [FALSE,TRUE,"",[[0,0,0],[1,0,0,0]],[[0,0,0],[1,0,0,0]]];
    !currentSpeed := [100, 50, 0, 0];
    !currentZone := [FALSE, 0.3, 0.3,0.3,0.03,0.3,0.03]; !z0
		TriggIO laserON_fl015, 0\DOp:=Do_FL_StandByEnc, 1;
		TriggIO laserOFF_fl015, 0\DOp:=Do_FL_StandByEnc, 0;
	n_cartesian_command := 1;
	n_cartesian_motion := 1;
	!Find the current external axis values so they don't move when we start
	!jointsTarget := CJointT();
	!externalAxis := jointsTarget.extax;
ENDPROC



PROC main()
    VAR num i_fl015;
    VAR jointtarget target;
    VAR speeddata move_speed := v10;  ! default speed
    VAR zonedata stop_mode;

    !//Motion configuration
    ConfL \Off;
    SingArea \Wrist;
    moveCompleted:= TRUE;

    !//Initialization of WorkObject, Tool, Speed, Zone and Laser
    Initialize;

    ! Set up interrupt to watch for new trajectory
    IDelete intr_new_trajectory;    ! clear interrupt handler, in case restarted with ExitCycle
	IDelete intr_cancel_motion;
    CONNECT intr_new_trajectory WITH new_trajectory_handler;
	CONNECT intr_cancel_motion WITH new_cancel_motion_handler;
    IPers new_trajectory, intr_new_trajectory;
	IPers cancel_motion, intr_cancel_motion;

    WHILE true DO
        ! Check for new Trajectory
        IF (new_trajectory) THEN
            init_trajectory;
        ENDIF

        ! execute all points in this trajectory
        IF (trajectory_size > 0) THEN
            FOR i_fl015 FROM 1 TO trajectory_size DO
              TPWrite "Moving to pose: ", \Num:=i_fl015;
              IF trajectoryTrigg{i_fl015} = FALSE THEN
                MoveL trajectoryTargets{i_fl015}, trajectorySpeeds{i_fl015}, trajectoryZones{i_fl015}, currentTool \WObj:=currentWobj ;
              ELSE
                IF trajectoryTriggSet{i_fl015} = FALSE THEN
                  TriggL trajectoryTargets{i_fl015}, trajectorySpeeds{i_fl015}, laserOFF_fl015, trajectoryZones{i_fl015}, currentTool \WObj:=currentWobj ;
                ELSE
                  TriggL trajectoryTargets{i_fl015}, trajectorySpeeds{i_fl015}, laserON_fl015, trajectoryZones{i_fl015}, currentTool \WObj:=currentWobj ;
                ENDIF
              ENDIF
            ENDFOR
            trajectory_size := 0;  ! trajectory done
        ENDIF

        !Check for new motion command
        IF n_cartesian_command <> n_cartesian_motion THEN
          TEST command_type{n_cartesian_motion}
            CASE 1: !Cartesian linear move
              moveCompleted := FALSE;
              MoveL cartesianTarget{n_cartesian_motion}, cartesian_speed{n_cartesian_motion}, currentZone, currentTool \WObj:=currentWobj ;
              moveCompleted := TRUE;

            CASE 10: !Cartesian joint move
              moveCompleted := FALSE;
              MoveJ cartesianTarget{n_cartesian_motion}, cartesian_speed{n_cartesian_motion}, currentZone, currentTool \WObj:=currentWobj ;
              moveCompleted := TRUE;

            CASE 110: !Trigger linear OFF
              moveCompleted := FALSE;
              TriggL cartesianTarget{n_cartesian_motion}, cartesian_speed{n_cartesian_motion}, laserOFF_fl015, currentZone, currentTool \WObj:=currentWobj ;
							moveCompleted := TRUE;

            CASE 111: !Trigger linear ON
              moveCompleted := FALSE;
              TriggL cartesianTarget{n_cartesian_motion}, cartesian_speed{n_cartesian_motion}, laserON_fl015, currentZone, currentTool \WObj:=currentWobj ;
							moveCompleted := TRUE;

            DEFAULT:
				TPWrite "SERVER_motion: Illegal instruction code: ", \Num:=command_type{n_cartesian_motion};
          ENDTEST
          n_cartesian_motion := n_cartesian_motion + 1;
          IF n_cartesian_motion > 49
            n_cartesian_motion := 1;
        ENDIF
        WaitTime 0.1;  ! Throttle loop while waiting for new command
    ENDWHILE
ERROR
    ErrWrite \W, "Motion Error", "Error executing motion.  Aborting trajectory.";
    abort_trajectory;
ENDPROC
LOCAL PROC init_trajectory()
    clear_path;                       ! cancel any active motions
    WaitTestAndSet trajectory_lock;   ! acquire data-lock
      trajectoryTargets := bufferTargets;    ! copy to local var
      trajectory_size := BUFFER_POS;  ! copy to local var
      trajectorySpeeds := bufferSpeeds;
      trajectoryZones := bufferZones;
      trajectoryTriggSet := bufferTriggSet;
      trajectoryTrigg := bufferTrigg;
      new_trajectory := FALSE;
    trajectory_lock := FALSE;         ! release data-lock
ENDPROC
LOCAL PROC abort_trajectory()
    trajectory_size := 0;  ! "clear" local trajectory
    clear_path;
    ExitCycle;  ! restart program
ENDPROC
LOCAL PROC clear_path()
    IF ( NOT (IsStopMoveAct(\FromMoveTask) OR IsStopMoveAct(\FromNonMoveTask)) )
        StopMove;          ! stop any active motions
    ClearPath;             ! clear queued motion commands
    StartMove;             ! re-enable motions
ENDPROC
LOCAL TRAP new_trajectory_handler
    IF (NOT new_trajectory) RETURN;

    abort_trajectory;
ENDTRAP
LOCAL TRAP new_cancel_motion_handler	
	IF (NOT cancel_motion) RETURN;
	! Reset
	cancel_motion := FALSE;
	n_cartesian_motion := n_cartesian_command;
	abort_trajectory;
	!clear_path;
ENDTRAP


ENDMODULE