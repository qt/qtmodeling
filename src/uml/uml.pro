load(qt_build_config)

TARGET = QtUml
QT = core

load(qt_module)

PUBLIC_HEADERS += \
    qtumlglobal.h \
    Classes/Kernel/property.h

SOURCES += \
    Classes/Kernel/property.cpp

HEADERS += $$PUBLIC_HEADERS
