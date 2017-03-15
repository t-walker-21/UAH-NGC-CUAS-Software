#ifndef XBEERADIO_H
#define XBEERADIO_H

#include <QObject>

class XbeeRadio : public QObject
{
    Q_OBJECT
public:
    explicit XbeeRadio(QObject *parent = 0);

signals:

public slots:
};

#endif // XBEERADIO_H
