#include "shark.h"

Shark::Shark(QObject *parent) : QObject(parent)
{
    autoTakedown = true;

}

void Shark::bite()
{
    aVector.attack();
}

void Shark::stopBite()
{
    aVector.haltAttack();
}

void Shark::setAutoTakedown(bool state)
{
    autoTakedown = state;
}
