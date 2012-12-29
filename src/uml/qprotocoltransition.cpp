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

#include "qprotocoltransition.h"
#include "qprotocoltransition_p.h"

#include <QtUml/QConstraint>
#include <QtUml/QOperation>

QT_BEGIN_NAMESPACE_QTUML

QProtocolTransitionPrivate::QProtocolTransitionPrivate() :
    postCondition(0),
    preCondition(0)
{
}

QProtocolTransitionPrivate::~QProtocolTransitionPrivate()
{
}

/*!
    \class QProtocolTransition

    \inmodule QtUml

    \brief A protocol transition specifies a legal transition for an operation. Transitions of protocol state machines have the following information: a pre condition (guard), on trigger, and a post condition. Every protocol transition is associated to zero or one operation (referred BehavioralFeature) that belongs to the context classifier of the protocol state machine.
 */

QProtocolTransition::QProtocolTransition(QWrappedObject *parent, QWrappedObject *wrapper) :
    QTransition(*new QProtocolTransitionPrivate, parent, wrapper)
{
}

QProtocolTransition::QProtocolTransition(QProtocolTransitionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QTransition(dd, parent, wrapper)
{
}

QProtocolTransition::~QProtocolTransition()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QProtocolTransition
// ---------------------------------------------------------------

/*!
    Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.
 */
QConstraint *QProtocolTransition::postCondition() const
{
    // This is a read-write association end

    Q_D(const QProtocolTransition);
    return d->postCondition;
}

void QProtocolTransition::setPostCondition(QConstraint *postCondition)
{
    // This is a read-write association end

    Q_D(QProtocolTransition);
    if (d->postCondition != postCondition) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QNamespace *>(this))->removeOwnedRule(qwrappedobject_cast<QConstraint *>(d->postCondition));

        d->postCondition = postCondition;

        // Adjust subsetted property(ies)
        if (postCondition) {
            (qwrappedobject_cast<QNamespace *>(this))->addOwnedRule(qwrappedobject_cast<QConstraint *>(postCondition));
        }
    }
}

/*!
    This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.
 */
QSet<QOperation *> QProtocolTransition::referred() const
{
    // This is a read-only derived association end

    qWarning("QProtocolTransition::referred: to be implemented (this is a derived associationend)");

    return QSet<QOperation *>(); // change here to your derived return
}

/*!
    Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.
 */
QConstraint *QProtocolTransition::preCondition() const
{
    // This is a read-write association end

    Q_D(const QProtocolTransition);
    return d->preCondition;
}

void QProtocolTransition::setPreCondition(QConstraint *preCondition)
{
    // This is a read-write association end

    Q_D(QProtocolTransition);
    if (d->preCondition != preCondition) {
        d->preCondition = preCondition;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QTransition *>(this))->setGuard(qwrappedobject_cast<QConstraint *>(preCondition));
    }
}

void QProtocolTransition::registerMetaTypes() const
{
    qRegisterMetaType<QConstraint *>("QConstraint *");
    qRegisterMetaType<QSet<QConstraint *>>("QSet<QConstraint *>");
    qRegisterMetaType<QList<QConstraint *>>("QList<QConstraint *>");

    qRegisterMetaType<QOperation *>("QOperation *");
    qRegisterMetaType<QSet<QOperation *>>("QSet<QOperation *>");
    qRegisterMetaType<QList<QOperation *>>("QList<QOperation *>");

    QTransition::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qprotocoltransition.cpp"

QT_END_NAMESPACE_QTUML

