load(qt_build_config)

TARGET = QtMof
QT = core uml

load(qt_module)

PUBLIC_HEADERS += \
    qtmofglobal.h \
    Reflection/object.h \
    Common/reflectivesequence.h \
    Common/reflectivecollection.h

SOURCES += \
    Reflection/object.cpp \
    Common/reflectivesequence.cpp \
    Common/reflectivecollection.cpp

HEADERS += $$PUBLIC_HEADERS
