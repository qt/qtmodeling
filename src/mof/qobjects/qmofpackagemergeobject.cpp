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
#include "qmofpackagemergeobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofPackageMerge>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofPackage>

QT_BEGIN_NAMESPACE

QMofPackageMergeObject::QMofPackageMergeObject(QMofPackageMerge *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofPackageMergeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofPackageMerge *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageMergeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageMerge *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofPackageMergeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofPackageMerge *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QMofPackageMergeObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageMerge *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QMofPackageMergeObject::sources() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageMerge *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageMergeObject::targets() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageMerge *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [PackageMerge]

QObject *QMofPackageMergeObject::mergedPackage() const
{
    if (!qmodelingelementproperty_cast<QMofPackageMerge *>(this)->mergedPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->mergedPackage()->asQModelingObject();
}

QObject *QMofPackageMergeObject::receivingPackage() const
{
    if (!qmodelingelementproperty_cast<QMofPackageMerge *>(this)->receivingPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->receivingPackage()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QMofPackageMergeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageMerge *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofPackageMergeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->mustBeOwned();
}

QObject *QMofPackageMergeObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofPackageMerge *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofPackageMergeObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofPackageMerge *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->container()->asQModelingObject();
}

bool QMofPackageMergeObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofPackageMergeObject::delete_()
{
    return qmodelingelementproperty_cast<QMofPackageMerge *>(this)->delete_();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofPackageMergeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofPackageMergeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofPackageMergeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofPackageMergeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofPackageMergeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QMofPackageMergeObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->addRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
}

void QMofPackageMergeObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QMofPackageMergeObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->addSource(qmodelingelementproperty_cast<QMofElement *>(source));
}

void QMofPackageMergeObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->removeSource(qmodelingelementproperty_cast<QMofElement *>(source));
}

void QMofPackageMergeObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->addTarget(qmodelingelementproperty_cast<QMofElement *>(target));
}

void QMofPackageMergeObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->removeTarget(qmodelingelementproperty_cast<QMofElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageMerge]

void QMofPackageMergeObject::setMergedPackage(QObject *mergedPackage)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->setMergedPackage(qmodelingelementproperty_cast<QMofPackage *>(mergedPackage));
}

void QMofPackageMergeObject::setReceivingPackage(QObject *receivingPackage)
{
    qmodelingelementproperty_cast<QMofPackageMerge *>(this)->setReceivingPackage(qmodelingelementproperty_cast<QMofPackage *>(receivingPackage));
}


void QMofPackageMergeObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofElement");
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QMofRelationship");
    d->groupProperties.insert(QStringLiteral("QMofRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QMofDirectedRelationship");
    d->groupProperties.insert(QStringLiteral("QMofDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    d->groupProperties.insert(QStringLiteral("QMofDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));

    d->propertyGroups << QStringLiteral("QMofPackageMerge");
    d->groupProperties.insert(QStringLiteral("QMofPackageMerge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("mergedPackage"))));
    d->groupProperties.insert(QStringLiteral("QMofPackageMerge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("receivingPackage"))));
}

void QMofPackageMergeObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, PropertyClassRole, QStringLiteral("QMofRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, DocumentationRole, QStringLiteral("Specifies the elements related by the Relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, PropertyClassRole, QStringLiteral("QMofDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, DocumentationRole, QStringLiteral("Specifies the sources of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, PropertyClassRole, QStringLiteral("QMofDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, DocumentationRole, QStringLiteral("Specifies the targets of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, PropertyClassRole, QStringLiteral("QMofPackageMerge"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, DocumentationRole, QStringLiteral("References the Package that is to be merged with the receiving package of the PackageMerge."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, mergedPackage, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, PropertyClassRole, QStringLiteral("QMofPackageMerge"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, DocumentationRole, QStringLiteral("References the Package that is being extended with the contents of the merged package of the PackageMerge."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageMerge, receivingPackage, OppositeEndRole, QStringLiteral("Package-packageMerge"));

}

QT_END_NAMESPACE

