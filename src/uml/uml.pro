load(qt_build_config)

TARGET = QtUml
QT = core-private

load(qt_module)

PUBLIC_HEADERS += \
    qtumlglobal.h \
    Classes/Kernel/qelement.h \
    Classes/Kernel/qcomment.h \
    Classes/Kernel/qproperty.h \

PRIVATE_HEADERS += \
    Classes/Kernel/qelement_p.h \
    Classes/Kernel/qcomment_p.h

SOURCES += \
    Classes/Kernel/qelement.cpp \
    Classes/Kernel/qcomment.cpp \
    Classes/Kernel/qproperty.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
