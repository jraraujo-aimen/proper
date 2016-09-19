/********************************************************************************
** Form generated from reading UI file 'pclviewer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PCLVIEWER_H
#define UI_PCLVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PCLViewer
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_7;
    QVTKWidget *qvtkWidget;
    QTabWidget *tabWidget;
    QWidget *tab_filtros;
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser_datos;
    QStackedWidget *stackedWidget_filtros;
    QWidget *page_voxel;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_voxel_x;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_voxel_y;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_voxel_z;
    QWidget *page_morph;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox_filtro1_kn;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_filtro1_desv;
    QWidget *page_filtro_2;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_radio;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_radio_k;
    QWidget *page_resampling;
    QGridLayout *gridLayout_8;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_smooth;
    QWidget *page_pass;
    QGridLayout *gridLayout_10;
    QComboBox *comboBox_pass;
    QDoubleSpinBox *doubleSpinBox_max_pass;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_min_pass;
    QLabel *label_13;
    QComboBox *comboBox_filtros;
    QPushButton *pushButton_deshacer_filtro;
    QPushButton *pushButton;
    QPushButton *pushButton_funcion_1;
    QPushButton *pushButton_aceptar_filtro;
    QPushButton *pushButton_filter;
    QWidget *tab_fit;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_centra;
    QPushButton *pushButton_recorta_plano;
    QPushButton *pushButton_reorienta;
    QPushButton *pushButton_deshacer_plano;
    QPushButton *pushButton_distances;
    QPushButton *pushButton_funcion_2;
    QLabel *label_14;
    QPushButton *pushButton_aceptar_fitting;
    QDoubleSpinBox *doubleSpinBox_ransac_dist;
    QTextBrowser *textBrowser_datos_2;
    QCheckBox *checkBox_puntos_sup;
    QGridLayout *gridLayout_12;
    QDoubleSpinBox *doubleSpinBox_angle;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_2dx;
    QDoubleSpinBox *doubleSpinBox_2dy;
    QPushButton *pushButton_2d_place;
    QLabel *label_16;
    QLabel *label_17;
    QWidget *tab_projections;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_proj_points;
    QPushButton *pushButton_save_projections;
    QTextBrowser *textBrowser_projection;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QDoubleSpinBox *doubleSpinBox_cloud_size;
    QDoubleSpinBox *doubleSpinBox_mod_size;
    QLabel *label_11;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_sel_size;
    QLabel *label_10;
    QSplitter *splitter;
    QPushButton *pushButton_random_2;
    QPushButton *pushButton_gardar;

    void setupUi(QMainWindow *PCLViewer)
    {
        if (PCLViewer->objectName().isEmpty())
            PCLViewer->setObjectName(QString::fromUtf8("PCLViewer"));
        PCLViewer->resize(966, 641);
        PCLViewer->setMinimumSize(QSize(966, 641));
        PCLViewer->setMaximumSize(QSize(5000, 5000));
        centralwidget = new QWidget(PCLViewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout_7 = new QGridLayout(centralwidget);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        qvtkWidget = new QVTKWidget(centralwidget);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));
        sizePolicy.setHeightForWidth(qvtkWidget->sizePolicy().hasHeightForWidth());
        qvtkWidget->setSizePolicy(sizePolicy);
        qvtkWidget->setSizeIncrement(QSize(1, 1));
        qvtkWidget->setAutoFillBackground(true);

        gridLayout_7->addWidget(qvtkWidget, 0, 3, 3, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tab_filtros = new QWidget();
        tab_filtros->setObjectName(QString::fromUtf8("tab_filtros"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tab_filtros->sizePolicy().hasHeightForWidth());
        tab_filtros->setSizePolicy(sizePolicy2);
        gridLayout = new QGridLayout(tab_filtros);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser_datos = new QTextBrowser(tab_filtros);
        textBrowser_datos->setObjectName(QString::fromUtf8("textBrowser_datos"));

        gridLayout->addWidget(textBrowser_datos, 4, 0, 1, 3);

        stackedWidget_filtros = new QStackedWidget(tab_filtros);
        stackedWidget_filtros->setObjectName(QString::fromUtf8("stackedWidget_filtros"));
        stackedWidget_filtros->setFrameShape(QFrame::StyledPanel);
        page_voxel = new QWidget();
        page_voxel->setObjectName(QString::fromUtf8("page_voxel"));
        gridLayout_2 = new QGridLayout(page_voxel);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(page_voxel);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        doubleSpinBox_voxel_x = new QDoubleSpinBox(page_voxel);
        doubleSpinBox_voxel_x->setObjectName(QString::fromUtf8("doubleSpinBox_voxel_x"));
        doubleSpinBox_voxel_x->setDecimals(6);
        doubleSpinBox_voxel_x->setSingleStep(0.0001);
        doubleSpinBox_voxel_x->setValue(0.01);

        gridLayout_2->addWidget(doubleSpinBox_voxel_x, 0, 1, 1, 1);

        label_4 = new QLabel(page_voxel);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        doubleSpinBox_voxel_y = new QDoubleSpinBox(page_voxel);
        doubleSpinBox_voxel_y->setObjectName(QString::fromUtf8("doubleSpinBox_voxel_y"));
        doubleSpinBox_voxel_y->setDecimals(6);
        doubleSpinBox_voxel_y->setSingleStep(0.0001);
        doubleSpinBox_voxel_y->setValue(0.01);

        gridLayout_2->addWidget(doubleSpinBox_voxel_y, 1, 1, 1, 1);

        label_5 = new QLabel(page_voxel);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 2, 0, 1, 1);

        doubleSpinBox_voxel_z = new QDoubleSpinBox(page_voxel);
        doubleSpinBox_voxel_z->setObjectName(QString::fromUtf8("doubleSpinBox_voxel_z"));
        doubleSpinBox_voxel_z->setDecimals(6);
        doubleSpinBox_voxel_z->setSingleStep(0.0001);
        doubleSpinBox_voxel_z->setValue(0.01);

        gridLayout_2->addWidget(doubleSpinBox_voxel_z, 2, 1, 1, 1);

        stackedWidget_filtros->addWidget(page_voxel);
        page_morph = new QWidget();
        page_morph->setObjectName(QString::fromUtf8("page_morph"));
        gridLayout_3 = new QGridLayout(page_morph);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(page_morph);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        doubleSpinBox_filtro1_kn = new QDoubleSpinBox(page_morph);
        doubleSpinBox_filtro1_kn->setObjectName(QString::fromUtf8("doubleSpinBox_filtro1_kn"));
        doubleSpinBox_filtro1_kn->setDecimals(0);
        doubleSpinBox_filtro1_kn->setSingleStep(1);
        doubleSpinBox_filtro1_kn->setValue(5);

        gridLayout_3->addWidget(doubleSpinBox_filtro1_kn, 0, 1, 1, 1);

        label_3 = new QLabel(page_morph);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 1);

        doubleSpinBox_filtro1_desv = new QDoubleSpinBox(page_morph);
        doubleSpinBox_filtro1_desv->setObjectName(QString::fromUtf8("doubleSpinBox_filtro1_desv"));
        doubleSpinBox_filtro1_desv->setDecimals(4);
        doubleSpinBox_filtro1_desv->setSingleStep(0.0001);
        doubleSpinBox_filtro1_desv->setValue(0.01);

        gridLayout_3->addWidget(doubleSpinBox_filtro1_desv, 1, 1, 1, 1);

        stackedWidget_filtros->addWidget(page_morph);
        page_filtro_2 = new QWidget();
        page_filtro_2->setObjectName(QString::fromUtf8("page_filtro_2"));
        gridLayout_4 = new QGridLayout(page_filtro_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(page_filtro_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        doubleSpinBox_radio = new QDoubleSpinBox(page_filtro_2);
        doubleSpinBox_radio->setObjectName(QString::fromUtf8("doubleSpinBox_radio"));
        doubleSpinBox_radio->setDecimals(4);
        doubleSpinBox_radio->setSingleStep(0.0001);
        doubleSpinBox_radio->setValue(0.01);

        gridLayout_4->addWidget(doubleSpinBox_radio, 0, 1, 1, 1);

        label_7 = new QLabel(page_filtro_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 1, 0, 1, 1);

        doubleSpinBox_radio_k = new QDoubleSpinBox(page_filtro_2);
        doubleSpinBox_radio_k->setObjectName(QString::fromUtf8("doubleSpinBox_radio_k"));
        doubleSpinBox_radio_k->setDecimals(0);
        doubleSpinBox_radio_k->setSingleStep(1);
        doubleSpinBox_radio_k->setValue(7);

        gridLayout_4->addWidget(doubleSpinBox_radio_k, 1, 1, 1, 1);

        stackedWidget_filtros->addWidget(page_filtro_2);
        page_resampling = new QWidget();
        page_resampling->setObjectName(QString::fromUtf8("page_resampling"));
        gridLayout_8 = new QGridLayout(page_resampling);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_6 = new QLabel(page_resampling);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_8->addWidget(label_6, 0, 0, 1, 1);

        doubleSpinBox_smooth = new QDoubleSpinBox(page_resampling);
        doubleSpinBox_smooth->setObjectName(QString::fromUtf8("doubleSpinBox_smooth"));
        doubleSpinBox_smooth->setDecimals(5);
        doubleSpinBox_smooth->setSingleStep(0.0001);
        doubleSpinBox_smooth->setValue(0.001);

        gridLayout_8->addWidget(doubleSpinBox_smooth, 0, 1, 1, 1);

        stackedWidget_filtros->addWidget(page_resampling);
        page_pass = new QWidget();
        page_pass->setObjectName(QString::fromUtf8("page_pass"));
        gridLayout_10 = new QGridLayout(page_pass);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        comboBox_pass = new QComboBox(page_pass);
        comboBox_pass->setObjectName(QString::fromUtf8("comboBox_pass"));

        gridLayout_10->addWidget(comboBox_pass, 0, 0, 1, 2);

        doubleSpinBox_max_pass = new QDoubleSpinBox(page_pass);
        doubleSpinBox_max_pass->setObjectName(QString::fromUtf8("doubleSpinBox_max_pass"));
        doubleSpinBox_max_pass->setDecimals(3);
        doubleSpinBox_max_pass->setMinimum(-99);
        doubleSpinBox_max_pass->setSingleStep(0.01);

        gridLayout_10->addWidget(doubleSpinBox_max_pass, 2, 1, 1, 1);

        label_12 = new QLabel(page_pass);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_10->addWidget(label_12, 1, 0, 1, 1);

        doubleSpinBox_min_pass = new QDoubleSpinBox(page_pass);
        doubleSpinBox_min_pass->setObjectName(QString::fromUtf8("doubleSpinBox_min_pass"));
        doubleSpinBox_min_pass->setDecimals(3);
        doubleSpinBox_min_pass->setMinimum(-99);
        doubleSpinBox_min_pass->setSingleStep(0.01);

        gridLayout_10->addWidget(doubleSpinBox_min_pass, 1, 1, 1, 1);

        label_13 = new QLabel(page_pass);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_10->addWidget(label_13, 2, 0, 1, 1);

        stackedWidget_filtros->addWidget(page_pass);

        gridLayout->addWidget(stackedWidget_filtros, 6, 0, 1, 3);

        comboBox_filtros = new QComboBox(tab_filtros);
        comboBox_filtros->setObjectName(QString::fromUtf8("comboBox_filtros"));

        gridLayout->addWidget(comboBox_filtros, 5, 0, 1, 3);

        pushButton_deshacer_filtro = new QPushButton(tab_filtros);
        pushButton_deshacer_filtro->setObjectName(QString::fromUtf8("pushButton_deshacer_filtro"));

        gridLayout->addWidget(pushButton_deshacer_filtro, 1, 2, 1, 1);

        pushButton = new QPushButton(tab_filtros);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        pushButton_funcion_1 = new QPushButton(tab_filtros);
        pushButton_funcion_1->setObjectName(QString::fromUtf8("pushButton_funcion_1"));

        gridLayout->addWidget(pushButton_funcion_1, 2, 2, 1, 1);

        pushButton_aceptar_filtro = new QPushButton(tab_filtros);
        pushButton_aceptar_filtro->setObjectName(QString::fromUtf8("pushButton_aceptar_filtro"));

        gridLayout->addWidget(pushButton_aceptar_filtro, 1, 0, 1, 1);

        pushButton_filter = new QPushButton(tab_filtros);
        pushButton_filter->setObjectName(QString::fromUtf8("pushButton_filter"));

        gridLayout->addWidget(pushButton_filter, 2, 0, 1, 1);

        tabWidget->addTab(tab_filtros, QString());
        tab_fit = new QWidget();
        tab_fit->setObjectName(QString::fromUtf8("tab_fit"));
        gridLayout_5 = new QGridLayout(tab_fit);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        pushButton_centra = new QPushButton(tab_fit);
        pushButton_centra->setObjectName(QString::fromUtf8("pushButton_centra"));

        gridLayout_5->addWidget(pushButton_centra, 4, 2, 1, 1);

        pushButton_recorta_plano = new QPushButton(tab_fit);
        pushButton_recorta_plano->setObjectName(QString::fromUtf8("pushButton_recorta_plano"));

        gridLayout_5->addWidget(pushButton_recorta_plano, 3, 0, 1, 2);

        pushButton_reorienta = new QPushButton(tab_fit);
        pushButton_reorienta->setObjectName(QString::fromUtf8("pushButton_reorienta"));

        gridLayout_5->addWidget(pushButton_reorienta, 3, 2, 1, 1);

        pushButton_deshacer_plano = new QPushButton(tab_fit);
        pushButton_deshacer_plano->setObjectName(QString::fromUtf8("pushButton_deshacer_plano"));

        gridLayout_5->addWidget(pushButton_deshacer_plano, 0, 2, 1, 1);

        pushButton_distances = new QPushButton(tab_fit);
        pushButton_distances->setObjectName(QString::fromUtf8("pushButton_distances"));

        gridLayout_5->addWidget(pushButton_distances, 2, 2, 1, 1);

        pushButton_funcion_2 = new QPushButton(tab_fit);
        pushButton_funcion_2->setObjectName(QString::fromUtf8("pushButton_funcion_2"));

        gridLayout_5->addWidget(pushButton_funcion_2, 2, 0, 1, 2);

        label_14 = new QLabel(tab_fit);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_5->addWidget(label_14, 5, 0, 1, 2);

        pushButton_aceptar_fitting = new QPushButton(tab_fit);
        pushButton_aceptar_fitting->setObjectName(QString::fromUtf8("pushButton_aceptar_fitting"));

        gridLayout_5->addWidget(pushButton_aceptar_fitting, 0, 0, 1, 2);

        doubleSpinBox_ransac_dist = new QDoubleSpinBox(tab_fit);
        doubleSpinBox_ransac_dist->setObjectName(QString::fromUtf8("doubleSpinBox_ransac_dist"));
        doubleSpinBox_ransac_dist->setDecimals(5);
        doubleSpinBox_ransac_dist->setSingleStep(0.0001);
        doubleSpinBox_ransac_dist->setValue(0.001);

        gridLayout_5->addWidget(doubleSpinBox_ransac_dist, 5, 2, 1, 1);

        textBrowser_datos_2 = new QTextBrowser(tab_fit);
        textBrowser_datos_2->setObjectName(QString::fromUtf8("textBrowser_datos_2"));

        gridLayout_5->addWidget(textBrowser_datos_2, 6, 0, 1, 3);

        checkBox_puntos_sup = new QCheckBox(tab_fit);
        checkBox_puntos_sup->setObjectName(QString::fromUtf8("checkBox_puntos_sup"));
        checkBox_puntos_sup->setChecked(true);
        checkBox_puntos_sup->setTristate(false);

        gridLayout_5->addWidget(checkBox_puntos_sup, 4, 0, 1, 2);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        doubleSpinBox_angle = new QDoubleSpinBox(tab_fit);
        doubleSpinBox_angle->setObjectName(QString::fromUtf8("doubleSpinBox_angle"));
        doubleSpinBox_angle->setDecimals(5);
        doubleSpinBox_angle->setMinimum(-10);
        doubleSpinBox_angle->setMaximum(10);
        doubleSpinBox_angle->setSingleStep(0.1);

        gridLayout_12->addWidget(doubleSpinBox_angle, 1, 4, 1, 1);

        label_15 = new QLabel(tab_fit);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_12->addWidget(label_15, 0, 1, 1, 1);

        doubleSpinBox_2dx = new QDoubleSpinBox(tab_fit);
        doubleSpinBox_2dx->setObjectName(QString::fromUtf8("doubleSpinBox_2dx"));
        doubleSpinBox_2dx->setMinimum(-500);
        doubleSpinBox_2dx->setMaximum(5000);

        gridLayout_12->addWidget(doubleSpinBox_2dx, 0, 2, 1, 1);

        doubleSpinBox_2dy = new QDoubleSpinBox(tab_fit);
        doubleSpinBox_2dy->setObjectName(QString::fromUtf8("doubleSpinBox_2dy"));
        doubleSpinBox_2dy->setMinimum(-500);
        doubleSpinBox_2dy->setMaximum(5000);

        gridLayout_12->addWidget(doubleSpinBox_2dy, 0, 4, 1, 1);

        pushButton_2d_place = new QPushButton(tab_fit);
        pushButton_2d_place->setObjectName(QString::fromUtf8("pushButton_2d_place"));

        gridLayout_12->addWidget(pushButton_2d_place, 0, 0, 2, 1);

        label_16 = new QLabel(tab_fit);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_12->addWidget(label_16, 0, 3, 1, 1);

        label_17 = new QLabel(tab_fit);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_12->addWidget(label_17, 1, 2, 1, 2);


        gridLayout_5->addLayout(gridLayout_12, 7, 0, 1, 3);

        tabWidget->addTab(tab_fit, QString());
        tab_projections = new QWidget();
        tab_projections->setObjectName(QString::fromUtf8("tab_projections"));
        gridLayout_11 = new QGridLayout(tab_projections);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        pushButton_proj_points = new QPushButton(tab_projections);
        pushButton_proj_points->setObjectName(QString::fromUtf8("pushButton_proj_points"));

        gridLayout_11->addWidget(pushButton_proj_points, 0, 0, 1, 1);

        pushButton_save_projections = new QPushButton(tab_projections);
        pushButton_save_projections->setObjectName(QString::fromUtf8("pushButton_save_projections"));

        gridLayout_11->addWidget(pushButton_save_projections, 0, 1, 1, 1);

        textBrowser_projection = new QTextBrowser(tab_projections);
        textBrowser_projection->setObjectName(QString::fromUtf8("textBrowser_projection"));

        gridLayout_11->addWidget(textBrowser_projection, 2, 0, 1, 2);

        tabWidget->addTab(tab_projections, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        doubleSpinBox_cloud_size = new QDoubleSpinBox(tab);
        doubleSpinBox_cloud_size->setObjectName(QString::fromUtf8("doubleSpinBox_cloud_size"));
        doubleSpinBox_cloud_size->setDecimals(1);
        doubleSpinBox_cloud_size->setSingleStep(0.1);
        doubleSpinBox_cloud_size->setValue(1);

        gridLayout_6->addWidget(doubleSpinBox_cloud_size, 1, 1, 1, 1);

        doubleSpinBox_mod_size = new QDoubleSpinBox(tab);
        doubleSpinBox_mod_size->setObjectName(QString::fromUtf8("doubleSpinBox_mod_size"));
        doubleSpinBox_mod_size->setDecimals(1);
        doubleSpinBox_mod_size->setSingleStep(0.1);
        doubleSpinBox_mod_size->setValue(1);

        gridLayout_6->addWidget(doubleSpinBox_mod_size, 2, 1, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_6->addWidget(label_11, 3, 0, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_6->addWidget(label_9, 1, 0, 1, 1);

        doubleSpinBox_sel_size = new QDoubleSpinBox(tab);
        doubleSpinBox_sel_size->setObjectName(QString::fromUtf8("doubleSpinBox_sel_size"));
        doubleSpinBox_sel_size->setDecimals(1);
        doubleSpinBox_sel_size->setSingleStep(0.1);
        doubleSpinBox_sel_size->setValue(1);

        gridLayout_6->addWidget(doubleSpinBox_sel_size, 3, 1, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_6->addWidget(label_10, 2, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_7->addWidget(tabWidget, 1, 0, 1, 1);

        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy2.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy2);
        splitter->setOrientation(Qt::Horizontal);
        pushButton_random_2 = new QPushButton(splitter);
        pushButton_random_2->setObjectName(QString::fromUtf8("pushButton_random_2"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_random_2->sizePolicy().hasHeightForWidth());
        pushButton_random_2->setSizePolicy(sizePolicy3);
        splitter->addWidget(pushButton_random_2);
        pushButton_gardar = new QPushButton(splitter);
        pushButton_gardar->setObjectName(QString::fromUtf8("pushButton_gardar"));
        sizePolicy3.setHeightForWidth(pushButton_gardar->sizePolicy().hasHeightForWidth());
        pushButton_gardar->setSizePolicy(sizePolicy3);
        splitter->addWidget(pushButton_gardar);

        gridLayout_7->addWidget(splitter, 0, 0, 1, 1);

        PCLViewer->setCentralWidget(centralwidget);

        retranslateUi(PCLViewer);
        QObject::connect(comboBox_filtros, SIGNAL(currentIndexChanged(int)), stackedWidget_filtros, SLOT(setCurrentIndex(int)));

        tabWidget->setCurrentIndex(0);
        stackedWidget_filtros->setCurrentIndex(0);
        comboBox_filtros->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PCLViewer);
    } // setupUi

    void retranslateUi(QMainWindow *PCLViewer)
    {
        PCLViewer->setWindowTitle(QApplication::translate("PCLViewer", "PCLViewer", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PCLViewer", "Size X", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PCLViewer", "Size Y", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PCLViewer", "Size Z", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PCLViewer", "K numero neighbors", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PCLViewer", "Desviaci\303\263n t\303\255pica", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PCLViewer", "Radio", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PCLViewer", "Numero K", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PCLViewer", "Search Radius", 0, QApplication::UnicodeUTF8));
        comboBox_pass->clear();
        comboBox_pass->insertItems(0, QStringList()
         << QApplication::translate("PCLViewer", "X filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PCLViewer", "Y filter", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PCLViewer", "Z filter", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("PCLViewer", "M\303\255nimo:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("PCLViewer", "M\303\241ximo:", 0, QApplication::UnicodeUTF8));
        comboBox_filtros->clear();
        comboBox_filtros->insertItems(0, QStringList()
         << QApplication::translate("PCLViewer", "Voxel Grid", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PCLViewer", "Filtro estad\303\255stico", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PCLViewer", "Filtro radios", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PCLViewer", "Resampling", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PCLViewer", "Pass trough", 0, QApplication::UnicodeUTF8)
        );
        pushButton_deshacer_filtro->setText(QApplication::translate("PCLViewer", "Deshacer", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("PCLViewer", "Datos nube", 0, QApplication::UnicodeUTF8));
        pushButton_funcion_1->setText(QApplication::translate("PCLViewer", "Aplicar", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar_filtro->setText(QApplication::translate("PCLViewer", "Aceptar", 0, QApplication::UnicodeUTF8));
        pushButton_filter->setText(QApplication::translate("PCLViewer", "Autofiltro", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_filtros), QApplication::translate("PCLViewer", "Filtros", 0, QApplication::UnicodeUTF8));
        pushButton_centra->setText(QApplication::translate("PCLViewer", "Centra punto", 0, QApplication::UnicodeUTF8));
        pushButton_recorta_plano->setText(QApplication::translate("PCLViewer", "Recorta", 0, QApplication::UnicodeUTF8));
        pushButton_reorienta->setText(QApplication::translate("PCLViewer", "Reorienta", 0, QApplication::UnicodeUTF8));
        pushButton_deshacer_plano->setText(QApplication::translate("PCLViewer", "Deshacer", 0, QApplication::UnicodeUTF8));
        pushButton_distances->setText(QApplication::translate("PCLViewer", "Distancia al plano", 0, QApplication::UnicodeUTF8));
        pushButton_funcion_2->setText(QApplication::translate("PCLViewer", "Ajusta plano", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("PCLViewer", "Distance threshold:", 0, QApplication::UnicodeUTF8));
        pushButton_aceptar_fitting->setText(QApplication::translate("PCLViewer", "Acepta", 0, QApplication::UnicodeUTF8));
        checkBox_puntos_sup->setText(QApplication::translate("PCLViewer", "Superiores", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("PCLViewer", "X:", 0, QApplication::UnicodeUTF8));
        pushButton_2d_place->setText(QApplication::translate("PCLViewer", "Situa 2d", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("PCLViewer", "Y:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("PCLViewer", "Angulo:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_fit), QApplication::translate("PCLViewer", "Fitting", 0, QApplication::UnicodeUTF8));
        pushButton_proj_points->setText(QApplication::translate("PCLViewer", "Project points", 0, QApplication::UnicodeUTF8));
        pushButton_save_projections->setText(QApplication::translate("PCLViewer", "Save Proj", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_projections), QApplication::translate("PCLViewer", "Pojection", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("PCLViewer", "Sel point cloud", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PCLViewer", "Point cloud size", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("PCLViewer", "Mod point cloud", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PCLViewer", "Otros", 0, QApplication::UnicodeUTF8));
        pushButton_random_2->setText(QApplication::translate("PCLViewer", "Carga nube", 0, QApplication::UnicodeUTF8));
        pushButton_gardar->setText(QApplication::translate("PCLViewer", "Garda nube", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PCLViewer: public Ui_PCLViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PCLVIEWER_H