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
#include "qumlprotocolconformanceobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlProtocolConformance>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlProtocolStateMachine>

QT_BEGIN_NAMESPACE

QUmlProtocolConformanceObject::QUmlProtocolConformanceObject(QUmlProtocolConformance *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlProtocolConformanceObject::~QUmlProtocolConformanceObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProtocolConformanceObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolConformanceObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProtocolConformanceObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlProtocolConformanceObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlProtocolConformanceObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolConformanceObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ProtocolConformance]

QObject *QUmlProtocolConformanceObject::generalMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->generalMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->generalMachine()->asQModelingObject();
}

QObject *QUmlProtocolConformanceObject::specificMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->specificMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->specificMachine()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProtocolConformanceObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolConformanceObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolConformanceObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolConformanceObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolConformanceObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolConformanceObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolConformanceObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlProtocolConformanceObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlProtocolConformanceObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlProtocolConformanceObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlProtocolConformanceObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlProtocolConformanceObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlProtocolConformanceObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolConformance]

void QUmlProtocolConformanceObject::setGeneralMachine(QObject *generalMachine)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->setGeneralMachine(qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(generalMachine));
}

void QUmlProtocolConformanceObject::setSpecificMachine(QObject *specificMachine)
{
    qmodelingelementproperty_cast<QUmlProtocolConformance *>(this)->setSpecificMachine(qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(specificMachine));
}


void QUmlProtocolConformanceObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlDirectedRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));

    d->propertyGroups << QStringLiteral("QUmlProtocolConformance");
    d->groupProperties.insert(QStringLiteral("QUmlProtocolConformance"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalMachine"))));
    d->groupProperties.insert(QStringLiteral("QUmlProtocolConformance"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specificMachine"))));
}

void QUmlProtocolConformanceObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, PropertyClassRole, QStringLiteral("QUmlRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, DocumentationRole, QStringLiteral("Specifies the elements related by the Relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRelationship, relatedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, PropertyClassRole, QStringLiteral("QUmlDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, DocumentationRole, QStringLiteral("Specifies the sources of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, sources, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, PropertyClassRole, QStringLiteral("QUmlDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, DocumentationRole, QStringLiteral("Specifies the targets of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDirectedRelationship, targets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, PropertyClassRole, QStringLiteral("QUmlProtocolConformance"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, DocumentationRole, QStringLiteral("Specifies the protocol state machine to which the specific state machine conforms."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, generalMachine, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, PropertyClassRole, QStringLiteral("QUmlProtocolConformance"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, DocumentationRole, QStringLiteral("Specifies the state machine which conforms to the general state machine."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolConformance, specificMachine, OppositeEndRole, QStringLiteral("ProtocolStateMachine-conformance"));

}

QT_END_NAMESPACE

