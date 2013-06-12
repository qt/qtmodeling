TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = wrappedobjects mof uml duse plugins
qtHaveModule(widgets): SUBDIRS += wrappedobjectswidgets
qtHaveModule(quick): SUBDIRS += imports
