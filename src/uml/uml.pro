load(qt_build_config)

TARGET = QtUml
QT = core-private

load(qt_module)

include(Classes/Kernel/classes-kernel.pri)

HEADERS += $$PUBLIC_HEADERS
