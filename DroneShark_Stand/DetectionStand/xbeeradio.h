#ifndef XBEERADIO_H
#define XBEERADIO_H

#include <QObject>
#include <QSerialPort>

class XbeeRadio : public QObject
{
    Q_OBJECT
public:
    explicit XbeeRadio(QObject *parent = 0);

private:
    QSerialPort* xbee;
    bool configureSerialPort();

signals:

    /*xbee = new QSerialPort(this);
    xbee->setPortName("/dev/ttyUSB0");
    xbee->setBaudRate(QSerialPort::Baud9600);
    xbee->setParity(QSerialPort::NoParity);
    xbee->setDataBits(QSerialPort::Data8);
    xbee->setFlowControl(QSerialPort::NoFlowControl);
    xbee->setStopBits(QSerialPort::OneStop);
    xbee->open(QIODevice::ReadWrite);

    QTime time = QTime::currentTime();
    QString te = time.toString("hh:mm:ss");


    if (xbee->isOpen())
    {
        qDebug() << "Sucessfull opened " << xbee->portName() << endl;
        return true;
    }

    else
    {
        qDebug() << "Could not open " << xbee->portName() << te << qgetenv("USER") << endl;
        return false;
    }*/


public slots:
};

#endif // XBEERADIO_H
