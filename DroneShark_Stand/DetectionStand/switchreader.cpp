#include "switchreader.h"

SwitchReader::SwitchReader(QObject *parent) : QObject(parent)
{
    sw1 = sw2 = sw3 = true; //initialize switches to true since there is a pull-up resistor
    switchReadTimer = new QTimer();

    sw1Read = new QProcess();
    sw2Read = new QProcess();
    sw3Read = new QProcess();

    switchReadTimer->setInterval(100); //check switches @ 10 Hz

    connect(switchReadTimer,SIGNAL(timeout()),this,SLOT(readSwitches()));
    connect(sw1Read,SIGNAL(readyRead()),this,SLOT(readOutput1()));
    connect(sw2Read,SIGNAL(readyRead()),this,SLOT(readOutput2()));

    switchReadTimer->start();
}


void SwitchReader::readSwitches()
{
    sw1Read->start("sh ../SW1_READ.sh");
    sw2Read->start("sh ../SW2_READ.sh");
}

void SwitchReader::readOutput1()
{

    QString state = sw1Read->readAll();

    if (state == "1\n")
    {
        if(!sw1)
        {
            emit sw1ValChanged(false);
            sw1 = false;
        }
    }

    else if (state == "0\n")
    {
        if (sw1)
        {
            emit sw1ValChanged(true);
            sw1 = true;
        }
    }
}

void SwitchReader::readOutput2()
{

    QString state = sw2Read->readAll();

    if (state == "1\n")
    {
        if(!sw2)
        {
            emit sw2ValChanged(false);
            sw2 = false;
        }
    }

    else if (state == "0\n")
    {
        if (sw2)
        {
            emit sw2ValChanged(true);
            sw2 = true;
        }
    }
}
