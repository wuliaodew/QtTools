/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun May 26 18:24:53 2013
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPlainTextEdit *ReceiveText;
    QFrame *frame;
    QPushButton *OpenButton;
    QComboBox *PortBox;
    QComboBox *flowbox;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *searchbutton;
    QLabel *label_6;
    QLabel *label;
    QComboBox *bandrate;
    QLabel *label_3;
    QComboBox *checkbox;
    QLabel *label_2;
    QComboBox *databox;
    QComboBox *stopbox;
    QWidget *tab_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 800, 584));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        ReceiveText = new QPlainTextEdit(tab);
        ReceiveText->setObjectName(QString::fromUtf8("ReceiveText"));
        ReceiveText->setGeometry(QRect(440, 30, 341, 331));
        ReceiveText->setReadOnly(true);
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(440, 380, 341, 161));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        OpenButton = new QPushButton(frame);
        OpenButton->setObjectName(QString::fromUtf8("OpenButton"));
        OpenButton->setGeometry(QRect(260, 0, 81, 41));
        PortBox = new QComboBox(frame);
        PortBox->setObjectName(QString::fromUtf8("PortBox"));
        PortBox->setGeometry(QRect(80, 50, 91, 22));
        flowbox = new QComboBox(frame);
        flowbox->setObjectName(QString::fromUtf8("flowbox"));
        flowbox->setGeometry(QRect(260, 130, 81, 22));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 130, 61, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 61, 20));
        label_5->setFont(font);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 90, 61, 20));
        label_4->setFont(font);
        searchbutton = new QPushButton(frame);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));
        searchbutton->setGeometry(QRect(80, 0, 91, 41));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(200, 130, 61, 20));
        label_6->setFont(font);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 41, 20));
        label->setFont(font);
        bandrate = new QComboBox(frame);
        bandrate->setObjectName(QString::fromUtf8("bandrate"));
        bandrate->setGeometry(QRect(80, 90, 91, 22));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 50, 61, 20));
        label_3->setFont(font);
        checkbox = new QComboBox(frame);
        checkbox->setObjectName(QString::fromUtf8("checkbox"));
        checkbox->setGeometry(QRect(260, 50, 81, 22));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 61, 20));
        label_2->setFont(font);
        databox = new QComboBox(frame);
        databox->setObjectName(QString::fromUtf8("databox"));
        databox->setGeometry(QRect(260, 90, 81, 22));
        stopbox = new QComboBox(frame);
        stopbox->setObjectName(QString::fromUtf8("stopbox"));
        stopbox->setGeometry(QRect(80, 130, 91, 22));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        OpenButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        flowbox->clear();
        flowbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\347\241\254\344\273\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "XON/XOFF", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        searchbutton->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\265\201\357\274\232", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        bandrate->clear();
        bandrate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "14400", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "115200", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232\357\274\232", 0, QApplication::UnicodeUTF8));
        checkbox->clear();
        checkbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None \346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Odd \345\245\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Even \345\201\266", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        databox->clear();
        databox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "6bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8bit", 0, QApplication::UnicodeUTF8)
        );
        stopbox->clear();
        stopbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.5bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2bit", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
