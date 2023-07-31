#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>




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
    void on_button1_1_clicked();
    void on_button1_2_clicked();
    void on_button1_3_clicked();
    void on_button1_4_clicked();
    void on_button1_5_clicked();
    void on_button1_6_clicked();
    void on_button1_7_clicked();
    void on_button1_8_clicked();
    void on_button1_9_clicked();
    void on_button1_0_clicked();
    void on_button1_sign_clicked();
    void on_button1_Plus_clicked();
    void on_button1_Minus_clicked();
    void on_button1_Multiply_clicked();
    void on_button1_Divide_clicked();
    void on_button1_Equals_clicked();
    void on_button1_Backspace_clicked();
    void on_button1_clear_clicked();
    void updateLcdOperand();
    void updatelineResult();

private:
    double operand=0;
    double result=0;//результат предыдущего выражения
    int i=0;//индефикатор предыдущего выражения(0-никакого,1+,2-,3*,4/)
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
