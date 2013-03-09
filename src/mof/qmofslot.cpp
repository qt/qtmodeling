/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmofslot.h"
#include "qmofslot_p.h"

#include <QtMof/QMofStructuralFeature>
#include <QtMof/QMofInstanceSpecification>
#include <QtMof/QMofValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofSlotPrivate::QMofSlotPrivate() :
    definingFeature(0),
    owningInstance(0)
{
}

QMofSlotPrivate::~QMofSlotPrivate()
{
}

/*!
    \class QMofSlot

    \inmodule QtMof

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QMofSlot::QMofSlot(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(*new QMofSlotPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofSlot::QMofSlot(QMofSlotPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofSlot::~QMofSlot()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofSlot
// ---------------------------------------------------------------

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
QList<QMofValueSpecification *> QMofSlot::values() const
{
    // This is a read-write association end

    Q_D(const QMofSlot);
    return d->values;
}

void QMofSlot::addValue(QMofValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QMofSlot);
    if (!d->values.contains(value)) {
        d->values.append(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(value));
    }
}

void QMofSlot::removeValue(QMofValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QMofSlot);
    if (d->values.contains(value)) {
        d->values.removeAll(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(value));
    }
}

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QMofStructuralFeature *QMofSlot::definingFeature() const
{
    // This is a read-write association end

    Q_D(const QMofSlot);
    return d->definingFeature;
}

void QMofSlot::setDefiningFeature(QMofStructuralFeature *definingFeature)
{
    // This is a read-write association end

    Q_D(QMofSlot);
    if (d->definingFeature != definingFeature) {
        d->definingFeature = definingFeature;
    }
}

/*!
    The instance specification that owns this slot.
 */
QMofInstanceSpecification *QMofSlot::owningInstance() const
{
    // This is a read-write association end

    Q_D(const QMofSlot);
    return d->owningInstance;
}

void QMofSlot::setOwningInstance(QMofInstanceSpecification *owningInstance)
{
    // This is a read-write association end

    Q_D(QMofSlot);
    if (d->owningInstance != owningInstance) {
        // Adjust opposite property
        if (d->owningInstance)
            d->owningInstance->removeSlot_(this);

        d->owningInstance = owningInstance;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->setOwner(qwrappedobject_cast<QMofElement *>(owningInstance));

        // Adjust opposite property
        if (owningInstance)
            owningInstance->addSlot_(this);
    }
}

void QMofSlot::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("values")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("values")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("values")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value or values corresponding to the defining feature for the owning instance specification.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("values")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("values")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("values")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The structural feature that specifies the values that may be held by the slot.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The instance specification that owns this slot.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMofInstanceSpecification::slot");

    QMofElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofslot.cpp"

