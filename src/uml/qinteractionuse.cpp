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

#include "qinteractionuse.h"
//#include "qinteractionuse_p.h"

QT_BEGIN_NAMESPACE_QTUML

/*!
    \class QInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QInteractionUse::QInteractionUse(QObject *parent)
    : QObject(parent)
{
}

QInteractionUse::~QInteractionUse()
{
}

/*!
    The actual gates of the InteractionUse
 */
QList<QGate *> *QInteractionUse::actualGates()
{
}

/*!
    The actual arguments of the Interaction
 */
QList<QValueSpecification *> *QInteractionUse::arguments()
{
}

/*!
    Refers to the Interaction that defines its meaning
 */
QInteraction *QInteractionUse::refersTo() const
{
}

void QInteractionUse::setRefersTo(QInteraction *refersTo)
{
}

/*!
    The value of the executed Interaction.
 */
QValueSpecification *QInteractionUse::returnValue() const
{
}

void QInteractionUse::setReturnValue(QValueSpecification *returnValue)
{
}

/*!
    The recipient of the return value.
 */
QProperty *QInteractionUse::returnValueRecipient() const
{
}

void QInteractionUse::setReturnValueRecipient(QProperty *returnValueRecipient)
{
}

#include "moc_qinteractionuse.cpp"

QT_END_NAMESPACE_QTUML

