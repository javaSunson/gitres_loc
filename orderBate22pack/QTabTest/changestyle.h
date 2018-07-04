#ifndef CHANGESTYLE_H
#define CHANGESTYLE_H
class CommonHelper
{
public:
    //这种方式能够正确的加载qss文件进行美化
    static void setStyle(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
    static void setStyleBlack(const QString &style) {
        QFile qss(style);
        qss.open(QFile::ReadOnly);
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};

#endif // CHANGESTYLE_H

