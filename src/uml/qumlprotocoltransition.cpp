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
#include "qumlprotocoltransition.h"
#include "qumlprotocoltransition_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlOperation>

QT_BEGIN_NAMESPACE

QUmlProtocolTransitionPrivate::QUmlProtocolTransitionPrivate() :
    postCondition(0),
    preCondition(0)
{
}

/*!
    \class QUmlProtocolTransition

    \inmodule QtUml

    \brief A protocol transition specifies a legal transition for an operation. Transitions of protocol state machines have the following information: a pre condition (guard), on trigger, and a post condition. Every protocol transition is associated to zero or one operation (referred BehavioralFeature) that belongs to the context classifier of the protocol state machine.
 */

QUmlProtocolTransition::QUmlProtocolTransition(bool create_d_ptr) :
    QUmlTransition(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlProtocolTransitionPrivate);
}

// OWNED ATTRIBUTES

/*!
    Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.
 */
QUmlConstraint *QUmlProtocolTransition::postCondition() const
{
    // This is a read-write association end

    QM_D(const QUmlProtocolTransition);
    return d->postCondition;
}

void QUmlProtocolTransition::setPostCondition(QUmlConstraint *postCondition)
{
    // This is a read-write association end

    QM_D(QUmlProtocolTransition);
    if (d->postCondition != postCondition) {
        d->postCondition = postCondition;
    }
}

/*!
    Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.
 */
QUmlConstraint *QUmlProtocolTransition::preCondition() const
{
    // This is a read-write association end

    QM_D(const QUmlProtocolTransition);
    return d->preCondition;
}

void QUmlProtocolTransition::setPreCondition(QUmlConstraint *preCondition)
{
    // This is a read-write association end

    QM_D(QUmlProtocolTransition);
    if (d->preCondition != preCondition) {
        d->preCondition = preCondition;
    }
}

/*!
    This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.
 */
QSet<QUmlOperation *> QUmlProtocolTransition::referred() const
{
    // This is a read-only derived association end

    qWarning("QUmlProtocolTransition::referred(): to be implemented (this is a derived association end)");

    return QSet<QUmlOperation *>();
}

QT_END_NAMESPACE

