TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = wrappedobjects mof uml plugins
qtHaveModule(widgets): SUBDIRS += wrappedobjectswidgets
