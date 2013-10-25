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
#include "qmofpackageimportobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofPackageImport>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackage>

QT_BEGIN_NAMESPACE

QMofPackageImportObject::QMofPackageImportObject(QMofPackageImport *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofPackageImportObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofPackageImport *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageImportObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageImport *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofPackageImportObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofPackageImport *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageImport *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QMofPackageImportObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageImport *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QMofPackageImportObject::sources() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageImport *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageImportObject::targets() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageImport *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [PackageImport]

QObject *QMofPackageImportObject::importedPackage() const
{
    if (!qmodelingelementproperty_cast<QMofPackageImport *>(this)->importedPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageImport *>(this)->importedPackage()->asQModelingObject();
}

QObject *QMofPackageImportObject::importingNamespace() const
{
    if (!qmodelingelementproperty_cast<QMofPackageImport *>(this)->importingNamespace())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageImport *>(this)->importingNamespace()->asQModelingObject();
}

QtMof::VisibilityKind QMofPackageImportObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofPackageImport *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QMofPackageImportObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackageImport *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofPackageImportObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofPackageImport *>(this)->mustBeOwned();
}

QObject *QMofPackageImportObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofPackageImport *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageImport *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofPackageImportObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofPackageImport *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackageImport *>(this)->container()->asQModelingObject();
}

bool QMofPackageImportObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofPackageImport *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofPackageImportObject::delete_()
{
    return qmodelingelementproperty_cast<QMofPackageImport *>(this)->delete_();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofPackageImportObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofPackageImportObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
}

void QMofPackageImportObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofPackageImportObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
}

void QMofPackageImportObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QMofPackageImportObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->addRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
}

void QMofPackageImportObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QMofPackageImportObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->addSource(qmodelingelementproperty_cast<QMofElement *>(source));
}

void QMofPackageImportObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->removeSource(qmodelingelementproperty_cast<QMofElement *>(source));
}

void QMofPackageImportObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->addTarget(qmodelingelementproperty_cast<QMofElement *>(target));
}

void QMofPackageImportObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->removeTarget(qmodelingelementproperty_cast<QMofElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageImport]

void QMofPackageImportObject::setImportedPackage(QObject *importedPackage)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->setImportedPackage(qmodelingelementproperty_cast<QMofPackage *>(importedPackage));
}

void QMofPackageImportObject::setImportingNamespace(QObject *importingNamespace)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->setImportingNamespace(qmodelingelementproperty_cast<QMofNamespace *>(importingNamespace));
}

void QMofPackageImportObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofPackageImport *>(this)->setVisibility(visibility);
}

void QMofPackageImportObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtMof::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}


void QMofPackageImportObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofPackageImport");
    d->groupProperties.insert(QStringLiteral("QMofPackageImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedPackage"))));
    d->groupProperties.insert(QStringLiteral("QMofPackageImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importingNamespace"))));
    d->groupProperties.insert(QStringLiteral("QMofPackageImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
}

void QMofPackageImportObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, PropertyClassRole, QStringLiteral("QMofPackageImport"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, DocumentationRole, QStringLiteral("Specifies the Package whose members are imported into a Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importedPackage, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, PropertyClassRole, QStringLiteral("QMofPackageImport"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, DocumentationRole, QStringLiteral("Specifies the Namespace that imports the members from a Package."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, importingNamespace, OppositeEndRole, QStringLiteral("Namespace-packageImport"));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, PropertyClassRole, QStringLiteral("QMofPackageImport"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, DocumentationRole, QStringLiteral("Specifies the visibility of the imported PackageableElements within the importing Namespace, i.e., whether imported elements will in turn be visible to other packages that use that importingPackage as an importedPackage. If the PackageImport is public, the imported elements will be visible outside the package, while if it is private they will not."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageImport, visibility, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

