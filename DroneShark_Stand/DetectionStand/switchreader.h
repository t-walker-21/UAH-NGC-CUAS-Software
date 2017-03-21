#ifndef SWITCHREADER_H
#define SWITCHREADER_H

#include <QObject>
#include <QProcess>
#include <QTimer>

class SwitchReader : public QObject
{
    Q_OBJECT
public:
    explicit SwitchReader(QObject *parent = 0);

private:
    bool sw1; // variable to store state of switch 1
    bool sw2; // variable to store state of switch 2
    bool sw3; // variable to store state of switch 3

    QProcess* sw1Read; // process to read the state of the flip switch 1
    QProcess* sw2Read; // process to read the state of the flip switch 2
    QProcess* sw3Read; //process to read the state of the flip switch 3

    QTimer* switchReadTimer; //timer to run switch read processes

signals:
    void sw1ValChanged(bool state); // signal to emit if position of switch 1 changes
    void sw2ValChanged(bool state); // signal to emit if position of switch 2 changes
    void sw3ValChanged(bool state); // signal to emit if poistion of switch 3 changes

public slots:
};

#endif // SWITCHREADER_H
