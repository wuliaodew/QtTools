#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->recCharSel->setChecked(true);
    ui->sendCharSel->setChecked(true);
    emit ui->searchbutton->click();
    ui->bandrate->setCurrentIndex(4);
    ui->databox->setCurrentIndex(3);
    ui->timecheck->setCheckState(Qt::Checked);

    connect(&autosendtimer,SIGNAL(timeout()),this,SLOT(autoSend()));
    connect(&wincom.myCom,SIGNAL(readyRead()),this,SLOT(DisReiveData()));//收到数据
    ui->SendTextEdit->viewport()->installEventFilter(this);//初始化过滤器
    ui->sendTextEdit_1->viewport()->installEventFilter(this);
    ui->sendTextEdit_2->viewport()->installEventFilter(this);
    ui->sendTextEdit_3->viewport()->installEventFilter(this);
    ui->sendTextEdit_4->viewport()->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//显示接收数据
void MainWindow::DisReiveData(void)
{
    QString temp;

    if(wincom.myCom.bytesAvailable() != 0)//判断是否有数据读取
    {
        ui->ReceiveText->moveCursor(QTextCursor::End);

        if(ui->timecheck->isChecked())
            temp = "【"+nowTime.currentDateTime().toString("yy/MM/dd hh:mm:ss")+"】<<< ";

        if(ui->recHexSel->isChecked())
            temp += wincom.readAlltoHex();
        else if(ui->recCharSel->isChecked())
            temp += wincom.readAll();

        temp += '\r';

        if(!ui->stopDisSelBox->isChecked())
          ui->ReceiveText->insertPlainText(temp);
    }
}

void MainWindow::SendData(QString sbuf)
{
    qint64 sendcnt;

    if(ui->sendCharSel->isChecked())
        sendcnt = wincom.WriteString(sbuf);
    else if(ui->sendHexSel->isChecked())
        sendcnt = wincom.WriteHex(sbuf);

    if(sendcnt > 0)
    {
        sbuf.insert(0,"【发送数据"+nowTime.currentDateTime().toString("MM/dd hh:mm:ss")+"】>>>");
        ui->statusBar->showMessage(sbuf);
    }
    else
    {
        ui->statusBar->showMessage("提醒： 请打串口或输入数据！！！！！");
    }
}

void MainWindow::autoSend(void)
{
    SendData(ui->SendTextEdit->toPlainText());
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
//搜索串口
void MainWindow::on_searchbutton_clicked()
{
    ui->PortBox->clear();
    ui->PortBox->addItems(wincom.readAllComToList());
}
//清除接收数据
void MainWindow::on_RecClrButton_clicked()
{
    ui->ReceiveText->clear();
}

//事件过滤器
bool MainWindow::eventFilter(QObject *target, QEvent *event)
{

    QMouseEvent *mousevent = (QMouseEvent *)(event);
    if(event->type()== QEvent::MouseButtonDblClick && mousevent->buttons() == Qt::LeftButton)
    {
        if(target == ui->SendTextEdit->viewport())
            SendData(ui->SendTextEdit->toPlainText());
        else if (target == ui->sendTextEdit_1->viewport())
            SendData(ui->sendTextEdit_1->toPlainText());
        else if (target == ui->sendTextEdit_2->viewport())
            SendData(ui->sendTextEdit_2->toPlainText());
        else if (target == ui->sendTextEdit_3->viewport())
            SendData(ui->sendTextEdit_3->toPlainText());
        else if (target == ui->sendTextEdit_4->viewport())
            SendData(ui->sendTextEdit_4->toPlainText());

        return true;
    }

    return false;
}


//清空发送数据框
void MainWindow::on_pushButton_clicked()
{
    ui->SendTextEdit->clear();
}
//自动发送
void MainWindow::on_autosendBox_clicked()
{
    if(ui->autosendBox->isChecked())
    {
        if(ui->sendmsBox->value()!= 0)
        {
             autosendtimer.start(ui->sendmsBox->value());
        }
        else
        {
            ui->statusBar->showMessage("提醒： 输入时间无效或为输入！！！！！！");
        }
    }
    else
    {
        autosendtimer.stop();
    }
}

void MainWindow::on_sendmsBox_valueChanged(int arg1)
{
    if(ui->autosendBox->isChecked())
    {
        if(arg1 != 0)
        {
            autosendtimer.start(arg1);
        }
        else
        {
            autosendtimer.stop();
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QString savepath = QDesktopServices::storageLocation(QDesktopServices::DesktopLocation)+"/rec.txt";//保存到桌面
    QString path = QFileDialog::getSaveFileName(this, tr("Save File"),savepath,
                                                tr("TEXT (*.txt)"));

    if(path.length()!= 0)
    {
        QFile *savefile = new QFile(path);

        savefile->open(QIODevice::WriteOnly|QIODevice::Truncate|QIODevice::Text);
        savefile->write(ui->ReceiveText->toPlainText().toAscii());

        savefile->close();
    }

}
