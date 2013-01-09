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

#include "qstate.h"
#include "qstate_p.h"

#include <QtUml/QStateMachine>
#include <QtUml/QClassifier>
#include <QtUml/QConstraint>
#include <QtUml/QRegion>
#include <QtUml/QBehavior>
#include <QtUml/QConnectionPointReference>
#include <QtUml/QTrigger>
#include <QtUml/QPseudostate>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QStatePrivate::QStatePrivate() :
    exit(0),
    redefinedState(0),
    entry(0),
    doActivity(0),
    submachine(0),
    stateInvariant(0)
{
}

QStatePrivate::~QStatePrivate()
{
}

/*!
    \class QState

    \inmodule QtUml

    \brief A state models a situation during which some (usually implicit) invariant condition holds.The states of protocol state machines are exposed to the users of their context classifiers. A protocol state represents an exposed stable situation of its context classifier: when an instance of the classifier is not processing any operation, users of this instance can always know its state configuration.
 */

QState::QState(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QStatePrivate, wrapper, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedRedefinableElement(new QRedefinableElement(this)),
    _wrappedVertex(new QVertex(this))
{
    setPropertyData();
}

QState::QState(QStatePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedNamespace(new QNamespace(this)),
    _wrappedRedefinableElement(new QRedefinableElement(this)),
    _wrappedVertex(new QVertex(this))
{
    setPropertyData();
}

QState::~QState()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QElement *> QState::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QState::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QComment *> QState::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QState::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QState::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QState::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QState::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QState::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QState::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QState::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QState::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QState::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QState::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QDependency *> QState::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QState::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QState::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QPackageImport *> QState::packageImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->packageImports();
}

void QState::addPackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QState::removePackageImport(QPackageImport *packageImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QNamedElement *> QState::members() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QPackageableElement *> QState::importedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QElementImport *> QState::elementImports() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->elementImports();
}

void QState::addElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QState::removeElementImport(QElementImport *elementImport)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QConstraint *> QState::ownedRules() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedRules();
}

void QState::addOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QState::removeOwnedRule(QConstraint *ownedRule)
{
    (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QNamedElement *> QState::ownedMembers() const
{
    return (qwrappedobject_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QState::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QState::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QState::unsetLeaf()
{
    setLeaf(false);
    Q_D(QState);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QRedefinableElement *> QState::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QVertex
// ---------------------------------------------------------------

/*!
    Specifies the transitions entering this vertex.
 */
QSet<QTransition *> QState::incomings() const
{
    return (qwrappedobject_cast<const QVertex *>(this))->incomings();
}

/*!
    The region that contains this vertex.
 */
QRegion *QState::container() const
{
    return (qwrappedobject_cast<const QVertex *>(this))->container();
}

void QState::setContainer(QRegion *container)
{
    (qwrappedobject_cast<QVertex *>(this))->setContainer(container);
}

/*!
    Specifies the transitions departing from this vertex.
 */
QSet<QTransition *> QState::outgoings() const
{
    return (qwrappedobject_cast<const QVertex *>(this))->outgoings();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QState
// ---------------------------------------------------------------

/*!
    A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.
 */
bool QState::isSimple() const
{
    // This is a read-only derived attribute

    qWarning("QState::isSimple: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.
 */
bool QState::isComposite() const
{
    // This is a read-only derived attribute

    qWarning("QState::isComposite: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.
 */
bool QState::isOrthogonal() const
{
    // This is a read-only derived attribute

    qWarning("QState::isOrthogonal: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

/*!
    A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).
 */
bool QState::isSubmachineState() const
{
    // This is a read-only derived attribute

    qWarning("QState::isSubmachineState: to be implemented (this is a derived attribute)");

    return bool(); // change here to your derived return
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QState
// ---------------------------------------------------------------

/*!
    The regions owned directly by the state.
 */
QSet<QRegion *> QState::regions() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->regions;
}

void QState::addRegion(QRegion *region)
{
    // This is a read-write association end

    Q_D(QState);
    if (!d->regions.contains(region)) {
        d->regions.insert(region);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(region));

        // Adjust opposite property
        region->setState(this);
    }
}

void QState::removeRegion(QRegion *region)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->regions.contains(region)) {
        d->regions.remove(region);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(region));

        // Adjust opposite property
        region->setState(0);
    }
}

/*!
    An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.
 */
QBehavior *QState::exit() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->exit;
}

void QState::setExit(QBehavior *exit)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->exit != exit) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->exit));

        d->exit = exit;

        // Adjust subsetted property(ies)
        if (exit) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(exit));
        }
    }
}

/*!
    The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.
 */
QSet<QConnectionPointReference *> QState::connections() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->connections;
}

void QState::addConnection(QConnectionPointReference *connection)
{
    // This is a read-write association end

    Q_D(QState);
    if (!d->connections.contains(connection)) {
        d->connections.insert(connection);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(connection));

        // Adjust opposite property
        connection->setState(this);
    }
}

void QState::removeConnection(QConnectionPointReference *connection)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->connections.contains(connection)) {
        d->connections.remove(connection);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(connection));

        // Adjust opposite property
        connection->setState(0);
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QClassifier *QState::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QState::redefinitionContext: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The state of which this state is a redefinition.
 */
QState *QState::redefinedState() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->redefinedState;
}

void QState::setRedefinedState(QState *redefinedState)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->redefinedState != redefinedState) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(d->redefinedState));

        d->redefinedState = redefinedState;

        // Adjust subsetted property(ies)
        if (redefinedState) {
            (qwrappedobject_cast<QRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QRedefinableElement *>(redefinedState));
        }
    }
}

/*!
    A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.
 */
QSet<QTrigger *> QState::deferrableTriggers() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->deferrableTriggers;
}

void QState::addDeferrableTrigger(QTrigger *deferrableTrigger)
{
    // This is a read-write association end

    Q_D(QState);
    if (!d->deferrableTriggers.contains(deferrableTrigger)) {
        d->deferrableTriggers.insert(deferrableTrigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(deferrableTrigger));
    }
}

void QState::removeDeferrableTrigger(QTrigger *deferrableTrigger)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->deferrableTriggers.contains(deferrableTrigger)) {
        d->deferrableTriggers.remove(deferrableTrigger);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(deferrableTrigger));
    }
}

/*!
    The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.
 */
QSet<QPseudostate *> QState::connectionPoints() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->connectionPoints;
}

void QState::addConnectionPoint(QPseudostate *connectionPoint)
{
    // This is a read-write association end

    Q_D(QState);
    if (!d->connectionPoints.contains(connectionPoint)) {
        d->connectionPoints.insert(connectionPoint);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QNamedElement *>(connectionPoint));

        // Adjust opposite property
        connectionPoint->setState(this);
    }
}

void QState::removeConnectionPoint(QPseudostate *connectionPoint)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->connectionPoints.contains(connectionPoint)) {
        d->connectionPoints.remove(connectionPoint);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QNamedElement *>(connectionPoint));

        // Adjust opposite property
        connectionPoint->setState(0);
    }
}

/*!
    An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.
 */
QBehavior *QState::entry() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->entry;
}

void QState::setEntry(QBehavior *entry)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->entry != entry) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->entry));

        d->entry = entry;

        // Adjust subsetted property(ies)
        if (entry) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(entry));
        }
    }
}

/*!
    An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.
 */
QBehavior *QState::doActivity() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->doActivity;
}

void QState::setDoActivity(QBehavior *doActivity)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->doActivity != doActivity) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->doActivity));

        d->doActivity = doActivity;

        // Adjust subsetted property(ies)
        if (doActivity) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(doActivity));
        }
    }
}

/*!
    The state machine that is to be inserted in place of the (submachine) state.
 */
QStateMachine *QState::submachine() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->submachine;
}

void QState::setSubmachine(QStateMachine *submachine)
{
    // This is a read-write association end

    Q_D(QState);
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
QConstraint *QState::stateInvariant() const
{
    // This is a read-write association end

    Q_D(const QState);
    return d->stateInvariant;
}

void QState::setStateInvariant(QConstraint *stateInvariant)
{
    // This is a read-write association end

    Q_D(QState);
    if (d->stateInvariant != stateInvariant) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(d->stateInvariant));

        d->stateInvariant = stateInvariant;

        // Adjust subsetted property(ies)
        if (stateInvariant) {
            (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(stateInvariant));
        }
    }
}

/*!
    The query containingStateMachine() returns the state machine that contains the state either directly or transitively.
 */
QStateMachine *QState::containingStateMachine() const
{
    qWarning("QState::containingStateMachine: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query isConsistentWith() specifies that a redefining state is consistent with a redefined state provided that the redefining state is an extension of the redefined state: A simple state can be redefined (extended) to become a composite state (by adding a region) and a composite state can be redefined (extended) by adding regions and by adding vertices, states, and transitions to inherited regions. All states may add or replace entry, exit, and 'doActivity' actions.
 */
bool QState::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QState::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a state are properly related to the redefinition contexts of the specified state to allow this element to redefine the other. The containing region of a redefining state must redefine the containing region of the redefined state.
 */
bool QState::isRedefinitionContextValid(const QState *redefined) const
{
    qWarning("QState::isRedefinitionContextValid: operation to be implemented");
    Q_UNUSED(redefined);

    return bool(); // change here to your derived return
}

void QState::registerMetaTypes() const
{
    qRegisterMetaType<QStateMachine *>("QStateMachine *");
    qRegisterMetaType<QSet<QStateMachine *>>("QSet<QStateMachine *>");
    qRegisterMetaType<QList<QStateMachine *>>("QList<QStateMachine *>");

    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QRegion *>("QRegion *");
    qRegisterMetaType<QSet<QRegion *>>("QSet<QRegion *>");
    qRegisterMetaType<QList<QRegion *>>("QList<QRegion *>");

    qRegisterMetaType<QBehavior *>("QBehavior *");
    qRegisterMetaType<QSet<QBehavior *>>("QSet<QBehavior *>");
    qRegisterMetaType<QList<QBehavior *>>("QList<QBehavior *>");

    qRegisterMetaType<QConnectionPointReference *>("QConnectionPointReference *");
    qRegisterMetaType<QSet<QConnectionPointReference *>>("QSet<QConnectionPointReference *>");
    qRegisterMetaType<QList<QConnectionPointReference *>>("QList<QConnectionPointReference *>");

    qRegisterMetaType<QTrigger *>("QTrigger *");
    qRegisterMetaType<QSet<QTrigger *>>("QSet<QTrigger *>");
    qRegisterMetaType<QList<QTrigger *>>("QList<QTrigger *>");

    qRegisterMetaType<QPseudostate *>("QPseudostate *");
    qRegisterMetaType<QSet<QPseudostate *>>("QSet<QPseudostate *>");
    qRegisterMetaType<QList<QPseudostate *>>("QList<QPseudostate *>");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QState::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSimple")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSimple")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSimple")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSimple")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSimple")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSimple")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isComposite")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isOrthogonal")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("isSubmachineState")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("regions")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("regions")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("regions")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The regions owned directly by the state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("regions")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("regions")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("regions")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QRegion::state");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("exit")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("exit")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("exit")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("exit")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("exit")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("exit")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connections")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connections")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connections")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connections")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connections")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connections")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QConnectionPointReference::state");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifier in which context this element may be redefined.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The state of which this state is a redefinition.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("redefinedState")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("deferrableTriggers")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("connectionPoints")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QPseudostate::state");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("entry")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("entry")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("entry")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("entry")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("entry")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("entry")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("doActivity")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("doActivity")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("doActivity")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("doActivity")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("doActivity")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("doActivity")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("submachine")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("submachine")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("submachine")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The state machine that is to be inserted in place of the (submachine) state.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("submachine")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("submachine")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("submachine")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QStateMachine::submachineState");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QNamespace::ownedRules");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QState")][QString::fromLatin1("stateInvariant")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

#include "moc_qstate.cpp"

QT_END_NAMESPACE_QTUML

