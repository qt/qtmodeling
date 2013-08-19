TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = modeling wrappedobjects
qtHaveModule(widgets): SUBDIRS += wrappedobjectswidgets
qtHaveModule(qml): SUBDIRS += mof uml duse saduseprofile plugins
qtHaveModule(quick): SUBDIRS += imports
