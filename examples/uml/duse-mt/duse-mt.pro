#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

QT = wrappedobjectswidgets script quick quick-private qml

TARGET = duse-mt
TEMPLATE = app

target.path = $$[QT_INSTALL_PREFIX]/bin

xmi.path = $$[QT_INSTALL_PREFIX]/share/doc/packages/duse-mt
xmi.files = example.xmi

INSTALLS += target xmi

CONFIG += c++11

SOURCES += main.cpp \
        mainwindow.cpp

HEADERS  += mainwindow.h \

FORMS    += mainwindow.ui \
            aboutplugins.ui \
    newmodel.ui

RESOURCES += \
    duse-mt.qrc
