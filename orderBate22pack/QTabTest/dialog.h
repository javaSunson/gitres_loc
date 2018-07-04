#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QTableView>
#include <QSqlError>
#include <QMessageBox>
#include <QList>
#include <QPaintEvent>
#include <QString>
#include "logindialog.h"
#include "helpdialog.h"
/*Time:2018/06/09 --静态加载顺序会导致执行问题
**/
static int iString=0;

static bool createConnection(){
    QSqlDatabase db= QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("sun19950305");
    db.setPort(3306);
    db.setDatabaseName("hmorder");

    //QSqlQuery query;
    //query.exec("use hot;");

    if(!db.open()){
        return true;
    }
    else return false;

}


static bool loguser(QString name, QString password)
{
    //查询usename和password  ***Time:2018/06/14 手残，昨晚写的时候把username写成usename，以后也要注意***

    QString str=QString("select * from uses where usename='%1' and password='%2'").arg(name).arg(password);
    QSqlQuery * query;
    query=new QSqlQuery;
    query->exec(str);
    /*QString bijiao="0";
    QString in=(query->value("lever").toString());
    if(in!=bijiao){
        flags=true;
    }*/
    query->last();

    int record=query->at()+1;
    if(record==0)
        return false;
    return true;
}
static bool isAdmin(QString name){
    QString str=QString("select count(*) form aduser where name='admin'");
    QSqlQuery * query;
    query=new QSqlQuery;
    query->exec(str);
    /*QString bijiao="0";
    QString in=(query->value("lever").toString());
    if(in!=bijiao){
        flags=true;
    }*/

    int record=  query->value(0).toInt();
    if(record==0)
        return false;
    return true;
}

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    QList<int> requestRowId();
    QMap<QString,int> qmm;
    QString mc[20];
   // static QList<int> currentSe;
    /***绘制背景图+圆角效果***/
    /*
    static void paintEvent(QPaintEvent *){
        QPainter painter(this);
        QBrush brush;
        brush.setTextureImage(QImage(background_image));
        painter.setBrush(brush);
        painter.setPen(Qt::black);
        painter.drawRoundedRect(this->rect(),5,5);
    }
    */
    void  setPic(QString fname);
    LoginDialog lld;
    HelpDialog hd;
    float countpri=0;
    int skinstatus=0;
    ~Dialog();

private slots:


    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_b_jiansuo_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_toolButton_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_clicked();

    void on_changeduser_clicked();


    
    void on_cacl_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_helpdia_clicked();

private:
    Ui::Dialog *ui;
    //QSqlTableModel *model;
};

#endif // DIALOG_H
