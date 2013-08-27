TEMPLATE = subdirs

#SUBDIRS = nested-packages profiles xmi-write xmi-read
SUBDIRS = nested-packages profiles
qtHaveModule(widgets):qtHaveModule(quick):qtHaveModule(qml): SUBDIRS += duse-mt
