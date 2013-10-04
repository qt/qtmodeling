#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

#QT = modelingwidgets script quick quick-private qml duse
QT = widgets script quick quick-private qml

TARGET = duse-mt
TEMPLATE = app

target.path = $$[QT_INSTALL_PREFIX]/bin

xmi.path = $$[QT_INSTALL_PREFIX]/share/doc/packages/duse-mt
xmi.files = example.xmi

INSTALLS += target xmi

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
