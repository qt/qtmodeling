TARGET = duseinterfaces

include(../../duse-mt-library.pri)

DEFINES += DUSEINTERFACES_LIBRARY

SOURCES += icore.cpp \
    iuicontroller.cpp \
    iplugin.cpp

HEADERS += icore.h\
        duseinterfaces_global.h \
    iuicontroller.h \
    iplugin.h
