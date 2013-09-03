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
#include "qumlstatemachine.h"

#include "private/qumlstatemachineobject_p.h"

#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>

/*!
    \class QUmlStateMachine

    \inmodule QtUml

    \brief State machines can be used to express the behavior of part of a system. Behavior is modeled as a traversal of a graph of state nodes interconnected by one or more joined transition arcs that are triggered by the dispatching of series of (event) occurrences. During this traversal, the state machine executes a series of activities associated with various elements of the state machine.
 */
QUmlStateMachine::QUmlStateMachine(bool createQObject)
{
    if (createQObject)
        _qObject = new QUmlStateMachineObject(this);
}

QUmlStateMachine::~QUmlStateMachine()
{
    if (!deletingFromQObject) {
        _qObject->setProperty("deletingFromModelingObject", true);
        delete _qObject;
    }
}

// OWNED ATTRIBUTES

/*!
    The connection points defined for this state machine. They represent the interface of the state machine when used as part of submachine state.
 */
const QSet<QUmlPseudostate *> 
QUmlStateMachine::connectionPoint() const
{
    // This is a read-write association end

    return _connectionPoint;
}

void QUmlStateMachine::addConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (!_connectionPoint.contains(connectionPoint)) {
        _connectionPoint.insert(connectionPoint);
        if (connectionPoint->asQObject() && this->asQObject())
            QObject::connect(connectionPoint->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeConnectionPoint(QObject *)));
        connectionPoint->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setStateMachine(this);
        }
    }
}

void QUmlStateMachine::removeConnectionPoint(QUmlPseudostate *connectionPoint)
{
    // This is a read-write association end

    if (_connectionPoint.contains(connectionPoint)) {
        _connectionPoint.remove(connectionPoint);
        if (connectionPoint->asQObject())
            connectionPoint->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(connectionPoint);

        // Adjust opposite properties
        if (connectionPoint) {
            connectionPoint->setStateMachine(0);
        }
    }
}

/*!
    The state machines of which this is an extension.
 */
const QSet<QUmlStateMachine *> 
QUmlStateMachine::extendedStateMachine() const
{
    // This is a read-write association end

    return _extendedStateMachine;
}

void QUmlStateMachine::addExtendedStateMachine(QUmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    if (!_extendedStateMachine.contains(extendedStateMachine)) {
        _extendedStateMachine.insert(extendedStateMachine);
        if (extendedStateMachine->asQObject() && this->asQObject())
            QObject::connect(extendedStateMachine->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeExtendedStateMachine(QObject *)));
    }
}

void QUmlStateMachine::removeExtendedStateMachine(QUmlStateMachine *extendedStateMachine)
{
    // This is a read-write association end

    if (_extendedStateMachine.contains(extendedStateMachine)) {
        _extendedStateMachine.remove(extendedStateMachine);
    }
}

/*!
    The regions owned directly by the state machine.
 */
const QSet<QUmlRegion *> 
QUmlStateMachine::region() const
{
    // This is a read-write association end

    return _region;
}

void QUmlStateMachine::addRegion(QUmlRegion *region)
{
    // This is a read-write association end

    if (!_region.contains(region)) {
        _region.insert(region);
        if (region->asQObject() && this->asQObject())
            QObject::connect(region->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeRegion(QObject *)));
        region->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setStateMachine(this);
        }
    }
}

void QUmlStateMachine::removeRegion(QUmlRegion *region)
{
    // This is a read-write association end

    if (_region.contains(region)) {
        _region.remove(region);
        if (region->asQObject())
            region->asQObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(region);

        // Adjust opposite properties
        if (region) {
            region->setStateMachine(0);
        }
    }
}

/*!
    References the submachine(s) in case of a submachine state. Multiple machines are referenced in case of a concurrent state.
 */
const QSet<QUmlState *> 
QUmlStateMachine::submachineState() const
{
    // This is a read-write association end

    return _submachineState;
}

void QUmlStateMachine::addSubmachineState(QUmlState *submachineState)
{
    // This is a read-write association end

    if (!_submachineState.contains(submachineState)) {
        _submachineState.insert(submachineState);
        if (submachineState->asQObject() && this->asQObject())
            QObject::connect(submachineState->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeSubmachineState(QObject *)));

        // Adjust opposite properties
        if (submachineState) {
            submachineState->setSubmachine(this);
        }
    }
}

void QUmlStateMachine::removeSubmachineState(QUmlState *submachineState)
{
    // This is a read-write association end

    if (_submachineState.contains(submachineState)) {
        _submachineState.remove(submachineState);

        // Adjust opposite properties
        if (submachineState) {
            submachineState->setSubmachine(0);
        }
    }
}

// OPERATIONS

/*!
    The operation LCA(s1,s2) returns an orthogonal state or region which is the least common ancestor of states s1 and s2, based on the statemachine containment hierarchy.
 */
QUmlNamespace *QUmlStateMachine::LCA(QUmlState *s1, QUmlState *s2) const
{
    qWarning("UmlStateMachine::LCA(): to be implemented (operation)");

    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return 0;
}

/*!
    The query ancestor(s1, s2) checks whether s1 is an ancestor state of state s2.
 */
bool QUmlStateMachine::ancestor(QUmlState *s1, QUmlState *s2) const
{
    qWarning("UmlStateMachine::ancestor(): to be implemented (operation)");

    Q_UNUSED(s1);
    Q_UNUSED(s2);
    return bool ();
}

/*!
    The query isConsistentWith() specifies that a redefining state machine is consistent with a redefined state machine provided that the redefining state machine is an extension of the redefined state machine: Regions are inherited and regions can be added, inherited regions can be redefined. In case of multiple redefining state machines, extension implies that the redefining state machine gets orthogonal regions for each of the redefined state machines.
 */
bool QUmlStateMachine::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    qWarning("UmlStateMachine::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a statemachine are properly related to the redefinition contexts of the specified statemachine to allow this element to redefine the other. The containing classifier of a redefining statemachine must redefine the containing classifier of the redefined statemachine.
 */
bool QUmlStateMachine::isRedefinitionContextValid(QUmlStateMachine *redefined) const
{
    qWarning("UmlStateMachine::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

