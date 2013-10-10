load(qt_build_config)

TARGET = QtModeling
QT = core-private

QMAKE_DOCS = $$PWD/doc/qtmodeling.qdocconf

load(qt_module)

PUBLIC_HEADERS += \
    qtmodelingglobal.h \
    qtmodelingnamespace.h \
    qmodelingelement.h \
    qmodelingobject.h \
    qmetamodelplugin.h \
    qxmiwriter.h \
    qxmireader.h

PRIVATE_HEADERS += \
    qmodelingobject_p.h \
    qxmiwriter_p.h \
    qxmireader_p.h

SOURCES += \
    qtmodelingnamespace.cpp \
    qmodelingobject.cpp \
    qmetamodelplugin.cpp \
    qxmiwriter.cpp \
    qxmireader.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
