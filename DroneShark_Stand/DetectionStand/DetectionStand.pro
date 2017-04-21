#-------------------------------------------------
#
# Project created by QtCreator 2017-04-21T02:56:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DetectionStand
TEMPLATE = app


SOURCES += \
    alert.cpp \
    alertdialog.cpp \
    attackvector.cpp \
    commsmanagers.cpp \
    detectionvector.cpp \
    hardwaremanager.cpp \
    log.cpp \
    main.cpp \
    mainwindow.cpp \
    shark.cpp \
    switchreader.cpp \
    xbeeradio.cpp

HEADERS  += \
    alert.h \
    alertdialog.h \
    attackvector.h \
    commsmanagers.h \
    detectionvector.h \
    hardwaremanager.h \
    log.h \
    mainwindow.h \
    shark.h \
    switchreader.h \
    xbeecomms.h \
    xbeeradio.h

FORMS += \
    alertdialog.ui \
    mainwindow.ui

OTHER_FILES +=
