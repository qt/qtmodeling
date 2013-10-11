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
#include "qumlprofileapplicationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlProfileApplication>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlProfile>

QT_BEGIN_NAMESPACE

QUmlProfileApplicationObject::QUmlProfileApplicationObject(QUmlProfileApplication *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlProfileApplicationObject::~QUmlProfileApplicationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProfileApplicationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileApplicationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProfileApplicationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlProfileApplicationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlProfileApplicationObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProfileApplicationObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ProfileApplication]

QObject *QUmlProfileApplicationObject::appliedProfile() const
{
    if (!qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->appliedProfile())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->appliedProfile()->asQModelingObject();
}

QObject *QUmlProfileApplicationObject::applyingPackage() const
{
    if (!qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->applyingPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->applyingPackage()->asQModelingObject();
}

bool QUmlProfileApplicationObject::isStrict() const
{
    return qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->isStrict();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProfileApplicationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProfileApplicationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProfileApplicationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileApplicationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProfileApplicationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileApplicationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProfileApplicationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlProfileApplicationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlProfileApplicationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlProfileApplicationObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlProfileApplicationObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlProfileApplicationObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlProfileApplicationObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ProfileApplication]

void QUmlProfileApplicationObject::setAppliedProfile(QObject *appliedProfile)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->setAppliedProfile(qmodelingelementproperty_cast<QUmlProfile *>(appliedProfile));
}

void QUmlProfileApplicationObject::setApplyingPackage(QObject *applyingPackage)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->setApplyingPackage(qmodelingelementproperty_cast<QUmlPackage *>(applyingPackage));
}

void QUmlProfileApplicationObject::setStrict(bool isStrict)
{
    qmodelingelementproperty_cast<QUmlProfileApplication *>(this)->setStrict(isStrict);
}

void QUmlProfileApplicationObject::unsetStrict()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("strict"));
}


void QUmlProfileApplicationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlProfileApplication");
    d->groupProperties.insert(QStringLiteral("QUmlProfileApplication"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("appliedProfile"))));
    d->groupProperties.insert(QStringLiteral("QUmlProfileApplication"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("applyingPackage"))));
    d->groupProperties.insert(QStringLiteral("QUmlProfileApplication"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStrict"))));
}

void QUmlProfileApplicationObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, PropertyClassRole, QStringLiteral("QUmlProfileApplication"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, DocumentationRole, QStringLiteral("References the Profiles that are applied to a Package through this ProfileApplication."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, appliedProfile, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, PropertyClassRole, QStringLiteral("QUmlProfileApplication"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, DocumentationRole, QStringLiteral("The package that owns the profile application."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, applyingPackage, OppositeEndRole, QStringLiteral("Package-profileApplication"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, PropertyClassRole, QStringLiteral("QUmlProfileApplication"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, DocumentationRole, QStringLiteral("Specifies that the Profile filtering rules for the metaclasses of the referenced metamodel shall be strictly applied."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProfileApplication, isStrict, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

