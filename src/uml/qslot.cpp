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

#include "qslot.h"
#include "qslot_p.h"

#include <QtUml/QStructuralFeature>
#include <QtUml/QInstanceSpecification>
#include <QtUml/QValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QSlotPrivate::QSlotPrivate() :
    definingFeature(0),
    owningInstance(0)
{
}

QSlotPrivate::~QSlotPrivate()
{
}

/*!
    \class QSlot

    \inmodule QtUml

    \brief A slot specifies that an entity modeled by an instance specification has a value or values for a specific structural feature.
 */

QSlot::QSlot(QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(*new QSlotPrivate, wrapper, parent)
{
    setPropertyData();
}

QSlot::QSlot(QSlotPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(dd, wrapper, parent)
{
    setPropertyData();
}

QSlot::~QSlot()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QSlot
// ---------------------------------------------------------------

/*!
    The value or values corresponding to the defining feature for the owning instance specification.
 */
QList<QValueSpecification *> QSlot::values() const
{
    // This is a read-write association end

    Q_D(const QSlot);
    return d->values;
}

void QSlot::addValue(QValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (!d->values.contains(value)) {
        d->values.append(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(value));
    }
}

void QSlot::removeValue(QValueSpecification *value)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (d->values.contains(value)) {
        d->values.removeAll(value);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(value));
    }
}

/*!
    The structural feature that specifies the values that may be held by the slot.
 */
QStructuralFeature *QSlot::definingFeature() const
{
    // This is a read-write association end

    Q_D(const QSlot);
    return d->definingFeature;
}

void QSlot::setDefiningFeature(QStructuralFeature *definingFeature)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (d->definingFeature != definingFeature) {
        d->definingFeature = definingFeature;
    }
}

/*!
    The instance specification that owns this slot.
 */
QInstanceSpecification *QSlot::owningInstance() const
{
    // This is a read-write association end

    Q_D(const QSlot);
    return d->owningInstance;
}

void QSlot::setOwningInstance(QInstanceSpecification *owningInstance)
{
    // This is a read-write association end

    Q_D(QSlot);
    if (d->owningInstance != owningInstance) {
        // Adjust opposite property
        if (d->owningInstance)
            d->owningInstance->removeSlot_(this);

        d->owningInstance = owningInstance;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->setOwner(qwrappedobject_cast<QElement *>(owningInstance));

        // Adjust opposite property
        if (owningInstance)
            owningInstance->addSlot_(this);
    }
}

void QSlot::registerMetaTypes() const
{
    qRegisterMetaType<QStructuralFeature *>("QStructuralFeature *");
    qRegisterMetaType<QSet<QStructuralFeature *>>("QSet<QStructuralFeature *>");
    qRegisterMetaType<QList<QStructuralFeature *>>("QList<QStructuralFeature *>");

    qRegisterMetaType<QInstanceSpecification *>("QInstanceSpecification *");
    qRegisterMetaType<QSet<QInstanceSpecification *>>("QSet<QInstanceSpecification *>");
    qRegisterMetaType<QList<QInstanceSpecification *>>("QList<QInstanceSpecification *>");

    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");

    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QSlot::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("values")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("values")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("values")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value or values corresponding to the defining feature for the owning instance specification.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("values")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("values")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("values")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The structural feature that specifies the values that may be held by the slot.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("definingFeature")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The instance specification that owns this slot.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::owner");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QSlot")][QString::fromLatin1("owningInstance")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QInstanceSpecification::slot");

    QElement::setPropertyData();
}

#include "moc_qslot.cpp"

QT_END_NAMESPACE_QTUML

