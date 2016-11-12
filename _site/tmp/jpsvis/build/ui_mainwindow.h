/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *actionExit;
    QAction *actionReset;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionPause_Resume;
    QAction *actionAbout;
    QAction *actionTutorial;
    QAction *actionNetwork_settings;
    QAction *actionOnline;
    QAction *actionOffline;
    QAction *actionFullscreen;
    QAction *actionRecord;
    QAction *actionOpen;
    QAction *action2_D;
    QAction *actionReset_All;
    QAction *actionAdd_Trajectories_File;
    QAction *actionClear_Trajectories_Files;
    QAction *actionLoad_Geometry;
    QAction *actionLoad_File;
    QAction *actionClear_Geometry;
    QAction *actionFirst_Group;
    QAction *actionSecond_Group;
    QAction *actionThird_Group;
    QAction *actionShow_Legend;
    QAction *action3_D;
    QAction *actionShow_Agents;
    QAction *actionShow_Trajectories;
    QAction *actionShow_Geometry;
    QAction *actionDEBUG_MODE;
    QAction *actionShow_Captions;
    QAction *actionBackground_Color;
    QAction *actionFrames_Navigation;
    QAction *actionShow_Axis;
    QAction *actionCameraViewTop;
    QAction *actionCameraViewSide;
    QAction *actionCameraViewFront;
    QAction *actionPedestrian_Shape;
    QAction *actionSnapshot;
    QAction *actionRecord_PNG_sequences;
    QAction *actionRender_PNG_to_AVI;
    QAction *actionCameraViewAgent;
    QAction *actionCaptionAuto;
    QAction *actionCaptionCustom;
    QAction *actionWalls_Color;
    QAction *actionExits_Color;
    QAction *actionShow_Onscreen_Infos;
    QAction *actionShow_Exits;
    QAction *actionShow_Walls;
    QAction *actionShow_Wall_Caption;
    QAction *actionShow_Room_Caption;
    QAction *actionShow_Door_Caption;
    QAction *actionShow_Geometry_Captions;
    QAction *actionShow_Navigation_Lines;
    QAction *actionNavigation_Lines_Color;
    QAction *actionFloor_Color;
    QAction *actionShow_Floor;
    QAction *actionRemember_Settings;
    QAction *actionShowGeometry_Structure;
    QAction *actionShow_Obstacles;
    QAction *actionObstacles_Color;
    QAction *actionShow_Gradient_Field;
    QWidget *centralwidget;
    QGroupBox *parameters;
    QVBoxLayout *verticalLayout_2;
    QLabel *speedSliderLabel;
    QSlider *speedSettingSlider;
    QSpacerItem *verticalSpacer;
    QLabel *framePerSecondSliderLabel;
    QSlider *contrastSettingSlider;
    QGroupBox *Controls;
    QPushButton *BtStart;
    QPushButton *BtStop;
    QPushButton *BtRecord;
    QPushButton *BtReset;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *frameSliderLabel;
    QSlider *framesIndicatorSlider;
    QLCDNumber *lcdRunningTime;
    QLabel *label;
    QPushButton *BtNextFrame;
    QPushButton *BtPreviousFrame;
    QPushButton *BtFullscreen;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuApplication;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QMenu *menuView;
    QMenu *menuCamera_View;
    QMenu *menuTools;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QString::fromUtf8("mainwindow"));
        mainwindow->resize(450, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainwindow->sizePolicy().hasHeightForWidth());
        mainwindow->setSizePolicy(sizePolicy);
        mainwindow->setMinimumSize(QSize(450, 400));
        mainwindow->setMaximumSize(QSize(450, 400));
        mainwindow->setMouseTracking(true);
        mainwindow->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/iconsS/icons/JPSvis.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainwindow->setWindowIcon(icon);
        actionExit = new QAction(mainwindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionReset = new QAction(mainwindow);
        actionReset->setObjectName(QString::fromUtf8("actionReset"));
        actionReset->setEnabled(false);
        actionStart = new QAction(mainwindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart->setEnabled(false);
        actionStop = new QAction(mainwindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionStop->setEnabled(false);
        actionPause_Resume = new QAction(mainwindow);
        actionPause_Resume->setObjectName(QString::fromUtf8("actionPause_Resume"));
        actionPause_Resume->setEnabled(false);
        actionAbout = new QAction(mainwindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionTutorial = new QAction(mainwindow);
        actionTutorial->setObjectName(QString::fromUtf8("actionTutorial"));
        actionTutorial->setEnabled(false);
        actionTutorial->setVisible(false);
        actionNetwork_settings = new QAction(mainwindow);
        actionNetwork_settings->setObjectName(QString::fromUtf8("actionNetwork_settings"));
        actionNetwork_settings->setEnabled(true);
        actionOnline = new QAction(mainwindow);
        actionOnline->setObjectName(QString::fromUtf8("actionOnline"));
        actionOnline->setCheckable(true);
        actionOnline->setChecked(false);
        actionOnline->setEnabled(true);
        actionOffline = new QAction(mainwindow);
        actionOffline->setObjectName(QString::fromUtf8("actionOffline"));
        actionOffline->setCheckable(true);
        actionOffline->setChecked(true);
        actionOffline->setEnabled(true);
        actionFullscreen = new QAction(mainwindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionFullscreen->setEnabled(false);
        actionFullscreen->setVisible(false);
        actionRecord = new QAction(mainwindow);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        actionRecord->setEnabled(false);
        actionOpen = new QAction(mainwindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setEnabled(false);
        actionOpen->setVisible(false);
        action2_D = new QAction(mainwindow);
        action2_D->setObjectName(QString::fromUtf8("action2_D"));
        action2_D->setCheckable(true);
        action2_D->setEnabled(true);
        actionReset_All = new QAction(mainwindow);
        actionReset_All->setObjectName(QString::fromUtf8("actionReset_All"));
        actionReset_All->setEnabled(false);
        actionAdd_Trajectories_File = new QAction(mainwindow);
        actionAdd_Trajectories_File->setObjectName(QString::fromUtf8("actionAdd_Trajectories_File"));
        actionAdd_Trajectories_File->setEnabled(false);
        actionAdd_Trajectories_File->setVisible(false);
        actionClear_Trajectories_Files = new QAction(mainwindow);
        actionClear_Trajectories_Files->setObjectName(QString::fromUtf8("actionClear_Trajectories_Files"));
        actionClear_Trajectories_Files->setEnabled(false);
        actionClear_Trajectories_Files->setVisible(false);
        actionLoad_Geometry = new QAction(mainwindow);
        actionLoad_Geometry->setObjectName(QString::fromUtf8("actionLoad_Geometry"));
        actionLoad_Geometry->setVisible(false);
        actionLoad_File = new QAction(mainwindow);
        actionLoad_File->setObjectName(QString::fromUtf8("actionLoad_File"));
        actionLoad_File->setEnabled(true);
        actionClear_Geometry = new QAction(mainwindow);
        actionClear_Geometry->setObjectName(QString::fromUtf8("actionClear_Geometry"));
        actionClear_Geometry->setEnabled(false);
        actionClear_Geometry->setVisible(false);
        actionFirst_Group = new QAction(mainwindow);
        actionFirst_Group->setObjectName(QString::fromUtf8("actionFirst_Group"));
        actionFirst_Group->setCheckable(true);
        actionFirst_Group->setChecked(true);
        actionFirst_Group->setEnabled(false);
        actionFirst_Group->setVisible(false);
        actionSecond_Group = new QAction(mainwindow);
        actionSecond_Group->setObjectName(QString::fromUtf8("actionSecond_Group"));
        actionSecond_Group->setCheckable(true);
        actionSecond_Group->setEnabled(false);
        actionSecond_Group->setVisible(true);
        actionThird_Group = new QAction(mainwindow);
        actionThird_Group->setObjectName(QString::fromUtf8("actionThird_Group"));
        actionThird_Group->setCheckable(true);
        actionThird_Group->setEnabled(false);
        actionThird_Group->setVisible(true);
        actionShow_Legend = new QAction(mainwindow);
        actionShow_Legend->setObjectName(QString::fromUtf8("actionShow_Legend"));
        actionShow_Legend->setCheckable(true);
        actionShow_Legend->setEnabled(false);
        actionShow_Legend->setVisible(false);
        action3_D = new QAction(mainwindow);
        action3_D->setObjectName(QString::fromUtf8("action3_D"));
        action3_D->setCheckable(true);
        action3_D->setChecked(true);
        action3_D->setEnabled(true);
        actionShow_Agents = new QAction(mainwindow);
        actionShow_Agents->setObjectName(QString::fromUtf8("actionShow_Agents"));
        actionShow_Agents->setCheckable(true);
        actionShow_Agents->setChecked(true);
        actionShow_Agents->setEnabled(true);
        actionShow_Trajectories = new QAction(mainwindow);
        actionShow_Trajectories->setObjectName(QString::fromUtf8("actionShow_Trajectories"));
        actionShow_Trajectories->setCheckable(true);
        actionShow_Trajectories->setEnabled(true);
        actionShow_Geometry = new QAction(mainwindow);
        actionShow_Geometry->setObjectName(QString::fromUtf8("actionShow_Geometry"));
        actionShow_Geometry->setCheckable(true);
        actionShow_Geometry->setChecked(true);
        actionShow_Geometry->setEnabled(true);
        actionDEBUG_MODE = new QAction(mainwindow);
        actionDEBUG_MODE->setObjectName(QString::fromUtf8("actionDEBUG_MODE"));
        actionDEBUG_MODE->setEnabled(false);
        actionShow_Captions = new QAction(mainwindow);
        actionShow_Captions->setObjectName(QString::fromUtf8("actionShow_Captions"));
        actionShow_Captions->setCheckable(true);
        actionShow_Captions->setChecked(false);
        actionBackground_Color = new QAction(mainwindow);
        actionBackground_Color->setObjectName(QString::fromUtf8("actionBackground_Color"));
        actionFrames_Navigation = new QAction(mainwindow);
        actionFrames_Navigation->setObjectName(QString::fromUtf8("actionFrames_Navigation"));
        actionFrames_Navigation->setCheckable(true);
        actionShow_Axis = new QAction(mainwindow);
        actionShow_Axis->setObjectName(QString::fromUtf8("actionShow_Axis"));
        actionShow_Axis->setCheckable(true);
        actionShow_Axis->setEnabled(false);
        actionShow_Axis->setVisible(false);
        actionCameraViewTop = new QAction(mainwindow);
        actionCameraViewTop->setObjectName(QString::fromUtf8("actionCameraViewTop"));
        actionCameraViewTop->setCheckable(false);
        actionCameraViewTop->setChecked(false);
        actionCameraViewSide = new QAction(mainwindow);
        actionCameraViewSide->setObjectName(QString::fromUtf8("actionCameraViewSide"));
        actionCameraViewSide->setCheckable(false);
        actionCameraViewSide->setEnabled(false);
        actionCameraViewSide->setVisible(false);
        actionCameraViewFront = new QAction(mainwindow);
        actionCameraViewFront->setObjectName(QString::fromUtf8("actionCameraViewFront"));
        actionCameraViewFront->setCheckable(false);
        actionCameraViewFront->setEnabled(false);
        actionCameraViewFront->setVisible(false);
        actionPedestrian_Shape = new QAction(mainwindow);
        actionPedestrian_Shape->setObjectName(QString::fromUtf8("actionPedestrian_Shape"));
        actionPedestrian_Shape->setVisible(false);
        actionSnapshot = new QAction(mainwindow);
        actionSnapshot->setObjectName(QString::fromUtf8("actionSnapshot"));
        actionRecord_PNG_sequences = new QAction(mainwindow);
        actionRecord_PNG_sequences->setObjectName(QString::fromUtf8("actionRecord_PNG_sequences"));
        actionRecord_PNG_sequences->setEnabled(true);
        actionRender_PNG_to_AVI = new QAction(mainwindow);
        actionRender_PNG_to_AVI->setObjectName(QString::fromUtf8("actionRender_PNG_to_AVI"));
        actionRender_PNG_to_AVI->setEnabled(false);
        actionRender_PNG_to_AVI->setVisible(false);
        actionCameraViewAgent = new QAction(mainwindow);
        actionCameraViewAgent->setObjectName(QString::fromUtf8("actionCameraViewAgent"));
        actionCameraViewAgent->setEnabled(false);
        actionCaptionAuto = new QAction(mainwindow);
        actionCaptionAuto->setObjectName(QString::fromUtf8("actionCaptionAuto"));
        actionCaptionAuto->setCheckable(false);
        actionCaptionAuto->setChecked(false);
        actionCaptionAuto->setVisible(false);
        actionCaptionCustom = new QAction(mainwindow);
        actionCaptionCustom->setObjectName(QString::fromUtf8("actionCaptionCustom"));
        actionCaptionCustom->setVisible(false);
        actionWalls_Color = new QAction(mainwindow);
        actionWalls_Color->setObjectName(QString::fromUtf8("actionWalls_Color"));
        actionExits_Color = new QAction(mainwindow);
        actionExits_Color->setObjectName(QString::fromUtf8("actionExits_Color"));
        actionShow_Onscreen_Infos = new QAction(mainwindow);
        actionShow_Onscreen_Infos->setObjectName(QString::fromUtf8("actionShow_Onscreen_Infos"));
        actionShow_Onscreen_Infos->setCheckable(true);
        actionShow_Onscreen_Infos->setChecked(true);
        actionShow_Exits = new QAction(mainwindow);
        actionShow_Exits->setObjectName(QString::fromUtf8("actionShow_Exits"));
        actionShow_Exits->setCheckable(true);
        actionShow_Exits->setChecked(true);
        actionShow_Walls = new QAction(mainwindow);
        actionShow_Walls->setObjectName(QString::fromUtf8("actionShow_Walls"));
        actionShow_Walls->setCheckable(true);
        actionShow_Walls->setChecked(true);
        actionShow_Wall_Caption = new QAction(mainwindow);
        actionShow_Wall_Caption->setObjectName(QString::fromUtf8("actionShow_Wall_Caption"));
        actionShow_Wall_Caption->setEnabled(false);
        actionShow_Wall_Caption->setVisible(false);
        actionShow_Room_Caption = new QAction(mainwindow);
        actionShow_Room_Caption->setObjectName(QString::fromUtf8("actionShow_Room_Caption"));
        actionShow_Room_Caption->setVisible(false);
        actionShow_Door_Caption = new QAction(mainwindow);
        actionShow_Door_Caption->setObjectName(QString::fromUtf8("actionShow_Door_Caption"));
        actionShow_Door_Caption->setVisible(false);
        actionShow_Geometry_Captions = new QAction(mainwindow);
        actionShow_Geometry_Captions->setObjectName(QString::fromUtf8("actionShow_Geometry_Captions"));
        actionShow_Geometry_Captions->setCheckable(true);
        actionShow_Geometry_Captions->setChecked(true);
        actionShow_Navigation_Lines = new QAction(mainwindow);
        actionShow_Navigation_Lines->setObjectName(QString::fromUtf8("actionShow_Navigation_Lines"));
        actionShow_Navigation_Lines->setCheckable(true);
        actionShow_Navigation_Lines->setChecked(true);
        actionNavigation_Lines_Color = new QAction(mainwindow);
        actionNavigation_Lines_Color->setObjectName(QString::fromUtf8("actionNavigation_Lines_Color"));
        actionFloor_Color = new QAction(mainwindow);
        actionFloor_Color->setObjectName(QString::fromUtf8("actionFloor_Color"));
        actionShow_Floor = new QAction(mainwindow);
        actionShow_Floor->setObjectName(QString::fromUtf8("actionShow_Floor"));
        actionShow_Floor->setCheckable(true);
        actionShow_Floor->setChecked(true);
        actionRemember_Settings = new QAction(mainwindow);
        actionRemember_Settings->setObjectName(QString::fromUtf8("actionRemember_Settings"));
        actionRemember_Settings->setCheckable(true);
        actionRemember_Settings->setChecked(true);
        actionShowGeometry_Structure = new QAction(mainwindow);
        actionShowGeometry_Structure->setObjectName(QString::fromUtf8("actionShowGeometry_Structure"));
        actionShowGeometry_Structure->setCheckable(true);
        actionShow_Obstacles = new QAction(mainwindow);
        actionShow_Obstacles->setObjectName(QString::fromUtf8("actionShow_Obstacles"));
        actionShow_Obstacles->setCheckable(true);
        actionShow_Obstacles->setChecked(true);
        actionObstacles_Color = new QAction(mainwindow);
        actionObstacles_Color->setObjectName(QString::fromUtf8("actionObstacles_Color"));
        actionShow_Gradient_Field = new QAction(mainwindow);
        actionShow_Gradient_Field->setObjectName(QString::fromUtf8("actionShow_Gradient_Field"));
        actionShow_Gradient_Field->setCheckable(true);
        actionShow_Gradient_Field->setChecked(true);
        centralwidget = new QWidget(mainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setSizeIncrement(QSize(3, 3));
        parameters = new QGroupBox(centralwidget);
        parameters->setObjectName(QString::fromUtf8("parameters"));
        parameters->setEnabled(true);
        parameters->setGeometry(QRect(160, 20, 271, 161));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(parameters->sizePolicy().hasHeightForWidth());
        parameters->setSizePolicy(sizePolicy1);
        parameters->setMouseTracking(false);
        verticalLayout_2 = new QVBoxLayout(parameters);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        speedSliderLabel = new QLabel(parameters);
        speedSliderLabel->setObjectName(QString::fromUtf8("speedSliderLabel"));
        speedSliderLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(speedSliderLabel);

        speedSettingSlider = new QSlider(parameters);
        speedSettingSlider->setObjectName(QString::fromUtf8("speedSettingSlider"));
        speedSettingSlider->setMinimum(-20);
        speedSettingSlider->setMaximum(20);
        speedSettingSlider->setPageStep(1);
        speedSettingSlider->setValue(1);
        speedSettingSlider->setSliderPosition(1);
        speedSettingSlider->setOrientation(Qt::Horizontal);
        speedSettingSlider->setInvertedControls(false);
        speedSettingSlider->setTickPosition(QSlider::TicksBelow);
        speedSettingSlider->setTickInterval(2);

        verticalLayout_2->addWidget(speedSettingSlider);

        verticalSpacer = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        framePerSecondSliderLabel = new QLabel(parameters);
        framePerSecondSliderLabel->setObjectName(QString::fromUtf8("framePerSecondSliderLabel"));
        framePerSecondSliderLabel->setEnabled(true);
        framePerSecondSliderLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(framePerSecondSliderLabel);

        contrastSettingSlider = new QSlider(parameters);
        contrastSettingSlider->setObjectName(QString::fromUtf8("contrastSettingSlider"));
        contrastSettingSlider->setEnabled(false);
        contrastSettingSlider->setStyleSheet(QString::fromUtf8("color: rgb(255, 149, 107);"));
        contrastSettingSlider->setMaximum(10);
        contrastSettingSlider->setPageStep(1);
        contrastSettingSlider->setSliderPosition(0);
        contrastSettingSlider->setOrientation(Qt::Horizontal);
        contrastSettingSlider->setTickPosition(QSlider::TicksBelow);
        contrastSettingSlider->setTickInterval(5);

        verticalLayout_2->addWidget(contrastSettingSlider);

        Controls = new QGroupBox(centralwidget);
        Controls->setObjectName(QString::fromUtf8("Controls"));
        Controls->setEnabled(true);
        Controls->setGeometry(QRect(30, 20, 111, 161));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Controls->sizePolicy().hasHeightForWidth());
        Controls->setSizePolicy(sizePolicy2);
        BtStart = new QPushButton(Controls);
        BtStart->setObjectName(QString::fromUtf8("BtStart"));
        BtStart->setGeometry(QRect(11, 21, 80, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/iconsS/icons/Play1Hot.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtStart->setIcon(icon1);
        BtStart->setIconSize(QSize(20, 20));
        BtStop = new QPushButton(Controls);
        BtStop->setObjectName(QString::fromUtf8("BtStop"));
        BtStop->setEnabled(false);
        BtStop->setGeometry(QRect(11, 55, 80, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/iconsS/icons/Stop1PressedBlue.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtStop->setIcon(icon2);
        BtStop->setIconSize(QSize(20, 20));
        BtRecord = new QPushButton(Controls);
        BtRecord->setObjectName(QString::fromUtf8("BtRecord"));
        BtRecord->setEnabled(false);
        BtRecord->setGeometry(QRect(11, 89, 80, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/iconsS/icons/RecordPressed.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtRecord->setIcon(icon3);
        BtRecord->setIconSize(QSize(20, 20));
        BtReset = new QPushButton(Controls);
        BtReset->setObjectName(QString::fromUtf8("BtReset"));
        BtReset->setGeometry(QRect(11, 123, 80, 30));
        BtReset->setMinimumSize(QSize(0, 23));
        BtReset->setIconSize(QSize(20, 20));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 250, 401, 63));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frameSliderLabel = new QLabel(groupBox);
        frameSliderLabel->setObjectName(QString::fromUtf8("frameSliderLabel"));
        frameSliderLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(frameSliderLabel);


        verticalLayout_3->addLayout(horizontalLayout_3);

        framesIndicatorSlider = new QSlider(groupBox);
        framesIndicatorSlider->setObjectName(QString::fromUtf8("framesIndicatorSlider"));
        framesIndicatorSlider->setEnabled(true);
        framesIndicatorSlider->setMouseTracking(true);
        framesIndicatorSlider->setMaximum(20000);
        framesIndicatorSlider->setPageStep(1);
        framesIndicatorSlider->setTracking(true);
        framesIndicatorSlider->setOrientation(Qt::Horizontal);

        verticalLayout_3->addWidget(framesIndicatorSlider);

        lcdRunningTime = new QLCDNumber(centralwidget);
        lcdRunningTime->setObjectName(QString::fromUtf8("lcdRunningTime"));
        lcdRunningTime->setGeometry(QRect(160, 200, 91, 23));
        QPalette palette;
        QBrush brush(QColor(170, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(118, 116, 108, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lcdRunningTime->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setBold(true);
        font.setWeight(75);
        lcdRunningTime->setFont(font);
        lcdRunningTime->setStyleSheet(QString::fromUtf8("\n"
"border-color: rgb(255, 255, 255);"));
        lcdRunningTime->setSmallDecimalPoint(false);
        lcdRunningTime->setDigitCount(10);
        lcdRunningTime->setSegmentStyle(QLCDNumber::Filled);
        lcdRunningTime->setProperty("intValue", QVariant(0));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 201, 51, 20));
        QFont font1;
        font1.setPointSize(8);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        BtNextFrame = new QPushButton(centralwidget);
        BtNextFrame->setObjectName(QString::fromUtf8("BtNextFrame"));
        BtNextFrame->setGeometry(QRect(350, 190, 81, 23));
        BtNextFrame->setFont(font1);
        BtPreviousFrame = new QPushButton(centralwidget);
        BtPreviousFrame->setObjectName(QString::fromUtf8("BtPreviousFrame"));
        BtPreviousFrame->setGeometry(QRect(350, 220, 81, 23));
        BtPreviousFrame->setFont(font1);
        BtFullscreen = new QPushButton(centralwidget);
        BtFullscreen->setObjectName(QString::fromUtf8("BtFullscreen"));
        BtFullscreen->setEnabled(false);
        BtFullscreen->setGeometry(QRect(40, 200, 80, 30));
        BtFullscreen->setAutoFillBackground(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/iconsS/icons/window_fullscreen-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtFullscreen->setIcon(icon4);
        BtFullscreen->setIconSize(QSize(20, 20));
        mainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuApplication = new QMenu(menubar);
        menuApplication->setObjectName(QString::fromUtf8("menuApplication"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuCamera_View = new QMenu(menuView);
        menuCamera_View->setObjectName(QString::fromUtf8("menuCamera_View"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        mainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setMouseTracking(true);
        statusbar->setLayoutDirection(Qt::RightToLeft);
        mainwindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuApplication->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad_File);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Geometry);
        menuFile->addAction(actionClear_Geometry);
        menuFile->addAction(actionAdd_Trajectories_File);
        menuFile->addAction(actionClear_Trajectories_Files);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuApplication->addSeparator();
        menuApplication->addAction(actionReset);
        menuApplication->addAction(actionStart);
        menuApplication->addAction(actionRecord);
        menuApplication->addAction(actionStop);
        menuApplication->addAction(actionPause_Resume);
        menuApplication->addAction(actionFullscreen);
        menuApplication->addSeparator();
        menuApplication->addAction(actionOnline);
        menuApplication->addAction(actionOffline);
        menuApplication->addSeparator();
        menuApplication->addAction(actionFrames_Navigation);
        menuHelp->addAction(actionTutorial);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addSeparator();
        menuOptions->addAction(actionBackground_Color);
        menuOptions->addAction(actionFloor_Color);
        menuOptions->addAction(actionWalls_Color);
        menuOptions->addAction(actionExits_Color);
        menuOptions->addAction(actionObstacles_Color);
        menuOptions->addAction(actionNavigation_Lines_Color);
        menuOptions->addSeparator();
        menuOptions->addAction(actionPedestrian_Shape);
        menuOptions->addAction(actionNetwork_settings);
        menuOptions->addSeparator();
        menuOptions->addAction(actionRemember_Settings);
        menuView->addAction(action2_D);
        menuView->addAction(action3_D);
        menuView->addAction(menuCamera_View->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionShow_Agents);
        menuView->addAction(actionShow_Captions);
        menuView->addAction(actionShow_Trajectories);
        menuView->addSeparator();
        menuView->addAction(actionShow_Geometry);
        menuView->addAction(actionShow_Floor);
        menuView->addAction(actionShow_Exits);
        menuView->addAction(actionShow_Walls);
        menuView->addAction(actionShow_Legend);
        menuView->addAction(actionShow_Axis);
        menuView->addAction(actionShow_Wall_Caption);
        menuView->addAction(actionShow_Room_Caption);
        menuView->addAction(actionShow_Door_Caption);
        menuView->addAction(actionShow_Obstacles);
        menuView->addAction(actionShow_Navigation_Lines);
        menuView->addAction(actionShow_Gradient_Field);
        menuView->addAction(actionShow_Geometry_Captions);
        menuView->addAction(actionFirst_Group);
        menuView->addSeparator();
        menuView->addAction(actionShow_Onscreen_Infos);
        menuView->addSeparator();
        menuView->addAction(actionShowGeometry_Structure);
        menuCamera_View->addAction(actionCameraViewTop);
        menuCamera_View->addAction(actionCameraViewSide);
        menuCamera_View->addAction(actionCameraViewFront);
        menuCamera_View->addAction(actionCameraViewAgent);
        menuTools->addAction(actionSnapshot);
        menuTools->addSeparator();
        menuTools->addAction(actionRecord_PNG_sequences);
        menuTools->addAction(actionRender_PNG_to_AVI);

        retranslateUi(mainwindow);
        QObject::connect(actionAbout, SIGNAL(triggered()), mainwindow, SLOT(slotHelpAbout()));
        QObject::connect(actionExit, SIGNAL(triggered()), mainwindow, SLOT(slotExit()));
        QObject::connect(BtStart, SIGNAL(clicked()), mainwindow, SLOT(slotStartPlaying()));
        QObject::connect(BtFullscreen, SIGNAL(toggled(bool)), mainwindow, SLOT(slotFullScreen(bool)));
        QObject::connect(BtRecord, SIGNAL(clicked()), mainwindow, SLOT(slotRecord()));
        QObject::connect(BtReset, SIGNAL(clicked()), mainwindow, SLOT(slotReset()));
        QObject::connect(BtStop, SIGNAL(clicked()), mainwindow, SLOT(slotStopPlaying()));
        QObject::connect(actionNetwork_settings, SIGNAL(triggered()), mainwindow, SLOT(slotNetworkSettings()));
        QObject::connect(actionOnline, SIGNAL(toggled(bool)), mainwindow, SLOT(slotSetOnlineMode(bool)));
        QObject::connect(actionOffline, SIGNAL(toggled(bool)), mainwindow, SLOT(slotSetOfflineMode(bool)));
        QObject::connect(actionLoad_File, SIGNAL(triggered()), mainwindow, SLOT(slotLoadFile()));
        QObject::connect(actionFirst_Group, SIGNAL(toggled(bool)), mainwindow, SLOT(slotToggleFirstPedestrianGroup()));
        QObject::connect(actionAdd_Trajectories_File, SIGNAL(triggered()), mainwindow, SLOT(slotAddDataSet()));
        QObject::connect(actionClear_Trajectories_Files, SIGNAL(triggered()), mainwindow, SLOT(slotClearAllDataset()));
        QObject::connect(actionShow_Trajectories, SIGNAL(triggered()), mainwindow, SLOT(slotShowTrajectoryOnly()));
        QObject::connect(actionShow_Agents, SIGNAL(triggered()), mainwindow, SLOT(slotShowPedestrianOnly()));
        QObject::connect(contrastSettingSlider, SIGNAL(valueChanged(int)), mainwindow, SLOT(slotUpdateContrastSlider(int)));
        QObject::connect(speedSettingSlider, SIGNAL(valueChanged(int)), mainwindow, SLOT(slotUpdateSpeedSlider(int)));
        QObject::connect(actionShow_Geometry, SIGNAL(changed()), mainwindow, SLOT(slotShowGeometry()));
        QObject::connect(action2_D, SIGNAL(changed()), mainwindow, SLOT(slotToogle2D()));
        QObject::connect(action3_D, SIGNAL(changed()), mainwindow, SLOT(slotToogle3D()));
        QObject::connect(actionShow_Legend, SIGNAL(changed()), mainwindow, SLOT(slotToogleShowLegend()));
        QObject::connect(framesIndicatorSlider, SIGNAL(sliderMoved(int)), mainwindow, SLOT(slotUpdateFrameSlider(int)));
        QObject::connect(framesIndicatorSlider, SIGNAL(sliderPressed()), mainwindow, SLOT(slotFrameSliderPressed()));
        QObject::connect(framesIndicatorSlider, SIGNAL(sliderReleased()), mainwindow, SLOT(slotFrameSliderReleased()));
        QObject::connect(actionFrames_Navigation, SIGNAL(changed()), mainwindow, SLOT(slotFramesByFramesNavigation()));
        QObject::connect(BtNextFrame, SIGNAL(clicked()), mainwindow, SLOT(slotNextFrame()));
        QObject::connect(BtPreviousFrame, SIGNAL(clicked()), mainwindow, SLOT(slotPreviousFrame()));
        QObject::connect(actionShow_Captions, SIGNAL(changed()), mainwindow, SLOT(slotShowPedestrianCaption()));
        QObject::connect(actionShow_Axis, SIGNAL(changed()), mainwindow, SLOT(slotToogleShowAxis()));
        QObject::connect(actionCameraViewFront, SIGNAL(triggered(bool)), mainwindow, SLOT(slotSetCameraPerspectiveToFront()));
        QObject::connect(actionCameraViewSide, SIGNAL(triggered(bool)), mainwindow, SLOT(slotSetCameraPerspectiveToSide()));
        QObject::connect(actionCameraViewTop, SIGNAL(triggered(bool)), mainwindow, SLOT(slotSetCameraPerspectiveToTop()));
        QObject::connect(actionBackground_Color, SIGNAL(triggered()), mainwindow, SLOT(slotChangeBackgroundColor()));
        QObject::connect(actionPedestrian_Shape, SIGNAL(triggered()), mainwindow, SLOT(slotChangePedestrianShape()));
        QObject::connect(actionClear_Geometry, SIGNAL(triggered()), mainwindow, SLOT(slotClearGeometry()));
        QObject::connect(actionSnapshot, SIGNAL(triggered()), mainwindow, SLOT(slotTakeScreenShot()));
        QObject::connect(actionRecord_PNG_sequences, SIGNAL(triggered()), mainwindow, SLOT(slotRecordPNGsequence()));
        QObject::connect(actionRender_PNG_to_AVI, SIGNAL(triggered()), mainwindow, SLOT(slotRenderPNG2AVI()));
        QObject::connect(actionCameraViewAgent, SIGNAL(triggered()), mainwindow, SLOT(slotSetCameraPerspectiveToVirtualAgent()));
        QObject::connect(actionCaptionAuto, SIGNAL(triggered()), mainwindow, SLOT(slotCaptionColorAuto()));
        QObject::connect(actionCaptionCustom, SIGNAL(triggered()), mainwindow, SLOT(slotCaptionColorCustom()));
        QObject::connect(actionWalls_Color, SIGNAL(triggered()), mainwindow, SLOT(slotChangeWallsColor()));
        QObject::connect(actionExits_Color, SIGNAL(triggered()), mainwindow, SLOT(slotChangeExitsColor()));
        QObject::connect(actionShow_Onscreen_Infos, SIGNAL(triggered()), mainwindow, SLOT(slotShowOnScreenInfos()));
        QObject::connect(actionShow_Exits, SIGNAL(triggered()), mainwindow, SLOT(slotShowHideExits()));
        QObject::connect(actionShow_Walls, SIGNAL(triggered()), mainwindow, SLOT(slotShowHideWalls()));
        QObject::connect(actionShow_Geometry_Captions, SIGNAL(triggered()), mainwindow, SLOT(slotShowHideGeometryCaptions()));
        QObject::connect(actionNavigation_Lines_Color, SIGNAL(triggered()), mainwindow, SLOT(slotChangeNavLinesColor()));
        QObject::connect(actionShow_Navigation_Lines, SIGNAL(changed()), mainwindow, SLOT(slotShowHideNavLines()));
        QObject::connect(actionShow_Floor, SIGNAL(changed()), mainwindow, SLOT(slotShowHideFloor()));
        QObject::connect(actionFloor_Color, SIGNAL(triggered()), mainwindow, SLOT(slotChangeFloorColor()));
        QObject::connect(actionShowGeometry_Structure, SIGNAL(triggered()), mainwindow, SLOT(slotShowGeometryStructure()));
        QObject::connect(actionShow_Obstacles, SIGNAL(triggered()), mainwindow, SLOT(slotShowHideObstacles()));
        QObject::connect(actionObstacles_Color, SIGNAL(triggered()), mainwindow, SLOT(slotChangeObstacleColor()));
        QObject::connect(actionShow_Gradient_Field, SIGNAL(triggered()), mainwindow, SLOT(slotShowHideGradientField()));

        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "JPSvis", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        mainwindow->setToolTip(QApplication::translate("mainwindow", "Visualise Pedestrian Motions", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        mainwindow->setWhatsThis(QApplication::translate("mainwindow", "a Software....", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionExit->setText(QApplication::translate("mainwindow", "Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("mainwindow", "Quit the application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExit->setShortcut(QApplication::translate("mainwindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionReset->setText(QApplication::translate("mainwindow", "Reset", 0, QApplication::UnicodeUTF8));
        actionReset->setShortcut(QApplication::translate("mainwindow", "Ctrl+R", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("mainwindow", "Start", 0, QApplication::UnicodeUTF8));
        actionStart->setShortcut(QApplication::translate("mainwindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("mainwindow", "Stop", 0, QApplication::UnicodeUTF8));
        actionPause_Resume->setText(QApplication::translate("mainwindow", "Pause/Resume", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("mainwindow", "About JPSvis", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("mainwindow", "F1", 0, QApplication::UnicodeUTF8));
        actionTutorial->setText(QApplication::translate("mainwindow", "Tutorial", 0, QApplication::UnicodeUTF8));
        actionNetwork_settings->setText(QApplication::translate("mainwindow", "Listening Port", 0, QApplication::UnicodeUTF8));
        actionOnline->setText(QApplication::translate("mainwindow", "Online", 0, QApplication::UnicodeUTF8));
        actionOnline->setShortcut(QApplication::translate("mainwindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionOffline->setText(QApplication::translate("mainwindow", "Offline", 0, QApplication::UnicodeUTF8));
        actionOffline->setShortcut(QApplication::translate("mainwindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionFullscreen->setText(QApplication::translate("mainwindow", "Fullscreen", 0, QApplication::UnicodeUTF8));
        actionRecord->setText(QApplication::translate("mainwindow", "Record", 0, QApplication::UnicodeUTF8));
        actionRecord->setShortcut(QApplication::translate("mainwindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("mainwindow", "Load Project", 0, QApplication::UnicodeUTF8));
        action2_D->setText(QApplication::translate("mainwindow", "2-D", 0, QApplication::UnicodeUTF8));
        action2_D->setShortcut(QApplication::translate("mainwindow", "Ctrl+2", 0, QApplication::UnicodeUTF8));
        actionReset_All->setText(QApplication::translate("mainwindow", "Reset All", 0, QApplication::UnicodeUTF8));
        actionAdd_Trajectories_File->setText(QApplication::translate("mainwindow", "Add Trajectories File", 0, QApplication::UnicodeUTF8));
        actionAdd_Trajectories_File->setShortcut(QApplication::translate("mainwindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionClear_Trajectories_Files->setText(QApplication::translate("mainwindow", "Clear Trajectories Files", 0, QApplication::UnicodeUTF8));
        actionClear_Trajectories_Files->setShortcut(QApplication::translate("mainwindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionLoad_Geometry->setText(QApplication::translate("mainwindow", "Load Geometry", 0, QApplication::UnicodeUTF8));
        actionLoad_File->setText(QApplication::translate("mainwindow", "Open File", 0, QApplication::UnicodeUTF8));
        actionLoad_File->setShortcut(QApplication::translate("mainwindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionClear_Geometry->setText(QApplication::translate("mainwindow", "Clear Geometry", 0, QApplication::UnicodeUTF8));
        actionFirst_Group->setText(QApplication::translate("mainwindow", "First Group", 0, QApplication::UnicodeUTF8));
        actionSecond_Group->setText(QApplication::translate("mainwindow", "Second Group", 0, QApplication::UnicodeUTF8));
        actionThird_Group->setText(QApplication::translate("mainwindow", "Third Group", 0, QApplication::UnicodeUTF8));
        actionShow_Legend->setText(QApplication::translate("mainwindow", "Show Legend", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionShow_Legend->setStatusTip(QApplication::translate("mainwindow", "Add a legend to the plot", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionShow_Legend->setShortcut(QApplication::translate("mainwindow", "S, L", 0, QApplication::UnicodeUTF8));
        action3_D->setText(QApplication::translate("mainwindow", "3-D", 0, QApplication::UnicodeUTF8));
        action3_D->setShortcut(QApplication::translate("mainwindow", "Ctrl+3", 0, QApplication::UnicodeUTF8));
        actionShow_Agents->setText(QApplication::translate("mainwindow", "Show Agents", 0, QApplication::UnicodeUTF8));
        actionShow_Trajectories->setText(QApplication::translate("mainwindow", "Show Trajectories", 0, QApplication::UnicodeUTF8));
        actionShow_Trajectories->setShortcut(QApplication::translate("mainwindow", "S, T", 0, QApplication::UnicodeUTF8));
        actionShow_Geometry->setText(QApplication::translate("mainwindow", "Show Geometry", 0, QApplication::UnicodeUTF8));
        actionShow_Geometry->setShortcut(QApplication::translate("mainwindow", "S, G", 0, QApplication::UnicodeUTF8));
        actionDEBUG_MODE->setText(QApplication::translate("mainwindow", "DEBUG MODE", 0, QApplication::UnicodeUTF8));
        actionShow_Captions->setText(QApplication::translate("mainwindow", "Show Agents Captions", 0, QApplication::UnicodeUTF8));
        actionShow_Captions->setShortcut(QApplication::translate("mainwindow", "S, C", 0, QApplication::UnicodeUTF8));
        actionBackground_Color->setText(QApplication::translate("mainwindow", "Background Color", 0, QApplication::UnicodeUTF8));
        actionBackground_Color->setShortcut(QApplication::translate("mainwindow", "Ctrl+K", 0, QApplication::UnicodeUTF8));
        actionFrames_Navigation->setText(QApplication::translate("mainwindow", "Frames Navigation", 0, QApplication::UnicodeUTF8));
        actionFrames_Navigation->setShortcut(QApplication::translate("mainwindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        actionShow_Axis->setText(QApplication::translate("mainwindow", "Show Axis", 0, QApplication::UnicodeUTF8));
        actionShow_Axis->setShortcut(QApplication::translate("mainwindow", "S, A", 0, QApplication::UnicodeUTF8));
        actionCameraViewTop->setText(QApplication::translate("mainwindow", "Top", 0, QApplication::UnicodeUTF8));
        actionCameraViewSide->setText(QApplication::translate("mainwindow", "Side", 0, QApplication::UnicodeUTF8));
        actionCameraViewFront->setText(QApplication::translate("mainwindow", "Front", 0, QApplication::UnicodeUTF8));
        actionPedestrian_Shape->setText(QApplication::translate("mainwindow", "Settings", 0, QApplication::UnicodeUTF8));
        actionPedestrian_Shape->setShortcut(QApplication::translate("mainwindow", "Ctrl+,", 0, QApplication::UnicodeUTF8));
        actionSnapshot->setText(QApplication::translate("mainwindow", "Snapshot", 0, QApplication::UnicodeUTF8));
        actionSnapshot->setShortcut(QApplication::translate("mainwindow", "F5", 0, QApplication::UnicodeUTF8));
        actionRecord_PNG_sequences->setText(QApplication::translate("mainwindow", "Record PNG sequences", 0, QApplication::UnicodeUTF8));
        actionRecord_PNG_sequences->setShortcut(QApplication::translate("mainwindow", "F6", 0, QApplication::UnicodeUTF8));
        actionRender_PNG_to_AVI->setText(QApplication::translate("mainwindow", "Render PNG to AVI", 0, QApplication::UnicodeUTF8));
        actionCameraViewAgent->setText(QApplication::translate("mainwindow", "Agent View", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCameraViewAgent->setToolTip(QApplication::translate("mainwindow", "to see the scene through the eyes of an agent. You will hve to select the ID of the agent next.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCaptionAuto->setText(QApplication::translate("mainwindow", "Auto", 0, QApplication::UnicodeUTF8));
        actionCaptionCustom->setText(QApplication::translate("mainwindow", "Choose...", 0, QApplication::UnicodeUTF8));
        actionWalls_Color->setText(QApplication::translate("mainwindow", "Walls Color", 0, QApplication::UnicodeUTF8));
        actionExits_Color->setText(QApplication::translate("mainwindow", "Exits Color", 0, QApplication::UnicodeUTF8));
        actionShow_Onscreen_Infos->setText(QApplication::translate("mainwindow", "Show Onscreen Infos", 0, QApplication::UnicodeUTF8));
        actionShow_Exits->setText(QApplication::translate("mainwindow", "Show Exits", 0, QApplication::UnicodeUTF8));
        actionShow_Walls->setText(QApplication::translate("mainwindow", "Show Walls", 0, QApplication::UnicodeUTF8));
        actionShow_Wall_Caption->setText(QApplication::translate("mainwindow", "Show Wall Caption", 0, QApplication::UnicodeUTF8));
        actionShow_Room_Caption->setText(QApplication::translate("mainwindow", "Show Room Caption", 0, QApplication::UnicodeUTF8));
        actionShow_Door_Caption->setText(QApplication::translate("mainwindow", "Show Door Caption", 0, QApplication::UnicodeUTF8));
        actionShow_Geometry_Captions->setText(QApplication::translate("mainwindow", "Show Geometry Captions", 0, QApplication::UnicodeUTF8));
        actionShow_Navigation_Lines->setText(QApplication::translate("mainwindow", "Show Navigation Lines", 0, QApplication::UnicodeUTF8));
        actionNavigation_Lines_Color->setText(QApplication::translate("mainwindow", "Navigation Lines Color", 0, QApplication::UnicodeUTF8));
        actionFloor_Color->setText(QApplication::translate("mainwindow", "Floor Color", 0, QApplication::UnicodeUTF8));
        actionShow_Floor->setText(QApplication::translate("mainwindow", "Show Floor", 0, QApplication::UnicodeUTF8));
        actionRemember_Settings->setText(QApplication::translate("mainwindow", "Remember Settings", 0, QApplication::UnicodeUTF8));
        actionShowGeometry_Structure->setText(QApplication::translate("mainwindow", "Show Geometry Structure", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowGeometry_Structure->setToolTip(QApplication::translate("mainwindow", "Display the structure of the geometry ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowGeometry_Structure->setShortcut(QApplication::translate("mainwindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionShow_Obstacles->setText(QApplication::translate("mainwindow", "Show Obstacles", 0, QApplication::UnicodeUTF8));
        actionObstacles_Color->setText(QApplication::translate("mainwindow", "Obstacles Color", 0, QApplication::UnicodeUTF8));
        actionShow_Gradient_Field->setText(QApplication::translate("mainwindow", "Show Gradient Field", 0, QApplication::UnicodeUTF8));
        parameters->setTitle(QApplication::translate("mainwindow", "Settings", 0, QApplication::UnicodeUTF8));
        speedSliderLabel->setText(QApplication::translate("mainwindow", "Speed (1X)", 0, QApplication::UnicodeUTF8));
        framePerSecondSliderLabel->setText(QApplication::translate("mainwindow", "Frames per Sec", 0, QApplication::UnicodeUTF8));
        Controls->setTitle(QApplication::translate("mainwindow", "Control", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BtStart->setToolTip(QApplication::translate("mainwindow", "Start Visualisation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtStart->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtStop->setToolTip(QApplication::translate("mainwindow", "Stop Visualisation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtStop->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtRecord->setToolTip(QApplication::translate("mainwindow", "Start Recording", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtRecord->setText(QString());
#ifndef QT_NO_TOOLTIP
        BtReset->setToolTip(QApplication::translate("mainwindow", "Reset the simulation and clear all datasets loaded", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtReset->setText(QApplication::translate("mainwindow", "Reset", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        frameSliderLabel->setText(QApplication::translate("mainwindow", "Frames", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mainwindow", "millisec", 0, QApplication::UnicodeUTF8));
        BtNextFrame->setText(QApplication::translate("mainwindow", "Next Frame", 0, QApplication::UnicodeUTF8));
        BtPreviousFrame->setText(QApplication::translate("mainwindow", "Previous", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BtFullscreen->setToolTip(QApplication::translate("mainwindow", "Fullscreen", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BtFullscreen->setText(QString());
        menuFile->setTitle(QApplication::translate("mainwindow", "File", 0, QApplication::UnicodeUTF8));
        menuApplication->setTitle(QApplication::translate("mainwindow", "Visualisation", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("mainwindow", "Help", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("mainwindow", "Options", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("mainwindow", "View", 0, QApplication::UnicodeUTF8));
        menuCamera_View->setTitle(QApplication::translate("mainwindow", "Camera View", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("mainwindow", "Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
