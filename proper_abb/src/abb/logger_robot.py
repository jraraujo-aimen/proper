from abb import Robot
from threading import Thread


class LoggerRobot(Robot):
    def __init__(self):
        #self.robot = abb.Robot()
        Robot.__init__(self)

    def connect(self, ip):
        self.control = True
        self.t = Thread(target=self.connect_logger, args=((ip, 5001), ))
        #self.robot.connect_logger((ip, 5001))
        self.t.start()

    def disconnect(self):
        self.control = False

if __name__ == '__main__':
    logger_robot = LoggerRobot()
    logger_robot.connect('172.20.0.32')
    logger_robot.disconnect()
