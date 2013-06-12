TEMPLATE = subdirs

SUBDIRS = nested-packages profiles xmi-write xmi-read
qtHaveModule(widgets):qtHaveModule(quick): SUBDIRS += duse-mt
