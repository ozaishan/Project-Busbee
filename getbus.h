#ifndef GETBUS_H
#define GETBUS_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class getbus;
}


class getbus : public QDialog
{
    Q_OBJECT

public:
    explicit getbus(QWidget *parent = nullptr);
    ~getbus();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::getbus *ui;
    QSqlDatabase user1db;
};

#endif // GETBUS_H
