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

#include "qinteraction.h"
#include "qinteraction_p.h"

#include <QtUml/QMessage>
#include <QtUml/QLifeline>
#include <QtUml/QAction>
#include <QtUml/QGate>

QT_BEGIN_NAMESPACE_QTUML

QInteractionPrivate::QInteractionPrivate(QInteraction *q_umlptr) :
    actions(new QSet<QAction *>),
    messages(new QSet<QMessage *>),
    formalGates(new QSet<QGate *>),
    fragments(new QList<QInteractionFragment *>),
    lifelines(new QSet<QLifeline *>)
{
    this->q_umlptr = q_umlptr;
}

QInteractionPrivate::~QInteractionPrivate()
{
    delete actions;
    delete messages;
    delete formalGates;
    delete fragments;
    delete lifelines;
}

/*!
    \class QInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */

QInteraction::QInteraction(QObject *parent)
    : QBehavior(false, parent)
{
    d_umlptr = new QInteractionPrivate(this);
}

QInteraction::QInteraction(bool createPimpl, QObject *parent)
    : QBehavior(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QInteractionPrivate;
}

QInteraction::~QInteraction()
{
}

/*!
    Actions owned by the Interaction.
 */
const QSet<QAction *> *QInteraction::actions() const
{
    // This is a read-write association end

    QTUML_D(const QInteraction);
    return d->actions;
}

void QInteraction::addAction(QAction *action)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (!d->actions->contains(action)) {
        d->actions->insert(action);

        // Adjust subsetted property(ies)
        d->addOwnedElement(action);
    }
}

void QInteraction::removeAction(QAction *action)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->actions->contains(action)) {
        d->actions->remove(action);

        // Adjust subsetted property(ies)
        d->removeOwnedElement(action);
    }
}

/*!
    The Messages contained in this Interaction.
 */
const QSet<QMessage *> *QInteraction::messages() const
{
    // This is a read-write association end

    QTUML_D(const QInteraction);
    return d->messages;
}

void QInteraction::addMessage(QMessage *message)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (!d->messages->contains(message)) {
        d->messages->insert(message);

        // Adjust subsetted property(ies)
        d->addOwnedMember(message);

        // Adjust opposite property
        message->setInteraction(this);
    }
}

void QInteraction::removeMessage(QMessage *message)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->messages->contains(message)) {
        d->messages->remove(message);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(message);

        // Adjust opposite property
        message->setInteraction(0);
    }
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
const QSet<QGate *> *QInteraction::formalGates() const
{
    // This is a read-write association end

    QTUML_D(const QInteraction);
    return d->formalGates;
}

void QInteraction::addFormalGate(QGate *formalGate)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (!d->formalGates->contains(formalGate)) {
        d->formalGates->insert(formalGate);

        // Adjust subsetted property(ies)
        d->addOwnedMember(formalGate);
    }
}

void QInteraction::removeFormalGate(QGate *formalGate)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->formalGates->contains(formalGate)) {
        d->formalGates->remove(formalGate);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(formalGate);
    }
}

/*!
    The ordered set of fragments in the Interaction.
 */
const QList<QInteractionFragment *> *QInteraction::fragments() const
{
    // This is a read-write association end

    QTUML_D(const QInteraction);
    return d->fragments;
}

void QInteraction::addFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (!d->fragments->contains(fragment)) {
        d->fragments->append(fragment);

        // Adjust subsetted property(ies)
        d->addOwnedMember(fragment);

        // Adjust opposite property
        fragment->setEnclosingInteraction(this);
    }
}

void QInteraction::removeFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->fragments->contains(fragment)) {
        d->fragments->removeAll(fragment);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(fragment);

        // Adjust opposite property
        fragment->setEnclosingInteraction(0);
    }
}

/*!
    Specifies the participants in this Interaction.
 */
const QSet<QLifeline *> *QInteraction::lifelines() const
{
    // This is a read-write association end

    QTUML_D(const QInteraction);
    return d->lifelines;
}

void QInteraction::addLifeline(QLifeline *lifeline)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (!d->lifelines->contains(lifeline)) {
        d->lifelines->insert(lifeline);

        // Adjust subsetted property(ies)
        d->addOwnedMember(lifeline);

        // Adjust opposite property
        lifeline->setInteraction(this);
    }
}

void QInteraction::removeLifeline(QLifeline *lifeline)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->lifelines->contains(lifeline)) {
        d->lifelines->remove(lifeline);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(lifeline);

        // Adjust opposite property
        lifeline->setInteraction(0);
    }
}

#include "moc_qinteraction.cpp"

QT_END_NAMESPACE_QTUML

