#include "shark.h"

Shark::Shark(QObject *parent) : QObject(parent)
{
    autoTakedown = true;
    dVector = new DetectionVector();
    aVector = new AttackVector();
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
