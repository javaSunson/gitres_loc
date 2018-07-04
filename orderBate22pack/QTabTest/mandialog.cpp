#include "mandialog.h"
#include "ui_mandialog.h"
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "dialog.h"
#include <QInputDialog>
#include <QDebug>
#include <QAxObject>
#include <QFileDialog>
#include <QDir>
#include "salelog.h"
#include <QPixmap>
/****Time:2018/06/18 开发日志:在使用字符串和变量拼接sql语句时，注意引号*****/
ManDialog::ManDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManDialog)
{
    ui->setupUi(this);
    QPalette pa;
    pa.setColor(QPalette::WindowText,Qt::red);
    ui->zeren->setPalette(pa);
    QPixmap pixmap("adback.jpg");
    pa.setBrush(backgroundRole(), QBrush(pixmap));
    this->setPalette(pa);
}

ManDialog::~ManDialog()
{
    delete ui;
}

void ManDialog::on_pushButton_clicked()
{
    QString curr=ui->cbb1->currentText();
    if(!createConnection()){
       // ui->lianjie->setText(tr("链接成功!"));

    }else{
        //ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;

    QSqlQueryModel * model = new QSqlQueryModel(this);
    if(curr=="热菜")
        curr="hot";


    if(curr=="冷菜")
        curr="cold";

    if(curr=="饮品")
        curr="drink";
    if(curr=="海鲜")
        curr="fish";
    query.exec("use "+curr);
    QString sql=QString("select * from "+curr);
    model->setQuery(sql);


    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));

    //ui->tableView->setModel(model);
    ui->adtw->setModel(model);
    ui->adtw->setStyleSheet("QTableView{background-color: rgb(250, 250, 115);"
                                          "alternate-background-color: rgb(141, 163, 215);}");

}

void ManDialog::on_pushButton_2_clicked()
{

    bool isOK;
    QString aid = QInputDialog::getText(NULL, tr("增加新菜"),
                                                       tr("请输入ID"),
                                                       QLineEdit::Normal,
                                                       tr("请确定"),
                                                       &isOK);
    if(isOK) {
           QMessageBox::information(NULL, tr("信息"),
                                               tr("你添加的内容是: <b>") + aid + "</b>",
                                               QMessageBox::Yes | QMessageBox::No,
                                               QMessageBox::Yes);
    }
    QString text = QInputDialog::getText(NULL, tr("增加新菜"),
                                                       tr("请输入菜名"),
                                                       QLineEdit::Normal,
                                                       tr("请确定"),
                                                       &isOK);
    if(isOK) {
           QMessageBox::information(NULL, tr("信息"),
                                               tr("你添加的内容是: <b>") + text + "</b>",
                                               QMessageBox::Yes | QMessageBox::No,
                                               QMessageBox::Yes);
    }
    QString pri= QInputDialog::getText(NULL, tr("增加新菜"),
                                                       tr("请输入价格"),
                                                       QLineEdit::Normal,
                                                       tr("请确定"),
                                                       &isOK);
    if(isOK) {
           QMessageBox::information(NULL, tr("信息"),
                                               tr("你添加的内容是: <b>") + QString(pri) + "</b>",
                                               QMessageBox::Yes | QMessageBox::No,
                                               QMessageBox::Yes);
    }
    if(!createConnection()){
        //ui->lianjie->setText(tr("链接成功!"));

    }else{
        //ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    //query.exec("use cold;");
    QString curr=ui->cbb1->currentText();
    if(curr=="热菜")
        curr="hot";


    if(curr=="冷菜")
        curr="cold";

    if(curr=="饮品")
        curr="drink";
    if(curr=="海鲜")
        curr="fish";
    query.exec("use "+curr);

    qDebug() <<curr;
    query.exec("insert into "+curr+"(id,mealname,price) values("+aid+",\""+text+"\","+pri+")");
    /***插入已解决**/
}

void ManDialog::on_pushButton_3_clicked()
{
    /****思考，怎么控制具体是哪个分类的菜系？其实在设计数据库的时候进行一个标志位的设置就好，那样可以进行判断***/
    /*现在的话，可以进行全部遍历，用来实现最基本的版本***/
    /***Time:2018/06/18 当前删除功能有未知错误**/
    bool isOK;

    QString text = QInputDialog::getText(NULL, tr("删除新菜"),
                                                       tr("请输入要删除的菜名"),
                                                       QLineEdit::Normal,
                                                       tr("请确定"),
                                                       &isOK);
    if(isOK) {
           QMessageBox::information(NULL, tr("信息"),
                                               tr("你要删除的内容是: <b>") + text + "</b>",
                                               QMessageBox::Yes | QMessageBox::No,
                                               QMessageBox::Yes);
    }

    if(!createConnection()){
        //ui->lianjie->setText(tr("链接成功!"));

    }else{
        //ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    //query.exec("use cold;");
    QString curr=ui->cbb1->currentText();
    if(curr=="热菜")
        curr="hot";


    if(curr=="冷菜")
        curr="cold";

    if(curr=="饮品")
        curr="drink";
    if(curr=="海鲜")
        curr="fish";
    query.exec("use "+curr);

    qDebug() <<curr;

    //query.exec("insert into cold(id,mealname,price) values("+aid+",\""+text+"\","+pri+")");
    /***插入已解决**/
    //bool sta=query.exec("select * from "+curr+" where mealname = \""+text+"\"");
    //

    /*if(sta){

    }*/
    query.exec("delete from "+curr+" where mealname =\""+text+"\"");
}

void ManDialog::on_pushButton_4_clicked()
{
    bool isOK;

    QString text = QInputDialog::getText(NULL, tr("修改菜单"),
                                                       tr("请输入要修改的品名"),
                                                       QLineEdit::Normal,
                                                       tr("请确定"),
                                                       &isOK);
    if(isOK) {
           QMessageBox::information(NULL, tr("信息"),
                                               tr("你要修改的内容是: <b>") + text + "</b>",
                                               QMessageBox::Yes | QMessageBox::No,
                                               QMessageBox::Yes);
    }
    QString pri= QInputDialog::getText(NULL, tr("修改菜单"),
                                                       tr("请输入价格"),
                                                       QLineEdit::Normal,
                                                       tr("请确定"),
                                                       &isOK);

    if(!createConnection()){
        //ui->lianjie->setText(tr("链接成功!"));

    }else{
        //ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    //query.exec("use cold;");
    QString curr=ui->cbb1->currentText();
    if(curr=="热菜")
        curr="hot";


    if(curr=="冷菜")
        curr="cold";

    if(curr=="饮品")
        curr="drink";
    if(curr=="海鲜")
        curr="fish";
    query.exec("use "+curr);

    qDebug() <<curr;
    /***2018/06/18 目前只实现了修改价格，后期可以设置修改菜名**/
    query.exec("update "+curr+" SET price="+pri+" where mealname=\""+text+"\"");

}

void ManDialog::on_pushButton_7_clicked()
{


}

void ManDialog::on_pushButton_8_clicked()
{
    /***Time : 2018/06/20 尝试读写Excel
    ****代码出现问题，暂时废弃
    ****/
    QAxObject * excel = new QAxObject(this);
    excel->setControl("Excel.Applaction");
    excel->dynamicCall("SetVisible(bool Visible)","false");
    excel->setProperty("DisplayAlerts",false);

    // step2: 打开工作簿

    QAxObject *workbooks = excel->querySubObject("ActiveWorkBook");
    //QAxObject* workbooks = excel->querySubObject("WorkBooks"); // 获取工作簿集合
        // 打开工作簿方式一：新建
    //    workbooks->dynamicCall("Add"); // 新建一个工作簿
    //    QAxObject* workbook = excel->querySubObject("ActiveWorkBook"); // 获取当前工作簿
        // 打开工作簿方式二：打开现成
        QAxObject* workbook = workbooks->querySubObject("Open(const QString&)", ui->lineEdit->text()); // 从控件lineEdit获取文件名

        // step3: 打开sheet
        QAxObject* worksheet = workbook->querySubObject("WorkSheets(int)", 1); // 获取工作表集合的工作表1， 即sheet1


        // step4: 获取行数，列数
        QAxObject* usedrange = worksheet->querySubObject("UsedRange"); // sheet范围
        int intRowStart = usedrange->property("Row").toInt(); // 起始行数
        int intColStart = usedrange->property("Column").toInt();  // 起始列数

        QAxObject *rows, *columns;
        rows = usedrange->querySubObject("Rows");  // 行
        columns = usedrange->querySubObject("Columns");  // 列

        int i = rows->property("Count").toInt(); // 行数
        int j = columns->property("Count").toInt();  // 列数

        // step5: 读和写
        // 读方式一（坐标）：
        QAxObject* cell = worksheet->querySubObject("Cells(int, int)", i, j);  //获单元格值
        qDebug() << i << j << cell->dynamicCall("Value2()").toString();
        // 读方式二（行列名称）：
        QString X = "A" + QString::number(i + 1); //设置要操作的单元格，A1
        QAxObject* cellX = worksheet->querySubObject("Range(QVariant, QVariant)", X); //获取单元格
        qDebug() << cellX->dynamicCall("Value2()").toString();

        // 写方式：
        cellX->dynamicCall("SetValue(conts QVariant&)", 100); // 设置单元格的值

        // step6: 保存文件
        // 方式一：保存当前文件
        workbook->dynamicCall("Save()");  //保存文件
        workbook->dynamicCall("Close(Boolean)", false);  //关闭文件
        // 方式二：另存为

        QString fileName = QFileDialog::getSaveFileName(this,tr("保存文件"),("E:/test"),tr("EXCEL(*.xlsx)"));
        workbook->dynamicCall("SaveAs(const QString&)", QDir::toNativeSeparators(fileName)); //保存到filepath
        // 注意一定要用QDir::toNativeSeparators, 将路径中的"/"转换为"\", 不然一定保存不了
        workbook->dynamicCall("Close (Boolean)", false);  //关闭文件
}

void ManDialog::on_pushButton_5_clicked()
{

    sl.show();
}
