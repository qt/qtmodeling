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
#include "qinteractionuse_p.h"
#include "qelement_p.h"

#include <QtUml/QProperty>
#include <QtUml/QInteraction>
#include <QtUml/QGate>
#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QInteractionUsePrivate::QInteractionUsePrivate() :
    actualGates(new QSet<QGate *>),
    returnValue(0),
    refersTo(0),
    arguments(new QList<QValueSpecification *>),
    returnValueRecipient(0)
{
}

QInteractionUsePrivate::~QInteractionUsePrivate()
{
    delete actualGates;
    delete arguments;
}

void QInteractionUsePrivate::addActualGate(QGate *actualGate)
{
    this->actualGates->insert(actualGate);

    // Adjust subsetted property(ies)
    addOwnedElement(actualGate);
}

void QInteractionUsePrivate::removeActualGate(QGate *actualGate)
{
    this->actualGates->remove(actualGate);

    // Adjust subsetted property(ies)
    removeOwnedElement(actualGate);
}

void QInteractionUsePrivate::setReturnValue(QValueSpecification *returnValue)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->returnValue);

    this->returnValue = returnValue;

    // Adjust subsetted property(ies)
    addOwnedElement(returnValue);
}

void QInteractionUsePrivate::setRefersTo(QInteraction *refersTo)
{
    this->refersTo = refersTo;
}

void QInteractionUsePrivate::addArgument(QValueSpecification *argument)
{
    this->arguments->append(argument);

    // Adjust subsetted property(ies)
    addOwnedElement(argument);
}

void QInteractionUsePrivate::removeArgument(QValueSpecification *argument)
{
    this->arguments->removeAll(argument);

    // Adjust subsetted property(ies)
    removeOwnedElement(argument);
}

void QInteractionUsePrivate::setReturnValueRecipient(QProperty *returnValueRecipient)
{
    this->returnValueRecipient = returnValueRecipient;
}

/*!
    \class QInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QInteractionUse::QInteractionUse(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QInteractionUsePrivate;
}

QInteractionUse::QInteractionUse(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QInteractionUsePrivate;
}

QInteractionUse::~QInteractionUse()
{
}

/*!
    The actual gates of the InteractionUse
 */
const QSet<QGate *> *QInteractionUse::actualGates() const
{
    QTUML_D(const QInteractionUse);
    return d->actualGates;
}

void QInteractionUse::addActualGate(QGate *actualGate)
{
    QTUML_D(QInteractionUse);
    if (!d->actualGates->contains(actualGate)) {
        d->addActualGate(actualGate);
    }
}

void QInteractionUse::removeActualGate(QGate *actualGate)
{
    QTUML_D(QInteractionUse);
    if (d->actualGates->contains(actualGate)) {
        d->removeActualGate(actualGate);
    }
}

/*!
    The value of the executed Interaction.
 */
QValueSpecification *QInteractionUse::returnValue() const
{
    QTUML_D(const QInteractionUse);
    return d->returnValue;
}

void QInteractionUse::setReturnValue(QValueSpecification *returnValue)
{
    QTUML_D(QInteractionUse);
    if (d->returnValue != returnValue) {
        d->setReturnValue(returnValue);
    }
}

/*!
    Refers to the Interaction that defines its meaning
 */
QInteraction *QInteractionUse::refersTo() const
{
    QTUML_D(const QInteractionUse);
    return d->refersTo;
}

void QInteractionUse::setRefersTo(QInteraction *refersTo)
{
    QTUML_D(QInteractionUse);
    if (d->refersTo != refersTo) {
        d->setRefersTo(refersTo);
    }
}

/*!
    The actual arguments of the Interaction
 */
const QList<QValueSpecification *> *QInteractionUse::arguments() const
{
    QTUML_D(const QInteractionUse);
    return d->arguments;
}

void QInteractionUse::addArgument(QValueSpecification *argument)
{
    QTUML_D(QInteractionUse);
    if (!d->arguments->contains(argument)) {
        d->addArgument(argument);
    }
}

void QInteractionUse::removeArgument(QValueSpecification *argument)
{
    QTUML_D(QInteractionUse);
    if (d->arguments->contains(argument)) {
        d->removeArgument(argument);
    }
}

/*!
    The recipient of the return value.
 */
QProperty *QInteractionUse::returnValueRecipient() const
{
    QTUML_D(const QInteractionUse);
    return d->returnValueRecipient;
}

void QInteractionUse::setReturnValueRecipient(QProperty *returnValueRecipient)
{
    QTUML_D(QInteractionUse);
    if (d->returnValueRecipient != returnValueRecipient) {
        d->setReturnValueRecipient(returnValueRecipient);
    }
}

#include "moc_qinteractionuse.cpp"

QT_END_NAMESPACE_QTUML

