load(qt_build_config)

TARGET = QtSADuseProfile
QT = wrappedobjects-private core-private uml

QMAKE_DOCS = $$PWD/doc/qtsaduseprofile.qdocconf

load(qt_module)

include(saduseprofile.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
