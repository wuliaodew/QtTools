#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <serialport/qcomport.h>
#include <QMessageBox>
#include<QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    QComPort wincom;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_OpenButton_clicked();

    void on_searchbutton_clicked();

    void DisReiveData();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
