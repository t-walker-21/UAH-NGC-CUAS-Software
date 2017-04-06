#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QDebug>
#include <QTimer>

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
    QProcess* scanProc; //process to start airDump and save to file
    QProcess* readProc; //process to read dump file
   // QProcess* prepProc; //process to remove dump files and take down wlan0
    QProcess* deauthProc;
    QTimer* timer; //timer to run readProc
    void attackDji(); //deauth transmitter AP and shutdown down telemetry
    // bool droneFound; //change to ENUM

private slots:
    void readScanOutput(); //slot to read from script output
    //void checkAgain(); //run checkProc script

};

#endif // MAINWINDOW_H
