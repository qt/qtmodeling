/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QUMLSTATE_H
#define QUMLSTATE_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlVertex>

// Qt includes
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtUml)

// Forward decls for function parameters
class QUmlStateMachine;
class QUmlClassifier;
class QUmlConstraint;
class QUmlRegion;
class QUmlState;
class QUmlBehavior;
class QUmlConnectionPointReference;
class QUmlTrigger;
class QUmlPseudostate;

class QUmlStatePrivate;

class Q_UML_EXPORT QUmlState : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QUml")

    Q_PROPERTY(QSet<QUmlElement *> ownedElements READ ownedElements)
    Q_PROPERTY(QUmlElement * owner READ owner)
    Q_PROPERTY(QSet<QUmlComment *> ownedComments READ ownedComments)

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QtUml::VisibilityKind visibility READ visibility WRITE setVisibility)
    Q_PROPERTY(QString qualifiedName READ qualifiedName STORED false)
    Q_PROPERTY(QUmlStringExpression * nameExpression READ nameExpression WRITE setNameExpression)
    Q_PROPERTY(QUmlNamespace * namespace_ READ namespace_)
    Q_PROPERTY(QSet<QUmlDependency *> clientDependencies READ clientDependencies)

    Q_PROPERTY(QSet<QUmlPackageImport *> packageImports READ packageImports)
    Q_PROPERTY(QSet<QUmlNamedElement *> members READ members)
    Q_PROPERTY(QSet<QUmlPackageableElement *> importedMembers READ importedMembers STORED false)
    Q_PROPERTY(QSet<QUmlElementImport *> elementImports READ elementImports)
    Q_PROPERTY(QSet<QUmlConstraint *> ownedRules READ ownedRules)
    Q_PROPERTY(QSet<QUmlNamedElement *> ownedMembers READ ownedMembers)

    Q_PROPERTY(bool isLeaf READ isLeaf WRITE setLeaf RESET unsetLeaf)
    Q_PROPERTY(QSet<QUmlRedefinableElement *> redefinedElements READ redefinedElements)

    Q_PROPERTY(QSet<QUmlTransition *> incomings READ incomings STORED false)
    Q_PROPERTY(QUmlRegion * container READ container WRITE setContainer)
    Q_PROPERTY(QSet<QUmlTransition *> outgoings READ outgoings STORED false)

    Q_PROPERTY(bool isSimple READ isSimple STORED false)
    Q_PROPERTY(bool isComposite READ isComposite STORED false)
    Q_PROPERTY(bool isOrthogonal READ isOrthogonal STORED false)
    Q_PROPERTY(bool isSubmachineState READ isSubmachineState STORED false)
    Q_PROPERTY(QSet<QUmlRegion *> regions READ regions)
    Q_PROPERTY(QUmlBehavior * exit READ exit WRITE setExit)
    Q_PROPERTY(QSet<QUmlConnectionPointReference *> connections READ connections)
    Q_PROPERTY(QUmlClassifier * redefinitionContext READ redefinitionContext STORED false)
    Q_PROPERTY(QUmlState * redefinedState READ redefinedState WRITE setRedefinedState)
    Q_PROPERTY(QSet<QUmlTrigger *> deferrableTriggers READ deferrableTriggers)
    Q_PROPERTY(QSet<QUmlPseudostate *> connectionPoints READ connectionPoints)
    Q_PROPERTY(QUmlBehavior * entry READ entry WRITE setEntry)
    Q_PROPERTY(QUmlBehavior * doActivity READ doActivity WRITE setDoActivity)
    Q_PROPERTY(QUmlStateMachine * submachine READ submachine WRITE setSubmachine)
    Q_PROPERTY(QUmlConstraint * stateInvariant READ stateInvariant WRITE setStateInvariant)

    Q_DISABLE_COPY(QUmlState)
    Q_DECLARE_PRIVATE(QUmlState)

public:
    Q_INVOKABLE explicit QUmlState(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QUmlState();

    // Association ends from aggregated QUmlElement
    Q_INVOKABLE QSet<QUmlElement *> ownedElements() const;
    Q_INVOKABLE QUmlElement *owner() const;
    Q_INVOKABLE QSet<QUmlComment *> ownedComments() const;
    Q_INVOKABLE void addOwnedComment(QUmlComment *ownedComment);
    Q_INVOKABLE void removeOwnedComment(QUmlComment *ownedComment);

    // Attributes from aggregated QUmlNamedElement
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QtUml::VisibilityKind visibility() const;
    Q_INVOKABLE void setVisibility(QtUml::VisibilityKind visibility);
    Q_INVOKABLE QString qualifiedName() const;

    // Association ends from aggregated QUmlNamedElement
    Q_INVOKABLE QUmlStringExpression *nameExpression() const;
    Q_INVOKABLE void setNameExpression(QUmlStringExpression *nameExpression);
    Q_INVOKABLE QUmlNamespace *namespace_() const;
    Q_INVOKABLE QSet<QUmlDependency *> clientDependencies() const;
    Q_INVOKABLE void addClientDependency(QUmlDependency *clientDependency);
    Q_INVOKABLE void removeClientDependency(QUmlDependency *clientDependency);

    // Association ends from aggregated QUmlNamespace
    Q_INVOKABLE QSet<QUmlPackageImport *> packageImports() const;
    Q_INVOKABLE void addPackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE void removePackageImport(QUmlPackageImport *packageImport);
    Q_INVOKABLE QSet<QUmlNamedElement *> members() const;
    Q_INVOKABLE QSet<QUmlPackageableElement *> importedMembers() const;
    Q_INVOKABLE QSet<QUmlElementImport *> elementImports() const;
    Q_INVOKABLE void addElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE void removeElementImport(QUmlElementImport *elementImport);
    Q_INVOKABLE QSet<QUmlConstraint *> ownedRules() const;
    Q_INVOKABLE void addOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE void removeOwnedRule(QUmlConstraint *ownedRule);
    Q_INVOKABLE QSet<QUmlNamedElement *> ownedMembers() const;

    // Attributes from aggregated QUmlRedefinableElement
    Q_INVOKABLE bool isLeaf() const;
    Q_INVOKABLE void setLeaf(bool isLeaf);
    Q_INVOKABLE void unsetLeaf();

    // Association ends from aggregated QUmlRedefinableElement
    Q_INVOKABLE QSet<QUmlRedefinableElement *> redefinedElements() const;

    // Association ends from aggregated QUmlVertex
    Q_INVOKABLE QSet<QUmlTransition *> incomings() const;
    Q_INVOKABLE QUmlRegion *container() const;
    Q_INVOKABLE void setContainer(QUmlRegion *container);
    Q_INVOKABLE QSet<QUmlTransition *> outgoings() const;

    // Attributes from QUmlState
    Q_INVOKABLE bool isSimple() const;
    Q_INVOKABLE bool isComposite() const;
    Q_INVOKABLE bool isOrthogonal() const;
    Q_INVOKABLE bool isSubmachineState() const;

    // Association ends from QUmlState
    Q_INVOKABLE QSet<QUmlRegion *> regions() const;
    Q_INVOKABLE void addRegion(QUmlRegion *region);
    Q_INVOKABLE void removeRegion(QUmlRegion *region);
    Q_INVOKABLE QUmlBehavior *exit() const;
    Q_INVOKABLE void setExit(QUmlBehavior *exit);
    Q_INVOKABLE QSet<QUmlConnectionPointReference *> connections() const;
    Q_INVOKABLE void addConnection(QUmlConnectionPointReference *connection);
    Q_INVOKABLE void removeConnection(QUmlConnectionPointReference *connection);
    Q_INVOKABLE QUmlClassifier *redefinitionContext() const;
    Q_INVOKABLE QUmlState *redefinedState() const;
    Q_INVOKABLE void setRedefinedState(QUmlState *redefinedState);
    Q_INVOKABLE QSet<QUmlTrigger *> deferrableTriggers() const;
    Q_INVOKABLE void addDeferrableTrigger(QUmlTrigger *deferrableTrigger);
    Q_INVOKABLE void removeDeferrableTrigger(QUmlTrigger *deferrableTrigger);
    Q_INVOKABLE QSet<QUmlPseudostate *> connectionPoints() const;
    Q_INVOKABLE void addConnectionPoint(QUmlPseudostate *connectionPoint);
    Q_INVOKABLE void removeConnectionPoint(QUmlPseudostate *connectionPoint);
    Q_INVOKABLE QUmlBehavior *entry() const;
    Q_INVOKABLE void setEntry(QUmlBehavior *entry);
    Q_INVOKABLE QUmlBehavior *doActivity() const;
    Q_INVOKABLE void setDoActivity(QUmlBehavior *doActivity);
    Q_INVOKABLE QUmlStateMachine *submachine() const;
    Q_INVOKABLE void setSubmachine(QUmlStateMachine *submachine);
    Q_INVOKABLE QUmlConstraint *stateInvariant() const;
    Q_INVOKABLE void setStateInvariant(QUmlConstraint *stateInvariant);

    // Operations
    Q_INVOKABLE QUmlStateMachine *containingStateMachine() const;
    Q_INVOKABLE bool isConsistentWith(const QUmlRedefinableElement *redefinee) const;
    Q_INVOKABLE bool isRedefinitionContextValid(const QUmlState *redefined) const;

    virtual void setPropertyData();

protected:
    explicit QUmlState(QUmlStatePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

private:
    QUmlNamespace *_wrappedUmlNamespace;
    QUmlRedefinableElement *_wrappedUmlRedefinableElement;
    QUmlVertex *_wrappedUmlVertex;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QUMLSTATE_H

