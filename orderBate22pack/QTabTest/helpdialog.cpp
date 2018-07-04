#include "helpdialog.h"
#include "ui_helpdialog.h"

HelpDialog::HelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpDialog)
{
    ui->setupUi(this);
}

HelpDialog::~HelpDialog()
{
    delete ui;
}

void HelpDialog::on_pushButton_clicked()    /**Time 2018/06/30 未知bug**/
{
    if(co<3){
    co++;
    }
    ui->stackedWidget->setCurrentIndex(co);
}

void HelpDialog::on_pushButton_2_clicked()
{   if(co>-1){
    co--;
    }
    ui->stackedWidget->setCurrentIndex(co);
}
