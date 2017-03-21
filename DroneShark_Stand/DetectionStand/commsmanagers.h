#ifndef COMMSMANAGERS_H
#define COMMSMANAGERS_H

#include <QObject>
#include "xbeecomms.h"
#include "xbeeradio.h"

class CommsManagers : public QObject
{
    Q_OBJECT
public:
    explicit CommsManagers(QObject *parent = 0);
    void sendMessage(QString message); //send message through xbee

private:
    XbeeRadio* xbee; //xbee to handle communcations with central computer


signals:

public slots:
    void processXbeeData(); // use xbee enumerations to parse data and issue commands
};

#endif // COMMSMANAGERS_H
