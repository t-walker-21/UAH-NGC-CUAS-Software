#ifndef SWITCHREADER_H
#define SWITCHREADER_H

#include <QObject>
#include <QProcess>

class SwitchReader : public QObject
{
    Q_OBJECT
public:
    explicit SwitchReader(QObject *parent = 0);

private:
    QProcess* sw1Read;
    QProcess* sw2Read;
    QProcess* sw3Read;

signals:
    void sw1Val(bool state);
    void sw2Val(bool state);
    void sw3Val(bool state);

public slots:
};

#endif // SWITCHREADER_H
