QT.saduse.VERSION = 5.1.0
QT.saduse.MAJOR_VERSION = 5
QT.saduse.MINOR_VERSION = 1
QT.saduse.PATCH_VERSION = 0

QT.saduse.name = QtSADuse
QT.saduse.bins = $$QT_MODULE_BIN_BASE
QT.saduse.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.saduse.name
QT.saduse.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.saduse.name/$$QT.saduse.VERSION
QT.saduse.sources = $$QT_MODULE_BASE/src/saduse
QT.saduse.libs = $$QT_MODULE_LIB_BASE
QT.saduse.plugins = $$QT_MODULE_PLUGIN_BASE
QT.saduse.imports = $$QT_MODULE_IMPORT_BASE
QT.saduse.depends = core wrappedobjects

QT.saduse.DEFINES = QT_MOF_LIB
QT_CONFIG += saduse
