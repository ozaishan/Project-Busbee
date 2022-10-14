#ifndef CHOICE_WINDOW_H
#define CHOICE_WINDOW_H

#include <QDialog>
#include"adminlogin.h"

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
    void on_push_user_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::choice_window *ui;
    adminlogin *admin;
};

#endif // CHOICE_WINDOW_H
