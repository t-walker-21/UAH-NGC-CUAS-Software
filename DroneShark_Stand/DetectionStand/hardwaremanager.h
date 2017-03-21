#ifndef HARDWAREMANAGER_H
#define HARDWAREMANAGER_H

#include <QObject>

class HardwareManager : public QObject
{
    Q_OBJECT
public:
    explicit HardwareManager(QObject *parent = 0);

private:
    bool hackRFConnected; //connection status of hackRF
    bool alfaWifiConnected; //connection status of alfa wifi adapter
    bool xbeeRadioConnected; //connection status of xbee radio


signals:
   void hackRFRemoved(); //signal emitted when hackRF is removed unexpectedly
   void alfaWfiRemoved(); //signal emitted when alfa wifi adapter is removed unexpectedly
   void xbeeRadioRemoved(); //signal emitted when xbee radio is removed unexpectedly


public slots:
};

#endif // HARDWAREMANAGER_H
