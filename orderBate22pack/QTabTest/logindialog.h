#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>

#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QTableView>
#include <QSqlError>
#include <QMessageBox>
/*static bool createConnection(){
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
*/
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    //bool loguser(QString name, QString passward);
     int yan;
    ~LoginDialog();
    bool status=false;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::LoginDialog *ui;


};

#endif // LOGINDIALOG_H
