#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    YELLOW = false;
    GREEN = false;
    RED = false;
    BUZZER = false;
    redProc = new QProcess();
    yellowProc = new QProcess();
    greenProc = new QProcess();
    buzzerProc = new QProcess();
    flashTimer = new QTimer();
    flashTimer->setInterval(300);


    ui->redButton->setStyleSheet("background-color: red");
    ui->yellowButton->setStyleSheet("background-color: yellow");
    ui->greenButton->setStyleSheet("background-color: green");
    ui->buzzerButton->setStyleSheet("background-color: blue");

    connect(flashTimer,SIGNAL(timeout()),this,SLOT(toggleLights()));
    connect(ui->yellowButton,SIGNAL(clicked()),this,SLOT(yellowToggle()));
    connect(ui->greenButton,SIGNAL(clicked()),this,SLOT(greenToggle()));
    connect(ui->redButton,SIGNAL(clicked()),this,SLOT(redToggle()));
    connect(ui->buzzerButton,SIGNAL(clicked()),this,SLOT(buzzerToggle()));
    connect(ui->dutyCycleSlider,SIGNAL(sliderMoved(int)),this,SLOT(adjustDutyCycle(int)));
    flashTimer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::yellowToggle()
{
    if (YELLOW) //light is on
    {
        yellowProc->start("sh ../YELLOW_OFF.sh");
        YELLOW = false;
    }

    else //light is off
    {
        yellowProc->start("sh ../YELLOW_ON.sh");
        YELLOW = true;
    }
}

void MainWindow::greenToggle()
{
    if (GREEN) //light is on
    {
        greenProc->start("sh ../GREEN_OFF.sh");
        GREEN = false;
    }

    else //light is off
    {
        greenProc->start("sh ../GREEN_ON.sh");
        GREEN = true;
    }

}

void MainWindow::redToggle()
{
    if (RED) //light is on
    {
        redProc->start("sh ../RED_OFF.sh");
        RED = false;
    }

    else //light is off
    {
        redProc->start("sh ../RED_ON.sh");
        RED = true;
    }


}

void MainWindow::buzzerToggle()
{
    if (BUZZER) //light is on
    {
        buzzerProc->start("sh ../BUZZER_OFF.sh");
        BUZZER = false;
    }

    else //light is off
    {
        buzzerProc->start("sh ../BUZZER_ON.sh");
        BUZZER = true;
    }
}

void MainWindow::toggleLights()
{
    if (ui->redCheck->isChecked())
    {
        redToggle();
    }

    if (ui->yellowCheck->isChecked())
    {
        yellowToggle();
    }

    if (ui->greenCheck->isChecked())
    {
       greenToggle();
    }

    if (ui->buzzerCheck->isChecked())
    {
        buzzerToggle();
    }
}

void MainWindow::adjustDutyCycle(int dutyCycle)
{
    flashTimer->setInterval(dutyCycle);
    ui->label->setNum(dutyCycle);
}
