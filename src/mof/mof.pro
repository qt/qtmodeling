load(qt_build_config)

TARGET = QtMof
QT = core uml

load(qt_module)

PUBLIC_HEADERS += \
    qtmofglobal.h \
    Reflection/qmofobject.h \
    Common/qreflectivesequence.h \
    Common/qreflectivecollection.h

SOURCES += \
    Reflection/qmofobject.cpp \
    Common/qreflectivesequence.cpp \
    Common/qreflectivecollection.cpp

HEADERS += $$PUBLIC_HEADERS
