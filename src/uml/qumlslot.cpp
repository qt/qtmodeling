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

#include "qumlslot.h"
#include "qumlslot_p.h"

#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlSlotPrivate::QUmlSlotPrivate() :
    definingFeature(0),
    owningInstance(0)
{
}

QUmlSlotPrivate::~QUmlSlotPrivate()
{
}

/*!
    \class QUmlSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QUmlSlot::QUmlSlot(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlSlotPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlSlot::QUmlSlot(QUmlSlotPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlSlot::~QUmlSlot()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlSlot
// ---------------------------------------------------------------

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
QList<QUmlValueSpecification *> QUmlSlot::values() const
{
    // This is a read-write association end

    Q_D(const QUmlSlot);
    return d->values;
}

void QUmlSlot::addValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QUmlSlot);
    if (!d->values.contains(value)) {
        d->values.append(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(value));
    }
}

void QUmlSlot::removeValue(QUmlValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QUmlSlot);
    if (d->values.contains(value)) {
        d->values.removeAll(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(value));
    }
}

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QUmlStructuralFeature *QUmlSlot::definingFeature() const
{
    // This is a read-write association end

    Q_D(const QUmlSlot);
    return d->definingFeature;
}

void QUmlSlot::setDefiningFeature(QUmlStructuralFeature *definingFeature)
{
    // This is a read-write association end

    Q_D(QUmlSlot);
    if (d->definingFeature != definingFeature) {
        d->definingFeature = definingFeature;
    }
}

/*!
    The instance specification that owns this slot.
 */
QUmlInstanceSpecification *QUmlSlot::owningInstance() const
{
    // This is a read-write association end

    Q_D(const QUmlSlot);
    return d->owningInstance;
}

void QUmlSlot::setOwningInstance(QUmlInstanceSpecification *owningInstance)
{
    // This is a read-write association end

    Q_D(QUmlSlot);
    if (d->owningInstance != owningInstance) {
        // Adjust opposite property
        if (d->owningInstance)
            d->owningInstance->removeSlot_(this);

        d->owningInstance = owningInstance;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->setOwner(qwrappedobject_cast<QUmlElement *>(owningInstance));

        // Adjust opposite property
        if (owningInstance)
            owningInstance->addSlot_(this);
    }
}

void QUmlSlot::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("values")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("values")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("values")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value or values corresponding to the defining feature for the owning instance specification.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("values")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("values")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("values")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The structural feature that specifies the values that may be held by the slot.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The instance specification that owns this slot.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInstanceSpecification::slot");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlslot.cpp"

