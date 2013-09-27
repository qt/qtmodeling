QT.uml.VERSION = 5.1.1
QT.uml.MAJOR_VERSION = 5
QT.uml.MINOR_VERSION = 1
QT.uml.PATCH_VERSION = 1

QT.uml.name = QtUml
QT.uml.bins = $$QT_MODULE_BIN_BASE
QT.uml.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.uml.name
QT.uml.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.uml.name/$$QT.uml.VERSION
QT.uml.sources = $$QT_MODULE_BASE/src/uml
QT.uml.libs = $$QT_MODULE_LIB_BASE
QT.uml.plugins = $$QT_MODULE_PLUGIN_BASE
QT.uml.imports = $$QT_MODULE_IMPORT_BASE
QT.uml.depends = core wrappedobjects

QT.uml.DEFINES = QT_UML_LIB
QT_CONFIG += uml
