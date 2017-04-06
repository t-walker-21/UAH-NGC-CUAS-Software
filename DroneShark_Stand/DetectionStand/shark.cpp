#include "shark.h"

Shark::Shark(QObject *parent) : QObject(parent)
{
    autoTakedown = true;
    dVector = new DetectionVector();
    aVector = new AttackVector();

    connect(dVector,SIGNAL(droneDetected()),this,SLOT(alertSys()));
}

void Shark::bite()
{
    //aVector->attack();
}

void Shark::stopBite()
{
    aVector->haltAttack();
}

void Shark::setAutoTakedown(bool state)
{
    autoTakedown = state;
}

void Shark::installDetection(QString script, QString name, QString expect)
{
    dVector->installDetection(script,name,expect);
}

void Shark::startShark()
{
    dVector->detect();
}

void Shark::stopShark()
{
    dVector->haltDetect();
    aVector->haltAttack();
}

void Shark::alertSys()
{
    emit droneDetected(dVector->getName());
}
