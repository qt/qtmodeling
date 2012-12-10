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

/*!
    \class QInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QInteractionUse::QInteractionUse(QWrappedObject *parent, QWrappedObject *wrapper) :
    QInteractionFragment(*new QInteractionUsePrivate, parent, wrapper)
{
}

QInteractionUse::QInteractionUse(QInteractionUsePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QInteractionFragment(dd, parent, wrapper)
{
}

QInteractionUse::~QInteractionUse()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInteractionUse
// ---------------------------------------------------------------

/*!
    The actual gates of the InteractionUse
 */
const QSet<QGate *> *QInteractionUse::actualGates() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->actualGates;
}

void QInteractionUse::addActualGate(QGate *actualGate)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (!d->actualGates->contains(actualGate)) {
        d->actualGates->insert(actualGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(actualGate));
    }
}

void QInteractionUse::removeActualGate(QGate *actualGate)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->actualGates->contains(actualGate)) {
        d->actualGates->remove(actualGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(actualGate));
    }
}

/*!
    The value of the executed Interaction.
 */
QValueSpecification *QInteractionUse::returnValue() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->returnValue;
}

void QInteractionUse::setReturnValue(QValueSpecification *returnValue)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->returnValue != returnValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->returnValue));

        d->returnValue = returnValue;

        // Adjust subsetted property(ies)
        if (returnValue) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(returnValue));
        }
    }
}

/*!
    Refers to the Interaction that defines its meaning
 */
QInteraction *QInteractionUse::refersTo() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->refersTo;
}

void QInteractionUse::setRefersTo(QInteraction *refersTo)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->refersTo != refersTo) {
        d->refersTo = refersTo;
    }
}

/*!
    The actual arguments of the Interaction
 */
const QList<QValueSpecification *> *QInteractionUse::arguments() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->arguments;
}

void QInteractionUse::addArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (!d->arguments->contains(argument)) {
        d->arguments->append(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(argument));
    }
}

void QInteractionUse::removeArgument(QValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->arguments->contains(argument)) {
        d->arguments->removeAll(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(argument));
    }
}

/*!
    The recipient of the return value.
 */
QProperty *QInteractionUse::returnValueRecipient() const
{
    // This is a read-write association end

    Q_D(const QInteractionUse);
    return d->returnValueRecipient;
}

void QInteractionUse::setReturnValueRecipient(QProperty *returnValueRecipient)
{
    // This is a read-write association end

    Q_D(QInteractionUse);
    if (d->returnValueRecipient != returnValueRecipient) {
        d->returnValueRecipient = returnValueRecipient;
    }
}

#include "moc_qinteractionuse.cpp"

QT_END_NAMESPACE_QTUML

