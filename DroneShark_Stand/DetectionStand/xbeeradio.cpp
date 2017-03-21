#include "xbeeradio.h"

XbeeRadio::XbeeRadio(QObject *parent) : QObject(parent)
{

}

bool XbeeRadio::configureSerialPort()
{
    xbeeSerialPort = new QSerialPort(this);
    xbeeSerialPort->setPortName("/dev/ttyUSB0");
    xbeeSerialPort->setBaudRate(QSerialPort::Baud9600);
    xbeeSerialPort->setParity(QSerialPort::NoParity);
    xbeeSerialPort->setDataBits(QSerialPort::Data8);
    xbeeSerialPort->setFlowControl(QSerialPort::NoFlowControl);
    xbeeSerialPort->setStopBits(QSerialPort::OneStop);
    xbeeSerialPort->open(QIODevice::ReadWrite);

    if (xbeeSerialPort->isOpen())
    {
        qDebug() << "Sucessfull opened " << xbee->portName() << endl;
        return true;
    }

    else
    {
        qDebug() << "Could not open " << xbee->portName() << te << qgetenv("USER") << endl;
        return false;
    }
}

