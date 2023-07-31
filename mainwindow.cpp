#include "mainwindow.h"
#include "ui_mainwindow.h"
//результат выражения

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button1_1_clicked()
{
    operand=operand*10+1;
    updateLcdOperand();
}


void MainWindow::on_button1_2_clicked()
{
  operand=operand*10+2;
    updateLcdOperand();
}


void MainWindow::on_button1_3_clicked()
{
   operand=operand*10+3;
    updateLcdOperand();
}


void MainWindow::on_button1_4_clicked()
{
  operand=operand*10+4;
    updateLcdOperand();
}


void MainWindow::on_button1_5_clicked()
{
  operand=operand*10+5;
    updateLcdOperand();
}


void MainWindow::on_button1_6_clicked()
{
  operand=operand*10+6;
    updateLcdOperand();
}


void MainWindow::on_button1_7_clicked()
{
  operand=operand*10+7;
    updateLcdOperand();
}


void MainWindow::on_button1_8_clicked()
{
  operand=operand*10+8;
    updateLcdOperand();
}


void MainWindow::on_button1_9_clicked()
{
 operand=operand*10+9;
    updateLcdOperand();
}


void MainWindow::on_button1_0_clicked()
{
  operand=operand*10;
    updateLcdOperand();
}


void MainWindow::on_button1_sign_clicked()
{
  operand*=-1;
    updateLcdOperand();
}


void MainWindow::on_button1_Plus_clicked()

{   switch(i){case 1:result=result+operand;break;
    case 2:result=result-operand;break;
    case 3:result=result*operand;break;
    case 4:result=result/operand;break;};
    std::string s= std::to_string((int)result)+ "+";
    ui->lineResult->setText(QString::fromStdString(s));
    operand=0;
    updateLcdOperand();
    i=1;
}


void MainWindow::on_button1_Minus_clicked()
{
    switch(i){case 1:result=result+operand;break;
    case 2:result=result-operand;break;
    case 3:result=result*operand;break;
    case 4:result=result/operand;break;};
    std::string s= std::to_string((int)result)+ "-";
    ui->lineResult->setText(QString::fromStdString(s));
    operand=0;
    updateLcdOperand();
    i=2;
}


void MainWindow::on_button1_Multiply_clicked()
{
    switch(i){case 1:result=result+operand;break;
    case 2:result=result-operand;break;
    case 3:result=result*operand;break;
    case 4:result=result/operand;break;};
    std::string s= std::to_string((int)result)+ "*";
    ui->lineResult->setText(QString::fromStdString(s));
    operand=0;
    updateLcdOperand();
    i=3;
}


void MainWindow::on_button1_Divide_clicked()
{
    switch(i){case 1:result=result+operand;break;
    case 2:result=result-operand;break;
    case 3:result=result*operand;break;
    case 4:result=result/operand;break;};
    std::string s= std::to_string((int)result)+ "/";
    ui->lineResult->setText(QString::fromStdString(s));
    operand=0;
    updateLcdOperand();
    i=4;
}


void MainWindow::on_button1_Equals_clicked()
{
    switch(i){case 1:result=result+operand;break;
    case 2:result=result-operand;break;
    case 3:result=result-operand;break;
    case 4:result=result-operand;break;};
    std::string s= std::to_string((int)result);
    ui->lineResult->setText(QString::fromStdString(s));
}


void MainWindow::on_button1_Backspace_clicked()
{
  operand=(int) operand/10;
    updateLcdOperand();
}


void MainWindow::on_button1_clear_clicked()
{
    result=0;
  operand=0;
    updateLcdOperand();
}

void MainWindow::updateLcdOperand()
{
    ui->lcdOperant->display(operand);
}

void MainWindow::updatelineResult()
{
    ui->lineResult->setText(QString::number(operand));

}

