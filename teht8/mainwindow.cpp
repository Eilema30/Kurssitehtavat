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


    if(timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }

    delete ui;
}

void MainWindow::on_Start_clicked()
{
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;


    ui->p1->setRange(0,gameTime);
     ui->p2->setRange(0,gameTime);
    ui->p1->setValue(gameTime);
    ui->p2->setValue(gameTime);

    timer = new QTimer(this);

    connect(timer,
            &QTimer::timeout,
            this,
            &MainWindow::updateProgressBar);

    timer->setInterval(1000);
    timer->start();
    ui->text->setText("Game ongoing...");

}

void MainWindow::updateProgressBar()
{

    //1. if pelaaja 1
    // päivitä pelaajan 1 kelloa
    // if kello 0
    // jos on, pelaaja hävisi
    if (currentPlayer == 1) {

    p1Time = p1Time-1;
    ui->p1->setValue(p1Time);

    if (p1Time == 0) {
        timer->stop();
        delete timer;
        timer = nullptr;
        ui->text->setText("Player 2 WON!");
        qDebug() << "Player 1 lost!";
    }
    }
    //2. muutoin
    //päivitä pelaajan 2 kelloa
    //if kello = 0
    //jos on, pelaaja 2 hävisi
    //pysäytä ajastin poista osoitin
    else if (currentPlayer == 2){
        p2Time = p2Time-1;
        ui->p2->setValue(p2Time);
        if (p2Time == 0) {
            timer->stop();
            delete timer;
            timer = nullptr;
            ui->text->setText("Player 1 WON!");
            qDebug() << "Player 2 lost!";
        }
    }



}


void MainWindow::on_p1end_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_p2end_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_Stop_clicked()
{

    ui->p1->setValue(gameTime);
    ui->p2->setValue(gameTime);
    timer->stop();
    delete timer;
    timer = nullptr;
    ui->text->setText("Choose playtime:");
}


void MainWindow::on_shorttime_clicked()
{
    gameTime = 120;
    ui->text->setText("Press start");

}


void MainWindow::on_longtime_clicked()
{
    gameTime = 300;
    ui->text->setText("Press start");
}

