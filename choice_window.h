#ifndef CHOICE_WINDOW_H
#define CHOICE_WINDOW_H

#include <QDialog>
#include"adminlogin.h"
#include"userwindow.h"

namespace Ui {
class choice_window;
}

class choice_window : public QDialog
{
    Q_OBJECT

public:
    explicit choice_window(QWidget *parent = nullptr);
    ~choice_window();

private slots:


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::choice_window *ui;
    adminlogin *admin;
    userwindow *user;

};

#endif // CHOICE_WINDOW_H
