/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionDark;
    QAction *actionLight;
    QAction *actionAbout_program;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_selectFilter;
    QComboBox *comboBox_filters;
    QLabel *label_advancedSettings;
    QSpinBox *spinBox;
    QLabel *labelDoWithNewImage;
    QPushButton *buttonChangeImages;
    QLabel *label_rgb;
    QSpinBox *spinBox_rgb;
    QTextEdit *textAboutFilter;
    QPushButton *btnStartProcessing;
    QProgressBar *progressBar;
    QTabWidget *tabWidget;
    QWidget *tabCurrentImage;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_original_picture;
    QWidget *tabProcessedImage;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_new_picture;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(837, 547);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(214,211,201);\n"
"color: rgb(255, 255, 255);"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionDark = new QAction(MainWindow);
        actionDark->setObjectName(QString::fromUtf8("actionDark"));
        actionLight = new QAction(MainWindow);
        actionLight->setObjectName(QString::fromUtf8("actionLight"));
        actionAbout_program = new QAction(MainWindow);
        actionAbout_program->setObjectName(QString::fromUtf8("actionAbout_program"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(6);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_selectFilter = new QLabel(centralwidget);
        label_selectFilter->setObjectName(QString::fromUtf8("label_selectFilter"));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        label_selectFilter->setFont(font);
        label_selectFilter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_selectFilter);

        comboBox_filters = new QComboBox(centralwidget);
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->addItem(QString());
        comboBox_filters->setObjectName(QString::fromUtf8("comboBox_filters"));
        comboBox_filters->setFont(font);
        comboBox_filters->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_filters->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_filters);

        label_advancedSettings = new QLabel(centralwidget);
        label_advancedSettings->setObjectName(QString::fromUtf8("label_advancedSettings"));
        label_advancedSettings->setFont(font);
        label_advancedSettings->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_advancedSettings);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        spinBox->setMaximum(150);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBox);

        labelDoWithNewImage = new QLabel(centralwidget);
        labelDoWithNewImage->setObjectName(QString::fromUtf8("labelDoWithNewImage"));
        labelDoWithNewImage->setFont(font);
        labelDoWithNewImage->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelDoWithNewImage);

        buttonChangeImages = new QPushButton(centralwidget);
        buttonChangeImages->setObjectName(QString::fromUtf8("buttonChangeImages"));
        QFont font1;
        font1.setBold(true);
        buttonChangeImages->setFont(font1);
        buttonChangeImages->setCursor(QCursor(Qt::PointingHandCursor));
        buttonChangeImages->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(85, 170, 255);"));
        buttonChangeImages->setAutoDefault(true);
        buttonChangeImages->setFlat(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonChangeImages);

        label_rgb = new QLabel(centralwidget);
        label_rgb->setObjectName(QString::fromUtf8("label_rgb"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_rgb->sizePolicy().hasHeightForWidth());
        label_rgb->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        label_rgb->setFont(font2);
        label_rgb->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_rgb->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_rgb);

        spinBox_rgb = new QSpinBox(centralwidget);
        spinBox_rgb->setObjectName(QString::fromUtf8("spinBox_rgb"));
        spinBox_rgb->setEnabled(true);
        spinBox_rgb->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        spinBox_rgb->setReadOnly(false);
        spinBox_rgb->setMinimum(1);
        spinBox_rgb->setMaximum(3);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinBox_rgb);

        textAboutFilter = new QTextEdit(centralwidget);
        textAboutFilter->setObjectName(QString::fromUtf8("textAboutFilter"));
        textAboutFilter->setFont(font2);
        textAboutFilter->setAutoFillBackground(false);
        textAboutFilter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        textAboutFilter->setReadOnly(true);

        formLayout->setWidget(4, QFormLayout::SpanningRole, textAboutFilter);


        gridLayout->addLayout(formLayout, 0, 2, 1, 1);

        btnStartProcessing = new QPushButton(centralwidget);
        btnStartProcessing->setObjectName(QString::fromUtf8("btnStartProcessing"));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        btnStartProcessing->setFont(font3);
        btnStartProcessing->setCursor(QCursor(Qt::PointingHandCursor));
        btnStartProcessing->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255));\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btnStartProcessing, 1, 2, 1, 1);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setFont(font3);
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setStyleSheet(QString::fromUtf8("selection-background-color: rgb(0, 85, 127);"));
        tabCurrentImage = new QWidget();
        tabCurrentImage->setObjectName(QString::fromUtf8("tabCurrentImage"));
        horizontalLayout = new QHBoxLayout(tabCurrentImage);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_original_picture = new QLabel(tabCurrentImage);
        label_original_picture->setObjectName(QString::fromUtf8("label_original_picture"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_original_picture->sizePolicy().hasHeightForWidth());
        label_original_picture->setSizePolicy(sizePolicy2);
        label_original_picture->setMinimumSize(QSize(0, 0));
        label_original_picture->setStyleSheet(QString::fromUtf8(""));
        label_original_picture->setScaledContents(true);

        verticalLayout->addWidget(label_original_picture);


        horizontalLayout->addLayout(verticalLayout);

        tabWidget->addTab(tabCurrentImage, QString());
        tabProcessedImage = new QWidget();
        tabProcessedImage->setObjectName(QString::fromUtf8("tabProcessedImage"));
        horizontalLayout_2 = new QHBoxLayout(tabProcessedImage);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_new_picture = new QLabel(tabProcessedImage);
        label_new_picture->setObjectName(QString::fromUtf8("label_new_picture"));
        label_new_picture->setStyleSheet(QString::fromUtf8(""));
        label_new_picture->setScaledContents(true);

        verticalLayout_2->addWidget(label_new_picture);


        horizontalLayout_2->addLayout(verticalLayout_2);

        tabWidget->addTab(tabProcessedImage, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 837, 25));
        menubar->setFont(font1);
        menubar->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuOptions->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        statusbar->setFont(font4);
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuOptions->addAction(actionDark);
        menuOptions->addAction(actionLight);
        menuOptions->addAction(actionAbout_program);

        retranslateUi(MainWindow);
        QObject::connect(comboBox_filters, SIGNAL(currentTextChanged(QString)), label_new_picture, SLOT(clear()));
        QObject::connect(comboBox_filters, SIGNAL(currentIndexChanged(int)), spinBox, SLOT(clear()));
        QObject::connect(btnStartProcessing, SIGNAL(clicked()), statusbar, SLOT(clearMessage()));
        QObject::connect(buttonChangeImages, SIGNAL(clicked()), label_new_picture, SLOT(clear()));
        QObject::connect(comboBox_filters, SIGNAL(currentIndexChanged(int)), textAboutFilter, SLOT(clear()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Image Processor", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionDark->setText(QCoreApplication::translate("MainWindow", "Dark", nullptr));
        actionLight->setText(QCoreApplication::translate("MainWindow", "Light", nullptr));
        actionAbout_program->setText(QCoreApplication::translate("MainWindow", "About program", nullptr));
        label_selectFilter->setText(QCoreApplication::translate("MainWindow", "Select filter ", nullptr));
        comboBox_filters->setItemText(0, QCoreApplication::translate("MainWindow", "Median filter", nullptr));
        comboBox_filters->setItemText(1, QCoreApplication::translate("MainWindow", "Negative", nullptr));
        comboBox_filters->setItemText(2, QCoreApplication::translate("MainWindow", "Gaussian filter", nullptr));
        comboBox_filters->setItemText(3, QCoreApplication::translate("MainWindow", "Blur Filter", nullptr));
        comboBox_filters->setItemText(4, QCoreApplication::translate("MainWindow", "High-pass filter #1", nullptr));
        comboBox_filters->setItemText(5, QCoreApplication::translate("MainWindow", "High-pass filter #2", nullptr));
        comboBox_filters->setItemText(6, QCoreApplication::translate("MainWindow", "Contrast", nullptr));
        comboBox_filters->setItemText(7, QCoreApplication::translate("MainWindow", "Brightness", nullptr));
        comboBox_filters->setItemText(8, QCoreApplication::translate("MainWindow", "WithKanalsWork", nullptr));
        comboBox_filters->setItemText(9, QCoreApplication::translate("MainWindow", "LightColorCorrection", nullptr));
        comboBox_filters->setItemText(10, QCoreApplication::translate("MainWindow", "Segmentation kMeans", nullptr));
        comboBox_filters->setItemText(11, QCoreApplication::translate("MainWindow", "Binarization gradient", nullptr));
        comboBox_filters->setItemText(12, QCoreApplication::translate("MainWindow", "Simple binarization", nullptr));
        comboBox_filters->setItemText(13, QString());

        comboBox_filters->setCurrentText(QCoreApplication::translate("MainWindow", "Median filter", nullptr));
        label_advancedSettings->setText(QCoreApplication::translate("MainWindow", "Advanced settings ", nullptr));
        labelDoWithNewImage->setText(QCoreApplication::translate("MainWindow", "Continue with new image ?", nullptr));
        buttonChangeImages->setText(QCoreApplication::translate("MainWindow", "Yep", nullptr));
        label_rgb->setText(QCoreApplication::translate("MainWindow", "R G B", nullptr));
        btnStartProcessing->setText(QCoreApplication::translate("MainWindow", "Start processing", nullptr));
        label_original_picture->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabCurrentImage), QCoreApplication::translate("MainWindow", "Your image here", nullptr));
        label_new_picture->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabProcessedImage), QCoreApplication::translate("MainWindow", "Your processed image", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
