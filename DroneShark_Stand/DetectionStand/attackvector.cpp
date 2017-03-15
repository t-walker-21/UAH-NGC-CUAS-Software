#include "attackvector.h"


AttackVector::AttackVector(QString script,int level,QString name)
{
    this->script = script;
    this->level = level;
    this->name = name;
    bite = new QProcess();
}

 void AttackVector::installAttack(QString name,QString script,int level)
 {
     this->script = script;
     this->level;
 }

 void AttackVector::attack()
 {
     bite->start("sh " + this->script);

 }


