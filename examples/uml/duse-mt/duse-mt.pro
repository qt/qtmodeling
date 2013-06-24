#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

QT = wrappedobjectswidgets script quick quick-private qml duse

TARGET = duse-mt
TEMPLATE = app

target.path = $$[QT_INSTALL_PREFIX]/bin

xmi.path = $$[QT_INSTALL_PREFIX]/share/doc/packages/duse-mt
xmi.files = example.xmi

INSTALLS += target xmi

CONFIG += c++11

SOURCES += main.cpp \
        mainwindow.cpp \
    newdusedesign.cpp

HEADERS  += mainwindow.h \
    newdusedesign.h

FORMS    += mainwindow.ui \
            aboutplugins.ui \
    newmodel.ui \
    aboutdusemt.ui \
    newdusedesign.ui

RESOURCES += \
    duse-mt.qrc
