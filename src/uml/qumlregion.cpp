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
#include "qumlregion.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlRegion

    \inmodule QtUml

    \brief A region is an orthogonal part of either a composite state or a state machine. It contains states and transitions.
 */

QUmlRegion::QUmlRegion() :
    _extendedRegion(0),
    _state(0),
    _stateMachine(0)
{
    d_ptr->object.setProperty("extendedRegion", QVariant::fromValue((QUmlRegion *)(0)));
    d_ptr->object.setProperty("redefinitionContext", QVariant::fromValue((QUmlClassifier *)(0)));
    d_ptr->object.setProperty("state", QVariant::fromValue((QUmlState *)(0)));
    d_ptr->object.setProperty("stateMachine", QVariant::fromValue((QUmlStateMachine *)(0)));
    d_ptr->object.setProperty("subvertex", QVariant::fromValue(&_subvertex));
    d_ptr->object.setProperty("transition", QVariant::fromValue(&_transition));
}

// OWNED ATTRIBUTES

/*!
    The region of which this region is an extension.
 */
QUmlRegion *QUmlRegion::extendedRegion() const
{
    // This is a read-write association end

    return _extendedRegion;
}

void QUmlRegion::setExtendedRegion(QUmlRegion *extendedRegion)
{
    // This is a read-write association end

    if (_extendedRegion != extendedRegion) {
        // Adjust subsetted properties
        removeRedefinedElement(_extendedRegion);

        _extendedRegion = extendedRegion;

        // Adjust subsetted properties
        if (extendedRegion) {
            addRedefinedElement(extendedRegion);
        }
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlRegion::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlRegion::redefinitionContext(): to be implemented (this is a derived association end)");

    return 0;
}

void QUmlRegion::setRedefinitionContext(QUmlClassifier *redefinitionContext)
{
    // This is a read-only derived association end

    qWarning("QUmlRegion::redefinitionContext(): to be implemented (this is a derived association end)");
    Q_UNUSED(redefinitionContext);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.
 */
QUmlState *QUmlRegion::state() const
{
    // This is a read-write association end

    return _state;
}

void QUmlRegion::setState(QUmlState *state)
{
    // This is a read-write association end

    if (_state != state) {
        // Adjust subsetted properties

        _state = state;

        // Adjust subsetted properties
        setNamespace(state);
    }
}

/*!
    The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.
 */
QUmlStateMachine *QUmlRegion::stateMachine() const
{
    // This is a read-write association end

    return _stateMachine;
}

void QUmlRegion::setStateMachine(QUmlStateMachine *stateMachine)
{
    // This is a read-write association end

    if (_stateMachine != stateMachine) {
        // Adjust subsetted properties

        _stateMachine = stateMachine;

        // Adjust subsetted properties
        setNamespace(stateMachine);
    }
}

/*!
    The set of vertices that are owned by this region.
 */
QSet<QUmlVertex *> QUmlRegion::subvertex() const
{
    // This is a read-write association end

    return _subvertex;
}

void QUmlRegion::addSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    if (!_subvertex.contains(subvertex)) {
        _subvertex.insert(subvertex);

        // Adjust subsetted properties
        addOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(this);
        }
    }
}

void QUmlRegion::removeSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    if (_subvertex.contains(subvertex)) {
        _subvertex.remove(subvertex);

        // Adjust subsetted properties
        removeOwnedMember(subvertex);

        // Adjust opposite properties
        if (subvertex) {
            subvertex->setContainer(0);
        }
    }
}

/*!
    The set of transitions owned by the region.
 */
QSet<QUmlTransition *> QUmlRegion::transition() const
{
    // This is a read-write association end

    return _transition;
}

void QUmlRegion::addTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    if (!_transition.contains(transition)) {
        _transition.insert(transition);

        // Adjust subsetted properties
        addOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(this);
        }
    }
}

void QUmlRegion::removeTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    if (_transition.contains(transition)) {
        _transition.remove(transition);

        // Adjust subsetted properties
        removeOwnedMember(transition);

        // Adjust opposite properties
        if (transition) {
            transition->setContainer(0);
        }
    }
}

// OPERATIONS

/*!
    The operation belongsToPSM () checks if the region belongs to a protocol state machine
 */
bool QUmlRegion::belongsToPSM(
    ) const
{
    qWarning("QUmlRegion::belongsToPSM(): to be implemented (operation)");

    return bool ();
}

/*!
    The operation containingStateMachine() returns the sate machine in which this Region is defined
 */
QUmlStateMachine *QUmlRegion::containingStateMachine(
    ) const
{
    qWarning("QUmlRegion::containingStateMachine(): to be implemented (operation)");

    return 0;
}

/*!
    The query isConsistentWith() specifies that a redefining region is consistent with a redefined region provided that the redefining region is an extension of the redefined region, i.e. it adds vertices and transitions and it redefines states and transitions of the redefined region.
 */
bool QUmlRegion::isConsistentWith(
    QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlRegion::isConsistentWith(): to be implemented (operation)");

    Q_UNUSED(redefinee);
    return bool ();
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a region are properly related to the redefinition contexts of the specified region to allow this element to redefine the other. The containing statemachine/state of a redefining region must redefine the containing statemachine/state of the redefined region.
 */
bool QUmlRegion::isRedefinitionContextValid(
    QUmlRegion *redefined) const
{
    qWarning("QUmlRegion::isRedefinitionContextValid(): to be implemented (operation)");

    Q_UNUSED(redefined);
    return bool ();
}

QT_END_NAMESPACE

