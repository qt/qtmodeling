load(qt_build_config)

TARGET = QtUml
QT = core-private

load(qt_module)

include(uml.pri)

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
