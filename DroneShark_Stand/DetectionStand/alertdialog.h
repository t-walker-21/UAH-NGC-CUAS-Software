#ifndef ALERTDIALOG_H
#define ALERTDIALOG_H

#include <QDialog>
#include <QTimer>

namespace Ui {
class AlertDialog;
}

class AlertDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AlertDialog(QWidget *parent = 0);
    ~AlertDialog();

private:
    Ui::AlertDialog *ui;
    QTimer* fadeTimer;
    int timerCount;

private slots:
    void updateOpacity();
};

#endif // ALERTDIALOG_H
