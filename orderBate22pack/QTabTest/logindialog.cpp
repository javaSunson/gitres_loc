#include "logindialog.h"
#include "ui_logindialog.h"
#include "dialog.h"
#include <QPalette>
#include <QFile>
#include <QString>
#include <QTextStream>
#include <changestyle.h>
#include <QPixmap>
#include "staticfiled.h"

/****Time: 2018/06/16 实现admin用户和普通用户的分离****/
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    QFile file("button.qss");
    file.open(QFile::ReadOnly);
   /* if(file.isOpen()){
        ui->banquan->setText("读取成功");

        QTextStream filetext(&file);
        QString stylesheet = filetext.readAll();
        this->setStyleSheet(stylesheet);

    }else{
        ui->banquan->setText("读取失败");
    }*/
    file.close();
    //ui->pushButton->setStyleSheet(stylesheet);

    ui->setupUi(this);

    /************
    QPixmap pixmap(":/new/prefix1/images/1.png");
    QPalette palette;
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    setPalette(palette);
    */


    QPalette  palette (this->palette());
    //palette.setColor(QPalette::Background, Qt::green);
    QPixmap pixmap("back.jpg");
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    this->setPalette( palette );
    QString filename("tou.jpg");
    QImage* img=new QImage;
    if(! ( img->load(filename) ) ) //加载图像
    {
        QMessageBox::information(this,
                     tr("打开图像失败"),
                     tr("打开图像失败!"));
        delete img;
        return;
    }
    ui->touxiang->setPixmap(QPixmap::fromImage(*img));
    ui->password->setEchoMode(QLineEdit::PasswordEchoOnEdit);

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_pushButton_clicked()
{
    /******Time:2018/06/12 账户控制可以使用数据库
    *******当前还好，但是后期，需要管理员账户可能只有1个，但是用户账户可能多个，也可使用文本读写
    ********/
    /***


    /******* Time:2018/6/14 对于管理员和普通用户的测试
    QSqlQuery  query;
    ******/
    createConnection();
    QString name=ui->usename->text();
    QString password=ui->password->text();
    if(name=="admin"){
        //flags=false;
        status=true;
        QString filename1("adtou.jpg");
        QImage* img1=new QImage;
        if(! ( img1->load(filename1) ) ) //加载图像
        {
            QMessageBox::information(this,
                         tr("打开图像失败"),
                         tr("打开图像失败!"));
            delete img1;
            return;
        }
        ui->touxiang->setPixmap(QPixmap::fromImage(*img1));
    }

    if(loguser(name, password)){
        if(isAdmin(name)){
                flags=true;
    }

        accept();
    }else{
        ui->banquan->setText("账户或者密码错误!");
    }



}
