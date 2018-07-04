/********************************************************************************
** Form generated from reading UI file 'salelog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALELOG_H
#define UI_SALELOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SaleLog
{
public:
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;
    QLineEdit *filename;
    QPushButton *pushButton;

    void setupUi(QDialog *SaleLog)
    {
        if (SaleLog->objectName().isEmpty())
            SaleLog->setObjectName(QStringLiteral("SaleLog"));
        SaleLog->resize(1052, 735);
        dateTimeEdit = new QDateTimeEdit(SaleLog);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(410, 100, 194, 24));
        label = new QLabel(SaleLog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 110, 101, 16));
        textEdit = new QTextEdit(SaleLog);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(290, 160, 691, 501));
        label_2 = new QLabel(SaleLog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 60, 121, 31));
        filename = new QLineEdit(SaleLog);
        filename->setObjectName(QStringLiteral("filename"));
        filename->setGeometry(QRect(410, 60, 113, 23));
        pushButton = new QPushButton(SaleLog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(670, 80, 89, 24));

        retranslateUi(SaleLog);

        QMetaObject::connectSlotsByName(SaleLog);
    } // setupUi

    void retranslateUi(QDialog *SaleLog)
    {
        SaleLog->setWindowTitle(QApplication::translate("SaleLog", "Dialog", 0));
        label->setText(QApplication::translate("SaleLog", "\346\214\211\346\227\266\351\227\264\346\237\245\347\234\213", 0));
        label_2->setText(QApplication::translate("SaleLog", "\346\214\211\346\226\207\344\273\266\345\220\215\346\237\245\347\234\213", 0));
        pushButton->setText(QApplication::translate("SaleLog", "\346\237\245\347\234\213", 0));
    } // retranslateUi

};

namespace Ui {
    class SaleLog: public Ui_SaleLog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALELOG_H
