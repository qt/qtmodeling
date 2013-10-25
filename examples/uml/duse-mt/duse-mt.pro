#-------------------------------------------------
#
# Project created by QtCreator 2012-10-26T12:43:33
#
#-------------------------------------------------

#QT = modelingwidgets script quick quick-private qml duse
QT = widgets modelingwidgets script quick quick-private qml

TARGET = duse-mt
TEMPLATE = app

target.path = $$[QT_INSTALL_PREFIX]/bin

xmi.path = $$[QT_INSTALL_PREFIX]/share/doc/packages/duse-mt
xmi.files = example.xmi

INSTALLS += target xmi

INCLUDEPATH += /usr/include/DuSE
LIBS += -lduseinterfaces

SOURCES += main.cpp \
    newdusedesign.cpp \
    shell/core.cpp \
    shell/uicontroller.cpp \
    shell/mainwindow.cpp

HEADERS  += \
    newdusedesign.h \
    shell/core.h \
    shell/uicontroller.h \
    shell/mainwindow.h

FORMS    += mainwindow.ui \
            aboutplugins.ui \
    newmodel.ui \
    aboutdusemt.ui \
    newdusedesign.ui

RESOURCES += \
    duse-mt.qrc
