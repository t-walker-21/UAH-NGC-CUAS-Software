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
    QProcess* scanProc; //process to start airDump
    QProcess* checkProc; //process to check dump file
    QProcess* prepProc; //process to remove dump files and take down wlan0
    QTimer* checkTimer; //timer to run checkProc
    void attackDjiTelem(); //deauth transmitter AP and shutdown down telemetry
    // bool droneFound; //change to ENUM

private slots:
    void process();
    void readScript(); //slot to read from script output
    void runCheck(); //run checkProc script

};

#endif // MAINWINDOW_H
