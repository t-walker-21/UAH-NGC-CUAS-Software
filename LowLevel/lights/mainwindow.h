#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
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
    bool YELLOW;
    bool GREEN;
    bool RED;
    bool BUZZER;
    QProcess* redProc;
    QProcess* yellowProc;
    QProcess* greenProc;
    QProcess* buzzerProc;
    QTimer* flashTimer;

private slots:
    void greenToggle();
    void yellowToggle();
    void redToggle();
    void buzzerToggle();
    void adjustDutyCycle(int dutyCycle);
    void toggleLights();
};

#endif // MAINWINDOW_H
