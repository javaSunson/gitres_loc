#include "seatdialog.h"
#include "ui_seatdialog.h"

SeatDialog::SeatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SeatDialog)
{
    ui->setupUi(this);
}

SeatDialog::~SeatDialog()
{
    delete ui;
}
