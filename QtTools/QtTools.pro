#-------------------------------------------------
#
# Project created by QtCreator 2013-05-22T20:44:40
#
#-------------------------------------------------

QT       += core gui

TARGET = QtTools
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    serialport/win_qextserialport.cpp \
    serialport/qextserialbase.cpp

HEADERS  += mainwindow.h \
    serialport/win_qextserialport.h \
    serialport/qextserialbase.h

FORMS    += mainwindow.ui
