TARGET = duseinterfaces

include(../../duse-mt-library.pri)

DEFINES += DUSEINTERFACES_LIBRARY

SOURCES += icore.cpp \
    iuicontroller.cpp \
    iprojectcontroller.cpp \
    iplugin.cpp

HEADERS += icore.h\
        duseinterfaces_global.h \
    iuicontroller.h \
    iprojectcontroller.h \
    iplugin.h
