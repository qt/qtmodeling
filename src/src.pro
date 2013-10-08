TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = modeling
qtHaveModule(widgets): SUBDIRS += modelingwidgets
#qtHaveModule(qml): SUBDIRS += mof uml duse saduseprofile plugins
qtHaveModule(qml): SUBDIRS += uml plugins
#qtHaveModule(quick): SUBDIRS += imports
