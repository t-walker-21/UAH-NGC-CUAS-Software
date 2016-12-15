#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("No drone detected");
    scanProc = new QProcess();
    checkProc = new QProcess();
    checkTimer = new QTimer();
    prepProc = new QProcess();
    checkTimer->setInterval(500);
    connect(checkTimer,SIGNAL(timeout()),this,SLOT(runCheck()));
    connect(checkProc,SIGNAL(readyReadStandardOutput()),this,SLOT(readScript()));
    prepProc->start("sudo sh prep.sh");
    scanProc->start("sudo airodump-ng -w dump wlan0");
    checkTimer->start();
}

MainWindow::~MainWindow()
{
    scanProc->kill();
    checkProc->kill();
    delete ui;
}

void MainWindow::process()
{
     //proc->start("sudo sh Deauth.sh");
}

 void MainWindow::readScript()
{
    QString input;

    input = checkProc->readAllStandardOutput();
    //qDebug() << input;
    if (input == "DJI\n") //valid message
    {
        ui->label->setText("DJI Found");
        scanProc->kill(); //kill scanning script
        if (ui->checkBox->isChecked())
        {
          attackDjiTelem();
        }
    }

    else if (input == "Parrot AP Found!")
    {
        ui->label->setText(input);
    }
}


void MainWindow::runCheck()
{
    checkProc->start("sh grep2.sh");
}



void MainWindow::attackDjiTelem()
{
    //deauth script

}
