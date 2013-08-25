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
#include "qumlinteractionuse.h"
#include "qumlinteractionuse_p.h"

#include <QtUml/QUmlGate>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlInteractionUsePrivate::QUmlInteractionUsePrivate() :
    refersTo(0),
    returnValue(0),
    returnValueRecipient(0)
{
}

/*!
    \class QUmlInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QUmlInteractionUse::QUmlInteractionUse(bool create_d_ptr) :
    QUmlInteractionFragment(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlInteractionUsePrivate);
}

// Owned attributes

/*!
    The actual gates of the InteractionUse
 */
QSet<QUmlGate *> QUmlInteractionUse::actualGate() const
{
    return QSet<QUmlGate *>();
}

void QUmlInteractionUse::addActualGate(QSet<QUmlGate *> actualGate)
{
    Q_UNUSED(actualGate);
}

void QUmlInteractionUse::removeActualGate(QSet<QUmlGate *> actualGate)
{
    Q_UNUSED(actualGate);
}

/*!
    The actual arguments of the Interaction
 */
QList<QUmlValueSpecification *> QUmlInteractionUse::argument() const
{
    return QList<QUmlValueSpecification *>();
}

void QUmlInteractionUse::addArgument(QList<QUmlValueSpecification *> argument)
{
    Q_UNUSED(argument);
}

void QUmlInteractionUse::removeArgument(QList<QUmlValueSpecification *> argument)
{
    Q_UNUSED(argument);
}

/*!
    Refers to the Interaction that defines its meaning
 */
QUmlInteraction *QUmlInteractionUse::refersTo() const
{
    return 0;
}

void QUmlInteractionUse::setRefersTo(QUmlInteraction *refersTo)
{
    Q_UNUSED(refersTo);
}

/*!
    The value of the executed Interaction.
 */
QUmlValueSpecification *QUmlInteractionUse::returnValue() const
{
    return 0;
}

void QUmlInteractionUse::setReturnValue(QUmlValueSpecification *returnValue)
{
    Q_UNUSED(returnValue);
}

/*!
    The recipient of the return value.
 */
QUmlProperty *QUmlInteractionUse::returnValueRecipient() const
{
    return 0;
}

void QUmlInteractionUse::setReturnValueRecipient(QUmlProperty *returnValueRecipient)
{
    Q_UNUSED(returnValueRecipient);
}

QT_END_NAMESPACE

