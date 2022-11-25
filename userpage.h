#ifndef USERPAGE_H
#define USERPAGE_H

#include <QDialog>

namespace Ui {
class Userpage;
}

class Userpage : public QDialog
{
    Q_OBJECT

public:
    explicit Userpage(QWidget *parent = nullptr);
    ~Userpage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_show_clicked();

    void on_pushButton_MY_clicked();

private:
    Ui::Userpage *ui;
};

#endif // USERPAGE_H
