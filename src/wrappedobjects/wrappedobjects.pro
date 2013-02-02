load(qt_build_config)

TARGET = QtWrappedObjects
QT = core-private

QMAKE_DOCS = $$PWD/doc/qtwrappedobjects.qdocconf

load(qt_module)

PUBLIC_HEADERS += \
    qxmiwriter.h \
    qxmireader.h \
    qwrappedobject.h \
    qmetamodelplugin.h \
    qmetawrappedobject.h \
    qwrappedobjectpointer.h \
    qtwrappedobjectsnamespace.h

PRIVATE_HEADERS += \
    qxmiwriter_p.h \
    qxmireader_p.h \
    qwrappedobject_p.h \
    qmetawrappedobject_p.h

SOURCES += \
    qxmiwriter.cpp \
    qxmireader.cpp \
    qwrappedobject.cpp \
    qmetamodelplugin.cpp \
    qmetawrappedobject.cpp \
    qwrappedobjectpointer.cpp \
    qtwrappedobjectsnamespace.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
