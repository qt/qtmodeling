QT.modeling.VERSION = 5.1.0
QT.modeling.MAJOR_VERSION = 5
QT.modeling.MINOR_VERSION = 1
QT.modeling.PATCH_VERSION = 0

QT.modeling.name = QtModeling
QT.modeling.bins = $$QT_MODULE_BIN_BASE
QT.modeling.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.modeling.name
QT.modeling.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.modeling.name/$$QT.modeling.VERSION
QT.modeling.sources = $$QT_MODULE_BASE/src/modeling
QT.modeling.libs = $$QT_MODULE_LIB_BASE
QT.modeling.plugins = $$QT_MODULE_PLUGIN_BASE
QT.modeling.imports = $$QT_MODULE_IMPORT_BASE
QT.modeling.depends = core

QT.modeling.DEFINES = QT_MODELING_LIB
QT_CONFIG += modeling
