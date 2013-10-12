load(qt_build_config)

TARGET = QtModelingWidgets
QT = core-private widgets-private modeling

QMAKE_DOCS = $$PWD/doc/qtmodelingwidgets.qdocconf

load(qt_module)

PUBLIC_HEADERS += \
    qtmodelingwidgetsglobal.h \
    qmodelingobjectview.h \
    qmodelingobjectmodel.h \
    qmodelingobjectpropertymodel.h \
    qmodelingobjectpropertyeditor.h \
    qmodelingobjectpropertyfiltermodel.h

PRIVATE_HEADERS += \
    qmodelingobjectview_p.h \
    qmodelingobjectmodel_p.h \
    qmodelingobjectpropertymodel_p.h \
    qmodelingobjectpropertyeditor_p.h \
    internal/propertyeditoritemdelegate_p.h \
    internal/filterwidget_p.h \
    internal/propertyeditor_p.h

SOURCES += \
    qmodelingobjectview.cpp \
    qmodelingobjectmodel.cpp \
    qmodelingobjectpropertymodel.cpp \
    qmodelingobjectpropertyeditor.cpp \
    qmodelingobjectpropertyfiltermodel.cpp \
    internal/filterwidget.cpp \
    internal/propertyeditor.cpp \
    internal/propertyeditoritemdelegate.cpp

HEADERS += $$PUBLIC_HEADERS $$PRIVATE_HEADERS
