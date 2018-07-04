/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label_2;
    QLineEdit *usename;
    QLineEdit *password;
    QLabel *label_3;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *touxiang;
    QLabel *banquan;
    QPushButton *pushButton_2;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(710, 466);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 210, 72, 15));
        usename = new QLineEdit(LoginDialog);
        usename->setObjectName(QStringLiteral("usename"));
        usename->setGeometry(QRect(420, 210, 131, 21));
        password = new QLineEdit(LoginDialog);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(420, 250, 131, 21));
        label_3 = new QLabel(LoginDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(370, 250, 72, 15));
        label = new QLabel(LoginDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 100, 121, 71));
        QFont font;
        font.setFamily(QStringLiteral("04b_21"));
        font.setPointSize(12);
        label->setFont(font);
        pushButton = new QPushButton(LoginDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 300, 93, 28));
        touxiang = new QLabel(LoginDialog);
        touxiang->setObjectName(QStringLiteral("touxiang"));
        touxiang->setGeometry(QRect(130, 130, 181, 181));
        banquan = new QLabel(LoginDialog);
        banquan->setObjectName(QStringLiteral("banquan"));
        banquan->setGeometry(QRect(20, 440, 121, 16));
        pushButton_2 = new QPushButton(LoginDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 430, 93, 28));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("LoginDialog", "\350\264\246\346\210\267", 0));
        label_3->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201", 0));
        label->setText(QApplication::translate("LoginDialog", "\350\231\271\346\242\246\347\202\271\351\244\220\347\263\273\347\273\237", 0));
        pushButton->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        touxiang->setText(QApplication::translate("LoginDialog", "TextLabel", 0));
        banquan->setText(QApplication::translate("LoginDialog", "@\350\231\271\346\242\246\346\234\252\346\235\245\345\256\236\351\252\214\345\256\244", 0));
        pushButton_2->setText(QApplication::translate("LoginDialog", "\346\235\245\347\202\271\351\243\216\346\240\274!", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
