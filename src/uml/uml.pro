load(qt_build_config)

TARGET = QtUml
QT = wrappedobjects-private core-private

QMAKE_DOCS = $$PWD/doc/qtuml.qdocconf

load(qt_module)

include(uml.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
