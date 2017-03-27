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


private slots:
    void goToMainMenu();
    void sendData();
    void populateLineEdit();
    void receiveDetect();
    void displayConnectivity();
    void startLog();
    void endLog();
};

#endif // MAINWINDOW_H
