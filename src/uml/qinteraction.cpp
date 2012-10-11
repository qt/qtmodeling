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
#include "qnamespace_p.h"
#include "qnamespace_p.h"
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

void QInteractionPrivate::addAction(const QAction *action)
{
    this->actions->insert(const_cast<QAction *>(action));

    // Adjust subsetted property(ies)
    addOwnedElement(action);
}

void QInteractionPrivate::removeAction(const QAction *action)
{
    this->actions->remove(const_cast<QAction *>(action));

    // Adjust subsetted property(ies)
    removeOwnedElement(action);
}

void QInteractionPrivate::addMessage(const QMessage *message)
{
    this->messages->insert(const_cast<QMessage *>(message));

    // Adjust subsetted property(ies)
    addOwnedMember(message);
}

void QInteractionPrivate::removeMessage(const QMessage *message)
{
    this->messages->remove(const_cast<QMessage *>(message));

    // Adjust subsetted property(ies)
    removeOwnedMember(message);
}

void QInteractionPrivate::addFormalGate(const QGate *formalGate)
{
    this->formalGates->insert(const_cast<QGate *>(formalGate));

    // Adjust subsetted property(ies)
    addOwnedMember(formalGate);
}

void QInteractionPrivate::removeFormalGate(const QGate *formalGate)
{
    this->formalGates->remove(const_cast<QGate *>(formalGate));

    // Adjust subsetted property(ies)
    removeOwnedMember(formalGate);
}

void QInteractionPrivate::addFragment(const QInteractionFragment *fragment)
{
    this->fragments->append(const_cast<QInteractionFragment *>(fragment));

    // Adjust subsetted property(ies)
    addOwnedMember(fragment);
}

void QInteractionPrivate::removeFragment(const QInteractionFragment *fragment)
{
    this->fragments->removeAll(const_cast<QInteractionFragment *>(fragment));

    // Adjust subsetted property(ies)
    removeOwnedMember(fragment);
}

void QInteractionPrivate::addLifeline(const QLifeline *lifeline)
{
    this->lifelines->insert(const_cast<QLifeline *>(lifeline));

    // Adjust subsetted property(ies)
    addOwnedMember(lifeline);
}

void QInteractionPrivate::removeLifeline(const QLifeline *lifeline)
{
    this->lifelines->remove(const_cast<QLifeline *>(lifeline));

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
    Q_D(const QInteraction);
    return d->actions;
}

void QInteraction::addAction(const QAction *action)
{
    Q_D(QInteraction);
    d->addAction(const_cast<QAction *>(action));
}

void QInteraction::removeAction(const QAction *action)
{
    Q_D(QInteraction);
    d->removeAction(const_cast<QAction *>(action));
}

/*!
    The Messages contained in this Interaction.
 */
const QSet<QMessage *> *QInteraction::messages() const
{
    Q_D(const QInteraction);
    return d->messages;
}

void QInteraction::addMessage(const QMessage *message)
{
    Q_D(QInteraction);
    d->addMessage(const_cast<QMessage *>(message));
}

void QInteraction::removeMessage(const QMessage *message)
{
    Q_D(QInteraction);
    d->removeMessage(const_cast<QMessage *>(message));
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
const QSet<QGate *> *QInteraction::formalGates() const
{
    Q_D(const QInteraction);
    return d->formalGates;
}

void QInteraction::addFormalGate(const QGate *formalGate)
{
    Q_D(QInteraction);
    d->addFormalGate(const_cast<QGate *>(formalGate));
}

void QInteraction::removeFormalGate(const QGate *formalGate)
{
    Q_D(QInteraction);
    d->removeFormalGate(const_cast<QGate *>(formalGate));
}

/*!
    The ordered set of fragments in the Interaction.
 */
const QList<QInteractionFragment *> *QInteraction::fragments() const
{
    Q_D(const QInteraction);
    return d->fragments;
}

void QInteraction::addFragment(const QInteractionFragment *fragment)
{
    Q_D(QInteraction);
    d->addFragment(const_cast<QInteractionFragment *>(fragment));
}

void QInteraction::removeFragment(const QInteractionFragment *fragment)
{
    Q_D(QInteraction);
    d->removeFragment(const_cast<QInteractionFragment *>(fragment));
}

/*!
    Specifies the participants in this Interaction.
 */
const QSet<QLifeline *> *QInteraction::lifelines() const
{
    Q_D(const QInteraction);
    return d->lifelines;
}

void QInteraction::addLifeline(const QLifeline *lifeline)
{
    Q_D(QInteraction);
    d->addLifeline(const_cast<QLifeline *>(lifeline));
}

void QInteraction::removeLifeline(const QLifeline *lifeline)
{
    Q_D(QInteraction);
    d->removeLifeline(const_cast<QLifeline *>(lifeline));
}

#include "moc_qinteraction.cpp"

QT_END_NAMESPACE_QTUML

