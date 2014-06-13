load(qt_build_config)

TARGET = QtDuse
QT = core-private modeling-private uml

MODULE_PLUGIN_TYPES = metamodels/libqdusemetamodel.so

QMAKE_DOCS = $$PWD/doc/qtduse.qdocconf

load(qt_module)

include(duse.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
