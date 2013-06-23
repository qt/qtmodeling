load(qt_build_config)

TARGET = QtSADuse
QT = wrappedobjects-private core-private uml

QMAKE_DOCS = $$PWD/doc/qtsaduse.qdocconf

load(qt_module)

include(saduse.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
