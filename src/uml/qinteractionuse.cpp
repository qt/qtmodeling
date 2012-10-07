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

#include <QtUml/QProperty>
#include <QtUml/QInteraction>
#include <QtUml/QGate>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

class QInteractionUsePrivate
{
public:
    explicit QInteractionUsePrivate();
    virtual ~QInteractionUsePrivate();

    QSet<QGate *> *actualGates;
    QList<QValueSpecification *> *arguments;
    QInteraction *refersTo;
    QValueSpecification *returnValue;
    QProperty *returnValueRecipient;
};

QInteractionUsePrivate::QInteractionUsePrivate() :
    actualGates(new QSet<QGate *>),
    arguments(new QList<QValueSpecification *>),
    refersTo(0),
    returnValue(0),
    returnValueRecipient(0)
{
}

QInteractionUsePrivate::~QInteractionUsePrivate()
{
    delete actualGates;
    delete arguments;
}

/*!
    \class QInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QInteractionUse::QInteractionUse(QObject *parent)
    : QObject(parent), d_ptr(new QInteractionUsePrivate)
{
}

QInteractionUse::~QInteractionUse()
{
    delete d_ptr;
}

/*!
    The actual gates of the InteractionUse
 */
const QSet<QGate *> *QInteractionUse::actualGates() const
{
    return d_ptr->actualGates;
}

void QInteractionUse::addActualGate(const QGate *actualGate)
{
    d_ptr->actualGates->insert(const_cast<QGate *>(actualGate));
    // Adjust subsetted property(ies)
    addOwnedElement(actualGate);
}

void QInteractionUse::removeActualGate(const QGate *actualGate)
{
    d_ptr->actualGates->remove(const_cast<QGate *>(actualGate));
    // Adjust subsetted property(ies)
    removeOwnedElement(actualGate);
}

/*!
    The actual arguments of the Interaction
 */
const QList<QValueSpecification *> *QInteractionUse::arguments() const
{
    return d_ptr->arguments;
}

void QInteractionUse::addArgument(const QValueSpecification *argument)
{
    d_ptr->arguments->append(const_cast<QValueSpecification *>(argument));
    // Adjust subsetted property(ies)
    addOwnedElement(argument);
}

void QInteractionUse::removeArgument(const QValueSpecification *argument)
{
    d_ptr->arguments->removeAll(const_cast<QValueSpecification *>(argument));
    // Adjust subsetted property(ies)
    removeOwnedElement(argument);
}

/*!
    Refers to the Interaction that defines its meaning
 */
QInteraction *QInteractionUse::refersTo() const
{
    return d_ptr->refersTo;
}

void QInteractionUse::setRefersTo(const QInteraction *refersTo)
{
    d_ptr->refersTo = const_cast<QInteraction *>(refersTo);
}

/*!
    The value of the executed Interaction.
 */
QValueSpecification *QInteractionUse::returnValue() const
{
    return d_ptr->returnValue;
}

void QInteractionUse::setReturnValue(const QValueSpecification *returnValue)
{
    d_ptr->returnValue = const_cast<QValueSpecification *>(returnValue);
}

/*!
    The recipient of the return value.
 */
QProperty *QInteractionUse::returnValueRecipient() const
{
    return d_ptr->returnValueRecipient;
}

void QInteractionUse::setReturnValueRecipient(const QProperty *returnValueRecipient)
{
    d_ptr->returnValueRecipient = const_cast<QProperty *>(returnValueRecipient);
}

#include "moc_qinteractionuse.cpp"

QT_END_NAMESPACE_QTUML

