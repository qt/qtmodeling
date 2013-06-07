QT.duse.VERSION = 5.1.0
QT.duse.MAJOR_VERSION = 5
QT.duse.MINOR_VERSION = 1
QT.duse.PATCH_VERSION = 0

QT.duse.name = QtDuse
QT.duse.bins = $$QT_MODULE_BIN_BASE
QT.duse.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.duse.name
QT.duse.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.duse.name/$$QT.duse.VERSION
QT.duse.sources = $$QT_MODULE_BASE/src/duse
QT.duse.libs = $$QT_MODULE_LIB_BASE
QT.duse.plugins = $$QT_MODULE_PLUGIN_BASE
QT.duse.imports = $$QT_MODULE_IMPORT_BASE
QT.duse.depends = core wrappedobjects

QT.duse.DEFINES = QT_MOF_LIB
QT_CONFIG += duse
