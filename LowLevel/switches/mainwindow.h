#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QProcess>
#include <QTimer>
#include <QDebug>

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
    QProcess* sw1read;
    QProcess* sw2read;
    QTimer* swCheckTimer;

private slots:
    void readSwitches();
    void readOutput1();
    void readOutput2();

};

#endif // MAINWINDOW_H
