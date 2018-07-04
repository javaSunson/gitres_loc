/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QToolButton *toolButton;
    QLineEdit *jiansuo;
    QPushButton *b_jiansuo;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *xuancai;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *caiyulan;
    QPushButton *changeduser;
    QLabel *ccPri;
    QLabel *label_4;
    QWidget *tab_2;
    QLabel *xiadan;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QLabel *label_6;
    QLineEdit *cusname;
    QLineEdit *custel;
    QLineEdit *zhuohao;
    QLineEdit *taste;
    QLabel *label_7;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QCalendarWidget *calendarWidget;
    QTextEdit *xuanhao;
    QPushButton *pushButton_14;
    QTableView *tableView_2;
    QWidget *tab_3;
    QPushButton *pushButton_13;
    QPushButton *cacl;
    QProgressBar *progressBar;
    QLabel *dayin;
    QTextEdit *kehuxinxi;
    QTextEdit *xianshijiesuan;
    QPushButton *pushButton_3;
    QLabel *lianjie;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_8;
    QPushButton *helpdia;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(1112, 702);
        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 20, 1031, 661));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 70, 72, 15));
        toolButton = new QToolButton(tab);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(10, 600, 47, 21));
        jiansuo = new QLineEdit(tab);
        jiansuo->setObjectName(QStringLiteral("jiansuo"));
        jiansuo->setGeometry(QRect(30, 550, 113, 21));
        b_jiansuo = new QPushButton(tab);
        b_jiansuo->setObjectName(QStringLiteral("b_jiansuo"));
        b_jiansuo->setGeometry(QRect(160, 550, 71, 28));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 350, 93, 28));
        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(80, 390, 93, 28));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(280, 60, 711, 531));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 20, 101, 21));
        xuancai = new QLabel(tab);
        xuancai->setObjectName(QStringLiteral("xuancai"));
        xuancai->setGeometry(QRect(330, 20, 651, 20));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(80, 440, 93, 28));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(80, 480, 93, 28));
        caiyulan = new QLabel(tab);
        caiyulan->setObjectName(QStringLiteral("caiyulan"));
        caiyulan->setGeometry(QRect(60, 150, 150, 150));
        changeduser = new QPushButton(tab);
        changeduser->setObjectName(QStringLiteral("changeduser"));
        changeduser->setGeometry(QRect(280, 600, 89, 24));
        ccPri = new QLabel(tab);
        ccPri->setObjectName(QStringLiteral("ccPri"));
        ccPri->setGeometry(QRect(760, 20, 161, 16));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(670, 20, 72, 15));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        xiadan = new QLabel(tab_2);
        xiadan->setObjectName(QStringLiteral("xiadan"));
        xiadan->setGeometry(QRect(20, 10, 601, 16));
        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(910, 70, 93, 28));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(910, 140, 93, 28));
        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(910, 210, 93, 28));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(510, 70, 131, 41));
        cusname = new QLineEdit(tab_2);
        cusname->setObjectName(QStringLiteral("cusname"));
        cusname->setGeometry(QRect(550, 150, 113, 23));
        custel = new QLineEdit(tab_2);
        custel->setObjectName(QStringLiteral("custel"));
        custel->setGeometry(QRect(550, 190, 113, 23));
        zhuohao = new QLineEdit(tab_2);
        zhuohao->setObjectName(QStringLiteral("zhuohao"));
        zhuohao->setGeometry(QRect(550, 230, 113, 23));
        taste = new QLineEdit(tab_2);
        taste->setObjectName(QStringLiteral("taste"));
        taste->setGeometry(QRect(550, 270, 113, 61));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(460, 150, 72, 15));
        radioButton = new QRadioButton(tab_2);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(690, 150, 117, 21));
        radioButton_2 = new QRadioButton(tab_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(760, 150, 117, 21));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(460, 190, 72, 15));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(441, 230, 91, 20));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(460, 310, 72, 15));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(460, 430, 72, 15));
        calendarWidget = new QCalendarWidget(tab_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(550, 350, 281, 211));
        xuanhao = new QTextEdit(tab_2);
        xuanhao->setObjectName(QStringLiteral("xuanhao"));
        xuanhao->setGeometry(QRect(50, 90, 211, 61));
        pushButton_14 = new QPushButton(tab_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(290, 110, 121, 24));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(50, 170, 341, 321));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_13 = new QPushButton(tab_3);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(560, 580, 93, 28));
        cacl = new QPushButton(tab_3);
        cacl->setObjectName(QStringLiteral("cacl"));
        cacl->setGeometry(QRect(260, 580, 93, 28));
        progressBar = new QProgressBar(tab_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(630, 520, 118, 23));
        progressBar->setValue(24);
        dayin = new QLabel(tab_3);
        dayin->setObjectName(QStringLiteral("dayin"));
        dayin->setGeometry(QRect(461, 520, 161, 20));
        kehuxinxi = new QTextEdit(tab_3);
        kehuxinxi->setObjectName(QStringLiteral("kehuxinxi"));
        kehuxinxi->setGeometry(QRect(570, 70, 261, 381));
        xianshijiesuan = new QTextEdit(tab_3);
        xianshijiesuan->setObjectName(QStringLiteral("xianshijiesuan"));
        xianshijiesuan->setGeometry(QRect(70, 60, 431, 391));
        tabWidget->addTab(tab_3, QString());
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 20, 93, 28));
        lianjie = new QLabel(Dialog);
        lianjie->setObjectName(QStringLiteral("lianjie"));
        lianjie->setGeometry(QRect(360, 20, 91, 16));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 20, 101, 16));
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 20, 101, 31));
        pushButton_8 = new QPushButton(Dialog);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(830, 20, 101, 31));
        helpdia = new QPushButton(Dialog);
        helpdia->setObjectName(QStringLiteral("helpdia"));
        helpdia->setGeometry(QRect(990, 10, 89, 24));

        retranslateUi(Dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "\350\231\271\346\242\246\347\202\271\351\244\220", 0));
        toolButton->setText(QApplication::translate("Dialog", "\346\215\242\350\202\244", 0));
#ifndef QT_NO_STATUSTIP
        jiansuo->setStatusTip(QApplication::translate("Dialog", "\350\257\267\350\276\223\345\205\245\350\217\234\345\220\215", 0));
#endif // QT_NO_STATUSTIP
        b_jiansuo->setText(QApplication::translate("Dialog", "\346\243\200\347\264\242", 0));
        pushButton_4->setText(QApplication::translate("Dialog", "\347\262\276\345\223\201\347\203\255\350\217\234", 0));
        pushButton_5->setText(QApplication::translate("Dialog", "\347\262\276\345\223\201\345\206\267\350\217\234", 0));
        label_2->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\351\200\211\346\213\251\347\232\204\346\230\257:", 0));
        xuancai->setText(QApplication::translate("Dialog", "\347\251\272", 0));
        pushButton_6->setText(QApplication::translate("Dialog", "\351\205\222\346\260\264\351\245\256\346\226\231", 0));
        pushButton_7->setText(QApplication::translate("Dialog", "\346\265\267\346\264\213\347\233\233\345\256\264", 0));
        caiyulan->setText(QString());
        changeduser->setText(QApplication::translate("Dialog", "\345\210\207\346\215\242\350\264\246\346\210\267", 0));
        ccPri->setText(QApplication::translate("Dialog", "0", 0));
        label_4->setText(QApplication::translate("Dialog", "\345\275\223\345\211\215\344\273\267\346\240\274:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("Dialog", "\347\202\271\351\244\220", 0));
        xiadan->setText(QApplication::translate("Dialog", "\345\212\240\350\275\275\344\270\255.....", 0));
        pushButton_10->setText(QApplication::translate("Dialog", "\345\210\240\351\231\244", 0));
        pushButton_11->setText(QApplication::translate("Dialog", "\346\217\220\344\272\244", 0));
        pushButton_12->setText(QApplication::translate("Dialog", "\346\267\273\345\212\240", 0));
        label_6->setText(QApplication::translate("Dialog", "\350\257\267\345\241\253\345\206\231\345\256\242\344\272\272\344\277\241\346\201\257", 0));
        label_7->setText(QApplication::translate("Dialog", "\345\256\242\346\210\267\345\247\223\345\220\215", 0));
        radioButton->setText(QApplication::translate("Dialog", "\345\205\210\347\224\237", 0));
        radioButton_2->setText(QApplication::translate("Dialog", "\345\260\217\345\247\220", 0));
        label_8->setText(QApplication::translate("Dialog", "\350\201\224\347\263\273\346\226\271\345\274\217", 0));
        label_9->setText(QApplication::translate("Dialog", "\346\241\214\345\217\267\357\274\210\345\244\226\345\215\2260\357\274\211", 0));
        label_10->setText(QApplication::translate("Dialog", "\345\217\243\345\221\263\345\244\207\346\263\250", 0));
        label_11->setText(QApplication::translate("Dialog", "\344\270\213\345\215\225\346\227\266\351\227\264", 0));
        pushButton_14->setText(QApplication::translate("Dialog", "\346\237\245\347\234\213\345\275\223\345\211\215\345\267\262\351\200\211", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Dialog", "\344\270\213\345\215\225", 0));
        pushButton_13->setText(QApplication::translate("Dialog", "\346\211\223\345\215\260\345\260\217\347\245\250", 0));
        cacl->setText(QApplication::translate("Dialog", "\347\273\223\350\264\246", 0));
        dayin->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Dialog", "\347\273\223\347\256\227", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "\351\200\211\344\270\255", 0));
        lianjie->setText(QApplication::translate("Dialog", "\346\255\243\345\234\250\346\243\200\346\265\213...", 0));
        label_3->setText(QApplication::translate("Dialog", "\346\225\260\346\215\256\345\272\223\347\212\266\346\200\201:", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "\344\270\213\345\215\225", 0));
        pushButton_8->setText(QApplication::translate("Dialog", "\347\273\223\347\256\227", 0));
        helpdia->setText(QApplication::translate("Dialog", "\345\270\256\345\212\251", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
