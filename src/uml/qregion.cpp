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

#include "qregion.h"

QT_BEGIN_NAMESPACE_QTUML

class QRegionPrivate
{
public:
    explicit QRegionPrivate();
    virtual ~QRegionPrivate();

    QRegion *extendedRegion;
    QState *state;
    QStateMachine *stateMachine;
    QSet<QVertex *> *subvertices;
    QSet<QTransition *> *transitions;
};

QRegionPrivate::QRegionPrivate() :
    subvertices(new QSet<QVertex *>),
    transitions(new QSet<QTransition *>)
{
}

QRegionPrivate::~QRegionPrivate()
{
    delete subvertices;
    delete transitions;
}

/*!
    \class QRegion

    \inmodule QtUml

    \brief A region is an orthogonal part of either a composite state or a state machine. It contains states and transitions.
 */

QRegion::QRegion(QObject *parent)
    : QObject(parent), d_ptr(new QRegionPrivate)
{
}

QRegion::~QRegion()
{
    delete d_ptr;
}

/*!
    The region of which this region is an extension.
 */
QRegion *QRegion::extendedRegion() const
{
    return d_ptr->extendedRegion;
}

void QRegion::setExtendedRegion(const QRegion *extendedRegion)
{
    d_ptr->extendedRegion = const_cast<QRegion *>(extendedRegion);
}

/*!
    References the classifier in which context this element may be redefined.
 */
QClassifier *QRegion::redefinitionContext() const
{
    qWarning("To be implemented (this is a derived associationend)");
}

/*!
    The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.
 */
QState *QRegion::state() const
{
    return d_ptr->state;
}

void QRegion::setState(const QState *state)
{
    d_ptr->state = const_cast<QState *>(state);
}

/*!
    The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.
 */
QStateMachine *QRegion::stateMachine() const
{
    return d_ptr->stateMachine;
}

void QRegion::setStateMachine(const QStateMachine *stateMachine)
{
    d_ptr->stateMachine = const_cast<QStateMachine *>(stateMachine);
}

/*!
    The set of vertices that are owned by this region.
 */
const QSet<QVertex *> *QRegion::subvertices() const
{
    return d_ptr->subvertices;
}

void QRegion::addSubvertex(const QVertex *subvertex)
{
    d_ptr->subvertices->insert(const_cast<QVertex *>(subvertex));
}

void QRegion::removeSubvertex(const QVertex *subvertex)
{
    d_ptr->subvertices->remove(const_cast<QVertex *>(subvertex));
}

/*!
    The set of transitions owned by the region.
 */
const QSet<QTransition *> *QRegion::transitions() const
{
    return d_ptr->transitions;
}

void QRegion::addTransition(const QTransition *transition)
{
    d_ptr->transitions->insert(const_cast<QTransition *>(transition));
}

void QRegion::removeTransition(const QTransition *transition)
{
    d_ptr->transitions->remove(const_cast<QTransition *>(transition));
}

/*!
    The operation belongsToPSM () checks if the region belongs to a protocol state machine
 */
bool QRegion::belongsToPSM() const
{
    qWarning("To be implemented");
}

/*!
    The operation containingStateMachine() returns the sate machine in which this Region is defined
 */
QStateMachine *QRegion::containingStateMachine() const
{
    qWarning("To be implemented");
}

/*!
    The query isConsistentWith() specifies that a redefining region is consistent with a redefined region provided that the redefining region is an extension of the redefined region, i.e. it adds vertices and transitions and it redefines states and transitions of the redefined region.
 */
bool QRegion::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("To be implemented");
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a region are properly related to the redefinition contexts of the specified region to allow this element to redefine the other. The containing statemachine/state of a redefining region must redefine the containing statemachine/state of the redefined region.
 */
bool QRegion::isRedefinitionContextValid(const QRegion *redefined) const
{
    qWarning("To be implemented");
}

#include "moc_qregion.cpp"

QT_END_NAMESPACE_QTUML

