#ifndef VIEWUSERINFO_H
#define VIEWUSERINFO_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>

namespace Ui {
class viewuserinfo;
}

class viewuserinfo : public QDialog
{
    Q_OBJECT

public:
    explicit viewuserinfo(QWidget *parent = nullptr);
    ~viewuserinfo();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::viewuserinfo *ui;
    QSqlDatabase viewuser;
};

#endif // VIEWUSERINFO_H
