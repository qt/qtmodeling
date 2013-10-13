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
#include "qumllinkenddataobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlLinkEndData>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

QUmlLinkEndDataObject::QUmlLinkEndDataObject(QUmlLinkEndData *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLinkEndDataObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLinkEndDataObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLinkEndDataObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [LinkEndData]

QObject *QUmlLinkEndDataObject::end() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->end())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->end()->asQModelingObject();
}

const QSet<QObject *> QUmlLinkEndDataObject::qualifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlQualifierValue *element, qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->qualifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLinkEndDataObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->value()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLinkEndDataObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLinkEndDataObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLinkEndDataObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDataObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDataObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDataObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDataObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndData]

void QUmlLinkEndDataObject::setEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->setEnd(qmodelingelementproperty_cast<QUmlProperty *>(end));
}

void QUmlLinkEndDataObject::addQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->addQualifier(qmodelingelementproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDataObject::removeQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->removeQualifier(qmodelingelementproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDataObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlLinkEndData *>(this)->setValue(qmodelingelementproperty_cast<QUmlInputPin *>(value));
}


void QUmlLinkEndDataObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlLinkEndData");
    d->groupProperties.insert(QStringLiteral("QUmlLinkEndData"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("end"))));
    d->groupProperties.insert(QStringLiteral("QUmlLinkEndData"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlLinkEndData"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QUmlLinkEndDataObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, PropertyClassRole, QStringLiteral("QUmlLinkEndData"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, DocumentationRole, QStringLiteral("Association end for which this link-end data specifies values."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, end, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, PropertyClassRole, QStringLiteral("QUmlLinkEndData"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, DocumentationRole, QStringLiteral("List of qualifier values"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, qualifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, PropertyClassRole, QStringLiteral("QUmlLinkEndData"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, DocumentationRole, QStringLiteral("Input pin that provides the specified object for the given end. This pin is omitted if the link-end data specifies an 'open' end for reading."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndData, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

