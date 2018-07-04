#include "salelog.h"
#include "ui_salelog.h"
#include <QFile>
SaleLog::SaleLog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaleLog)
{
    ui->setupUi(this);
}

SaleLog::~SaleLog()
{
    delete ui;
}

void SaleLog::on_pushButton_clicked()
{
       QFile file("E:\\code\\QTabTest\\SaleLog\\"+ui->filename->text()+".txt");
       file.open(QIODevice::ReadOnly | QIODevice::Text);
       QByteArray t = file.readAll();
       ui->textEdit->setText(QString(t));
       file.close();
}
