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
#include "qumlelementimportobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackageableElement>

QT_BEGIN_NAMESPACE

QUmlElementImportObject::QUmlElementImportObject(QUmlElementImport *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlElementImportObject::~QUmlElementImportObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlElementImport *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlElementImportObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlElementImport *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlElementImportObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlElementImport *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlElementImportObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlElementImport *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlElementImport *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlElementImportObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlElementImport *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlElementImportObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlElementImport *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlElementImportObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlElementImport *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ElementImport]

QString QUmlElementImportObject::alias() const
{
    return qmodelingelementproperty_cast<QUmlElementImport *>(this)->alias();
}

QObject *QUmlElementImportObject::importedElement() const
{
    if (!qmodelingelementproperty_cast<QUmlElementImport *>(this)->importedElement())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlElementImport *>(this)->importedElement()->asQModelingObject();
}

QObject *QUmlElementImportObject::importingNamespace() const
{
    if (!qmodelingelementproperty_cast<QUmlElementImport *>(this)->importingNamespace())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlElementImport *>(this)->importingNamespace()->asQModelingObject();
}

QtUml::VisibilityKind QUmlElementImportObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlElementImport *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlElementImportObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlElementImport *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlElementImportObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlElementImport *>(this)->mustBeOwned();
}

// OPERATIONS [ElementImport]

QString QUmlElementImportObject::getName() const
{
    return qmodelingelementproperty_cast<QUmlElementImport *>(this)->getName();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlElementImportObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlElementImportObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlElementImportObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlElementImportObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlElementImportObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlElementImportObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlElementImportObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlElementImportObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlElementImportObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlElementImportObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlElementImportObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [ElementImport]

void QUmlElementImportObject::setAlias(QString alias)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->setAlias(alias);
}

void QUmlElementImportObject::setImportedElement(QObject *importedElement)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->setImportedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedElement));
}

void QUmlElementImportObject::setImportingNamespace(QObject *importingNamespace)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->setImportingNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(importingNamespace));
}

void QUmlElementImportObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlElementImport *>(this)->setVisibility(visibility);
}

void QUmlElementImportObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}


void QUmlElementImportObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlElementImport");
    d->groupProperties.insert(QStringLiteral("QUmlElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("alias"))));
    d->groupProperties.insert(QStringLiteral("QUmlElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedElement"))));
    d->groupProperties.insert(QStringLiteral("QUmlElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importingNamespace"))));
    d->groupProperties.insert(QStringLiteral("QUmlElementImport"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));
}

void QUmlElementImportObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, PropertyClassRole, QStringLiteral("QUmlElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, DocumentationRole, QStringLiteral("Specifies the name that should be added to the namespace of the importing package in lieu of the name of the imported packagable element. The aliased name must not clash with any other member name in the importing package. By default, no alias is used."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, alias, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, PropertyClassRole, QStringLiteral("QUmlElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, DocumentationRole, QStringLiteral("Specifies the PackageableElement whose name is to be added to a Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importedElement, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, PropertyClassRole, QStringLiteral("QUmlElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, DocumentationRole, QStringLiteral("Specifies the Namespace that imports a PackageableElement from another Package."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, SubsettedPropertiesRole, QStringLiteral("Element-owner DirectedRelationship-source"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, importingNamespace, OppositeEndRole, QStringLiteral("Namespace-elementImport"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, PropertyClassRole, QStringLiteral("QUmlElementImport"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, DocumentationRole, QStringLiteral("Specifies the visibility of the imported PackageableElement within the importing Package. The default visibility is the same as that of the imported element. If the imported element does not have a visibility, it is possible to add visibility to the element import."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElementImport, visibility, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

