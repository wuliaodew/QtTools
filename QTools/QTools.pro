#-------------------------------------------------
#
# Project created by QtCreator 2013-05-23T14:35:54
#
#-------------------------------------------------

QT       += core gui

TARGET = QTools
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialport/win_qextserialport.cpp \
    serialport/qextserialbase.cpp \
    serialport/qcomport.cpp

HEADERS  += mainwindow.h \
    serialport/win_qextserialport.h \
    serialport/qextserialbase.h \
    serialport/qcomport.h

FORMS    += mainwindow.ui