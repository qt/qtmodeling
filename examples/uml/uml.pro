TEMPLATE = subdirs

SUBDIRS = nested-packages profiles xmi-write xmi-read duse-mt
!qtHaveModule(widgets): SUBDIRS -= duse-mt
!qtHaveModule(declarative): SUBDIRS -= duse-mt
