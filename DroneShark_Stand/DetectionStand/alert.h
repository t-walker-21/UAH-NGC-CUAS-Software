#ifndef ALERT_H
#define ALERT_H

#include <QObject>
#include"alertdialog.h"
#include<QProcess>
#include<QTimer>

#define SCNPER 1000
#define DETPER 250

class Alert : public QObject
{
    Q_OBJECT
public:
    explicit Alert(QObject *parent = 0);
       ~Alert();



private:
    void killAllLights(bool killTimer); //turn of all lights and buzzer
    void deployGUI();
    void checkHardware(); //check to sure hardware peripherals are still attached

    AlertDialog alertWindow; //GUI window presented upon drone detection to give user information/options to engage threat UAV

    //keep track of lights/buzzer state
    bool YELLOW;
    bool GREEN;
    bool RED;
    bool BUZZER;

    //processes to drive lights/buzzer
    QProcess* redProc;
    QProcess* yellowProc;
    QProcess* greenProc;
    QProcess* buzzerProc;
    QProcess* initProc; //TODO: replace with master initialization process called on startup
    QTimer* flashTimer;

private slots:
    void toggleLights();
    void greenToggle();
    void yellowToggle();
    void redToggle();
    void buzzerToggle();
    void standby(); //solid green light
    void droneDetected(); //flash red and sound buzzer @ 4 Hz
    void scanning(); //flash yellow @ 1 Hz
};

#endif // ALERT_H
