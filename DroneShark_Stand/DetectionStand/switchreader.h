#ifndef SWITCHREADER_H
#define SWITCHREADER_H

#include <QObject>

class SwitchReader : public QObject
{
    Q_OBJECT
public:
    explicit SwitchReader(QObject *parent = 0);

signals:

public slots:
};

#endif // SWITCHREADER_H
