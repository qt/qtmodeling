/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofslotobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofSlot>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofInstanceSpecification>
#include <QtMof/QMofStructuralFeature>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

QMofSlotObject::QMofSlotObject(QMofSlot *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofSlotObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofSlot *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofSlotObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofSlot *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofSlotObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofSlot *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofSlot *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Slot]

QObject *QMofSlotObject::definingFeature() const
{
    if (!qmodelingelementproperty_cast<QMofSlot *>(this)->definingFeature())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofSlot *>(this)->definingFeature()->asQModelingObject();
}

QObject *QMofSlotObject::owningInstance() const
{
    if (!qmodelingelementproperty_cast<QMofSlot *>(this)->owningInstance())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofSlot *>(this)->owningInstance()->asQModelingObject();
}

const QList<QObject *> QMofSlotObject::values() const
{
    QList<QObject *> list;
    foreach (QMofValueSpecification *element, qmodelingelementproperty_cast<QMofSlot *>(this)->values())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QMofSlotObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofSlot *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofSlotObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofSlot *>(this)->mustBeOwned();
}

QObject *QMofSlotObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofSlot *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofSlot *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofSlotObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofSlot *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofSlot *>(this)->container()->asQModelingObject();
}

bool QMofSlotObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofSlot *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofSlotObject::delete_()
{
    return qmodelingelementproperty_cast<QMofSlot *>(this)->delete_();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofSlotObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofSlotObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofSlotObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofSlotObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofSlotObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Slot]

void QMofSlotObject::setDefiningFeature(QObject *definingFeature)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->setDefiningFeature(qmodelingelementproperty_cast<QMofStructuralFeature *>(definingFeature));
}

void QMofSlotObject::setOwningInstance(QObject *owningInstance)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->setOwningInstance(qmodelingelementproperty_cast<QMofInstanceSpecification *>(owningInstance));
}

void QMofSlotObject::addValue(QObject *value)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->addValue(qmodelingelementproperty_cast<QMofValueSpecification *>(value));
}

void QMofSlotObject::removeValue(QObject *value)
{
    qmodelingelementproperty_cast<QMofSlot *>(this)->removeValue(qmodelingelementproperty_cast<QMofValueSpecification *>(value));
}


void QMofSlotObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofElement");
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QMofSlot");
    d->groupProperties.insert(QStringLiteral("QMofSlot"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("definingFeature"))));
    d->groupProperties.insert(QStringLiteral("QMofSlot"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningInstance"))));
    d->groupProperties.insert(QStringLiteral("QMofSlot"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("values"))));
}

void QMofSlotObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, PropertyClassRole, QStringLiteral("QMofSlot"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, DocumentationRole, QStringLiteral("The structural feature that specifies the values that may be held by the slot."));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, definingFeature, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, PropertyClassRole, QStringLiteral("QMofSlot"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, DocumentationRole, QStringLiteral("The instance specification that owns this slot."));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, owningInstance, OppositeEndRole, QStringLiteral("InstanceSpecification-slot"));

    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, PropertyClassRole, QStringLiteral("QMofSlot"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, DocumentationRole, QStringLiteral("The value or values corresponding to the defining feature for the owning instance specification."));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofSlot, values, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

