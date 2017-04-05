#include "alert.h"

Alert::Alert(QObject *parent) : QObject(parent)
{
    initProc = new QProcess();
    initProc->start("sudo sh ../../LowLevel/INIT_LIGHTS.sh"); //TODO:init light script
    initProc->waitForFinished(1000);
        YELLOW_STATE    = false;
        GREEN_STATE     = false;
        RED_STATE       = false;
        BUZZER_STATE    = false;

        RED     = false;
        GREEN   = false;
        YELLOW  = false;
        BUZZER  = false;

        redProc = new QProcess();
        yellowProc = new QProcess();
        greenProc = new QProcess();
        buzzerProc = new QProcess();
        flashTimer = new QTimer();

        connect(flashTimer,SIGNAL(timeout()),this,SLOT(toggleLights()));
        delete initProc;
}

Alert::~Alert()
{
    killAllLights(true);
    delete redProc;
    delete yellowProc;
    delete greenProc;
    delete buzzerProc;
    delete flashTimer;
}

void Alert::buzzerToggle()
{
    if (BUZZER_STATE) //light is on
    {
        buzzerProc->start("sh ../../LowLevel/BUZZER_OFF.sh");
        BUZZER_STATE = false;
    }

    else //light is off
    {
        buzzerProc->start("sh ../../LowLevel/BUZZER_ON.sh");
        BUZZER_STATE = true;
    }
}

void Alert::yellowToggle()
{
    if (YELLOW_STATE) //light is on
    {
        yellowProc->start("sh ../../LowLevel/YELLOW_OFF.sh");
        YELLOW_STATE = false;
    }

    else //light is off
    {
        yellowProc->start("sh ../../LowLevel/YELLOW_ON.sh");
        YELLOW_STATE = true;
    }
}

void Alert::greenToggle()
{
    if (GREEN_STATE) //light is on
    {
        greenProc->start("sh ../../LowLevel/GREEN_OFF.sh");
        GREEN_STATE = false;
    }

    else //light is off
    {
        greenProc->start("sh ../../LowLevel/GREEN_ON.sh");
        GREEN_STATE = true;
    }

}

void Alert::redToggle()
{
    if (RED_STATE) //light is on
    {
        redProc->start("sh ../../LowLevel/RED_OFF.sh");
        RED_STATE = false;
    }

    else //light is off
    {
        redProc->start("sh ../../LowLevel/RED_ON.sh");
        RED_STATE = true;
    }


}

void Alert::toggleLights()
{
    if (RED)
    {
        redToggle();
    }

    if (YELLOW)
    {
        yellowToggle();
    }

    if (GREEN)
    {
       greenToggle();
    }

    if (BUZZER)
    {
        buzzerToggle();
    }
}

void Alert::scanning() //only yellow will flash
{
    flashTimer->setInterval(SCNPER);
    killAllLights(false);

    YELLOW = true;
}

void Alert::standby() //only green is solid
{

    killAllLights(true);

    if(!GREEN_STATE)
    {
        greenToggle();
    }

    flashTimer->start();
}

void Alert::droneDetected() //only red and buzzer will flash
{
    flashTimer->setInterval(DETPER);
    killAllLights(false);
    RED = BUZZER = true;
}

void Alert::killAllLights(bool killTimer) //turnoff all lights
{
    if(killTimer && flashTimer->isActive())
    {
        flashTimer->stop();
    }

    RED = GREEN = BUZZER = YELLOW = false;

    if(GREEN_STATE)
    {
        greenToggle();

    }

    if(RED_STATE)
    {
        redToggle();

    }

    if(YELLOW_STATE)
    {
        yellowToggle();

    }

    if(BUZZER_STATE)
    {
        buzzerToggle();

    }

}

void Alert::deployGUI() //setup and show alertWindow;
{
    alertWindow = new AlertDialog();
    alertWindow->showFullScreen();
    //temp->setModal(false);
}

void Alert::checkHardware() //check for hardware
{

}
