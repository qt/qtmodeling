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
#include "qumlconnectorendobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlConnectorEndObject::QUmlConnectorEndObject(QUmlConnectorEnd *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlConnectorEndObject::~QUmlConnectorEndObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConnectorEndObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConnectorEndObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConnectorEndObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlConnectorEndObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->isOrdered();
}

bool QUmlConnectorEndObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->isUnique();
}

int QUmlConnectorEndObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->lower();
}

QObject *QUmlConnectorEndObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->lowerValue()->asQModelingObject();
}

int QUmlConnectorEndObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->upper();
}

QObject *QUmlConnectorEndObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [ConnectorEnd]

QObject *QUmlConnectorEndObject::definingEnd() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->definingEnd())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->definingEnd()->asQModelingObject();
}

QObject *QUmlConnectorEndObject::partWithPort() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->partWithPort())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->partWithPort()->asQModelingObject();
}

QObject *QUmlConnectorEndObject::role() const
{
    if (!qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->role())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->role()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConnectorEndObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConnectorEndObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlConnectorEndObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlConnectorEndObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->includesCardinality(C);
}

bool QUmlConnectorEndObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlConnectorEndObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->is(lowerbound, upperbound);
}

bool QUmlConnectorEndObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->isMultivalued();
}

int QUmlConnectorEndObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->lowerBound();
}

//int QUmlConnectorEndObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->upperBound();
//}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectorEndObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorEndObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConnectorEndObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorEndObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConnectorEndObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlConnectorEndObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setOrdered(isOrdered);
}

void QUmlConnectorEndObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlConnectorEndObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setUnique(isUnique);
}

void QUmlConnectorEndObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlConnectorEndObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setLower(lower);
}

void QUmlConnectorEndObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlConnectorEndObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlConnectorEndObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setUpper(upper);
}

void QUmlConnectorEndObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlConnectorEndObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectorEnd]

void QUmlConnectorEndObject::setDefiningEnd(QObject *definingEnd)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setDefiningEnd(qmodelingelementproperty_cast<QUmlProperty *>(definingEnd));
}

void QUmlConnectorEndObject::setPartWithPort(QObject *partWithPort)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setPartWithPort(qmodelingelementproperty_cast<QUmlProperty *>(partWithPort));
}

void QUmlConnectorEndObject::setRole(QObject *role)
{
    qmodelingelementproperty_cast<QUmlConnectorEnd *>(this)->setRole(qmodelingelementproperty_cast<QUmlConnectableElement *>(role));
}


void QUmlConnectorEndObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlMultiplicityElement");
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lowerValue"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upperValue"))));

    d->propertyGroups << QStringLiteral("QUmlConnectorEnd");
    d->groupProperties.insert(QStringLiteral("QUmlConnectorEnd"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("definingEnd"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnectorEnd"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("partWithPort"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnectorEnd"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("role"))));
}

void QUmlConnectorEndObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, DocumentationRole, QStringLiteral("Specifies the lower bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, DocumentationRole, QStringLiteral("The specification of the lower bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, DocumentationRole, QStringLiteral("Specifies the upper bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, DocumentationRole, QStringLiteral("The specification of the upper bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, PropertyClassRole, QStringLiteral("QUmlConnectorEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, DocumentationRole, QStringLiteral("A derived association referencing the corresponding association end on the association which types the connector owing this connector end. This association is derived by selecting the association end at the same place in the ordering of association ends as this connector end."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, definingEnd, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, PropertyClassRole, QStringLiteral("QUmlConnectorEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, DocumentationRole, QStringLiteral("Indicates the role of the internal structure of a classifier with the port to which the connector end is attached."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, partWithPort, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, PropertyClassRole, QStringLiteral("QUmlConnectorEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, DocumentationRole, QStringLiteral("The connectable element attached at this connector end. When an instance of the containing classifier is created, a link may (depending on the multiplicities) be created to an instance of the classifier that types this connectable element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectorEnd, role, OppositeEndRole, QStringLiteral("ConnectableElement-end"));

}

QT_END_NAMESPACE

