#ifndef ALERT_H
#define ALERT_H
#include"alertdialog.h"
#include<QProcess>
#include<QTimer>

#define SCNPER 1000
#define DETPER 250


class Alert
{
public:
    Alert();
    void standby(); //solid green light
    void droneDetected(); //flash red and sound buzzer @ 4 Hz
    void scanning(); //flash yellow @ 1 Hz

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

};

#endif // ALERT_H
