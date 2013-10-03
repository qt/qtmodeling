TEMPLATE = subdirs

SUBDIRS = nested-packages profiles xmi-write xmi-read
qtHaveModule(widgets):qtHaveModule(quick):qtHaveModule(qml): SUBDIRS += duse-mt
