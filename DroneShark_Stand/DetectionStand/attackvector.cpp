#include "attackvector.h"


AttackVector::AttackVector(QObject *parent) : QObject(parent)
{
    engage = new QProcess();
}

 void AttackVector::installAttack(QString name,QString script,int level)
 {
     this->script = script;
     this->level = level;
     this->name = name;
 }

 void AttackVector::attack()
 {
     engage->start("sh " + this->script);

 }

void AttackVector::haltAttack()
{
    engage->kill();
}

