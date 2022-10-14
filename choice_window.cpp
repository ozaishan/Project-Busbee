#include "choice_window.h"
#include "ui_choice_window.h"
#include "adminlogin.h"

choice_window::choice_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choice_window)
{
    ui->setupUi(this);

}

choice_window::~choice_window()
{
    delete ui;
}

void choice_window::on_push_user_clicked()
{

}


void choice_window::on_pushButton_2_clicked()
{
    close();
    admin = new adminlogin(this);
    admin->show();
}


void choice_window::on_pushButton_3_clicked()
{
    close();

}
