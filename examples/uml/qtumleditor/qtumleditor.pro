#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

QT       = core gui mof

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtumleditor
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    propertyeditoritemdelegate.cpp \
    propertyeditor.cpp \
    wrappedobjectpropertymodel.cpp \
    wrappedobjectmodel.cpp \
    wrappedobjectpropertyfiltermodel.cpp \
    filterwidget.cpp

HEADERS  += mainwindow.h \
    propertyeditoritemdelegate.h \
    propertyeditor.h \
    wrappedobjectpropertymodel.h \
    wrappedobjectmodel.h \
    wrappedobjectpropertyfiltermodel.h \
    filterwidget.h

FORMS    += mainwindow.ui

RESOURCES += \
    qtumleditor.qrc
