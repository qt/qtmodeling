load(qt_build_config)

TARGET = QtWrappedObjectsWidgets
QT = core-private widgets-private wrappedobjects

QMAKE_DOCS = $$PWD/doc/qtwrappedobjectswidgets.qdocconf

load(qt_module)

PUBLIC_HEADERS += \
    qwrappedobjectview.h \
    qwrappedobjectmodel.h \
    qwrappedobjectpropertymodel.h \
    qwrappedobjectpropertyeditor.h \
    qwrappedobjectpropertyfiltermodel.h \

PRIVATE_HEADERS += \
    qwrappedobjectview_p.h \
    qwrappedobjectmodel_p.h \
    qwrappedobjectpropertymodel_p.h \
    qwrappedobjectpropertyeditor_p.h \
    internal/propertyeditoritemdelegate_p.h \
    internal/filterwidget_p.h \
    internal/propertyeditor_p.h

SOURCES += \
    qwrappedobjectview.cpp \
    qwrappedobjectmodel.cpp \
    qwrappedobjectpropertymodel.cpp \
    qwrappedobjectpropertyeditor.cpp \
    qwrappedobjectpropertyfiltermodel.cpp \
    internal/filterwidget.cpp \
    internal/propertyeditor.cpp \
    internal/propertyeditoritemdelegate.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
