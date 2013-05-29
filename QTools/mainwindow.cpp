#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->selechexbutton->setChecked(true);
    ui->PortBox->clear();
    ui->PortBox->addItems(wincom.readAllComToList());
    ui->bandrate->setCurrentIndex(4);
    ui->databox->setCurrentIndex(3);

    connect(&wincom.myCom,SIGNAL(readyRead()),this,SLOT(DisReiveData()));//收到数据
  //  connect(ui->SendTextEdit,SIGNAL(mouseDoubleClick()),this,SLOT(sendEditData()));
  //  ui->SendTextEdit->installEventFilter(this);
    ui->SendTextEdit->viewport()->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DisReiveData(void)
{
    QString temp;

    if(wincom.myCom.bytesAvailable() != 0)//判断是否有数据读取
    {
        ui->ReceiveText->moveCursor(QTextCursor::End);

        if(ui->timecheck->isChecked())
            temp = nowTime.currentTime().toString("hh:mm:ss")+":  ";

        if(ui->selechexbutton->isChecked())
            temp += wincom.readAlltoHex();
        else if(ui->selecharbutton->isChecked())
            temp += wincom.readAll();

        temp += '\r';
        ui->ReceiveText->insertPlainText(temp);
    }
}

void MainWindow::on_OpenButton_clicked()
{
    if(wincom.comStateflag == 0)
    {
        switch(ui->bandrate->currentIndex())
        {
            case 0 :wincom.portcom.BaudRate = BAUD600; break;
            case 1 :wincom.portcom.BaudRate = BAUD1200; break;
            case 2 :wincom.portcom.BaudRate = BAUD2400; break;
            case 3 :wincom.portcom.BaudRate = BAUD4800; break;
            case 4 :wincom.portcom.BaudRate = BAUD9600; break;
            case 5 :wincom.portcom.BaudRate = BAUD14400; break;
            case 6 :wincom.portcom.BaudRate = BAUD19200; break;
            case 7 :wincom.portcom.BaudRate = BAUD115200; break;
            default: break;
        }

        switch(ui->checkbox->currentIndex())
        {
            case 0 :wincom.portcom.Parity = PAR_NONE;break;
            case 1 :wincom.portcom.Parity = PAR_ODD;break;
            case 2 :wincom.portcom.Parity = PAR_EVEN;break;
            default  :break;
        }

        switch(ui->databox->currentIndex())
        {
            case 0 : wincom.portcom.DataBits = DATA_5; break;
            case 1 : wincom.portcom.DataBits = DATA_6; break;
            case 2 : wincom.portcom.DataBits = DATA_7; break;
            case 3 : wincom.portcom.DataBits = DATA_8; break;
            default : break;
        }

        switch(ui->flowbox->currentIndex())
        {
            case 0 : wincom.portcom.FlowControl = FLOW_OFF; break;
            case 1 : wincom.portcom.FlowControl = FLOW_HARDWARE; break;
            case 2 : wincom.portcom.FlowControl = FLOW_XONXOFF; break;
            default :break;
        }

        switch(ui->stopbox->currentIndex())
        {
            case 0 :wincom.portcom.StopBits = STOP_1; break;
            case 1 :wincom.portcom.StopBits = STOP_1_5; break;
            case 2 :wincom.portcom.StopBits = STOP_2; break;
            default :break;
        }

        if(false == wincom.openComPort(ui->PortBox->currentText(),wincom.portcom))
        {
            QMessageBox::warning(this,tr("Warning"),tr("串口不存在或已被占用!"),QMessageBox::Yes);
            return ;//false;
        }
        ui->bandrate->setEnabled(false);
        ui->PortBox->setEnabled(false);
        ui->bandrate->setEnabled(false);
        ui->checkbox->setEnabled(false);
        ui->databox->setEnabled(false);
        ui->flowbox->setEnabled(false);
        ui->stopbox->setEnabled(false);
        ui->OpenButton->setText(tr("关闭"));

    }
    else
    {
        wincom.closeComPort();
        ui->bandrate->setEnabled(true);
        ui->PortBox->setEnabled(true);
        ui->bandrate->setEnabled(true);
        ui->checkbox->setEnabled(true);
        ui->databox->setEnabled(true);
        ui->flowbox->setEnabled(true);

        ui->stopbox->setEnabled(true);
        ui->OpenButton->setText(tr("打开"));

    }
}


void MainWindow::on_searchbutton_clicked()
{
    ui->PortBox->clear();
    ui->PortBox->addItems(wincom.readAllComToList());
}

void MainWindow::on_RecClrButton_clicked()
{
    ui->ReceiveText->clear();
}

bool MainWindow::eventFilter(QObject *target, QEvent *event)
{
    if(target == ui->SendTextEdit->viewport())
    {
        QMouseEvent *mousevent = (QMouseEvent *)(event);
        if(event->type()== QEvent::MouseButtonDblClick && mousevent->buttons() == Qt::LeftButton)
        {
            ui->ReceiveText->appendPlainText("double click");

            return true;
        }
    }

    return false;
}

void MainWindow::sendEditData(void)
{
    ui->ReceiveText->appendPlainText("double");
}


