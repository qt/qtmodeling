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

#include <QtUml/QUmlAction>
#include <QtUml/QUmlGate>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>

QT_BEGIN_NAMESPACE

QUmlInteraction::QUmlInteraction(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlAction *> QUmlInteraction::action() const
{
    return *(reinterpret_cast<const QSet<QUmlAction *> *>(&_action));
}

void QUmlInteraction::addAction(UmlAction *action)
{
    UmlInteraction::addAction(action);
}

void QUmlInteraction::removeAction(UmlAction *action)
{
    UmlInteraction::removeAction(action);
}

const QSet<QUmlGate *> QUmlInteraction::formalGate() const
{
    return *(reinterpret_cast<const QSet<QUmlGate *> *>(&_formalGate));
}

void QUmlInteraction::addFormalGate(UmlGate *formalGate)
{
    UmlInteraction::addFormalGate(formalGate);
}

void QUmlInteraction::removeFormalGate(UmlGate *formalGate)
{
    UmlInteraction::removeFormalGate(formalGate);
}

const QList<QUmlInteractionFragment *> QUmlInteraction::fragment() const
{
    return *(reinterpret_cast<const QList<QUmlInteractionFragment *> *>(&_fragment));
}

void QUmlInteraction::addFragment(UmlInteractionFragment *fragment)
{
    UmlInteraction::addFragment(fragment);
}

void QUmlInteraction::removeFragment(UmlInteractionFragment *fragment)
{
    UmlInteraction::removeFragment(fragment);
}

const QSet<QUmlLifeline *> QUmlInteraction::lifeline() const
{
    return *(reinterpret_cast<const QSet<QUmlLifeline *> *>(&_lifeline));
}

void QUmlInteraction::addLifeline(UmlLifeline *lifeline)
{
    UmlInteraction::addLifeline(lifeline);
}

void QUmlInteraction::removeLifeline(UmlLifeline *lifeline)
{
    UmlInteraction::removeLifeline(lifeline);
}

const QSet<QUmlMessage *> QUmlInteraction::message() const
{
    return *(reinterpret_cast<const QSet<QUmlMessage *> *>(&_message));
}

void QUmlInteraction::addMessage(UmlMessage *message)
{
    UmlInteraction::addMessage(message);
}

void QUmlInteraction::removeMessage(UmlMessage *message)
{
    UmlInteraction::removeMessage(message);
}

QT_END_NAMESPACE

