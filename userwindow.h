#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "signup_page.h"
#include "userpage.h"


QT_BEGIN_NAMESPACE
namespace Ui { class userwindow; }
QT_END_NAMESPACE

class userwindow : public QMainWindow
{
    Q_OBJECT

public:
    userwindow(QWidget *parent = nullptr);
    ~userwindow();

private slots:
    void on_login_clicked();

    void on_pushButton_clicked();

    void on_login_2_clicked();

private:
    Ui::userwindow *ui;
    QSqlDatabase userdb;
    Signup_page *signopen;
};
#endif // USERWINDOW_H
