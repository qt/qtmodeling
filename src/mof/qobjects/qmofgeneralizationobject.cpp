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
#include "qmofgeneralizationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofGeneralization>
#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

QMofGeneralizationObject::QMofGeneralizationObject(QMofGeneralization *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofGeneralizationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofGeneralization *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofGeneralizationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofGeneralization *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofGeneralizationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofGeneralization *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofGeneralization *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QMofGeneralizationObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofGeneralization *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QMofGeneralizationObject::sources() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofGeneralization *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofGeneralizationObject::targets() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofGeneralization *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Generalization]

QObject *QMofGeneralizationObject::general() const
{
    if (!qmodelingelementproperty_cast<QMofGeneralization *>(this)->general())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofGeneralization *>(this)->general()->asQModelingObject();
}

bool QMofGeneralizationObject::isSubstitutable() const
{
    return qmodelingelementproperty_cast<QMofGeneralization *>(this)->isSubstitutable();
}

QObject *QMofGeneralizationObject::specific() const
{
    if (!qmodelingelementproperty_cast<QMofGeneralization *>(this)->specific())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofGeneralization *>(this)->specific()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QMofGeneralizationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofGeneralization *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofGeneralizationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofGeneralization *>(this)->mustBeOwned();
}

QObject *QMofGeneralizationObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofGeneralization *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofGeneralization *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofGeneralizationObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofGeneralization *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofGeneralization *>(this)->container()->asQModelingObject();
}

bool QMofGeneralizationObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofGeneralization *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofGeneralizationObject::delete_()
{
    return qmodelingelementproperty_cast<QMofGeneralization *>(this)->delete_();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofGeneralizationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofGeneralizationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofGeneralizationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofGeneralizationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofGeneralizationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QMofGeneralizationObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->addRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
    emit relatedElementsChanged(this->relatedElements());
}

void QMofGeneralizationObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
    emit relatedElementsChanged(this->relatedElements());
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QMofGeneralizationObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->addSource(qmodelingelementproperty_cast<QMofElement *>(source));
    emit sourcesChanged(this->sources());
}

void QMofGeneralizationObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->removeSource(qmodelingelementproperty_cast<QMofElement *>(source));
    emit sourcesChanged(this->sources());
}

void QMofGeneralizationObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->addTarget(qmodelingelementproperty_cast<QMofElement *>(target));
    emit targetsChanged(this->targets());
}

void QMofGeneralizationObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->removeTarget(qmodelingelementproperty_cast<QMofElement *>(target));
    emit targetsChanged(this->targets());
}

// SLOTS FOR OWNED ATTRIBUTES [Generalization]

void QMofGeneralizationObject::setGeneral(QObject *general)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->setGeneral(qmodelingelementproperty_cast<QMofClassifier *>(general));
    emit generalChanged(this->general());
}

void QMofGeneralizationObject::setSubstitutable(bool isSubstitutable)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->setSubstitutable(isSubstitutable);
    emit isSubstitutableChanged(this->isSubstitutable());
}

void QMofGeneralizationObject::unsetSubstitutable()
{
    Q_D(QModelingObject);

    setSubstitutable(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isSubstitutable"));
}

void QMofGeneralizationObject::setSpecific(QObject *specific)
{
    qmodelingelementproperty_cast<QMofGeneralization *>(this)->setSpecific(qmodelingelementproperty_cast<QMofClassifier *>(specific));
    emit specificChanged(this->specific());
}


void QMofGeneralizationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofGeneralization");
    d->groupProperties.insert(QStringLiteral("QMofGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("general"))));
    d->groupProperties.insert(QStringLiteral("QMofGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSubstitutable"))));
    d->groupProperties.insert(QStringLiteral("QMofGeneralization"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specific"))));
}

void QMofGeneralizationObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, PropertyClassRole, QStringLiteral("QMofGeneralization"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, DocumentationRole, QStringLiteral("References the general classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, general, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, PropertyClassRole, QStringLiteral("QMofGeneralization"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, DocumentationRole, QStringLiteral("Indicates whether the specific classifier can be used wherever the general classifier can be used. If true, the execution traces of the specific classifier will be a superset of the execution traces of the general classifier."));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, isSubstitutable, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, PropertyClassRole, QStringLiteral("QMofGeneralization"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, DocumentationRole, QStringLiteral("References the specializing classifier in the Generalization relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QMofGeneralization, specific, OppositeEndRole, QStringLiteral("Classifier-generalization"));

}

QT_END_NAMESPACE

