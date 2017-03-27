#ifndef HARDWAREMANAGER_H
#define HARDWAREMANAGER_H

#include <QObject>
#include <QProcess>
#include <QTimer>
#include <QDebug>

class HardwareManager : public QObject
{
    Q_OBJECT
public:
    explicit HardwareManager(QObject *parent = 0);

private:
    bool hackRFConnected; //connection status of hackRF
    bool alfaWifiConnected; //connection status of alfa wifi adapter
    bool xbeeRadioConnected; //connection status of xbee radio

    QProcess* checkHackRF; // process to check state of hack rf
    QProcess* checkAlfa; // process to check state of alfa wifi adapter
    QProcess* checkXbee; // process to check state of xbee

    QTimer* hardwareCheckTimer; //timer to run check processes

signals:
   void hackRFRemoved(); //signal emitted when hackRF is removed unexpectedly
   void alfaWfiRemoved(); //signal emitted when alfa wifi adapter is removed unexpectedly
   void xbeeRadioRemoved(); //signal emitted when xbee radio is removed unexpectedly


public slots:
   void readHackRFOutput(); // check the output from hackRF script
   void readAlfaOutput(); // check the output from alfa script
   void readXbeeRadio(); // check output from xbee radio script
   void checkHardware(); // run scripts to check for hardware
};

#endif // HARDWAREMANAGER_H
