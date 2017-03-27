#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //configureSerialPort();
    //connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(goToMainMenu()));
    //connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(sendData()));
    //connect(xbee,SIGNAL(readyRead()),this,SLOT(populateLineEdit()));
    //ui->lineEdit_2->setEnabled(false);

    /*shark = new Shark();
    alert = new Alert();

    connect(shark->dVector,SIGNAL(droneDetected()),shark->aVector,SLOT(attack()));
    connect(shark->dVector,SIGNAL(droneDetected()),alert,SLOT(droneDetected()));

    shark->dVector->installDetection("../scripts/exampleDet.sh","example","drone");
    shark->dVector->detect();*/

    this->hwMan = new HardwareManager();

    connect(hwMan,SIGNAL(hackRFRemoved()),this,SLOT(displayConnectivity()));

}

MainWindow::~MainWindow()
{
    //xbee->close();
    delete ui;
}


void MainWindow::goToMainMenu()
{
    mainMenu = new MainMenu();
    mainMenu->show();
    this->setHidden(true);
}

void MainWindow::sendData()
{
   // QByteArray info(ui->lineEdit->text().toStdString().c_str());
   // xbee->write(info);
   // ui->lineEdit->clear();
}

void MainWindow::populateLineEdit()
{
    //disconnect(xbee,SIGNAL(r(eadyRead()),this,SLOT(populateLineEdit()));
    for(int i = 0;i < 90000;i++){}
    //QString temp(xbee->readAll());
    //ui->lineEdit_2->setText(ui->lineEdit_2->text()+temp);
   // ui->lineEdit_2->setText(temp);
   // qDebug() << "I am in this method" << temp << endl;
     //connect(xbee,SIGNAL(readyRead()),this,SLOT(populateLineEdit()));
}

void MainWindow::receiveDetect()
{
    qDebug() << "generic drone detected";
}

void MainWindow::displayConnectivity()
{
    qDebug() << "HACKRF has been disconnected";
}
