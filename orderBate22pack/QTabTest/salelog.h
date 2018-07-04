#ifndef SALELOG_H
#define SALELOG_H

#include <QDialog>

namespace Ui {
class SaleLog;
}

class SaleLog : public QDialog
{
    Q_OBJECT

public:
    explicit SaleLog(QWidget *parent = 0);
    ~SaleLog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SaleLog *ui;
};

#endif // SALELOG_H
