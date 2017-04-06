/********************************************************************************
** Form generated from reading UI file 'alertdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALERTDIALOG_H
#define UI_ALERTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AlertDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *AlertTitle;

    void setupUi(QDialog *AlertDialog)
    {
        if (AlertDialog->objectName().isEmpty())
            AlertDialog->setObjectName(QStringLiteral("AlertDialog"));
        AlertDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AlertDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        AlertTitle = new QLabel(AlertDialog);
        AlertTitle->setObjectName(QStringLiteral("AlertTitle"));
        AlertTitle->setGeometry(QRect(130, 120, 67, 17));

        retranslateUi(AlertDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AlertDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AlertDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AlertDialog);
    } // setupUi

    void retranslateUi(QDialog *AlertDialog)
    {
        AlertDialog->setWindowTitle(QApplication::translate("AlertDialog", "Dialog", 0));
        AlertTitle->setText(QApplication::translate("AlertDialog", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class AlertDialog: public Ui_AlertDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALERTDIALOG_H
