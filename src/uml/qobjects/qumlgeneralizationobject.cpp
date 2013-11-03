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
#include "qumlgeneralizationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralizationSet>

QT_BEGIN_NAMESPACE

QUmlGeneralizationObject::QUmlGeneralizationObject(QUmlGeneralization *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGeneralizationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlGeneralization *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlGeneralizationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralization *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlGeneralizationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralization *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralization *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlGeneralizationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralization *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlGeneralizationObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralization *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlGeneralizationObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralization *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Generalization]

QObject *QUmlGeneralizationObject::general() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralization *>(this)->general())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralization *>(this)->general()->asQModelingObject();
}

const QSet<QObject *> QUmlGeneralizationObject::generalizationSets() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralizationSet *element, qmodelingelementproperty_cast<QUmlGeneralization *>(this)->generalizationSets())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGeneralizationObject::isSubstitutable() const
{
    return qmodelingelementproperty_cast<QUmlGeneralization *>(this)->isSubstitutable();
}

QObject *QUmlGeneralizationObject::specific() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralization *>(this)->specific())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralization *>(this)->specific()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGeneralizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralization *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGeneralizationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlGeneralization *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlGeneralizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlGeneralizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlGeneralizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlGeneralizationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlGeneralizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
    emit relatedElementsChanged(this->relatedElements());
}

void QUmlGeneralizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
    emit relatedElementsChanged(this->relatedElements());
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlGeneralizationObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
    emit sourcesChanged(this->sources());
}

void QUmlGeneralizationObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
    emit sourcesChanged(this->sources());
}

void QUmlGeneralizationObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
    emit targetsChanged(this->targets());
}

void QUmlGeneralizationObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
    emit targetsChanged(this->targets());
}

// SLOTS FOR OWNED ATTRIBUTES [Generalization]

void QUmlGeneralizationObject::setGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->setGeneral(qmodelingelementproperty_cast<QUmlClassifier *>(general));
    emit generalChanged(this->general());
}

void QUmlGeneralizationObject::addGeneralizationSet(QObject *generalizationSet)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->addGeneralizationSet(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(generalizationSet));
    emit generalizationSetsChanged(this->generalizationSets());
}

void QUmlGeneralizationObject::removeGeneralizationSet(QObject *generalizationSet)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->removeGeneralizationSet(qmodelingelementproperty_cast<QUmlGeneralizationSet *>(generalizationSet));
    emit generalizationSetsChanged(this->generalizationSets());
}

void QUmlGeneralizationObject::setSubstitutable(bool isSubstitutable)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->setSubstitutable(isSubstitutable);
    emit isSubstitutableChanged(this->isSubstitutable());
}

void QUmlGeneralizationObject::unsetSubstitutable()
{
    Q_D(QModelingObject);

    setSubstitutable(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isSubstitutable"));
}

void QUmlGeneralizationObject::setSpecific(QObject *specific)
{
    qmodelingelementproperty_cast<QUmlGeneralization *>(this)->setSpecific(qmodelingelementproperty_cast<QUmlClassifier *>(specific));
    emit specificChanged(this->specific());
}


void QUmlGeneralizationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlGeneralization");
    d->groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("general"))));
    d->groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizationSets"))));
    d->groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSubstitutable"))));
    d->groupProperties.insert(QStringLiteral("QUmlGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specific"))));
}

void QUmlGeneralizationObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, PropertyClassRole, QStringLiteral("QUmlGeneralization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, DocumentationRole, QStringLiteral("References the general classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, general, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, PropertyClassRole, QStringLiteral("QUmlGeneralization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, DocumentationRole, QStringLiteral("Designates a set in which instances of Generalization is considered members."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, generalizationSets, OppositeEndRole, QStringLiteral("GeneralizationSet-generalization"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, PropertyClassRole, QStringLiteral("QUmlGeneralization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, DocumentationRole, QStringLiteral("Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, isSubstitutable, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, PropertyClassRole, QStringLiteral("QUmlGeneralization"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, DocumentationRole, QStringLiteral("References the specializing classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralization, specific, OppositeEndRole, QStringLiteral("Classifier-generalization"));

}

QT_END_NAMESPACE

