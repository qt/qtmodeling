#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

QT       = core gui mof

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtumleditor
TEMPLATE = app

target.path = $$[QT_INSTALL_PREFIX]/bin

xmi.path = $$[QT_INSTALL_PREFIX]/share/doc/packages/qtumleditor
xmi.files = example.xmi

INSTALLS += target xmi

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    propertyeditoritemdelegate.cpp \
    propertyeditor.cpp \
    wrappedobjectpropertymodel.cpp \
    wrappedobjectmodel.cpp \
    wrappedobjectpropertyfiltermodel.cpp \
    filterwidget.cpp \
    qwrappedobjectpropertyeditor.cpp \
    qwrappedobjectview.cpp

HEADERS  += mainwindow.h \
    propertyeditoritemdelegate.h \
    propertyeditor.h \
    wrappedobjectpropertymodel.h \
    wrappedobjectmodel.h \
    wrappedobjectpropertyfiltermodel.h \
    filterwidget.h \
    qwrappedobjectpropertyeditor.h \
    qwrappedobjectview.h

FORMS    += mainwindow.ui

RESOURCES += \
    qtumleditor.qrc
