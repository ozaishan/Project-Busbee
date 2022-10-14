#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "adminpage.h"

namespace Ui {
class adminlogin;
}

class adminlogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminlogin(QWidget *parent = nullptr);
    ~adminlogin();

private slots:
    void on_login_clicked();

    void on_lineEdit_username_textEdited(const QString &arg1);



private:
    Ui::adminlogin *ui;
    QSqlDatabase admindb;
};

#endif // ADMINLOGIN_H
