TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = modeling mof uml saduseprofile measurementprofile duse plugins
qtHaveModule(widgets): SUBDIRS += modelingwidgets
