QT.saduseprofile.VERSION = 5.1.1
QT.saduseprofile.MAJOR_VERSION = 5
QT.saduseprofile.MINOR_VERSION = 1
QT.saduseprofile.PATCH_VERSION = 1

QT.saduseprofile.name = QtSADuseProfile
QT.saduseprofile.bins = $$QT_MODULE_BIN_BASE
QT.saduseprofile.includes = $$QT_MODULE_INCLUDE_BASE $$QT_MODULE_INCLUDE_BASE/$$QT.saduseprofile.name
QT.saduseprofile.private_includes = $$QT_MODULE_INCLUDE_BASE/$$QT.saduseprofile.name/$$QT.saduseprofile.VERSION
QT.saduseprofile.sources = $$QT_MODULE_BASE/src/saduseprofile
QT.saduseprofile.libs = $$QT_MODULE_LIB_BASE
QT.saduseprofile.plugins = $$QT_MODULE_PLUGIN_BASE
QT.saduseprofile.imports = $$QT_MODULE_IMPORT_BASE
QT.saduseprofile.depends = core wrappedobjects

QT.saduseprofile.DEFINES = QT_MOF_LIB
QT_CONFIG += saduseprofile
