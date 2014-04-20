#-------------------------------------------------
#
# Project created by QtCreator 2014-04-19T07:43:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = linux-serial
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mqserial.cpp \
    qextserialport/qextserialbase.cpp \
    qextserialport/posix_qextserialport.cpp

HEADERS  += mainwindow.h \
    mqserial.h \
    qextserialport/posix_qextserialport.h \
    qextserialport/qextserialbase.h

FORMS    += mainwindow.ui \
    mqserial.ui

OTHER_FILES += \
    linux-serial.pro.user

SUBDIRS += \
    qextserialport/qextserialport.pro
