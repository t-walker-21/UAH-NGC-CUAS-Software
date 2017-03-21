#ifndef ATTACKVECTOR_H
#define ATTACKVECTOR_H

#include <QObject>
#include <QProcess>

class AttackVector: public QObject
{
public:
    explicit AttackVector(QObject *parent = 0);
    void installAttack(QString name,QString script,int level); // name vector, place script in object, and set attack level
    void haltAttack(); // stop issuing engage script

private:
    int level; //attack level
    QString name; //name of attack
    QString script; // script to engage drone
    QProcess* engage; // process to run engage script

public slots:
    void attack(); // start attack script

};

#endif // ATTACKVECTOR_H
