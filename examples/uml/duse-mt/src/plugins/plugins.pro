TEMPLATE  = subdirs
CONFIG   += ordered

SUBDIRS = \
    modelinspector \

qtHaveModule(script): SUBDIRS += javascriptconsole

qtHaveModule(quick): SUBDIRS += welcomedashboard \
                                designoptimizer

qtHaveModule(script):qtHaveModule(quick): SUBDIRS += designspaceexplorer

qtHaveModule(quick-private): SUBDIRS += concretesyntaxview \
                                        umlconcretesyntax

SUBDIRS += architecturerecoverycore \
    gccxmlarchitecturerecoverybackend
