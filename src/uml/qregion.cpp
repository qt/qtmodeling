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
#include "qregion_p.h"

#include <QtUml/QVertex>
#include <QtUml/QTransition>
#include <QtUml/QStateMachine>
#include <QtUml/QClassifier>
#include <QtUml/QState>

QT_BEGIN_NAMESPACE_QTUML

QRegionPrivate::QRegionPrivate(QRegion *q_umlptr) :
    extendedRegion(0),
    transitions(new QSet<QTransition *>),
    stateMachine(0),
    state(0),
    subvertices(new QSet<QVertex *>)
{
    this->q_umlptr = q_umlptr;
}

QRegionPrivate::~QRegionPrivate()
{
    delete transitions;
    delete subvertices;
}

/*!
    \class QRegion

    \inmodule QtUml

    \brief A region is an orthogonal part of either a composite state or a state machine. It contains states and transitions.
 */

QRegion::QRegion(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QRegionPrivate(this);
}

QRegion::QRegion(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QRegionPrivate;
}

QRegion::~QRegion()
{
}

/*!
    The region of which this region is an extension.
 */
QRegion *QRegion::extendedRegion() const
{
    // This is a read-write association end

    QTUML_D(const QRegion);
    return d->extendedRegion;
}

void QRegion::setExtendedRegion(QRegion *extendedRegion)
{
    // This is a read-write association end

    QTUML_D(QRegion);
    if (d->extendedRegion != extendedRegion) {
        // Adjust subsetted property(ies)
        d->removeRedefinedElement(d->extendedRegion);

        d->extendedRegion = extendedRegion;

        // Adjust subsetted property(ies)
        if (extendedRegion) {
            d->addRedefinedElement(extendedRegion);
        }
    }
}

/*!
    The set of transitions owned by the region.
 */
const QSet<QTransition *> *QRegion::transitions() const
{
    // This is a read-write association end

    QTUML_D(const QRegion);
    return d->transitions;
}

void QRegion::addTransition(QTransition *transition)
{
    // This is a read-write association end

    QTUML_D(QRegion);
    if (!d->transitions->contains(transition)) {
        d->transitions->insert(transition);

        // Adjust subsetted property(ies)
        d->addOwnedMember(transition);

        // Adjust opposite property
        transition->setContainer(this);
    }
}

void QRegion::removeTransition(QTransition *transition)
{
    // This is a read-write association end

    QTUML_D(QRegion);
    if (d->transitions->contains(transition)) {
        d->transitions->remove(transition);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(transition);

        // Adjust opposite property
        transition->setContainer(0);
    }
}

/*!
    The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.
 */
QStateMachine *QRegion::stateMachine() const
{
    // This is a read-write association end

    QTUML_D(const QRegion);
    return d->stateMachine;
}

void QRegion::setStateMachine(QStateMachine *stateMachine)
{
    // This is a read-write association end

    QTUML_D(QRegion);
    if (d->stateMachine != stateMachine) {
        // Adjust opposite property
        if (d->stateMachine)
            d->stateMachine->removeRegion(this);

        d->stateMachine = stateMachine;

        // Adjust subsetted property(ies)
        d->setNamespace_(stateMachine);

        // Adjust opposite property
        if (stateMachine)
            stateMachine->addRegion(this);
    }
}

/*!
    The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.
 */
QState *QRegion::state() const
{
    // This is a read-write association end

    QTUML_D(const QRegion);
    return d->state;
}

void QRegion::setState(QState *state)
{
    // This is a read-write association end

    QTUML_D(QRegion);
    if (d->state != state) {
        // Adjust opposite property
        if (d->state)
            d->state->removeRegion(this);

        d->state = state;

        // Adjust subsetted property(ies)
        d->setNamespace_(state);

        // Adjust opposite property
        if (state)
            state->addRegion(this);
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QClassifier *QRegion::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QRegion::redefinitionContext: to be implemented (this is a derived associationend)");

    //QTUML_D(const QRegion);
    //return <derived-return>;
}

/*!
    The set of vertices that are owned by this region.
 */
const QSet<QVertex *> *QRegion::subvertices() const
{
    // This is a read-write association end

    QTUML_D(const QRegion);
    return d->subvertices;
}

void QRegion::addSubvertex(QVertex *subvertex)
{
    // This is a read-write association end

    QTUML_D(QRegion);
    if (!d->subvertices->contains(subvertex)) {
        d->subvertices->insert(subvertex);

        // Adjust subsetted property(ies)
        d->addOwnedMember(subvertex);

        // Adjust opposite property
        subvertex->setContainer(this);
    }
}

void QRegion::removeSubvertex(QVertex *subvertex)
{
    // This is a read-write association end

    QTUML_D(QRegion);
    if (d->subvertices->contains(subvertex)) {
        d->subvertices->remove(subvertex);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(subvertex);

        // Adjust opposite property
        subvertex->setContainer(0);
    }
}

/*!
    The operation belongsToPSM () checks if the region belongs to a protocol state machine
 */
bool QRegion::belongsToPSM() const
{
    qWarning("QRegion::belongsToPSM: operation to be implemented");
}

/*!
    The operation containingStateMachine() returns the sate machine in which this Region is defined
 */
QStateMachine *QRegion::containingStateMachine() const
{
    qWarning("QRegion::containingStateMachine: operation to be implemented");
}

/*!
    The query isConsistentWith() specifies that a redefining region is consistent with a redefined region provided that the redefining region is an extension of the redefined region, i.e. it adds vertices and transitions and it redefines states and transitions of the redefined region.
 */
bool QRegion::isConsistentWith(const QRedefinableElement *redefinee) const
{
    qWarning("QRegion::isConsistentWith: operation to be implemented");
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a region are properly related to the redefinition contexts of the specified region to allow this element to redefine the other. The containing statemachine/state of a redefining region must redefine the containing statemachine/state of the redefined region.
 */
bool QRegion::isRedefinitionContextValid(const QRegion *redefined) const
{
    qWarning("QRegion::isRedefinitionContextValid: operation to be implemented");
}

#include "moc_qregion.cpp"

QT_END_NAMESPACE_QTUML

