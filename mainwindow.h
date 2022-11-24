#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "canceldialog.h"
#include "choice_window.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();



    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Canceldialog *c;
    choice_window *ch;

};
#endif // MAINWINDOW_H
