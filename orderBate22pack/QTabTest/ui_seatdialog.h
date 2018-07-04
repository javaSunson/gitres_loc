/********************************************************************************
** Form generated from reading UI file 'seatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEATDIALOG_H
#define UI_SEATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SeatDialog
{
public:

    void setupUi(QDialog *SeatDialog)
    {
        if (SeatDialog->objectName().isEmpty())
            SeatDialog->setObjectName(QStringLiteral("SeatDialog"));
        SeatDialog->resize(1020, 671);

        retranslateUi(SeatDialog);

        QMetaObject::connectSlotsByName(SeatDialog);
    } // setupUi

    void retranslateUi(QDialog *SeatDialog)
    {
        SeatDialog->setWindowTitle(QApplication::translate("SeatDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class SeatDialog: public Ui_SeatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEATDIALOG_H
