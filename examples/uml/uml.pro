TEMPLATE = subdirs

SUBDIRS = nested-packages profile-definition xmi-write xmi-read
qtHaveModule(widgets):qtHaveModule(quick):qtHaveModule(qml): SUBDIRS += duse-mt
