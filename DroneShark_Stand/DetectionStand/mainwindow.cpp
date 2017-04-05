#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    deployed = false;

    this->shark = new Shark();
    this->alert = new Alert();

    alert->standby();
    shark->installDetection("../../Scripts/myGrep.sh","test","drones");
    connect(ui->startButton,SIGNAL(clicked(bool)),this,SLOT(startSystem()));
    connect(shark,SIGNAL(droneDetected()),alert,SLOT(droneDetected()));
    connect(shark,SIGNAL(droneDetected()),this,SLOT(receiveDetect()));

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

    //this->hwMan = new HardwareManager();
    //this->log = new Log();
    //connect(ui->startLog,SIGNAL(clicked(bool)),log,SLOT(startRecording()));
    //connect(ui->endLog,SIGNAL(clicked(bool)),log,SLOT(stopRecording()));
    //connect(ui->alert,SIGNAL(clicked(bool)),alert,SLOT(deployGUI()));
    //connect(hwMan,SIGNAL(hackRFRemoved()),alert,SLOT(droneDetected()));
    //connect(hwMan,SIGNAL(hackRFRemoved()),this,SLOT(displayConnectivity()));



}

MainWindow::~MainWindow()
{
    //xbee->close();
    alert->killAllLights(true);
    delete ui;
}

void MainWindow::startSystem()
{
    ui->startButton->setEnabled(false);
    alert->scanning();
    shark->startShark();
    deployed = true;
    ui->statusLabel->setText("STATUS: RUNNING");
}

void MainWindow::stopSystem()
{

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

void MainWindow::receiveDetect()
{
    qDebug() << "generic drone detected";
}

void MainWindow::displayConnectivity()
{
    qDebug() << "HACKRF has been disconnected";
}

void MainWindow::startLog()
{

}

void MainWindow::endLog()
{

}

