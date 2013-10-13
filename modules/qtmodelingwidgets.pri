QT.modelingwidgets.VERSION = 5.2.0
QT.modelingwidgets.MAJOR_VERSION = 5
QT.modelingwidgets.MINOR_VERSION = 2
QT.modelingwidgets.PATCH_VERSION = 0

QT.modelingwidgets.name = QtModelingWidgets
QT.modelingwidgets.bins = $$QT_MODULE_BIN_BASE
QT.modelingwidgets.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.modelingwidgets.name
QT.modelingwidgets.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.modelingwidgets.name/$$QT.modelingwidgets.VERSION
QT.modelingwidgets.sources = $$QT_MODULE_BASE/src/modelingwidgets
QT.modelingwidgets.libs = $$QT_MODULE_LIB_BASE
QT.modelingwidgets.plugins = $$QT_MODULE_PLUGIN_BASE
QT.modelingwidgets.imports = $$QT_MODULE_IMPORT_BASE
QT.modelingwidgets.depends = core wrappedobjects

QT.modelingwidgets.DEFINES = QT_MODELINGWIDGETS_LIB
QT_CONFIG += modelingwidgets
