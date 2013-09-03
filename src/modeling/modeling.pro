load(qt_build_config)

TARGET = QtModeling
QT = core core-private

QMAKE_DOCS = $$PWD/doc/qtmodeling.qdocconf

load(qt_module)

HEADERS += \
    qtmodelingglobal.h \
    qmodelingobject.h
