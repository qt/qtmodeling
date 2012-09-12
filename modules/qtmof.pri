QT.mof.VERSION = 1.0.0
QT.mof.MAJOR_VERSION = 1
QT.mof.MINOR_VERSION = 0
QT.mof.PATCH_VERSION = 0

QT.mof.name = QtMof
QT.mof.bins = $$QT_MODULE_BIN_BASE
QT.mof.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.mof.name
QT.mof.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.mof.name/$$QT.mof.VERSION
QT.mof.sources = $$QT_MODULE_BASE/src/mof
QT.mof.libs = $$QT_MODULE_LIB_BASE
QT.mof.plugins = $$QT_MODULE_PLUGIN_BASE
QT.mof.imports = $$QT_MODULE_IMPORT_BASE
QT.mof.depends = core

QT.mof.DEFINES = QT_MOF_LIB
QT_CONFIG += mof
