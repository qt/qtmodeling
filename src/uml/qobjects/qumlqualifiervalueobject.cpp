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
#include "qumlqualifiervalueobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlQualifierValue>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>

QT_BEGIN_NAMESPACE

QUmlQualifierValueObject::QUmlQualifierValueObject(QUmlQualifierValue *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlQualifierValueObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlQualifierValueObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlQualifierValueObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [QualifierValue]

QObject *QUmlQualifierValueObject::qualifier() const
{
    if (!qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->qualifier())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->qualifier()->asQModelingObject();
}

QObject *QUmlQualifierValueObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->value()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlQualifierValueObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlQualifierValueObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlQualifierValueObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlQualifierValueObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlQualifierValueObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlQualifierValueObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlQualifierValueObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [QualifierValue]

void QUmlQualifierValueObject::setQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->setQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
    emit qualifierChanged(this->qualifier());
}

void QUmlQualifierValueObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlQualifierValue *>(this)->setValue(qmodelingelementproperty_cast<QUmlInputPin *>(value));
    emit valueChanged(this->value());
}


void QUmlQualifierValueObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlQualifierValue");
    d->groupProperties.insert(QStringLiteral("QUmlQualifierValue"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifier"))));
    d->groupProperties.insert(QStringLiteral("QUmlQualifierValue"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QUmlQualifierValueObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, PropertyClassRole, QStringLiteral("QUmlQualifierValue"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, DocumentationRole, QStringLiteral("Attribute representing the qualifier for which the value is to be specified."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, qualifier, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, PropertyClassRole, QStringLiteral("QUmlQualifierValue"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, DocumentationRole, QStringLiteral("Input pin from which the specified value for the qualifier is taken."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlQualifierValue, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

