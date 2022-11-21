#ifndef VIEWALLINFO_H
#define VIEWALLINFO_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>

namespace Ui {
class viewallinfo;
}

class viewallinfo : public QDialog
{
    Q_OBJECT

public:
    explicit viewallinfo(QWidget *parent = nullptr);
    ~viewallinfo();

private slots:
    void on_pushButton_load_clicked();

    void on_pushButton_clicked();

private:
    Ui::viewallinfo *ui;
    QSqlDatabase allinfo;
};

#endif // VIEWALLINFO_H
