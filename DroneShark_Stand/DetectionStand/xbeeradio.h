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
    QSerialPort* xbeeSerialPort; // serial port to write to Xbee
    bool configureSerialPort(); // configure and attempt to open serial port. Returns TRUE/FALSE if successful

signals:




public slots:
};

#endif // XBEERADIO_H
