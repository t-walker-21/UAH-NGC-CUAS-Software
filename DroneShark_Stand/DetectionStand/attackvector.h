#ifndef ATTACKVECTOR_H
#define ATTACKVECTOR_H

#include <QObject>
#include <QProcess>

class AttackVector: public QObject
{
public:
    explicit AttackVector(QObject *parent = 0);
    void installAttack(QString name,QString script,int level);
    void haltAttack();

private:
    int level;
    QString name;
    QString script;
    QProcess* engage;

public slots:
    void attack();

};

#endif // ATTACKVECTOR_H
