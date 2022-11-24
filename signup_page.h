#ifndef SIGNUP_PAGE_H
#define SIGNUP_PAGE_H

#include <QDialog>

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>



namespace Ui {
class Signup_page;
}

class Signup_page : public QDialog
{
    Q_OBJECT

public:
    explicit Signup_page(QWidget *parent = nullptr);
    ~Signup_page();

private slots:
    void on_push_signup_clicked();

    void on_push_goback_clicked();

private:
    Ui::Signup_page *ui;
    QSqlDatabase userdb;

};

#endif // SIGNUP_PAGE_H
