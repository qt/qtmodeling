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
#include "qmofenumerationliteralobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofEnumerationLiteral>
#include <QtMof/QMofClass>
#include <QtMof/QMofClassifier>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofEnumeration>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofSlot>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

QMofEnumerationLiteralObject::QMofEnumerationLiteralObject(QMofEnumerationLiteral *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofEnumerationLiteralObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofEnumerationLiteralObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofEnumerationLiteralObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofEnumerationLiteralObject::name() const
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->name();
}

QObject *QMofEnumerationLiteralObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->namespace_()->asQModelingObject();
}

QString QMofEnumerationLiteralObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtMof::VisibilityKind QMofEnumerationLiteralObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->visibility();
}

// OWNED ATTRIBUTES [InstanceSpecification]

const QSet<QObject *> QMofEnumerationLiteralObject::slots_() const
{
    QSet<QObject *> set;
    foreach (QMofSlot *element, qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->slots_())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofEnumerationLiteralObject::specification() const
{
    if (!qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [EnumerationLiteral]

QObject *QMofEnumerationLiteralObject::classifier() const
{
    if (!qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->classifier())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->classifier()->asQModelingObject();
}

QObject *QMofEnumerationLiteralObject::enumeration() const
{
    if (!qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->enumeration())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->enumeration()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QMofEnumerationLiteralObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofEnumerationLiteralObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->mustBeOwned();
}

QObject *QMofEnumerationLiteralObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofEnumerationLiteralObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->container()->asQModelingObject();
}

bool QMofEnumerationLiteralObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofEnumerationLiteralObject::delete_()
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofEnumerationLiteralObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofEnumerationLiteralObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofEnumerationLiteralObject::separator() const
{
    return qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofEnumerationLiteralObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofEnumerationLiteralObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofEnumerationLiteralObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofEnumerationLiteralObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofEnumerationLiteralObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofEnumerationLiteralObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setName(name);
}

void QMofEnumerationLiteralObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
}

void QMofEnumerationLiteralObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QMofEnumerationLiteralObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setVisibility(visibility);
}

void QMofEnumerationLiteralObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [InstanceSpecification]

void QMofEnumerationLiteralObject::addSlot(QObject *slot_)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->addSlot(qmodelingelementproperty_cast<QMofSlot *>(slot_));
}

void QMofEnumerationLiteralObject::removeSlot(QObject *slot_)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->removeSlot(qmodelingelementproperty_cast<QMofSlot *>(slot_));
}

void QMofEnumerationLiteralObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setSpecification(qmodelingelementproperty_cast<QMofValueSpecification *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [EnumerationLiteral]

void QMofEnumerationLiteralObject::setClassifier(QObject *classifier)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setClassifier(qmodelingelementproperty_cast<QMofEnumeration *>(classifier));
}

void QMofEnumerationLiteralObject::setEnumeration(QObject *enumeration)
{
    qmodelingelementproperty_cast<QMofEnumerationLiteral *>(this)->setEnumeration(qmodelingelementproperty_cast<QMofEnumeration *>(enumeration));
}


void QMofEnumerationLiteralObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofElement");
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QMofElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QMofNamedElement");
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QMofNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QMofPackageableElement");
    d->groupProperties.insert(QStringLiteral("QMofPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QMofInstanceSpecification");
    d->groupProperties.insert(QStringLiteral("QMofInstanceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("slots_"))));
    d->groupProperties.insert(QStringLiteral("QMofInstanceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));

    d->propertyGroups << QStringLiteral("QMofEnumerationLiteral");
    d->groupProperties.insert(QStringLiteral("QMofEnumerationLiteral"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifier"))));
    d->groupProperties.insert(QStringLiteral("QMofEnumerationLiteral"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enumeration"))));
}

void QMofEnumerationLiteralObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("Element-owner A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, PropertyClassRole, QStringLiteral("QMofNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, PropertyClassRole, QStringLiteral("QMofPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, PropertyClassRole, QStringLiteral("QMofInstanceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, DocumentationRole, QStringLiteral("The classifier or classifiers of the represented instance. If multiple classifiers are specified, the instance is classified by all of them."));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, classifiers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, PropertyClassRole, QStringLiteral("QMofInstanceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, DocumentationRole, QStringLiteral("A slot giving the value or values of a structural feature of the instance. An instance specification can have one slot per structural feature of its classifiers, including inherited features. It is not necessary to model a slot for each structural feature, in which case the instance specification is a partial description."));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, slots_, OppositeEndRole, QStringLiteral("Slot-owningInstance"));

    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, PropertyClassRole, QStringLiteral("QMofInstanceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, DocumentationRole, QStringLiteral("A specification of how to compute, derive, or construct the instance."));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofInstanceSpecification, specification, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, PropertyClassRole, QStringLiteral("QMofEnumerationLiteral"));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, DocumentationRole, QStringLiteral("The classifier of this EnumerationLiteral derived to be equal to its enumeration."));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, RedefinedPropertiesRole, QStringLiteral("InstanceSpecification-classifier"));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, classifier, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, PropertyClassRole, QStringLiteral("QMofEnumerationLiteral"));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, DocumentationRole, QStringLiteral("The Enumeration that this EnumerationLiteral is a member of."));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofEnumerationLiteral, enumeration, OppositeEndRole, QStringLiteral("Enumeration-ownedLiteral"));

}

QT_END_NAMESPACE

