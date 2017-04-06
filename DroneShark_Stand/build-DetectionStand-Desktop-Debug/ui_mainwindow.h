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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QLabel *statusLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *startButton;
    QPushButton *stopButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *djiInfo;
    QLabel *label;
    QCheckBox *djiBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *ardroneInfo;
    QLabel *label_2;
    QCheckBox *ardroneBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QCheckBox *ardroneAuto;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *mavlinkInfo;
    QLabel *label_4;
    QCheckBox *mavlinkBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QCheckBox *mavlinkAuto;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(593, 429);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 691, 421));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        statusLabel = new QLabel(tab_3);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(50, 350, 67, 17));
        layoutWidget = new QWidget(tab_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(470, 250, 87, 70));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        startButton = new QPushButton(layoutWidget);
        startButton->setObjectName(QStringLiteral("startButton"));

        verticalLayout->addWidget(startButton);

        stopButton = new QPushButton(layoutWidget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        verticalLayout->addWidget(stopButton);

        layoutWidget1 = new QWidget(tab_3);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(52, 71, 422, 113));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        djiInfo = new QPushButton(layoutWidget1);
        djiInfo->setObjectName(QStringLiteral("djiInfo"));

        horizontalLayout_2->addWidget(djiInfo);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        djiBox = new QCheckBox(layoutWidget1);
        djiBox->setObjectName(QStringLiteral("djiBox"));

        horizontalLayout_2->addWidget(djiBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        ardroneInfo = new QPushButton(layoutWidget1);
        ardroneInfo->setObjectName(QStringLiteral("ardroneInfo"));

        horizontalLayout_4->addWidget(ardroneInfo);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        ardroneBox = new QCheckBox(layoutWidget1);
        ardroneBox->setObjectName(QStringLiteral("ardroneBox"));

        horizontalLayout_4->addWidget(ardroneBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        ardroneAuto = new QCheckBox(layoutWidget1);
        ardroneAuto->setObjectName(QStringLiteral("ardroneAuto"));

        horizontalLayout_3->addWidget(ardroneAuto);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        mavlinkInfo = new QPushButton(layoutWidget1);
        mavlinkInfo->setObjectName(QStringLiteral("mavlinkInfo"));

        horizontalLayout_5->addWidget(mavlinkInfo);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        mavlinkBox = new QCheckBox(layoutWidget1);
        mavlinkBox->setObjectName(QStringLiteral("mavlinkBox"));

        horizontalLayout_5->addWidget(mavlinkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        mavlinkAuto = new QCheckBox(layoutWidget1);
        mavlinkAuto->setObjectName(QStringLiteral("mavlinkAuto"));

        horizontalLayout->addWidget(mavlinkAuto);


        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_3, QString());
        layoutWidget->raise();
        layoutWidget->raise();
        statusLabel->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 593, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        statusLabel->setText(QApplication::translate("MainWindow", "Status: ", 0));
        startButton->setText(QApplication::translate("MainWindow", "Start", 0));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", 0));
        djiInfo->setText(QApplication::translate("MainWindow", "info", 0));
        label->setText(QApplication::translate("MainWindow", "Enable DJI", 0));
        djiBox->setText(QString());
        ardroneInfo->setText(QApplication::translate("MainWindow", "info", 0));
        label_2->setText(QApplication::translate("MainWindow", "Enable AR Drone", 0));
        ardroneBox->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Automatic Takedown", 0));
        ardroneAuto->setText(QString());
        mavlinkInfo->setText(QApplication::translate("MainWindow", "info", 0));
        label_4->setText(QApplication::translate("MainWindow", "Enable MavLink", 0));
        mavlinkBox->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Automatic Takedown", 0));
        mavlinkAuto->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Stand Configuration", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
