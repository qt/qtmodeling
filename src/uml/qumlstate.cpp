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
#include "qumlstate.h"

#include "private/qumlstateobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlState

    \inmodule QtUml

    \brief A state models a situation during which some (usually implicit) invariant condition holds.The states of protocol state machines are exposed to the users of their context classifiers. A protocol state represents an exposed stable situation of its context classifier: when an instance of the classifier is not processing any operation, users of this instance can always know its state configuration.
 */

/*!
    Creates a new QUmlState. Also creates the corresponding QObject-based representation returned by asQModelingObject() if \a createQModelingObject is true.
*/
QUmlState::QUmlState(bool createQModelingObject) :
    _doActivity(0),
    _entry(0),
    _exit(0),
    _redefinedState(0),
    _stateInvariant(0),
    _submachine(0)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QUmlStateObject(this));
}

/*!
    Destroys the QUmlState.
 */
QUmlState::~QUmlState()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlState.
*/
QModelingElement *QUmlState::clone() const
{
    QUmlState *c = new QUmlState;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    c->setLeaf(isLeaf());
    foreach (QUmlConnectionPointReference *element, connections())
        c->addConnection(dynamic_cast<QUmlConnectionPointReference *>(element->clone()));
    foreach (QUmlPseudostate *element, connectionPoints())
        c->addConnectionPoint(dynamic_cast<QUmlPseudostate *>(element->clone()));
    foreach (QUmlTrigger *element, deferrableTriggers())
        c->addDeferrableTrigger(dynamic_cast<QUmlTrigger *>(element->clone()));
    if (doActivity())
        c->setDoActivity(dynamic_cast<QUmlBehavior *>(doActivity()->clone()));
    if (entry())
        c->setEntry(dynamic_cast<QUmlBehavior *>(entry()->clone()));
    if (exit())
        c->setExit(dynamic_cast<QUmlBehavior *>(exit()->clone()));
    foreach (QUmlRegion *element, regions())
        c->addRegion(dynamic_cast<QUmlRegion *>(element->clone()));
    if (stateInvariant())
        c->setStateInvariant(dynamic_cast<QUmlConstraint *>(stateInvariant()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.

    \sa addConnection(), removeConnection()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlConnectionPointReference::state().
 */
const QSet<QUmlConnectionPointReference *> QUmlState::connections() const
{
    // This is a read-write association end

    return _connections;
}

/*!
    Adds \a connection to connections.

    \sa connections(), removeConnection()
 */
void QUmlState::addConnection(QUmlConnectionPointReference *connection)
{
    // This is a read-write association end

    if (!_connections.contains(connection)) {
        _connections.insert(connection);
        if (connection && connection->asQModelingObject() && this->asQModelingObject())
            QObject::connect(connection->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeConnection(QObject *)));
        connection->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(connection);

        // Adjust opposite properties
        if (connection) {
            connection->setState(this);
        }
    }
}

/*!
    Removes \a connection from connections.

    \sa connections(), addConnection()
 */
void QUmlState::removeConnection(QUmlConnectionPointReference *connection)
{
    // This is a read-write association end

    if (_connections.contains(connection)) {
        _connections.remove(connection);
        if (connection->asQModelingObject())
            connection->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(connection);

        // Adjust opposite properties
        if (connection) {
            connection->setState(0);
        }
    }
}

/*!
    The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.

    \sa addConnectionPoint(), removeConnectionPoint()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlPseudostate::state().
 */
const QSet<QUmlPseudostate *> QUmlState::connectionPoints() const
{
    // This is a read-write association end

    return _connectionPoints;
}

/*!
    Adds \a connectionPoint to connectionPoints.

    \sa connectionPoints(), removeConnectionPoint()
 */
void QUmlState::addConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (!_connectionPoints.contains(connectionPoint)) {
        _connectionPoints.insert(connectionPoint);
        if (connectionPoint && connectionPoint->asQModelingObject() && this->asQModelingObject())
            QObject::connect(connectionPoint->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeConnectionPoint(QObject *)));
        connectionPoint->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setState(this);
        }
    }
}

/*!
    Removes \a connectionPoint from connectionPoints.

    \sa connectionPoints(), addConnectionPoint()
 */
void QUmlState::removeConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (_connectionPoints.contains(connectionPoint)) {
        _connectionPoints.remove(connectionPoint);
        if (connectionPoint->asQModelingObject())
            connectionPoint->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setState(0);
        }
    }
}

/*!
    A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.

    \sa addDeferrableTrigger(), removeDeferrableTrigger()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
const QSet<QUmlTrigger *> QUmlState::deferrableTriggers() const
{
    // This is a read-write association end

    return _deferrableTriggers;
}

/*!
    Adds \a deferrableTrigger to deferrableTriggers.

    \sa deferrableTriggers(), removeDeferrableTrigger()
 */
void QUmlState::addDeferrableTrigger(QUmlTrigger *deferrableTrigger)
{
    // This is a read-write association end

    if (!_deferrableTriggers.contains(deferrableTrigger)) {
        _deferrableTriggers.insert(deferrableTrigger);
        if (deferrableTrigger && deferrableTrigger->asQModelingObject() && this->asQModelingObject())
            QObject::connect(deferrableTrigger->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeDeferrableTrigger(QObject *)));
        deferrableTrigger->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(deferrableTrigger);
    }
}

/*!
    Removes \a deferrableTrigger from deferrableTriggers.

    \sa deferrableTriggers(), addDeferrableTrigger()
 */
void QUmlState::removeDeferrableTrigger(QUmlTrigger *deferrableTrigger)
{
    // This is a read-write association end

    if (_deferrableTriggers.contains(deferrableTrigger)) {
        _deferrableTriggers.remove(deferrableTrigger);
        if (deferrableTrigger->asQModelingObject())
            deferrableTrigger->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(deferrableTrigger);
    }
}

/*!
    An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlBehavior *QUmlState::doActivity() const
{
    // This is a read-write association end

    return _doActivity;
}

/*!
    Adjusts doActivity to \a doActivity.
 */
void QUmlState::setDoActivity(QUmlBehavior *doActivity)
{
    // This is a read-write association end

    if (_doActivity != doActivity) {
        // Adjust subsetted properties
        removeOwnedElement(_doActivity);

        _doActivity = doActivity;
        if (doActivity && doActivity->asQModelingObject() && this->asQModelingObject())
            QObject::connect(doActivity->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setDoActivity()));
        doActivity->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (doActivity) {
            addOwnedElement(doActivity);
        }
    }
}

/*!
    An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlBehavior *QUmlState::entry() const
{
    // This is a read-write association end

    return _entry;
}

/*!
    Adjusts entry to \a entry.
 */
void QUmlState::setEntry(QUmlBehavior *entry)
{
    // This is a read-write association end

    if (_entry != entry) {
        // Adjust subsetted properties
        removeOwnedElement(_entry);

        _entry = entry;
        if (entry && entry->asQModelingObject() && this->asQModelingObject())
            QObject::connect(entry->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setEntry()));
        entry->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (entry) {
            addOwnedElement(entry);
        }
    }
}

/*!
    An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlBehavior *QUmlState::exit() const
{
    // This is a read-write association end

    return _exit;
}

/*!
    Adjusts exit to \a exit.
 */
void QUmlState::setExit(QUmlBehavior *exit)
{
    // This is a read-write association end

    if (_exit != exit) {
        // Adjust subsetted properties
        removeOwnedElement(_exit);

        _exit = exit;
        if (exit && exit->asQModelingObject() && this->asQModelingObject())
            QObject::connect(exit->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setExit()));
        exit->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (exit) {
            addOwnedElement(exit);
        }
    }
}

/*!
    A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.

    \b {This is a read-only derived property.}
 */
bool QUmlState::isComposite() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isComposite(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isComposite to \a isComposite.
 */
void QUmlState::setComposite(bool isComposite)
{
    // This is a read-only derived property

    qWarning("QUmlState::setComposite(): to be implemented (this is a derived property)");
    Q_UNUSED(isComposite);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.

    \b {This is a read-only derived property.}
 */
bool QUmlState::isOrthogonal() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isOrthogonal(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isOrthogonal to \a isOrthogonal.
 */
void QUmlState::setOrthogonal(bool isOrthogonal)
{
    // This is a read-only derived property

    qWarning("QUmlState::setOrthogonal(): to be implemented (this is a derived property)");
    Q_UNUSED(isOrthogonal);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.

    \b {This is a read-only derived property.}
 */
bool QUmlState::isSimple() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isSimple(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isSimple to \a isSimple.
 */
void QUmlState::setSimple(bool isSimple)
{
    // This is a read-only derived property

    qWarning("QUmlState::setSimple(): to be implemented (this is a derived property)");
    Q_UNUSED(isSimple);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).

    \b {This is a read-only derived property.}
 */
bool QUmlState::isSubmachineState() const
{
    // This is a read-only derived property

    qWarning("QUmlState::isSubmachineState(): to be implemented (this is a derived property)");

    return bool();
}

/*!
    Adjusts isSubmachineState to \a isSubmachineState.
 */
void QUmlState::setSubmachineState(bool isSubmachineState)
{
    // This is a read-only derived property

    qWarning("QUmlState::setSubmachineState(): to be implemented (this is a derived property)");
    Q_UNUSED(isSubmachineState);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The state of which this state is a redefinition.

    \b {Subsetted property(ies):} QUmlRedefinableElement::redefinedElements().
 */
QUmlState *QUmlState::redefinedState() const
{
    // This is a read-write association end

    return _redefinedState;
}

/*!
    Adjusts redefinedState to \a redefinedState.
 */
void QUmlState::setRedefinedState(QUmlState *redefinedState)
{
    // This is a read-write association end

    if (_redefinedState != redefinedState) {
        // Adjust subsetted properties
        removeRedefinedElement(_redefinedState);

        _redefinedState = redefinedState;
        if (redefinedState && redefinedState->asQModelingObject() && this->asQModelingObject())
            QObject::connect(redefinedState->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setRedefinedState()));

        // Adjust subsetted properties
        if (redefinedState) {
            addRedefinedElement(redefinedState);
        }
    }
}

/*!
    References the classifier in which context this element may be redefined.

    \b {This is a read-only derived property.}

    \b {Redefined property(ies):} QUmlRedefinableElement::redefinitionContexts().
 */
QUmlClassifier *QUmlState::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlState::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

/*!
    Adjusts redefinitionContext to \a redefinitionContext.
 */
void QUmlState::setRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("QUmlState::setRedefinitionContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(redefinitionContext);

    if (false /* <derivedexclusion-criteria> */) {
        // Adjust redefined properties        // QUmlRedefinableElement::removeRedefinitionContext(/* <derived-code> */);

        // <derived-code>

        // Adjust redefined properties
        if (redefinitionContext) {
            QUmlRedefinableElement::addRedefinitionContext(redefinitionContext);
        }
    }
}

/*!
    The regions owned directly by the state.

    \sa addRegion(), removeRegion()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlRegion::state().
 */
const QSet<QUmlRegion *> QUmlState::regions() const
{
    // This is a read-write association end

    return _regions;
}

/*!
    Adds \a region to regions.

    \sa regions(), removeRegion()
 */
void QUmlState::addRegion(QUmlRegion *region)
{
    // This is a read-write association end

    if (!_regions.contains(region)) {
        _regions.insert(region);
        if (region && region->asQModelingObject() && this->asQModelingObject())
            QObject::connect(region->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeRegion(QObject *)));
        region->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setState(this);
        }
    }
}

/*!
    Removes \a region from regions.

    \sa regions(), addRegion()
 */
void QUmlState::removeRegion(QUmlRegion *region)
{
    // This is a read-write association end

    if (_regions.contains(region)) {
        _regions.remove(region);
        if (region->asQModelingObject())
            region->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setState(0);
        }
    }
}

/*!
    Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.

    \b {Subsetted property(ies):} QUmlNamespace::ownedRules().
 */
QUmlConstraint *QUmlState::stateInvariant() const
{
    // This is a read-write association end

    return _stateInvariant;
}

/*!
    Adjusts stateInvariant to \a stateInvariant.
 */
void QUmlState::setStateInvariant(QUmlConstraint *stateInvariant)
{
    // This is a read-write association end

    if (_stateInvariant != stateInvariant) {
        // Adjust subsetted properties
        removeOwnedRule(_stateInvariant);

        _stateInvariant = stateInvariant;
        if (stateInvariant && stateInvariant->asQModelingObject() && this->asQModelingObject())
            QObject::connect(stateInvariant->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setStateInvariant()));
        stateInvariant->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (stateInvariant) {
            addOwnedRule(stateInvariant);
        }
    }
}

/*!
    The state machine that is to be inserted in place of the (submachine) state.

    \b {Opposite property(ies):} QUmlStateMachine::submachineStates().
 */
QUmlStateMachine *QUmlState::submachine() const
{
    // This is a read-write association end

    return _submachine;
}

/*!
    Adjusts submachine to \a submachine.
 */
void QUmlState::setSubmachine(QUmlStateMachine *submachine)
{
    // This is a read-write association end

    if (_submachine != submachine) {
        _submachine = submachine;
        if (submachine && submachine->asQModelingObject() && this->asQModelingObject())
            QObject::connect(submachine->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setSubmachine()));
    }
}

// OPERATIONS

/*!
    The query containingStateMachine() returns the state machine that contains the state either directly or transitively.
 */
QUmlStateMachine *QUmlState::containingStateMachine() const
{
    qWarning("QUmlState::containingStateMachine(): to be implemented (operation)");

    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining state is consistent with a redefined state provided that the redefining state is an extension of the redefined state: A simple state can be redefined (extended) to become a composite state (by adding a region) and a composite state can be redefined (extended) by adding regions and by adding vertices, states, and transitions to inherited regions. All states may add or replace entry, exit, and 'doActivity' actions.
 */
bool QUmlState::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlState::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a state are properly related to the redefinition contexts of the specified state to allow this element to redefine the other. The containing region of a redefining state must redefine the containing region of the redefined state.
 */
bool QUmlState::isRedefinitionContextValid(QUmlState *redefined) const
{
    qWarning("QUmlState::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

QT_END_NAMESPACE

