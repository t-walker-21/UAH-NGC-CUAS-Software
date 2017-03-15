#ifndef DETECTIONSTAND_H
#define DETECTIONSTAND_H
#include <QQueue>
#include <attackvector.h>

class DetectionStand
{
public:
    DetectionStand();

private:
    int standID;
    QQueue<AttackVector> attacks;
};

#endif // DETECTIONSTAND_H
