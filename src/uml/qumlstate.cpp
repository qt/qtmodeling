/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qumlstate.h"
#include "qumlstate_p.h"

#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlPseudostate>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStatePrivate::QUmlStatePrivate() :
    exit(0),
    redefinedState(0),
    entry(0),
    doActivity(0),
    submachine(0),
    stateInvariant(0)
{
}

QUmlStatePrivate::~QUmlStatePrivate()
{
}

/*!
    \class QUmlState

    \inmodule QtUml

    \brief A state models a situation during which some (usually implicit) invariant condition holds.The states of protocol state machines are exposed to the users of their context classifiers. A protocol state represents an exposed stable situation of its context classifier: when an instance of the classifier is not processing any operation, users of this instance can always know its state configuration.
 */

QUmlState::QUmlState(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlStatePrivate, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlVertex(new QUmlVertex(this))
{
    setPropertyData();
}

QUmlState::QUmlState(QUmlStatePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlVertex(new QUmlVertex(this))
{
    setPropertyData();
}

QUmlState::~QUmlState()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlState::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlState::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlState::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlState::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlState::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlState::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlState::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlState::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlState::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlState::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlState::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlState::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlState::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlState::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlState::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlState::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlState::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlState::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlState::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlState::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlState::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlState::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlState::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlState::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlState::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlState::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlState::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlState::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlState::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlState::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlState::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlState);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlState::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlVertex
// ---------------------------------------------------------------

/*!
    Specifies the transitions entering this vertex.
 */
QSet<QUmlTransition *> QUmlState::incomings() const
{
    return (qwrappedobject_cast<const QUmlVertex *>(this))->incomings();
}

/*!
    The region that contains this vertex.
 */
QUmlRegion *QUmlState::container() const
{
    return (qwrappedobject_cast<const QUmlVertex *>(this))->container();
}

void QUmlState::setContainer(QUmlRegion *container)
{
    (qwrappedobject_cast<QUmlVertex *>(this))->setContainer(container);
}

/*!
    Specifies the transitions departing from this vertex.
 */
QSet<QUmlTransition *> QUmlState::outgoings() const
{
    return (qwrappedobject_cast<const QUmlVertex *>(this))->outgoings();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlState
// ---------------------------------------------------------------

/*!
    A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.
 */
bool QUmlState::isSimple() const
{
    // This is a read-only derived attribute

    qWarning("QUmlState::isSimple: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.
 */
bool QUmlState::isComposite() const
{
    // This is a read-only derived attribute

    qWarning("QUmlState::isComposite: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.
 */
bool QUmlState::isOrthogonal() const
{
    // This is a read-only derived attribute

    qWarning("QUmlState::isOrthogonal: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).
 */
bool QUmlState::isSubmachineState() const
{
    // This is a read-only derived attribute

    qWarning("QUmlState::isSubmachineState: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlState
// ---------------------------------------------------------------

/*!
    The regions owned directly by the state.
 */
QSet<QUmlRegion *> QUmlState::regions() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->regions;
}

void QUmlState::addRegion(QUmlRegion *region)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (!d->regions.contains(region)) {
        d->regions.insert(region);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(region));

        // Adjust opposite property
        region->setState(this);
    }
}

void QUmlState::removeRegion(QUmlRegion *region)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->regions.contains(region)) {
        d->regions.remove(region);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(region));

        // Adjust opposite property
        region->setState(0);
    }
}

/*!
    An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.
 */
QUmlBehavior *QUmlState::exit() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->exit;
}

void QUmlState::setExit(QUmlBehavior *exit)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->exit != exit) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->exit));

        d->exit = exit;

        // Adjust subsetted property(ies)
        if (exit) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(exit));
        }
    }
}

/*!
    The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.
 */
QSet<QUmlConnectionPointReference *> QUmlState::connections() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->connections;
}

void QUmlState::addConnection(QUmlConnectionPointReference *connection)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (!d->connections.contains(connection)) {
        d->connections.insert(connection);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(connection));

        // Adjust opposite property
        connection->setState(this);
    }
}

void QUmlState::removeConnection(QUmlConnectionPointReference *connection)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->connections.contains(connection)) {
        d->connections.remove(connection);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(connection));

        // Adjust opposite property
        connection->setState(0);
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlState::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlState::redefinitionContext: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The state of which this state is a redefinition.
 */
QUmlState *QUmlState::redefinedState() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->redefinedState;
}

void QUmlState::setRedefinedState(QUmlState *redefinedState)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->redefinedState != redefinedState) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(d->redefinedState));

        d->redefinedState = redefinedState;

        // Adjust subsetted property(ies)
        if (redefinedState) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(redefinedState));
        }
    }
}

/*!
    A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.
 */
QSet<QUmlTrigger *> QUmlState::deferrableTriggers() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->deferrableTriggers;
}

void QUmlState::addDeferrableTrigger(QUmlTrigger *deferrableTrigger)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (!d->deferrableTriggers.contains(deferrableTrigger)) {
        d->deferrableTriggers.insert(deferrableTrigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(deferrableTrigger));
    }
}

void QUmlState::removeDeferrableTrigger(QUmlTrigger *deferrableTrigger)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->deferrableTriggers.contains(deferrableTrigger)) {
        d->deferrableTriggers.remove(deferrableTrigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(deferrableTrigger));
    }
}

/*!
    The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.
 */
QSet<QUmlPseudostate *> QUmlState::connectionPoints() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->connectionPoints;
}

void QUmlState::addConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (!d->connectionPoints.contains(connectionPoint)) {
        d->connectionPoints.insert(connectionPoint);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(connectionPoint));

        // Adjust opposite property
        connectionPoint->setState(this);
    }
}

void QUmlState::removeConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->connectionPoints.contains(connectionPoint)) {
        d->connectionPoints.remove(connectionPoint);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(connectionPoint));

        // Adjust opposite property
        connectionPoint->setState(0);
    }
}

/*!
    An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.
 */
QUmlBehavior *QUmlState::entry() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->entry;
}

void QUmlState::setEntry(QUmlBehavior *entry)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->entry != entry) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->entry));

        d->entry = entry;

        // Adjust subsetted property(ies)
        if (entry) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(entry));
        }
    }
}

/*!
    An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.
 */
QUmlBehavior *QUmlState::doActivity() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->doActivity;
}

void QUmlState::setDoActivity(QUmlBehavior *doActivity)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->doActivity != doActivity) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->doActivity));

        d->doActivity = doActivity;

        // Adjust subsetted property(ies)
        if (doActivity) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(doActivity));
        }
    }
}

/*!
    The state machine that is to be inserted in place of the (submachine) state.
 */
QUmlStateMachine *QUmlState::submachine() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->submachine;
}

void QUmlState::setSubmachine(QUmlStateMachine *submachine)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->submachine != submachine) {
        // Adjust opposite property
        if (d->submachine)
            d->submachine->removeSubmachineState(this);

        d->submachine = submachine;

        // Adjust opposite property
        if (submachine)
            submachine->addSubmachineState(this);
    }
}

/*!
    Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.
 */
QUmlConstraint *QUmlState::stateInvariant() const
{
    // This is a read-write association end

    Q_D(const QUmlState);
    return d->stateInvariant;
}

void QUmlState::setStateInvariant(QUmlConstraint *stateInvariant)
{
    // This is a read-write association end

    Q_D(QUmlState);
    if (d->stateInvariant != stateInvariant) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QUmlConstraint *>(d->stateInvariant));

        d->stateInvariant = stateInvariant;

        // Adjust subsetted property(ies)
        if (stateInvariant) {
            (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QUmlConstraint *>(stateInvariant));
        }
    }
}

/*!
    The query containingStateMachine() returns the state machine that contains the state either directly or transitively.
 */
QUmlStateMachine *QUmlState::containingStateMachine() const
{
    qWarning("QUmlState::containingStateMachine: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query isConsistentWith() specifies that a redefining state is consistent with a redefined state provided that the redefining state is an extension of the redefined state: A simple state can be redefined (extended) to become a composite state (by adding a region) and a composite state can be redefined (extended) by adding regions and by adding vertices, states, and transitions to inherited regions. All states may add or replace entry, exit, and 'doActivity' actions.
 */
bool QUmlState::isConsistentWith(const QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlState::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a state are properly related to the redefinition contexts of the specified state to allow this element to redefine the other. The containing region of a redefining state must redefine the containing region of the redefined state.
 */
bool QUmlState::isRedefinitionContextValid(const QUmlState *redefined) const
{
    qWarning("QUmlState::isRedefinitionContextValid: operation to be implemented");
    Q_UNUSED(redefined);

    return bool(); // change here to your derived return
}

void QUmlState::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSimple")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSimple")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSimple")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSimple")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSimple")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSimple")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isComposite")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isComposite")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isComposite")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isComposite")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isComposite")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isComposite")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("regions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("regions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("regions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The regions owned directly by the state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("regions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("regions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("regions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlRegion::state");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("exit")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("exit")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("exit")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("exit")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("exit")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("exit")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connections")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connections")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connections")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connections")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connections")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connections")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlConnectionPointReference::state");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifier in which context this element may be redefined.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The state of which this state is a redefinition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPseudostate::state");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("entry")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("entry")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("entry")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("entry")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("entry")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("entry")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("doActivity")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("doActivity")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("doActivity")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("doActivity")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("doActivity")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("doActivity")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("submachine")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("submachine")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("submachine")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The state machine that is to be inserted in place of the (submachine) state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("submachine")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("submachine")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("submachine")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStateMachine::submachineState");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstate.cpp"

