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
#include "qumllinkenddestructiondataobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlLinkEndDestructionData>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlQualifierValue>

QT_BEGIN_NAMESPACE

QUmlLinkEndDestructionDataObject::QUmlLinkEndDestructionDataObject(QUmlLinkEndDestructionData *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlLinkEndDestructionDataObject::~QUmlLinkEndDestructionDataObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLinkEndDestructionDataObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLinkEndDestructionDataObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLinkEndDestructionDataObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [LinkEndData]

QObject *QUmlLinkEndDestructionDataObject::end() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->end())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->end()->asQModelingObject();
}

const QSet<QObject *> QUmlLinkEndDestructionDataObject::qualifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlQualifierValue *element, qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->qualifiers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLinkEndDestructionDataObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->value()->asQModelingObject();
}

// OWNED ATTRIBUTES [LinkEndDestructionData]

QObject *QUmlLinkEndDestructionDataObject::destroyAt() const
{
    if (!qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->destroyAt())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->destroyAt()->asQModelingObject();
}

bool QUmlLinkEndDestructionDataObject::isDestroyDuplicates() const
{
    return qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->isDestroyDuplicates();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLinkEndDestructionDataObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLinkEndDestructionDataObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLinkEndDestructionDataObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDestructionDataObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLinkEndDestructionDataObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDestructionDataObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLinkEndDestructionDataObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndData]

void QUmlLinkEndDestructionDataObject::setEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->setEnd(qmodelingelementproperty_cast<QUmlProperty *>(end));
}

void QUmlLinkEndDestructionDataObject::addQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->addQualifier(qmodelingelementproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDestructionDataObject::removeQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->removeQualifier(qmodelingelementproperty_cast<QUmlQualifierValue *>(qualifier));
}

void QUmlLinkEndDestructionDataObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->setValue(qmodelingelementproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkEndDestructionData]

void QUmlLinkEndDestructionDataObject::setDestroyAt(QObject *destroyAt)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->setDestroyAt(qmodelingelementproperty_cast<QUmlInputPin *>(destroyAt));
}

void QUmlLinkEndDestructionDataObject::setDestroyDuplicates(bool isDestroyDuplicates)
{
    qmodelingelementproperty_cast<QUmlLinkEndDestructionData *>(this)->setDestroyDuplicates(isDestroyDuplicates);
}

void QUmlLinkEndDestructionDataObject::unsetDestroyDuplicates()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("destroyDuplicates"));
}


void QUmlLinkEndDestructionDataObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlLinkEndDestructionData");
    d->groupProperties.insert(QStringLiteral("QUmlLinkEndDestructionData"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("destroyAt"))));
    d->groupProperties.insert(QStringLiteral("QUmlLinkEndDestructionData"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDestroyDuplicates"))));
}

void QUmlLinkEndDestructionDataObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, PropertyClassRole, QStringLiteral("QUmlLinkEndDestructionData"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, DocumentationRole, QStringLiteral("Specifies the position of an existing link to be destroyed in ordered nonunique association ends. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, destroyAt, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, PropertyClassRole, QStringLiteral("QUmlLinkEndDestructionData"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, DocumentationRole, QStringLiteral("Specifies whether to destroy duplicates of the value in nonunique association ends."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLinkEndDestructionData, isDestroyDuplicates, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

