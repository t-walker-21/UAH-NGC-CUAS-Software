#ifndef SHARK_H
#define SHARK_H

#include <QObject>
#include"attackvector.h"
#include"detectionvector.h"

class Shark : public QObject
{
    Q_OBJECT
public:
    explicit Shark(QObject *parent = 0);

    void setAutoTakedown(bool state);
    void bite();
    void stopBite();
    AttackVector* aVector;
    DetectionVector* dVector;


private:
    bool autoTakedown;




public slots:
};

#endif // SHARK_H
