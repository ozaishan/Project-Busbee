#ifndef VIEWBOOKEDTICKETSINFO_H
#define VIEWBOOKEDTICKETSINFO_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>

namespace Ui {
class viewbookedticketsinfo;
}

class viewbookedticketsinfo : public QDialog
{
    Q_OBJECT

public:
    explicit viewbookedticketsinfo(QWidget *parent = nullptr);
    ~viewbookedticketsinfo();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::viewbookedticketsinfo *ui;
    QSqlDatabase viewtic;
};

#endif // VIEWBOOKEDTICKETSINFO_H
