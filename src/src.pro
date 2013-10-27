TEMPLATE = subdirs
CONFIG  += ordered

#SUBDIRS = modeling mof uml duse saduseprofile plugins
SUBDIRS = modeling mof uml plugins
qtHaveModule(widgets): SUBDIRS += modelingwidgets
#qtHaveModule(quick): SUBDIRS += imports
