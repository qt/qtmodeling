load(qt_build_config)

TARGET = QtSADuseProfile
QT = core-private modeling-private uml

MODULE_PLUGIN_TYPES = metamodels/libqsaduseprofilemetamodel.so

QMAKE_DOCS = $$PWD/doc/qtsaduseprofile.qdocconf

load(qt_module)

include(saduseprofile.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
