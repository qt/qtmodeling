QT.wrappedobjects.VERSION = 5.0.0
QT.wrappedobjects.MAJOR_VERSION = 5
QT.wrappedobjects.MINOR_VERSION = 0
QT.wrappedobjects.PATCH_VERSION = 0

QT.wrappedobjects.name = QtWrappedObjects
QT.wrappedobjects.bins = $$QT_MODULE_BIN_BASE
QT.wrappedobjects.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.wrappedobjects.name
QT.wrappedobjects.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.wrappedobjects.name/$$QT.wrappedobjects.VERSION
QT.wrappedobjects.sources = $$QT_MODULE_BASE/src/wrappedobjects
QT.wrappedobjects.libs = $$QT_MODULE_LIB_BASE
QT.wrappedobjects.plugins = $$QT_MODULE_PLUGIN_BASE
QT.wrappedobjects.imports = $$QT_MODULE_IMPORT_BASE
QT.wrappedobjects.depends = core

QT.wrappedobjects.DEFINES = QT_WRAPPEDOBJECTS_LIB
QT_CONFIG += wrappedobjects
