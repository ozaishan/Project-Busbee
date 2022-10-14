#include "cancelsure.h"
#include "ui_cancelsure.h"

Cancelsure::Cancelsure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cancelsure)
{
    ui->setupUi(this);
}

Cancelsure::~Cancelsure()
{
    delete ui;
}

void Cancelsure::on_buttonBox_accepted()
{
    show();
}


void Cancelsure::on_buttonBox_clicked(QAbstractButton *button)
{
    delete ui;
}

