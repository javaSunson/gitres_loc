#include "dialog.h"
#include "ui_dialog.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <mandialog.h>
#include "logindialog.h"
#include <QItemSelectionModel>
#include <QList>
#include <ui_logindialog.h>
#include <QSqlTableModel>
#include "changestyle.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDateTime>
#include <QPalette>
#include <QStandardItemModel>
#include <windows.h>

/********************************Time:2018/06/10*********************************************
**该文件 有重复代码，可进一步进行封装，内容为:table model ->view
*********************************Time:2018/06/12*********************************************
**其实可以对菜单单独封装代码需进一步优化
*********************************Time:2018/06/26*********************************************
**下单计算逻辑需要进一步实现
*********************************************************************************************/
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

    ui->setupUi(this);
    ui->progressBar->setRange(0,5000-1);

    ui->progressBar->setValue(0);
    QPalette  palette (this->palette());

    //palette.setColor(QPalette::Background, Qt::green);
    QPixmap pixmap("back.jpg");
    palette.setBrush(backgroundRole(), QBrush(pixmap));
    this->setPalette( palette);
    /***Time : 2018/06/27 图片按钮 ***/
    QIcon icon,icon1,icon2;
    //icon.addFile(tr("xiadan.ico"));
    icon.addFile(tr("food.png"));
    icon1.addFile(tr("xiadan.png"));
    icon2.addFile(tr("calculator2.png"));
    ui->pushButton_3->setIcon(icon);//这个是普通用户界面的"选中"按钮
    ui->pushButton_2->setIcon(icon1);//这个是普通用户界面的"下单"按钮
    ui->pushButton_8->setIcon(icon2);//这个是普通用户界面的"结算"按钮

}

Dialog::~Dialog()
{
    delete ui;
}




void Dialog::on_pushButton_4_clicked()     //热菜
{
    if(!createConnection()){
        ui->lianjie->setText(tr("链接成功!"));

    }else{
        ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    query.exec("use cold;");
    QSqlQueryModel * model = new QSqlQueryModel(this);

    model->setQuery("select * from hot");

    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));

    ui->tableView->setModel(model);
    ui->tableView->setStyleSheet("QTableView{background-color: rgb(250, 250, 115);"
                                          "alternate-background-color: rgb(141, 163, 215);}");

}

    QList<int>  Dialog::requestRowId(){      /**返回TableView ROW的方法**/
    QItemSelectionModel *selections = ui->tableView->selectionModel();
    QModelIndexList selected =selections->selectedIndexes();

    QMap<int,int> rowMap;

    foreach(QModelIndex index,selected){
        rowMap.insert(index.row(),0);
    }

    /**测试代码 6/20**/
    /**代码注释以下两行，6/21***********/
    //QVariant out=ui->tableView->currentIndex().data();

    //qDebug()<<out.toString();//返回了数据的id?是列表第一个数据吗？思考，可以借助这个号码，再次查询并且构建数据库的返回?

    //index.row(1)
    ui->tableView->selectionModel()->select(ui->tableView->currentIndex(),QItemSelectionModel::Select);/**6/21*测试，选中多个单元格*/
    return rowMap.keys();


}
   void  Dialog::setPic(QString fname){
        QString filename("mealpic\\"+fname+".jpg");
        qDebug()<<filename;
        QImage* img=new QImage;
        if(! ( img->load(filename) ) ) //加载图像
        {
            QMessageBox::information(this,
                         tr("打开图像失败"),
                         tr("打开图像失败!"));
            delete img;
            return;
        }
        ui->caiyulan->setPixmap(QPixmap::fromImage(*img));

    }


void Dialog::on_pushButton_5_clicked()    //冷菜
{
    if(!createConnection()){
        ui->lianjie->setText(tr("链接成功!"));

    }else{
        ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    query.exec("use cold;");
    QSqlQueryModel * model = new QSqlQueryModel(this);

    model->setQuery("select * from cold");
    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));
    /**新测试**/


    ui->tableView->setModel(model);


}


void Dialog::on_pushButton_3_clicked()      //当前选中
{

    QString s;
    QString sho;
    QSqlQuery query,query1;
    query.exec("use hot;");
    QString ces="select price from hot";
    query1.exec(ces);

    int arr[10];
    QFile file("E:\\code\\QTabTest\\temp\\temp1.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    QString qstr;
    foreach(int temp,requestRowId()){

       s +=QString::number((temp+1), 10)+"\t";
       qstr=ui->tableView->currentIndex().data().toString();


       setPic(qstr);                                        //设置对应的菜的图片
       sho="mealname='"+qstr+"' or ";                       //拼接当前选中的菜
       arr[temp]=requestRowId().value(0);
       file.write(sho.toUtf8());
       //countpri+=query1.value(2).toFloat();
       query.exec("select price from hot where mealname =\""+qstr+"\"");

       //float res=query.value(2).toFloat();
       //res+=ui->ccPri->text().toFloat();
       //qDebug()<<query.value(0).toString();
       countpri+=query.value(0).toFloat();//当前只返回了一个数据,所以,只调0就行! /**Time:2018/06/30**/
       //ui->ccPri->setText(QString::number(res));

    }
       ui->xuancai->setText(s);
       file.close();
       /***Time : 2018/06/26 设计思路:根据当前选中的字段,进行查询,然后累加到静态数据或者直接写入到文件中***/
        /*
       if(!createConnection()){
           ui->lianjie->setText(tr("链接成功!"));

       }else{
           ui->lianjie->setText(tr("链接失败!"));
       }
       QSqlQuery query;
       query.exec("use hot;");
       query.exec("select price from "+s);
       float res=query.value(2).toFloat();
       QFile file("E:\\code\\QTabTest\\temp\\tprice1.txt");
       file.open(QIODevice::WriteOnly | QIODevice::Append);
       file.write()
        */
        //int col=ui->tableView->currentIndex().column();
        //int row=ui->tableView->currentIndex().row();
         //qi=ui->tableView->model();
        //QString out=qi.data(row,col).toString();
        //qDebug()<<"00100"+out;
}

void Dialog::on_pushButton_6_clicked()      //饮品
{
    if(!createConnection()){
        ui->lianjie->setText(tr("链接成功!"));

    }else{
        ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    query.exec("use drink;");
    QSqlQueryModel * model = new QSqlQueryModel(this);

    model->setQuery("select * from drink");
    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("品名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));

    ui->tableView->setModel(model);

}

void Dialog::on_pushButton_7_clicked()      //海鲜
{
    if(!createConnection()){
        ui->lianjie->setText(tr("链接成功!"));

    }else{
        ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    query.exec("use cold;");
    QSqlQueryModel * model = new QSqlQueryModel(this);

    model->setQuery("select * from fish");
    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));

    ui->tableView->setModel(model);
}

void Dialog::on_b_jiansuo_clicked()
{
    if(!createConnection()){
        ui->lianjie->setText(tr("链接成功!"));

    }else{
        ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    query.exec("use hot;");
    QSqlQueryModel * model = new QSqlQueryModel(this);
    QString jian=ui->jiansuo->text();
    model->setQuery("select * from hot where mealname ="+jian);//query语句好像不能直接这样拼接
    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));

    ui->tableView->setModel(model);
}

void Dialog::on_pushButton_2_clicked()              //点击跳转Tabwidget 用来实现下单
{
    /********/
    /***
    if(!createConnection()){
        ui->lianjie->setText(tr("链接成功!"));

    }else{
        ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    query.exec("use cold;");
    QSqlQueryModel * model = new QSqlQueryModel(this);

    model->setQuery("select * from hot");

    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));

    ui->tableView->setModel(model);
    ui->tableView->setStyleSheet("QTableView{background-color: rgb(250, 250, 115);"
                                          "alternate-background-color: rgb(141, 163, 215);}");

}

    QList<int>  Dialog::requestRowId(){
    QItemSelectionModel *selections = ui->tableView->selectionModel();
    QModelIndexList selected =selections->selectedIndexes();
    QMap<int,int> rowMap;
    foreach(QModelIndex index,selected){
        rowMap.insert(index.row(),0);
    }

        return rowMap.keys();
        ***/

    /********/
    QList<int> ql;
    QString s;
    QString sho;
    //QFile file("E:\\code\\QTabTest\\temp\\temp.txt");
    //file.open(QIODevice::WriteOnly | QIODevice::Append);

    QFile file("E:\\code\\QTabTest\\temp\\temp.txt");
    /*
     * Time:2018/06/22/23/01 做是否存在文件的判断，目前这个地方加上会有bug
     * if (file.exists())
    {
        file.remove();
       }

    */
    foreach(int temp,requestRowId()){

    ql.append(temp);
    qDebug()<<temp;

    //data(temp).toString();

    sho=ui->tableView->currentIndex().data().toString()+"\\";//值恒为最后一个，缺乏遍历？

    s+=QString::number(temp,10)+"\t";
    //file.write(sho.toUtf8());
//    file.write(s.toUtf8());
     //ui->tableView->

    qDebug()<<sho;

    //QByteArray t = file.readAll();
    //ui->xuanhao->setText(t);
    // file.close();
   // mc[iString]=sho;

    }

    /*
    QItemSelectionModel *selectionModel=ui->tableView->selectionMode();
    QModelIndex topLeft = tableWidget.model()->index(0, 0, QModelIndex());
    QModelIndex bottomRight = tableWidget.model()->index(ui->tableView->row-1, 4, QModelIndex());

    int row=ui->tableView->currentIndex().row();

    for(int i = 0; i < 4; i++)

    {

        //遍历第row行的所有信息
        QModelIndex index = model->index(row,i);
        QString name = model->data(index).toString();
        qDebug()<<"当前行的信息"+name;

    }
    */
     ui->xiadan->setText("当前选中的是:"+sho);





   /**** ui->xiadan->setText("当前选中的是:"+s);   ****/
    //QString name = list_model->data(index).toString();
   ui->tabWidget->setCurrentIndex(1);
   /********6/21/14/48******/
   /***
   int curRow=ui->tableView->currentIndex().row();
   QAbstractItemModel *modess1 = ui->tableView->model();
   int i =1;
   QModelIndex indextemp = modess1->index(curRow,i);
   QVariant datatemp = modess1->data(indextemp);
   QString s1;
   s1= datatemp.toString();
   qDebug()<<s1;
   ****/
   /*************/
   ui->xiadan->setText("当前选中的是:"+sho);

   qmm.insert(sho,s.toInt());


}
void Dialog::on_pushButton_8_clicked()
{
    /****
     *
     * QItemSelectionModel* selection_model = ui->tableView->selectionModel();

    QItemSelection selection;

    foreach(QModelIndex index, indexes) {

        QModelIndex left =model->index(index.row(), 0);

        QModelIndex right =model->index(index.row(),model->columnCount()-1);

        QItemSelection sel(left, right);

        selection.merge(sel, QItemSelectionModel::Select);  //将每一个单元格/每一行都作为一个QItemSelection 对象，并拼接到总的QItemSelection 对象中

    }


    selection_model->select(selection, QItemSelectionModel::Select);
      ****/
    /***当前代码是选择多行的一种测试方法，实验时间是time:2018/06/21***/
    //跳转到计算界面
    /***获取当前时间***/
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString current_date =current_date_time.toString("yyyy.MM.dd hh:mm:ss.zzz ddd");
    ui->kehuxinxi->setText(current_date+"\n"+tr("\n***客户信息:***\n")+ui->cusname->text()+"\n"+ui->custel->text()+"\n"+ui->zhuohao->text()+"\n"+ui->taste->text());
    ui->tabWidget->setCurrentIndex(2);
    /**Time:2018/06/26**/
    /***清除当前temp内的信息***/
    /***业务逻辑:拼写完当前temp中数据之后,清空temp1中现在已有的数据,方便下次使用****/
    /**逻辑可行性测试,正常,但是,未知因素导致,salelog中,不在出现当前下单的菜系数据**/
    QString e="";
    QFile file("E:\\code\\QTabTest\\temp\\temp1.txt");
    file.open(QIODevice::WriteOnly | QIODevice::WriteOnly);
    file.write(e.toUtf8());
    file.close();
}

void Dialog::on_toolButton_clicked()
{
    if(this->skinstatus==1){
        CommonHelper::setStyleBlack("blackskin.qss");
        this->skinstatus=0;

    }else{
        CommonHelper::setStyleBlack("white.qss");

        this->skinstatus=1;
    }


}

void Dialog::on_pushButton_9_clicked()
{
    QSqlTableModel * model=new QSqlTableModel(this);
    model->setTable("hot");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));
    /*ui->tableView_2->setModel(model);
    QVBoxLayout * lay=new QVBoxLayout(ui->tableView_2);
    lay->addWidget(ui->tableView_2);
    QHBoxLayout * hBox = new QHBoxLayout(ui->tableView_2);
    lay->addLayout(hBox);
    hBox->addStretch();
    */

}

void Dialog::on_pushButton_13_clicked()
{
    /****用写入本地文件模拟打印小票，另外写入本地的数据，也便于管理员查看信息****/
    QString e=ui->kehuxinxi->toPlainText();
    QFile f("E:\\code\\QTabTest\\temp\\temp1.txt");
   /* if (f.exists())
    {
        f.remove();
    }
    */

    //QFile f("E:\\code\\QTabTest\\temp\\temp1.txt");
    f.open(QIODevice::ReadOnly | QIODevice::Text);
    QString e1=f.readAll();
    f.close();
    e+=e1;
    /***更为智能的想法，以时间做文件名***/
    QDateTime current_date_time =QDateTime::currentDateTime();
    QString cd =current_date_time.toString("yyyy.MM.dd");
    QFile file("E:\\code\\QTabTest\\SaleLog\\"+cd+".txt");
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    file.write(e.toUtf8());
    file.close();
    ui->dayin->setText(tr("正在打印>>"));
      for(int i=0;i<5000;i++)
     {
       for(int j=0;j<2000;j++);
         ui->progressBar->setValue(i);
     }
      ui->dayin->setText(tr("打印完毕，请取走小票!"));

}

void Dialog::on_pushButton_14_clicked()
{
    QFile file("E:\\code\\QTabTest\\temp\\temp1.txt");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QByteArray t=file.readAll();
    QString str=QString(t);
    QStringList ql=str.split("|");

    ui->xuanhao->setText(str);
    file.close();

    if(!createConnection()){
        ui->lianjie->setText(tr("链接成功!"));

    }else{
        ui->lianjie->setText(tr("链接失败!"));
    }
    QSqlQuery query;
    query.exec("use hot;");
    QSqlQueryModel * model = new QSqlQueryModel(this);

    model->setQuery("select * from hot where "+str+"mealname=' '");
    model->setHeaderData(0,Qt::Horizontal,tr("id"));
    model->setHeaderData(1,Qt::Horizontal,tr("菜名"));
    model->setHeaderData(2,Qt::Horizontal,tr("价格"));
    model->setHeaderData(3,Qt::Horizontal,tr("折扣"));
    model->setHeaderData(4,Qt::Horizontal,tr("备注"));
    /**新测试**/


    ui->tableView_2->setModel(model);
 }

void Dialog::on_pushButton_clicked()
{

}

void Dialog::on_changeduser_clicked()
{
   this->close();
   //this->hide();
   lld.show();

}


void Dialog::on_cacl_clicked()
{
    ui->xianshijiesuan->setText(QString::number(countpri));
   // system("calc");
}

void Dialog::on_helpdia_clicked()
{
    hd.show();
}
