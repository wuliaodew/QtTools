/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue May 28 22:32:39 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include <qsendtextedit.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame;
    QLabel *label_8;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *selechexbutton;
    QRadioButton *selecharbutton;
    QCheckBox *timecheck;
    QPushButton *RecClrButton;
    QPlainTextEdit *ReceiveText;
    QFrame *frame_2;
    QSendTextEdit *SendTextEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton;
    QFrame *frame_3;
    QPushButton *searchbutton;
    QPushButton *OpenButton;
    QFrame *frame_4;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *PortBox;
    QLabel *label_2;
    QComboBox *bandrate;
    QLabel *label_4;
    QComboBox *databox;
    QFormLayout *formLayout_2;
    QComboBox *checkbox;
    QLabel *label_5;
    QComboBox *stopbox;
    QLabel *label_6;
    QComboBox *flowbox;
    QLabel *label_3;
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
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setBold(false);
        font.setWeight(50);
        tabWidget->setFont(font);
        tabWidget->setMouseTracking(false);
        tabWidget->setFocusPolicy(Qt::WheelFocus);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        frame = new QFrame(tab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 341, 560));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 81, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_8->setFont(font1);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 0, 259, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        selechexbutton = new QRadioButton(horizontalLayoutWidget);
        selechexbutton->setObjectName(QString::fromUtf8("selechexbutton"));
        selechexbutton->setFont(font1);
        selechexbutton->setChecked(true);

        horizontalLayout->addWidget(selechexbutton);

        selecharbutton = new QRadioButton(horizontalLayoutWidget);
        selecharbutton->setObjectName(QString::fromUtf8("selecharbutton"));
        selecharbutton->setFont(font1);

        horizontalLayout->addWidget(selecharbutton);

        timecheck = new QCheckBox(horizontalLayoutWidget);
        timecheck->setObjectName(QString::fromUtf8("timecheck"));
        timecheck->setFont(font1);
        timecheck->setFocusPolicy(Qt::WheelFocus);

        horizontalLayout->addWidget(timecheck);

        RecClrButton = new QPushButton(horizontalLayoutWidget);
        RecClrButton->setObjectName(QString::fromUtf8("RecClrButton"));
        RecClrButton->setFont(font1);

        horizontalLayout->addWidget(RecClrButton);

        ReceiveText = new QPlainTextEdit(frame);
        ReceiveText->setObjectName(QString::fromUtf8("ReceiveText"));
        ReceiveText->setGeometry(QRect(0, 40, 341, 521));
        QFont font2;
        font2.setKerning(true);
        ReceiveText->setFont(font2);
        ReceiveText->setMouseTracking(false);
        ReceiveText->setFocusPolicy(Qt::WheelFocus);
        ReceiveText->setContextMenuPolicy(Qt::DefaultContextMenu);
        ReceiveText->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        ReceiveText->setUndoRedoEnabled(true);
        ReceiveText->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        ReceiveText->setReadOnly(true);
        ReceiveText->setTabStopWidth(80);
        ReceiveText->setCursorWidth(1);
        ReceiveText->setTextInteractionFlags(Qt::TextSelectableByMouse);
        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(350, 120, 441, 281));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        SendTextEdit = new QSendTextEdit(frame_2);
        SendTextEdit->setObjectName(QString::fromUtf8("SendTextEdit"));
        SendTextEdit->setGeometry(QRect(0, 40, 451, 131));
        QFont font3;
        font3.setPointSize(12);
        font3.setItalic(false);
        SendTextEdit->setFont(font3);
        horizontalLayoutWidget_2 = new QWidget(frame_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 221, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        label_7->setFont(font4);

        horizontalLayout_2->addWidget(label_7);

        radioButton = new QRadioButton(horizontalLayoutWidget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setFont(font1);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(horizontalLayoutWidget_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font1);

        horizontalLayout_2->addWidget(radioButton_2);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(360, 10, 75, 24));
        pushButton->setFont(font1);
        frame_3 = new QFrame(tab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(430, 10, 295, 91));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Sunken);
        searchbutton = new QPushButton(frame_3);
        searchbutton->setObjectName(QString::fromUtf8("searchbutton"));
        searchbutton->setGeometry(QRect(0, 60, 143, 31));
        searchbutton->setFont(font1);
        OpenButton = new QPushButton(frame_3);
        OpenButton->setObjectName(QString::fromUtf8("OpenButton"));
        OpenButton->setGeometry(QRect(149, 60, 147, 31));
        OpenButton->setFont(font1);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 295, 61));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_4->setMidLineWidth(0);
        horizontalLayoutWidget_3 = new QWidget(frame_4);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 295, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setWeight(75);
        label->setFont(font5);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        PortBox = new QComboBox(horizontalLayoutWidget_3);
        PortBox->setObjectName(QString::fromUtf8("PortBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, PortBox);

        label_2 = new QLabel(horizontalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font5);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        bandrate = new QComboBox(horizontalLayoutWidget_3);
        bandrate->setObjectName(QString::fromUtf8("bandrate"));

        formLayout->setWidget(1, QFormLayout::FieldRole, bandrate);

        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font5);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        databox = new QComboBox(horizontalLayoutWidget_3);
        databox->setObjectName(QString::fromUtf8("databox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, databox);


        horizontalLayout_3->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(2);
        formLayout_2->setVerticalSpacing(2);
        checkbox = new QComboBox(horizontalLayoutWidget_3);
        checkbox->setObjectName(QString::fromUtf8("checkbox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, checkbox);

        label_5 = new QLabel(horizontalLayoutWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font5);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        stopbox = new QComboBox(horizontalLayoutWidget_3);
        stopbox->setObjectName(QString::fromUtf8("stopbox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, stopbox);

        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font5);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        flowbox = new QComboBox(horizontalLayoutWidget_3);
        flowbox->setObjectName(QString::fromUtf8("flowbox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, flowbox);

        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font5);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);


        horizontalLayout_3->addLayout(formLayout_2);

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
        label_8->setText(QApplication::translate("MainWindow", "\346\216\245\346\224\266\346\225\260\346\215\256\357\274\232", 0, QApplication::UnicodeUTF8));
        selechexbutton->setText(QApplication::translate("MainWindow", "HEX", 0, QApplication::UnicodeUTF8));
        selecharbutton->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246", 0, QApplication::UnicodeUTF8));
        timecheck->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        RecClrButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "HEX", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "\345\255\227\347\254\246", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", 0, QApplication::UnicodeUTF8));
        searchbutton->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        OpenButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
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
        label_4->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        databox->clear();
        databox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "5bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "6bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "7bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "8bit", 0, QApplication::UnicodeUTF8)
        );
        checkbox->clear();
        checkbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None \346\227\240", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Odd \345\245\207", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Even \345\201\266", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        stopbox->clear();
        stopbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "1.5bit", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "2bit", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("MainWindow", "\346\265\201\346\216\247\345\210\266\357\274\232", 0, QApplication::UnicodeUTF8));
        flowbox->clear();
        flowbox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "OFF", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\347\241\254\344\273\266", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "XON/XOFF", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
