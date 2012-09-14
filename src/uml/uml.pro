load(qt_build_config)

TARGET = QtUml
QT = core

load(qt_module)

PUBLIC_HEADERS += \
    qtumlglobal.h \
    Classes/Kernel/qproperty.h

SOURCES += \
    Classes/Kernel/qproperty.cpp

HEADERS += $$PUBLIC_HEADERS
