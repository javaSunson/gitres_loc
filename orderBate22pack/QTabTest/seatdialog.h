#ifndef SEATDIALOG_H
#define SEATDIALOG_H

#include <QDialog>

namespace Ui {
class SeatDialog;
}

class SeatDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SeatDialog(QWidget *parent = 0);
    ~SeatDialog();

private:
    Ui::SeatDialog *ui;
};

#endif // SEATDIALOG_H
