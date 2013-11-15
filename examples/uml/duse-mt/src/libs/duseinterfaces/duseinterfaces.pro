include(../../duse-mt-library.pri)

HEADERS += \
    duseinterfaces_global.h \
    icore.h\
    iuicontroller.h \
    iprojectcontroller.h \
    iplugincontroller.h \
    iplugin.h

SOURCES += \
    icore.cpp \
    iuicontroller.cpp \
    iprojectcontroller.cpp \
    iplugincontroller.cpp \
    iplugin.cpp

DEFINES += DUSEINTERFACES_LIBRARY
