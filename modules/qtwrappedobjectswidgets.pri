QT.wrappedobjectswidgets.VERSION = 5.1.1
QT.wrappedobjectswidgets.MAJOR_VERSION = 5
QT.wrappedobjectswidgets.MINOR_VERSION = 1
QT.wrappedobjectswidgets.PATCH_VERSION = 1

QT.wrappedobjectswidgets.name = QtWrappedObjectsWidgets
QT.wrappedobjectswidgets.bins = $$QT_MODULE_BIN_BASE
QT.wrappedobjectswidgets.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.wrappedobjectswidgets.name
QT.wrappedobjectswidgets.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.wrappedobjectswidgets.name/$$QT.wrappedobjectswidgets.VERSION
QT.wrappedobjectswidgets.sources = $$QT_MODULE_BASE/src/wrappedobjectswidgets
QT.wrappedobjectswidgets.libs = $$QT_MODULE_LIB_BASE
QT.wrappedobjectswidgets.plugins = $$QT_MODULE_PLUGIN_BASE
QT.wrappedobjectswidgets.imports = $$QT_MODULE_IMPORT_BASE
QT.wrappedobjectswidgets.depends = core wrappedobjects

QT.wrappedobjectswidgets.DEFINES = QT_WRAPPEDOBJECTSWIDGETS_LIB
QT_CONFIG += wrappedobjectswidgets
