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
#include "qmofelementimportobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofElementImport>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackageableElement>

QT_BEGIN_NAMESPACE

QMofElementImportObject::QMofElementImportObject(QMofElementImport *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofElementImportObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofElementImport *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofElementImportObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofElementImport *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofElementImportObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofElementImport *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofElementImport *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QMofElementImportObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofElementImport *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QMofElementImportObject::sources() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofElementImport *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofElementImportObject::targets() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofElementImport *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ElementImport]

QString QMofElementImportObject::alias() const
{
    return qmodelingelementproperty_cast<QMofElementImport *>(this)->alias();
}

QObject *QMofElementImportObject::importedElement() const
{
    if (!qmodelingelementproperty_cast<QMofElementImport *>(this)->importedElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofElementImport *>(this)->importedElement()->asQModelingObject();
}

QObject *QMofElementImportObject::importingNamespace() const
{
    if (!qmodelingelementproperty_cast<QMofElementImport *>(this)->importingNamespace())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofElementImport *>(this)->importingNamespace()->asQModelingObject();
}

QtMof::VisibilityKind QMofElementImportObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofElementImport *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QMofElementImportObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofElementImport *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofElementImportObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofElementImport *>(this)->mustBeOwned();
}

QObject *QMofElementImportObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofElementImport *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofElementImport *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofElementImportObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofElementImport *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofElementImport *>(this)->container()->asQModelingObject();
}

bool QMofElementImportObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofElementImport *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofElementImportObject::delete_()
{
    return qmodelingelementproperty_cast<QMofElementImport *>(this)->delete_();
}

// OPERATIONS [ElementImport]

QString QMofElementImportObject::getName() const
{
    return qmodelingelementproperty_cast<QMofElementImport *>(this)->getName();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofElementImportObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofElementImportObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofElementImportObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofElementImportObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofElementImportObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QMofElementImportObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->addRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
    emit relatedElementsChanged(this->relatedElements());
}

void QMofElementImportObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QMofElement *>(relatedElement));
    emit relatedElementsChanged(this->relatedElements());
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QMofElementImportObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->addSource(qmodelingelementproperty_cast<QMofElement *>(source));
    emit sourcesChanged(this->sources());
}

void QMofElementImportObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->removeSource(qmodelingelementproperty_cast<QMofElement *>(source));
    emit sourcesChanged(this->sources());
}

void QMofElementImportObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->addTarget(qmodelingelementproperty_cast<QMofElement *>(target));
    emit targetsChanged(this->targets());
}

void QMofElementImportObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->removeTarget(qmodelingelementproperty_cast<QMofElement *>(target));
    emit targetsChanged(this->targets());
}

// SLOTS FOR OWNED ATTRIBUTES [ElementImport]

void QMofElementImportObject::setAlias(QString alias)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->setAlias(alias);
    emit aliasChanged(this->alias());
}

void QMofElementImportObject::setImportedElement(QObject *importedElement)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->setImportedElement(qmodelingelementproperty_cast<QMofPackageableElement *>(importedElement));
    emit importedElementChanged(this->importedElement());
}

void QMofElementImportObject::setImportingNamespace(QObject *importingNamespace)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->setImportingNamespace(qmodelingelementproperty_cast<QMofNamespace *>(importingNamespace));
    emit importingNamespaceChanged(this->importingNamespace());
}

void QMofElementImportObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofElementImport *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QMofElementImportObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtMof::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}


void QMofElementImportObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofElementImport");
    d->groupProperties.insert(QStringLiteral("QMofElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("alias"))));
    d->groupProperties.insert(QStringLiteral("QMofElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedElement"))));
    d->groupProperties.insert(QStringLiteral("QMofElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importingNamespace"))));
    d->groupProperties.insert(QStringLiteral("QMofElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
}

void QMofElementImportObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, PropertyTypeRole, QStringLiteral("QSet<QMofComment *>"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, PropertyTypeRole, QStringLiteral("QSet<QMofElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, PropertyClassRole, QStringLiteral("QMofElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, PropertyTypeRole, QStringLiteral("QMofElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, PropertyClassRole, QStringLiteral("QMofRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, PropertyTypeRole, QStringLiteral("QSet<QMofElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, DocumentationRole, QStringLiteral("Specifies the elements related by the Relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofRelationship, relatedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, PropertyClassRole, QStringLiteral("QMofDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, PropertyTypeRole, QStringLiteral("QSet<QMofElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, DocumentationRole, QStringLiteral("Specifies the sources of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, sources, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, PropertyClassRole, QStringLiteral("QMofDirectedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, PropertyTypeRole, QStringLiteral("QSet<QMofElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, DocumentationRole, QStringLiteral("Specifies the targets of the DirectedRelationship."));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, SubsettedPropertiesRole, QStringLiteral("Relationship-relatedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofDirectedRelationship, targets, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, PropertyClassRole, QStringLiteral("QMofElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, DocumentationRole, QStringLiteral("Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, alias, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, PropertyClassRole, QStringLiteral("QMofElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, PropertyTypeRole, QStringLiteral("QMofPackageableElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, DocumentationRole, QStringLiteral("Specifies the PackageableElement whose name is to be added to a Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importedElement, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, PropertyClassRole, QStringLiteral("QMofElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, PropertyTypeRole, QStringLiteral("QMofNamespace *"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, DocumentationRole, QStringLiteral("Specifies the Namespace that imports a PackageableElement from another Package."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, importingNamespace, OppositeEndRole, QStringLiteral("Namespace-elementImport"));

    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, PropertyClassRole, QStringLiteral("QMofElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, PropertyTypeRole, QStringLiteral("QtMof::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, DocumentationRole, QStringLiteral("Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import."));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofElementImport, visibility, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

