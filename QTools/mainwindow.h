#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <serialport/qcomport.h>
#include <QMessageBox>
#include <QEvent>
#include <QTime>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    QComPort wincom;
    explicit MainWindow(QWidget *parent = 0);
    virtual bool eventFilter(QObject *, QEvent *);

    ~MainWindow();

protected :

private slots:
    void on_OpenButton_clicked();

    void on_searchbutton_clicked();

    void DisReiveData();

    void sendEditData(void);

    void on_RecClrButton_clicked();



private:
    Ui::MainWindow *ui;
    QTime nowTime;

};

#endif // MAINWINDOW_H
