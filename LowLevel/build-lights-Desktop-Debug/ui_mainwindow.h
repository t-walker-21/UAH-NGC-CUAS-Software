/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *redButton;
    QCheckBox *redCheck;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *yellowButton;
    QCheckBox *yellowCheck;
    QHBoxLayout *horizontalLayout;
    QPushButton *greenButton;
    QCheckBox *greenCheck;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buzzerButton;
    QCheckBox *buzzerCheck;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QSlider *dutyCycleSlider;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 30, 221, 188));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        redButton = new QPushButton(widget);
        redButton->setObjectName(QStringLiteral("redButton"));

        horizontalLayout_3->addWidget(redButton);

        redCheck = new QCheckBox(widget);
        redCheck->setObjectName(QStringLiteral("redCheck"));

        horizontalLayout_3->addWidget(redCheck);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        yellowButton = new QPushButton(widget);
        yellowButton->setObjectName(QStringLiteral("yellowButton"));

        horizontalLayout_4->addWidget(yellowButton);

        yellowCheck = new QCheckBox(widget);
        yellowCheck->setObjectName(QStringLiteral("yellowCheck"));

        horizontalLayout_4->addWidget(yellowCheck);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        greenButton = new QPushButton(widget);
        greenButton->setObjectName(QStringLiteral("greenButton"));

        horizontalLayout->addWidget(greenButton);

        greenCheck = new QCheckBox(widget);
        greenCheck->setObjectName(QStringLiteral("greenCheck"));

        horizontalLayout->addWidget(greenCheck);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        buzzerButton = new QPushButton(widget);
        buzzerButton->setObjectName(QStringLiteral("buzzerButton"));

        horizontalLayout_2->addWidget(buzzerButton);

        buzzerCheck = new QCheckBox(widget);
        buzzerCheck->setObjectName(QStringLiteral("buzzerCheck"));

        horizontalLayout_2->addWidget(buzzerCheck);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_5->addWidget(label_2);

        dutyCycleSlider = new QSlider(widget);
        dutyCycleSlider->setObjectName(QStringLiteral("dutyCycleSlider"));
        dutyCycleSlider->setMinimum(100);
        dutyCycleSlider->setMaximum(500);
        dutyCycleSlider->setSingleStep(10);
        dutyCycleSlider->setOrientation(Qt::Horizontal);
        dutyCycleSlider->setInvertedAppearance(true);
        dutyCycleSlider->setInvertedControls(false);

        horizontalLayout_5->addWidget(dutyCycleSlider);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        greenButton->raise();
        yellowButton->raise();
        redButton->raise();
        buzzerButton->raise();
        greenCheck->raise();
        yellowCheck->raise();
        buzzerCheck->raise();
        redCheck->raise();
        dutyCycleSlider->raise();
        label->raise();
        label_2->raise();
        greenButton->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        redButton->setText(QApplication::translate("MainWindow", "Red", 0));
        redCheck->setText(QApplication::translate("MainWindow", "Flash", 0));
        yellowButton->setText(QApplication::translate("MainWindow", "Yellow", 0));
        yellowCheck->setText(QApplication::translate("MainWindow", "Flash", 0));
        greenButton->setText(QApplication::translate("MainWindow", "Green", 0));
        greenCheck->setText(QApplication::translate("MainWindow", "Flash", 0));
        buzzerButton->setText(QApplication::translate("MainWindow", "Buzzer", 0));
        buzzerCheck->setText(QApplication::translate("MainWindow", "Flash", 0));
        label_2->setText(QApplication::translate("MainWindow", "Flash Duty Cycle", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
