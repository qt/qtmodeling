TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = modeling wrappedobjects
qtHaveModule(widgets): SUBDIRS += wrappedobjectswidgets
#qtHaveModule(qml): SUBDIRS += mof uml duse saduseprofile plugins
qtHaveModule(qml): SUBDIRS += mof uml duse saduseprofile
qtHaveModule(quick): SUBDIRS += imports
