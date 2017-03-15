#ifndef ATTACKVECTOR_H
#define ATTACKVECTOR_H
#include <QProcess>

class AttackVector
{
public:
    AttackVector(QString script,int level,QString name);
    void installAttack(QString name,QString script,int level);
    void attack();
    void haltAttack();

private:
    int level;
    QString name;
    QString script;
    QProcess* engage;

};

#endif // ATTACKVECTOR_H
