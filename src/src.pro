TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = wrappedobjects plugins
qtHaveModule(qml): SUBDIRS = mof uml duse
qtHaveModule(widgets): SUBDIRS += wrappedobjectswidgets
qtHaveModule(quick): SUBDIRS += imports
