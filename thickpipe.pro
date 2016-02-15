#-------------------------------------------------
#
# Project created by QtCreator 2016-02-01T22:06:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = thickpipe
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog_formulae.cpp \
    about.cpp \
    error_dialog.cpp

HEADERS  += mainwindow.h \
    dialog_formulae.h \
    about.h \
    error_dialog.h

FORMS    += mainwindow.ui \
    dialog_formulae.ui \
    about.ui \
    error_dialog.ui
