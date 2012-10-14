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
#include "qelement_p.h"
#include "qnamespace_p.h"

#include <QtUml/QMessage>
#include <QtUml/QLifeline>
#include <QtUml/QAction>
#include <QtUml/QGate>

QT_BEGIN_NAMESPACE_QTUML

QInteractionPrivate::QInteractionPrivate() :
    actions(new QSet<QAction *>),
    messages(new QSet<QMessage *>),
    formalGates(new QSet<QGate *>),
    fragments(new QList<QInteractionFragment *>),
    lifelines(new QSet<QLifeline *>)
{
}

QInteractionPrivate::~QInteractionPrivate()
{
    delete actions;
    delete messages;
    delete formalGates;
    delete fragments;
    delete lifelines;
}

void QInteractionPrivate::addAction(QAction *action)
{
    // This is a read-write association end

    this->actions->insert(action);

    // Adjust subsetted property(ies)
    addOwnedElement(action);
}

void QInteractionPrivate::removeAction(QAction *action)
{
    // This is a read-write association end

    this->actions->remove(action);

    // Adjust subsetted property(ies)
    removeOwnedElement(action);
}

void QInteractionPrivate::addMessage(QMessage *message)
{
    // This is a read-write association end

    this->messages->insert(message);

    // Adjust subsetted property(ies)
    addOwnedMember(message);
}

void QInteractionPrivate::removeMessage(QMessage *message)
{
    // This is a read-write association end

    this->messages->remove(message);

    // Adjust subsetted property(ies)
    removeOwnedMember(message);
}

void QInteractionPrivate::addFormalGate(QGate *formalGate)
{
    // This is a read-write association end

    this->formalGates->insert(formalGate);

    // Adjust subsetted property(ies)
    addOwnedMember(formalGate);
}

void QInteractionPrivate::removeFormalGate(QGate *formalGate)
{
    // This is a read-write association end

    this->formalGates->remove(formalGate);

    // Adjust subsetted property(ies)
    removeOwnedMember(formalGate);
}

void QInteractionPrivate::addFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    this->fragments->append(fragment);

    // Adjust subsetted property(ies)
    addOwnedMember(fragment);
}

void QInteractionPrivate::removeFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    this->fragments->removeAll(fragment);

    // Adjust subsetted property(ies)
    removeOwnedMember(fragment);
}

void QInteractionPrivate::addLifeline(QLifeline *lifeline)
{
    // This is a read-write association end

    this->lifelines->insert(lifeline);

    // Adjust subsetted property(ies)
    addOwnedMember(lifeline);
}

void QInteractionPrivate::removeLifeline(QLifeline *lifeline)
{
    // This is a read-write association end

    this->lifelines->remove(lifeline);

    // Adjust subsetted property(ies)
    removeOwnedMember(lifeline);
}

/*!
    \class QInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */

QInteraction::QInteraction(QObject *parent)
    : QBehavior(false, parent)
{
    d_umlptr = new QInteractionPrivate;
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
        d->addAction(action);
    }
}

void QInteraction::removeAction(QAction *action)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->actions->contains(action)) {
        d->removeAction(action);
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
        d->addMessage(message);

        // Adjust opposite property
        message->setInteraction(this);
    }
}

void QInteraction::removeMessage(QMessage *message)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->messages->contains(message)) {
        d->removeMessage(message);

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
        d->addFormalGate(formalGate);
    }
}

void QInteraction::removeFormalGate(QGate *formalGate)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->formalGates->contains(formalGate)) {
        d->removeFormalGate(formalGate);
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
        d->addFragment(fragment);

        // Adjust opposite property
        fragment->setEnclosingInteraction(this);
    }
}

void QInteraction::removeFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->fragments->contains(fragment)) {
        d->removeFragment(fragment);

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
        d->addLifeline(lifeline);

        // Adjust opposite property
        lifeline->setInteraction(this);
    }
}

void QInteraction::removeLifeline(QLifeline *lifeline)
{
    // This is a read-write association end

    QTUML_D(QInteraction);
    if (d->lifelines->contains(lifeline)) {
        d->removeLifeline(lifeline);

        // Adjust opposite property
        lifeline->setInteraction(0);
    }
}

#include "moc_qinteraction.cpp"

QT_END_NAMESPACE_QTUML

