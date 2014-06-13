load(qt_build_config)

TARGET = QtMof
QT = core-private modeling-private

MODULE_PLUGIN_TYPES = metamodels/libqmofmetamodel.so

QMAKE_DOCS = $$PWD/doc/qtmof.qdocconf

load(qt_module)

include(mof.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
