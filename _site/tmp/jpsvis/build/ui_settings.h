/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsClass
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *CbEllipseResolution;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *CbPedestrianGroup;
    QPushButton *pushButtonChangePedestrianColor;
    QCheckBox *chBpedestrianDefaultColor;
    QWidget *tab_2;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QComboBox *CbTrailPointsCount;
    QLabel *label_5;
    QComboBox *CbTrailType;
    QLabel *label_6;
    QComboBox *CbTrailGeometry;
    QLabel *label_8;
    QComboBox *CbTrailPolygoneWidth;
    QLabel *label_15;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_5;
    QLabel *label_16;
    QLabel *label_17;
    QComboBox *comboCaptionColorMode;
    QLabel *label_18;
    QComboBox *ComboCaptionOrientation;
    QLabel *label_19;
    QComboBox *CbCaptionSize;
    QCheckBox *checkBoxCaptionAutoRotate;
    QLabel *label_20;
    QFrame *frameCaptionColorPreview;
    QWidget *tab_3;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *Locations;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QLineEdit *LEditOutputDir;
    QPushButton *PBChangeOutputDir;

    void setupUi(QWidget *SettingsClass)
    {
        if (SettingsClass->objectName().isEmpty())
            SettingsClass->setObjectName(QString::fromUtf8("SettingsClass"));
        SettingsClass->resize(387, 438);
        SettingsClass->setMinimumSize(QSize(227, 231));
        SettingsClass->setMaximumSize(QSize(2270, 2310));
        tabWidget = new QTabWidget(SettingsClass);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 391, 411));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 201, 111));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 50, 142, 31));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        CbEllipseResolution = new QComboBox(layoutWidget);
        CbEllipseResolution->setObjectName(QString::fromUtf8("CbEllipseResolution"));
        CbEllipseResolution->setEnabled(true);
        CbEllipseResolution->setEditable(false);

        gridLayout->addWidget(CbEllipseResolution, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 190, 201, 131));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 50, 178, 52));
        gridLayout_3 = new QGridLayout(layoutWidget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        CbPedestrianGroup = new QComboBox(layoutWidget2);
        CbPedestrianGroup->setObjectName(QString::fromUtf8("CbPedestrianGroup"));
        CbPedestrianGroup->setEnabled(false);

        horizontalLayout_3->addWidget(CbPedestrianGroup);

        pushButtonChangePedestrianColor = new QPushButton(layoutWidget2);
        pushButtonChangePedestrianColor->setObjectName(QString::fromUtf8("pushButtonChangePedestrianColor"));
        pushButtonChangePedestrianColor->setEnabled(false);

        horizontalLayout_3->addWidget(pushButtonChangePedestrianColor);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        chBpedestrianDefaultColor = new QCheckBox(groupBox_2);
        chBpedestrianDefaultColor->setObjectName(QString::fromUtf8("chBpedestrianDefaultColor"));
        chBpedestrianDefaultColor->setGeometry(QRect(20, 20, 174, 17));
        chBpedestrianDefaultColor->setChecked(true);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget3 = new QWidget(tab_2);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(70, 50, 182, 104));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        CbTrailPointsCount = new QComboBox(layoutWidget3);
        CbTrailPointsCount->setObjectName(QString::fromUtf8("CbTrailPointsCount"));
        CbTrailPointsCount->setEnabled(true);
        CbTrailPointsCount->setEditable(true);

        gridLayout_2->addWidget(CbTrailPointsCount, 0, 1, 1, 1);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        CbTrailType = new QComboBox(layoutWidget3);
        CbTrailType->setObjectName(QString::fromUtf8("CbTrailType"));
        CbTrailType->setEnabled(true);
        CbTrailType->setEditable(false);

        gridLayout_2->addWidget(CbTrailType, 1, 1, 1, 1);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        CbTrailGeometry = new QComboBox(layoutWidget3);
        CbTrailGeometry->setObjectName(QString::fromUtf8("CbTrailGeometry"));
        CbTrailGeometry->setEnabled(true);
        CbTrailGeometry->setEditable(false);

        gridLayout_2->addWidget(CbTrailGeometry, 2, 1, 1, 1);

        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setEnabled(true);

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        CbTrailPolygoneWidth = new QComboBox(layoutWidget3);
        CbTrailPolygoneWidth->setObjectName(QString::fromUtf8("CbTrailPolygoneWidth"));
        CbTrailPolygoneWidth->setEnabled(false);
        CbTrailPolygoneWidth->setEditable(true);

        gridLayout_2->addWidget(CbTrailPolygoneWidth, 3, 1, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(40, 20, 61, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_15->setFont(font);
        layoutWidget_4 = new QWidget(tab_2);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(70, 200, 182, 104));
        gridLayout_5 = new QGridLayout(layoutWidget_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_4);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 0, 0, 1, 1);

        label_17 = new QLabel(layoutWidget_4);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_5->addWidget(label_17, 1, 0, 1, 1);

        comboCaptionColorMode = new QComboBox(layoutWidget_4);
        comboCaptionColorMode->setObjectName(QString::fromUtf8("comboCaptionColorMode"));
        comboCaptionColorMode->setEnabled(true);
        comboCaptionColorMode->setEditable(false);

        gridLayout_5->addWidget(comboCaptionColorMode, 1, 1, 1, 1);

        label_18 = new QLabel(layoutWidget_4);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_5->addWidget(label_18, 2, 0, 1, 1);

        ComboCaptionOrientation = new QComboBox(layoutWidget_4);
        ComboCaptionOrientation->setObjectName(QString::fromUtf8("ComboCaptionOrientation"));
        ComboCaptionOrientation->setEnabled(false);
        ComboCaptionOrientation->setEditable(false);

        gridLayout_5->addWidget(ComboCaptionOrientation, 2, 1, 1, 1);

        label_19 = new QLabel(layoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setEnabled(true);

        gridLayout_5->addWidget(label_19, 3, 0, 1, 1);

        CbCaptionSize = new QComboBox(layoutWidget_4);
        CbCaptionSize->setObjectName(QString::fromUtf8("CbCaptionSize"));
        CbCaptionSize->setEnabled(true);
        CbCaptionSize->setEditable(true);
        CbCaptionSize->setMaxCount(200);

        gridLayout_5->addWidget(CbCaptionSize, 0, 1, 1, 1);

        checkBoxCaptionAutoRotate = new QCheckBox(layoutWidget_4);
        checkBoxCaptionAutoRotate->setObjectName(QString::fromUtf8("checkBoxCaptionAutoRotate"));
        checkBoxCaptionAutoRotate->setEnabled(false);
        checkBoxCaptionAutoRotate->setLayoutDirection(Qt::LeftToRight);
        checkBoxCaptionAutoRotate->setCheckable(true);
        checkBoxCaptionAutoRotate->setChecked(true);

        gridLayout_5->addWidget(checkBoxCaptionAutoRotate, 3, 1, 1, 1);

        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(40, 170, 61, 16));
        label_20->setFont(font);
        frameCaptionColorPreview = new QFrame(tab_2);
        frameCaptionColorPreview->setObjectName(QString::fromUtf8("frameCaptionColorPreview"));
        frameCaptionColorPreview->setGeometry(QRect(260, 230, 41, 21));
        frameCaptionColorPreview->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 127);"));
        frameCaptionColorPreview->setFrameShape(QFrame::StyledPanel);
        frameCaptionColorPreview->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_9 = new QLabel(tab_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 40, 53, 15));
        label_10 = new QLabel(tab_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 60, 53, 15));
        tabWidget->addTab(tab_3, QString());
        Locations = new QWidget();
        Locations->setObjectName(QString::fromUtf8("Locations"));
        layoutWidget5 = new QWidget(Locations);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 40, 219, 51));
        gridLayout_4 = new QGridLayout(layoutWidget5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget5);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);

        LEditOutputDir = new QLineEdit(layoutWidget5);
        LEditOutputDir->setObjectName(QString::fromUtf8("LEditOutputDir"));

        gridLayout_4->addWidget(LEditOutputDir, 0, 1, 1, 1);

        PBChangeOutputDir = new QPushButton(layoutWidget5);
        PBChangeOutputDir->setObjectName(QString::fromUtf8("PBChangeOutputDir"));
        PBChangeOutputDir->setMaximumSize(QSize(60, 163));

        gridLayout_4->addWidget(PBChangeOutputDir, 1, 1, 1, 1);

        tabWidget->addTab(Locations, QString());

        retranslateUi(SettingsClass);
        QObject::connect(CbTrailPointsCount, SIGNAL(activated(QString)), SettingsClass, SLOT(slotUpdateTrailSettings()));
        QObject::connect(CbTrailGeometry, SIGNAL(activated(QString)), SettingsClass, SLOT(slotUpdateTrailSettings()));
        QObject::connect(CbTrailType, SIGNAL(activated(QString)), SettingsClass, SLOT(slotUpdateTrailSettings()));
        QObject::connect(CbTrailPolygoneWidth, SIGNAL(activated(QString)), SettingsClass, SLOT(slotChangeVerticesWidth()));
        QObject::connect(PBChangeOutputDir, SIGNAL(clicked()), SettingsClass, SLOT(slotChangeOutputDir()));
        QObject::connect(CbCaptionSize, SIGNAL(activated(QString)), SettingsClass, SLOT(slotChangeCaptionSize()));
        QObject::connect(comboCaptionColorMode, SIGNAL(activated(QString)), SettingsClass, SLOT(slotChangeCaptionColorMode()));
        QObject::connect(ComboCaptionOrientation, SIGNAL(activated(QString)), SettingsClass, SLOT(slotChangeCaptionOrientation()));
        QObject::connect(checkBoxCaptionAutoRotate, SIGNAL(clicked()), SettingsClass, SLOT(slotChangeCaptionAutoRotation()));
        QObject::connect(CbEllipseResolution, SIGNAL(activated(QString)), SettingsClass, SLOT(slotChangePedestrianShape()));

        tabWidget->setCurrentIndex(3);
        CbEllipseResolution->setCurrentIndex(5);
        CbTrailType->setCurrentIndex(1);
        CbTrailGeometry->setCurrentIndex(1);
        CbTrailPolygoneWidth->setCurrentIndex(1);
        comboCaptionColorMode->setCurrentIndex(0);
        ComboCaptionOrientation->setCurrentIndex(0);
        CbCaptionSize->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsClass);
    } // setupUi

    void retranslateUi(QWidget *SettingsClass)
    {
        SettingsClass->setWindowTitle(QApplication::translate("SettingsClass", "PedestrianShape", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SettingsClass", "Shape", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SettingsClass", "Ellipse Resolution", 0, QApplication::UnicodeUTF8));
        CbEllipseResolution->clear();
        CbEllipseResolution->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "30", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("SettingsClass", "Color", 0, QApplication::UnicodeUTF8));
        CbPedestrianGroup->clear();
        CbPedestrianGroup->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "First Group", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "Second Group", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "Third Group", 0, QApplication::UnicodeUTF8)
        );
        pushButtonChangePedestrianColor->setText(QApplication::translate("SettingsClass", "change", 0, QApplication::UnicodeUTF8));
        chBpedestrianDefaultColor->setText(QApplication::translate("SettingsClass", "Default (read from file)", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingsClass", "Pedestrian Shape", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("SettingsClass", "Number of Points", 0, QApplication::UnicodeUTF8));
        CbTrailPointsCount->clear();
        CbTrailPointsCount->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "70", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "100", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("SettingsClass", "Type", 0, QApplication::UnicodeUTF8));
        CbTrailType->clear();
        CbTrailType->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "Backward", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "Symetric", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "Forward", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("SettingsClass", "Geometry", 0, QApplication::UnicodeUTF8));
        CbTrailGeometry->clear();
        CbTrailGeometry->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "Points", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "Polygone", 0, QApplication::UnicodeUTF8)
        );
        label_8->setText(QApplication::translate("SettingsClass", "Vertex width", 0, QApplication::UnicodeUTF8));
        CbTrailPolygoneWidth->clear();
        CbTrailPolygoneWidth->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "10", 0, QApplication::UnicodeUTF8)
        );
        label_15->setText(QApplication::translate("SettingsClass", "Trails", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("SettingsClass", "Size", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("SettingsClass", "Color", 0, QApplication::UnicodeUTF8));
        comboCaptionColorMode->clear();
        comboCaptionColorMode->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "Auto", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "Custom", 0, QApplication::UnicodeUTF8)
        );
        label_18->setText(QApplication::translate("SettingsClass", "Orientation", 0, QApplication::UnicodeUTF8));
        ComboCaptionOrientation->clear();
        ComboCaptionOrientation->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "Custom", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "Billboard", 0, QApplication::UnicodeUTF8)
        );
        label_19->setText(QApplication::translate("SettingsClass", "Automatic Rotation", 0, QApplication::UnicodeUTF8));
        CbCaptionSize->clear();
        CbCaptionSize->insertItems(0, QStringList()
         << QApplication::translate("SettingsClass", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "40", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "50", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "70", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "80", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SettingsClass", "200", 0, QApplication::UnicodeUTF8)
        );
        checkBoxCaptionAutoRotate->setText(QString());
        label_20->setText(QApplication::translate("SettingsClass", "Captions", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingsClass", "Trails/Captions", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("SettingsClass", "Host:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("SettingsClass", "Port:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SettingsClass", "Network", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_11->setToolTip(QApplication::translate("SettingsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Directory in wich all generated screenshots and video will be saved. Default on the <span style=\" font-weight:600;\">Desktop</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_11->setText(QApplication::translate("SettingsClass", "output directory", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        LEditOutputDir->setToolTip(QApplication::translate("SettingsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Directory in wich all generated screenshots and video will be saved. Default on the <span style=\" font-weight:600;\">Desktop</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PBChangeOutputDir->setToolTip(QApplication::translate("SettingsClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Change directory in wich all generated screenshots and video will be saved. Default on the <span style=\" font-weight:600;\">Desktop</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PBChangeOutputDir->setText(QApplication::translate("SettingsClass", "Change", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(Locations), QApplication::translate("SettingsClass", "Locations", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SettingsClass: public Ui_SettingsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
