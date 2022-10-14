#ifndef CANCELSURE_H
#define CANCELSURE_H

#include <QDialog>

namespace Ui {
class Cancelsure;
}

class Cancelsure : public QDialog
{
    Q_OBJECT

public:
    explicit Cancelsure(QWidget *parent = nullptr);
    ~Cancelsure();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::Cancelsure *ui;
};

#endif // CANCELSURE_H
