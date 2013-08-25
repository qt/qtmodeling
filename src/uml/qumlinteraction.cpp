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
#include "qumlinteraction.h"
#include "qumlinteraction_p.h"

#include <QtUml/QUmlAction>
#include <QtUml/QUmlGate>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>

QT_BEGIN_NAMESPACE

QUmlInteractionPrivate::QUmlInteractionPrivate()
{
}

/*!
    \class QUmlInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */

QUmlInteraction::QUmlInteraction(bool create_d_ptr) :
    QUmlBehavior(false),
    QUmlInteractionFragment(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInteractionPrivate);
}

// OWNED ATTRIBUTES

/*!
    Actions owned by the Interaction.
 */
QSet<QUmlAction *> QUmlInteraction::action() const
{
    // This is a read-write association end

    QM_D(const QUmlInteraction);
    return d->action;
}

void QUmlInteraction::addAction(QUmlAction *action)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (!d->action.contains(action)) {
        d->action.insert(action);
    }
}

void QUmlInteraction::removeAction(QUmlAction *action)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (d->action.contains(action)) {
        d->action.remove(action);
    }
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
QSet<QUmlGate *> QUmlInteraction::formalGate() const
{
    // This is a read-write association end

    QM_D(const QUmlInteraction);
    return d->formalGate;
}

void QUmlInteraction::addFormalGate(QUmlGate *formalGate)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (!d->formalGate.contains(formalGate)) {
        d->formalGate.insert(formalGate);
    }
}

void QUmlInteraction::removeFormalGate(QUmlGate *formalGate)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (d->formalGate.contains(formalGate)) {
        d->formalGate.remove(formalGate);
    }
}

/*!
    The ordered set of fragments in the Interaction.
 */
QList<QUmlInteractionFragment *> QUmlInteraction::fragment() const
{
    // This is a read-write association end

    QM_D(const QUmlInteraction);
    return d->fragment;
}

void QUmlInteraction::addFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (!d->fragment.contains(fragment)) {
        d->fragment.append(fragment);
    }
}

void QUmlInteraction::removeFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (d->fragment.contains(fragment)) {
        d->fragment.removeAll(fragment);
    }
}

/*!
    Specifies the participants in this Interaction.
 */
QSet<QUmlLifeline *> QUmlInteraction::lifeline() const
{
    // This is a read-write association end

    QM_D(const QUmlInteraction);
    return d->lifeline;
}

void QUmlInteraction::addLifeline(QUmlLifeline *lifeline)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (!d->lifeline.contains(lifeline)) {
        d->lifeline.insert(lifeline);
    }
}

void QUmlInteraction::removeLifeline(QUmlLifeline *lifeline)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (d->lifeline.contains(lifeline)) {
        d->lifeline.remove(lifeline);
    }
}

/*!
    The Messages contained in this Interaction.
 */
QSet<QUmlMessage *> QUmlInteraction::message() const
{
    // This is a read-write association end

    QM_D(const QUmlInteraction);
    return d->message;
}

void QUmlInteraction::addMessage(QUmlMessage *message)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (!d->message.contains(message)) {
        d->message.insert(message);
    }
}

void QUmlInteraction::removeMessage(QUmlMessage *message)
{
    // This is a read-write association end

    QM_D(QUmlInteraction);
    if (d->message.contains(message)) {
        d->message.remove(message);
    }
}

QT_END_NAMESPACE

