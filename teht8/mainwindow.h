#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Start_clicked();
    void updateProgressBar();


    void on_p1end_clicked();

    void on_p2end_clicked();

    void on_Stop_clicked();

    void on_shorttime_clicked();

    void on_longtime_clicked();

private:
    Ui::MainWindow *ui;

    int p1Time;
    int p2Time;
    int currentPlayer;
    int gameTime = 120;
    QTimer *timer = nullptr;
};
#endif // MAINWINDOW_H
