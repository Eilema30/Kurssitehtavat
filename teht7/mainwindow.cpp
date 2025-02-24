#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_N1_clicked()
{

    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N2_clicked()
{

    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N3_clicked()
{

    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N4_clicked()
{

    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N5_clicked()
{

    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N6_clicked()
{

    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N7_clicked()
{

    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N8_clicked()
{

    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_N9_clicked()
{

    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_reset_clicked()
{

    int nolla = 0;
    QString nolstr = QString::number(nolla);
    ui->num1->setText(nolstr);
    ui->num2->setText(nolstr);
    ui->result->setText(nolstr);

    tila = 1;

}


void MainWindow::on_N0_clicked()
{

    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);

}


void MainWindow::on_enter_clicked()
{

    tila++;
    if(tila == 3){
        tila = 1;
    }

        qDebug() << "Tila: " << tila;

}


void MainWindow::on_mul_clicked()
{

    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1*num2;
    qDebug() << "Kertominen:" << result << "=" << num1 << "*" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;

}


void MainWindow::on_div_clicked()
{

    QString num1Str = ui->num1->text();
    float num1 = num1Str.toFloat();

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toFloat();

    float result = num1/num2;
    qDebug() << "Jakaminen:" << result << "=" << num1 << "/" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;

}


void MainWindow::on_add_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1+num2;
    qDebug() << "Plus:" << result << "=" << num1 << "+" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
}


void MainWindow::on_sub_clicked()
{

    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1-num2;
    qDebug() << "Miinus:" << result << "=" << num1 << "-" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;

}

void MainWindow::numberClickHandler(int n)
{

    qDebug() << "Valittu numero: " << n;
    QString str = QString::number(n);
    if(tila == 1) {
        qDebug() << "Valittu kenttä: num1 ";
        ui->num1->setText(str);
    } else if(tila == 2) {
        qDebug() << "Valittu kenttä: num2 ";
            ui->num2->setText(str);
        }
}

