#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QSerialPort>
#include <mainmenu.h>
#include <QTime>
#include <shark.h>
#include <alert.h>
#include <log.h>
#include <hardwaremanager.h>
#include <commsmanagers.h>
#include <xbeeradio.h>
#include <switchreader.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    MainMenu* mainMenu;
    QString* receivedData;
    Shark* shark;
    Alert* alert;
    Log* log;
    HardwareManager* hwMan;
    CommsManagers* comms;
    XbeeRadio* xbee;
    SwitchReader* scanner;
    bool deployed;


private slots:
    void sendData();
    void receiveDetect(QString message);
    void displayConnectivity();
    void startSystem();
    void stopSystem();
};

#endif // MAINWINDOW_H
