/********************************************************************************
** Form generated from reading UI file 'mandialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANDIALOG_H
#define UI_MANDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ManDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTableView *adtw;
    QLabel *zeren;
    QComboBox *cbb1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *lineEdit;

    void setupUi(QDialog *ManDialog)
    {
        if (ManDialog->objectName().isEmpty())
            ManDialog->setObjectName(QStringLiteral("ManDialog"));
        ManDialog->resize(1090, 723);
        QIcon icon;
        icon.addFile(QStringLiteral("admin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ManDialog->setWindowIcon(icon);
        pushButton = new QPushButton(ManDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 140, 93, 28));
        pushButton_2 = new QPushButton(ManDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 200, 93, 28));
        pushButton_3 = new QPushButton(ManDialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 250, 93, 28));
        pushButton_4 = new QPushButton(ManDialog);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 310, 93, 28));
        adtw = new QTableView(ManDialog);
        adtw->setObjectName(QStringLiteral("adtw"));
        adtw->setGeometry(QRect(280, 130, 701, 481));
        zeren = new QLabel(ManDialog);
        zeren->setObjectName(QStringLiteral("zeren"));
        zeren->setGeometry(QRect(130, 50, 411, 21));
        cbb1 = new QComboBox(ManDialog);
        cbb1->setObjectName(QStringLiteral("cbb1"));
        cbb1->setGeometry(QRect(40, 140, 87, 22));
        pushButton_5 = new QPushButton(ManDialog);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(140, 370, 93, 28));
        pushButton_6 = new QPushButton(ManDialog);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(140, 420, 93, 28));
        pushButton_7 = new QPushButton(ManDialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(910, 40, 89, 24));
        pushButton_8 = new QPushButton(ManDialog);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(140, 470, 89, 24));
        lineEdit = new QLineEdit(ManDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 470, 113, 23));

        retranslateUi(ManDialog);

        QMetaObject::connectSlotsByName(ManDialog);
    } // setupUi

    void retranslateUi(QDialog *ManDialog)
    {
        ManDialog->setWindowTitle(QApplication::translate("ManDialog", "\347\256\241\347\220\206\345\221\230", 0));
        pushButton->setText(QApplication::translate("ManDialog", "\346\237\245\347\234\213\350\217\234\345\215\225", 0));
        pushButton_2->setText(QApplication::translate("ManDialog", "\345\242\236\345\212\240\346\226\260\350\217\234", 0));
        pushButton_3->setText(QApplication::translate("ManDialog", "\345\210\240\351\231\244\350\217\234\345\223\201", 0));
        pushButton_4->setText(QApplication::translate("ManDialog", "\344\277\256\346\224\271\350\217\234\345\223\201", 0));
        zeren->setText(QApplication::translate("ManDialog", "\345\217\213\346\203\205\346\217\220\347\244\272:\345\275\223\345\211\215\346\230\257\347\256\241\347\220\206\345\221\230\346\235\203\351\231\220\357\274\214\346\235\203\345\212\233\350\266\212\345\244\247\357\274\214\350\264\243\344\273\273\350\266\212\345\244\247", 0));
        cbb1->clear();
        cbb1->insertItems(0, QStringList()
         << QApplication::translate("ManDialog", "\347\203\255\350\217\234", 0)
         << QApplication::translate("ManDialog", "\345\206\267\350\217\234", 0)
         << QApplication::translate("ManDialog", "\351\245\256\345\223\201", 0)
         << QApplication::translate("ManDialog", "\346\265\267\351\262\234", 0)
        );
        pushButton_5->setText(QApplication::translate("ManDialog", "\351\224\200\345\224\256\346\227\245\345\277\227", 0));
        pushButton_6->setText(QApplication::translate("ManDialog", "\345\275\223\345\211\215\350\220\245\346\224\266", 0));
        pushButton_7->setText(QApplication::translate("ManDialog", "\345\210\207\346\215\242\350\264\246\346\210\267", 0));
        pushButton_8->setText(QApplication::translate("ManDialog", "\350\257\273/\345\206\231Excel", 0));
    } // retranslateUi

};

namespace Ui {
    class ManDialog: public Ui_ManDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANDIALOG_H
