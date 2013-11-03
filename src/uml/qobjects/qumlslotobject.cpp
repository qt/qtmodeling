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
#include "qumlslotobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlSlot>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInstanceSpecification>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlSlotObject::QUmlSlotObject(QUmlSlot *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSlotObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlSlot *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSlotObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlSlot *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlSlotObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlSlot *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSlot *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Slot]

QObject *QUmlSlotObject::definingFeature() const
{
    if (!qmodelingelementproperty_cast<QUmlSlot *>(this)->definingFeature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSlot *>(this)->definingFeature()->asQModelingObject();
}

QObject *QUmlSlotObject::owningInstance() const
{
    if (!qmodelingelementproperty_cast<QUmlSlot *>(this)->owningInstance())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSlot *>(this)->owningInstance()->asQModelingObject();
}

const QList<QObject *> QUmlSlotObject::values() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingelementproperty_cast<QUmlSlot *>(this)->values())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSlotObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlSlot *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlSlotObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlSlot *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSlotObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlSlotObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlSlotObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlSlotObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlSlotObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [Slot]

void QUmlSlotObject::setDefiningFeature(QObject *definingFeature)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->setDefiningFeature(qmodelingelementproperty_cast<QUmlStructuralFeature *>(definingFeature));
    emit definingFeatureChanged(this->definingFeature());
}

void QUmlSlotObject::setOwningInstance(QObject *owningInstance)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->setOwningInstance(qmodelingelementproperty_cast<QUmlInstanceSpecification *>(owningInstance));
    emit owningInstanceChanged(this->owningInstance());
}

void QUmlSlotObject::addValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->addValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(value));
    emit valuesChanged(this->values());
}

void QUmlSlotObject::removeValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlSlot *>(this)->removeValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(value));
    emit valuesChanged(this->values());
}


void QUmlSlotObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlSlot");
    d->groupProperties.insert(QStringLiteral("QUmlSlot"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("definingFeature"))));
    d->groupProperties.insert(QStringLiteral("QUmlSlot"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningInstance"))));
    d->groupProperties.insert(QStringLiteral("QUmlSlot"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("values"))));
}

void QUmlSlotObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, PropertyClassRole, QStringLiteral("QUmlSlot"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, DocumentationRole, QStringLiteral("The structural feature that specifies the values that may be held by the slot."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, definingFeature, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, PropertyClassRole, QStringLiteral("QUmlSlot"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, DocumentationRole, QStringLiteral("The instance specification that owns this slot."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, owningInstance, OppositeEndRole, QStringLiteral("InstanceSpecification-slot"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, PropertyClassRole, QStringLiteral("QUmlSlot"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, DocumentationRole, QStringLiteral("The value or values corresponding to the defining feature for the owning instance specification."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSlot, values, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

