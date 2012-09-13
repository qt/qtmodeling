load(qt_build_config)

TARGET = QtMof
QT = core

load(qt_module)

PUBLIC_HEADERS += \
    qtmofglobal.h \
    qmof.h

SOURCES += \
    qmof.cpp \

HEADERS += $$PUBLIC_HEADERS
