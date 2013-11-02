TEMPLATE = subdirs
CONFIG  += ordered

SUBDIRS = modeling mof uml saduseprofile duse plugins
qtHaveModule(widgets): SUBDIRS += modelingwidgets
