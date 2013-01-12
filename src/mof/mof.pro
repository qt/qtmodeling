load(qt_build_config)

TARGET = QtMof
QT = wrappedobjects-private core-private

QMAKE_DOCS = $$PWD/doc/qtmof.qdocconf

load(qt_module)

include(mof.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
