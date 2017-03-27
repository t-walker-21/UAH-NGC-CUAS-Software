#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    swCheckTimer = new QTimer();
    sw1read = new QProcess();
    sw2read = new QProcess();

    swCheckTimer->setInterval(100);

    connect(swCheckTimer,SIGNAL(timeout()),this,SLOT(readSwitches()));
    connect(sw1read,SIGNAL(readyRead()),this,SLOT(readOutput1()));
    connect(sw2read,SIGNAL(readyRead()),this,SLOT(readOutput2()));

    swCheckTimer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::readSwitches()
{
    sw1read->start("sh ../SW1_READ.sh");
    sw2read->start("sh ../SW2_READ.sh");

}

void MainWindow::readOutput1()
{


    QString state = sw1read->readAll();

    if (state == "1\n")
        ui->checkBox->setChecked(false);
    else
        ui->checkBox->setChecked(true);

}

void MainWindow::readOutput2()
{
    QString state = sw2read->readAll();

    if (state == "1\n")
        ui->checkBox_2->setChecked(false);
    else
        ui->checkBox_2->setChecked(true);

}
