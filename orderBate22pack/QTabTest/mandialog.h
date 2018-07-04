#ifndef MANDIALOG_H
#define MANDIALOG_H

#include <QDialog>
#include <QCloseEvent>//头文件记得添加
#include "salelog.h"
namespace Ui {
class ManDialog;
}

class ManDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ManDialog(QWidget *parent = 0);
    SaleLog sl;
    ~ManDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::ManDialog *ui;
};

#endif // MANDIALOG_H
