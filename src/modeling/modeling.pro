load(qt_build_config)

TARGET = QtModeling
QT = core core-private

QMAKE_DOCS = $$PWD/doc/qtmodeling.qdocconf

load(qt_module)

PUBLIC_HEADERS += \
    qtmodelingglobal.h \
    qwrappedobject.h \
    qguardedlist.h \
    qguardedset.h \
    qsignaledpointer.h \
    qmodelingobject.h

PRIVATE_HEADERS += \
    qmodelingobject_p.h

SOURCES += \
    qwrappedobject.cpp \
    qmodelingobject.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
