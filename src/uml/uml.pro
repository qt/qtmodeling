load(qt_build_config)

TARGET = QtUml
QT = core-private modeling-private

MODULE_PLUGIN_TYPES = metamodels/libqumlmetamodel.so

QMAKE_DOCS = $$PWD/doc/qtuml.qdocconf

load(qt_module)

include(uml.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
