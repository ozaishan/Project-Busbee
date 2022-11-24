#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QDialog>

namespace Ui {
class Userlogin;
}

class Userlogin : public QDialog
{
    Q_OBJECT

public:
    explicit Userlogin(QWidget *parent = nullptr);
    ~Userlogin();

private:
    Ui::Userlogin *ui;
};

#endif // USERLOGIN_H
