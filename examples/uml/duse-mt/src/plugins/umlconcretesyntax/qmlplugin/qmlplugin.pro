#-------------------------------------------------
#
# Project created by QtCreator 2013-10-25T17:38:51
#
#-------------------------------------------------

TARGET  = qtmodelingumlplugin
TARGETPATH = QtModeling/Uml

QT += quick-private

# Qml
QML_FILES = \
    UmlElement.qml \
    UmlSlot.qml \
    UmlClass.qml \
    UmlComponent.qml \
    UmlProperty.qml \
    UmlAssociation.qml

# JavaScript

QML_FILES += \
    util.js

# Images
QML_FILES += \
    images/resize-mark.png \

HEADERS += \
    umlconcretesyntaxqmlplugin.h \
    relationshipitem.h

SOURCES += \
    umlconcretesyntaxqmlplugin.cpp \
    relationshipitem.cpp

CONFIG += no_cxx_module
load(qml_plugin)
