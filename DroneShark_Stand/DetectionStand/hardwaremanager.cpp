#include "hardwaremanager.h"

HardwareManager::HardwareManager(QObject *parent) : QObject(parent)
{
    checkAlfa = new QProcess();
    checkHackRF = new QProcess();
    checkXbee = new QProcess();

    hackRFConnected = alfaWifiConnected = xbeeRadioConnected = false;

    hardwareCheckTimer= new QTimer();
    hardwareCheckTimer->setInterval(1000);

    connect(hardwareCheckTimer,SIGNAL(timeout()),this,SLOT(checkHardware()));
    connect(checkAlfa,SIGNAL(readyRead()),this,SLOT(readAlfaOutput()));
    connect(checkHackRF,SIGNAL(readyRead()),this,SLOT(readHackRFOutput()));
    connect(checkXbee,SIGNAL(readyRead()),this,SLOT(readXbeeRadio()));

    hardwareCheckTimer->start();

}

void HardwareManager::checkHardware()
{
    //checkAlfa->start("...");
    qDebug() << "checking hardware";
    checkHackRF->start("sh ../../Scripts/hackRFHardwareCheck.sh");
    //checkXbee->start("...");
}

void HardwareManager::readAlfaOutput()
{
    //QString input = checkAlfa->readAllStandardOutput();
    //TODO: finish implementation

}

void HardwareManager::readHackRFOutput()
{
    QString input = checkHackRF->readAllStandardOutput();
    qDebug() << "the input is: " << input;
    if (input == "OpenMoko\n")
    {
        hackRFConnected = true;
    }
    else
    {
        hackRFConnected = false;
        emit hackRFRemoved();
    }
}

void HardwareManager::readXbeeRadio()
{
    QString input = checkXbee->readAllStandardOutput();

    if (input == "Future Technology\n")
    {
            xbeeRadioConnected = true;
    }
    else
    {
            xbeeRadioConnected = false;
            emit xbeeRadioRemoved();
    }
}
