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

#include "qumlinteractionuse.h"
#include "qumlinteractionuse_p.h"

#include <QtUml/QUmlProperty>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlGate>
#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInteractionUsePrivate::QUmlInteractionUsePrivate() :
    returnValue(0),
    refersTo(0),
    returnValueRecipient(0)
{
}

QUmlInteractionUsePrivate::~QUmlInteractionUsePrivate()
{
}

/*!
    \class QUmlInteractionUse

    \inmodule QtUml

    \brief An interaction use refers to an interaction. The interaction use is a shorthand for copying the contents of the referenced interaction where the interaction use is. To be accurate the copying must take into account substituting parameters with arguments and connect the formal gates with the actual ones.
 */

QUmlInteractionUse::QUmlInteractionUse(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(*new QUmlInteractionUsePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlInteractionUse::QUmlInteractionUse(QUmlInteractionUsePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlInteractionUse::~QUmlInteractionUse()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInteractionUse
// ---------------------------------------------------------------

/*!
    The actual gates of the InteractionUse
 */
QSet<QUmlGate *> QUmlInteractionUse::actualGates() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionUse);
    return d->actualGates;
}

void QUmlInteractionUse::addActualGate(QUmlGate *actualGate)
{
    // This is a read-write association end

    Q_D(QUmlInteractionUse);
    if (!d->actualGates.contains(actualGate)) {
        d->actualGates.insert(actualGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(actualGate));
    }
}

void QUmlInteractionUse::removeActualGate(QUmlGate *actualGate)
{
    // This is a read-write association end

    Q_D(QUmlInteractionUse);
    if (d->actualGates.contains(actualGate)) {
        d->actualGates.remove(actualGate);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(actualGate));
    }
}

/*!
    The value of the executed Interaction.
 */
QUmlValueSpecification *QUmlInteractionUse::returnValue() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionUse);
    return d->returnValue;
}

void QUmlInteractionUse::setReturnValue(QUmlValueSpecification *returnValue)
{
    // This is a read-write association end

    Q_D(QUmlInteractionUse);
    if (d->returnValue != returnValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->returnValue));

        d->returnValue = returnValue;

        // Adjust subsetted property(ies)
        if (returnValue) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(returnValue));
        }
    }
}

/*!
    Refers to the Interaction that defines its meaning
 */
QUmlInteraction *QUmlInteractionUse::refersTo() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionUse);
    return d->refersTo;
}

void QUmlInteractionUse::setRefersTo(QUmlInteraction *refersTo)
{
    // This is a read-write association end

    Q_D(QUmlInteractionUse);
    if (d->refersTo != refersTo) {
        d->refersTo = refersTo;
    }
}

/*!
    The actual arguments of the Interaction
 */
QList<QUmlValueSpecification *> QUmlInteractionUse::arguments() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionUse);
    return d->arguments;
}

void QUmlInteractionUse::addArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QUmlInteractionUse);
    if (!d->arguments.contains(argument)) {
        d->arguments.append(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(argument));
    }
}

void QUmlInteractionUse::removeArgument(QUmlValueSpecification *argument)
{
    // This is a read-write association end

    Q_D(QUmlInteractionUse);
    if (d->arguments.contains(argument)) {
        d->arguments.removeAll(argument);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(argument));
    }
}

/*!
    The recipient of the return value.
 */
QUmlProperty *QUmlInteractionUse::returnValueRecipient() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionUse);
    return d->returnValueRecipient;
}

void QUmlInteractionUse::setReturnValueRecipient(QUmlProperty *returnValueRecipient)
{
    // This is a read-write association end

    Q_D(QUmlInteractionUse);
    if (d->returnValueRecipient != returnValueRecipient) {
        d->returnValueRecipient = returnValueRecipient;
    }
}

void QUmlInteractionUse::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The actual gates of the InteractionUse");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("actualGates")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of the executed Interaction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the Interaction that defines its meaning");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("refersTo")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The actual arguments of the Interaction");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("arguments")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The recipient of the return value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionUse")][QString::fromLatin1("returnValueRecipient")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlInteractionFragment::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinteractionuse.cpp"

