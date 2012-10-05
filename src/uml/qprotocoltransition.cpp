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

QT_BEGIN_NAMESPACE_QTUML

class QProtocolTransitionPrivate
{
public:
    explicit QProtocolTransitionPrivate();
    virtual ~QProtocolTransitionPrivate();

    QConstraint *postCondition;
    QConstraint *preCondition;
};

QProtocolTransitionPrivate::QProtocolTransitionPrivate()
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

QProtocolTransition::QProtocolTransition(QObject *parent)
    : QTransition(parent), d_ptr(new QProtocolTransitionPrivate)
{
}

QProtocolTransition::~QProtocolTransition()
{
    delete d_ptr;
}

/*!
    Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.
 */
QConstraint *QProtocolTransition::postCondition() const
{
    return d_ptr->postCondition;
}

void QProtocolTransition::setPostCondition(const QConstraint *postCondition)
{
    d_ptr->postCondition = const_cast<QConstraint *>(postCondition);
}

/*!
    Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.
 */
QConstraint *QProtocolTransition::preCondition() const
{
    return d_ptr->preCondition;
}

void QProtocolTransition::setPreCondition(const QConstraint *preCondition)
{
    d_ptr->preCondition = const_cast<QConstraint *>(preCondition);
}

/*!
    This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.
 */
const QSet<QOperation *> *QProtocolTransition::referred() const
{
    qWarning("To be implemented (this is a derived associationend)");
}

#include "moc_qprotocoltransition.cpp"

QT_END_NAMESPACE_QTUML

