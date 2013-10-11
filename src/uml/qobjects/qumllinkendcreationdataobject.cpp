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
#include "qumllinkendcreationdataobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlLinkEndCreationData>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

QUmlLinkEndCreationDataObject::QUmlLinkEndCreationDataObject(QUmlLinkEndCreationData *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlLinkEndCreationDataObject::~QUmlLinkEndCreationDataObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLinkEndCreationDataObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLinkEndCreationDataObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLinkEndCreationDataObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [LinkEndData]

QObject *QUmlLinkEndCreationDataObject::end() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->end())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->end()->asQModelingObject();
}

const QSet<QObject *> QUmlLinkEndCreationDataObject::qualifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlQualifierValue *element, qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->qualifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLinkEndCreationDataObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->value()->asQModelingObject();
}

// OWNED ATTRIBUTES [LinkEndCreationData]

QObject *QUmlLinkEndCreationDataObject::insertAt() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->insertAt())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->insertAt()->asQModelingObject();
}

bool QUmlLinkEndCreationDataObject::isReplaceAll() const
{
    return qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->isReplaceAll();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLinkEndCreationDataObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLinkEndCreationDataObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLinkEndCreationDataObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndCreationDataObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndCreationDataObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndCreationDataObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndCreationDataObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndData]

void QUmlLinkEndCreationDataObject::setEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->setEnd(qmodelingelementproperty_cast<QUmlProperty *>(end));
}

void QUmlLinkEndCreationDataObject::addQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->addQualifier(qmodelingelementproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndCreationDataObject::removeQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->removeQualifier(qmodelingelementproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndCreationDataObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->setValue(qmodelingelementproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndCreationData]

void QUmlLinkEndCreationDataObject::setInsertAt(QObject *insertAt)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->setInsertAt(qmodelingelementproperty_cast<QUmlInputPin *>(insertAt));
}

void QUmlLinkEndCreationDataObject::setReplaceAll(bool isReplaceAll)
{
    qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(this)->setReplaceAll(isReplaceAll);
}

void QUmlLinkEndCreationDataObject::unsetReplaceAll()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("replaceAll"));
}


void QUmlLinkEndCreationDataObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlLinkEndCreationData");
    d->groupProperties.insert(QStringLiteral("QUmlLinkEndCreationData"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("insertAt"))));
    d->groupProperties.insert(QStringLiteral("QUmlLinkEndCreationData"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReplaceAll"))));
}

void QUmlLinkEndCreationDataObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, PropertyClassRole, QStringLiteral("QUmlLinkEndCreationData"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, DocumentationRole, QStringLiteral("Specifies where the new link should be inserted for ordered association ends, or where an existing link should be moved to. The type of the input is UnlimitedNatural, but the input cannot be zero. This pin is omitted for association ends that are not ordered."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, insertAt, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, PropertyClassRole, QStringLiteral("QUmlLinkEndCreationData"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, DocumentationRole, QStringLiteral("Specifies whether the existing links emanating from the object on this end should be destroyed before creating a new link."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndCreationData, isReplaceAll, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

