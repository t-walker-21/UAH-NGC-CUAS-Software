#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    configureSerialPort();
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(goToMainMenu()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(sendData()));
    connect(xbee,SIGNAL(readyRead()),this,SLOT(populateLineEdit()));
    ui->lineEdit_2->setEnabled(false);

}

MainWindow::~MainWindow()
{
    xbee->close();
    delete ui;
}

bool MainWindow::configureSerialPort()
{
    xbee = new QSerialPort(this);
    xbee->setPortName("/dev/ttyUSB0");
    xbee->setBaudRate(QSerialPort::Baud9600);
    xbee->setParity(QSerialPort::NoParity);
    xbee->setDataBits(QSerialPort::Data8);
    xbee->setFlowControl(QSerialPort::NoFlowControl);
    xbee->setStopBits(QSerialPort::OneStop);
    xbee->open(QIODevice::ReadWrite);

    if (xbee->isOpen())
    {
        qDebug() << "Sucessfull opened " << xbee->portName() << endl;
        return true;
    }

    else
    {
        qDebug() << "Could not open " << xbee->portName() << endl;
        return false;
    }

}

void MainWindow::goToMainMenu()
{
    mainMenu = new MainMenu();
    mainMenu->show();
    this->setHidden(true);
}

void MainWindow::sendData()
{
    QByteArray info(ui->lineEdit->text().toStdString().c_str());
    xbee->write(info);
    ui->lineEdit->clear();
}

void MainWindow::populateLineEdit()
{
    //disconnect(xbee,SIGNAL(r(eadyRead()),this,SLOT(populateLineEdit()));
    for(int i = 0;i < 90000;i++){}
    QString temp(xbee->readAll());
    //ui->lineEdit_2->setText(ui->lineEdit_2->text()+temp);
    ui->lineEdit_2->setText(temp);
    qDebug() << "I am in this method" << temp << endl;
     //connect(xbee,SIGNAL(readyRead()),this,SLOT(populateLineEdit()));
}
