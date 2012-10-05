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

QT_BEGIN_NAMESPACE_QTUML

class QInteractionPrivate
{
public:
    explicit QInteractionPrivate();
    virtual ~QInteractionPrivate();

    QSet<QAction *> *actions;
    QSet<QGate *> *formalGates;
    QList<QInteractionFragment *> *fragments;
    QSet<QLifeline *> *lifelines;
    QSet<QMessage *> *messages;
};

QInteractionPrivate::QInteractionPrivate() :
    actions(new QSet<QAction *>),
    formalGates(new QSet<QGate *>),
    fragments(new QList<QInteractionFragment *>),
    lifelines(new QSet<QLifeline *>),
    messages(new QSet<QMessage *>)
{
}

QInteractionPrivate::~QInteractionPrivate()
{
    delete actions;
    delete formalGates;
    delete fragments;
    delete lifelines;
    delete messages;
}

/*!
    \class QInteraction

    \inmodule QtUml

    \brief An interaction is a unit of behavior that focuses on the observable exchange of information between connectable elements.
 */

QInteraction::QInteraction(QObject *parent)
    : QBehavior(parent), d_ptr(new QInteractionPrivate)
{
}

QInteraction::~QInteraction()
{
    delete d_ptr;
}

/*!
    Actions owned by the Interaction.
 */
const QSet<QAction *> *QInteraction::actions() const
{
    return d_ptr->actions;
}

void QInteraction::addAction(const QAction *action)
{
    d_ptr->actions->insert(const_cast<QAction *>(action));
}

void QInteraction::removeAction(const QAction *action)
{
    d_ptr->actions->remove(const_cast<QAction *>(action));
}

/*!
    Specifies the gates that form the message interface between this Interaction and any InteractionUses which reference it.
 */
const QSet<QGate *> *QInteraction::formalGates() const
{
    return d_ptr->formalGates;
}

void QInteraction::addFormalGate(const QGate *formalGate)
{
    d_ptr->formalGates->insert(const_cast<QGate *>(formalGate));
}

void QInteraction::removeFormalGate(const QGate *formalGate)
{
    d_ptr->formalGates->remove(const_cast<QGate *>(formalGate));
}

/*!
    The ordered set of fragments in the Interaction.
 */
const QList<QInteractionFragment *> *QInteraction::fragments() const
{
    return d_ptr->fragments;
}

void QInteraction::addFragment(const QInteractionFragment *fragment)
{
    d_ptr->fragments->append(const_cast<QInteractionFragment *>(fragment));
}

void QInteraction::removeFragment(const QInteractionFragment *fragment)
{
    d_ptr->fragments->removeAll(const_cast<QInteractionFragment *>(fragment));
}

/*!
    Specifies the participants in this Interaction.
 */
const QSet<QLifeline *> *QInteraction::lifelines() const
{
    return d_ptr->lifelines;
}

void QInteraction::addLifeline(const QLifeline *lifeline)
{
    d_ptr->lifelines->insert(const_cast<QLifeline *>(lifeline));
}

void QInteraction::removeLifeline(const QLifeline *lifeline)
{
    d_ptr->lifelines->remove(const_cast<QLifeline *>(lifeline));
}

/*!
    The Messages contained in this Interaction.
 */
const QSet<QMessage *> *QInteraction::messages() const
{
    return d_ptr->messages;
}

void QInteraction::addMessage(const QMessage *message)
{
    d_ptr->messages->insert(const_cast<QMessage *>(message));
}

void QInteraction::removeMessage(const QMessage *message)
{
    d_ptr->messages->remove(const_cast<QMessage *>(message));
}

#include "moc_qinteraction.cpp"

QT_END_NAMESPACE_QTUML

