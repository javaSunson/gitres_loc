#include <QApplication>
#include "dialog.h"
#include "logindialog.h"
#include "changestyle.h"
#include "mandialog.h"
#include "staticfiled.h"
//#include "ui_logindialog.h"
#include <QDebug>
#include <QPixmap>
#include <QSplashScreen>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pixmap("screen.png");
    QSplashScreen screen(pixmap);
    screen.show();
    screen.showMessage("Dream Feauther be Colorful",Qt::AlignCenter,Qt::red);

    LoginDialog login;
    //bool abc;



    CommonHelper::setStyle("style.qss");
    //login.setStyleSheet({"QDialog{background-image:url(\"back.jpg\")"});//背景图片设置尝试
    login.setWindowTitle(QObject::tr("虹梦未来登陆窗口"));
    createConnection();

    if(login.exec() == QDialog::Accepted){

        if(login.status){
            ManDialog md;
            md.setWindowTitle(QObject::tr("管理员"));
            md.show();
            screen.finish(&md);
            return a.exec();
        }else{
            Dialog dl;
            dl.setWindowTitle(QObject::tr("虹梦未来点餐系统"));
            dl.show();
            screen.finish(&dl);
            return a.exec();
        }

    }
    else return 0;
}
