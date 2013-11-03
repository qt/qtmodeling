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
#include "qmofpackageobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofPackage>
#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofNamedElement>
#include <QtMof/QMofNamespace>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>
#include <QtMof/QMofPackageMerge>
#include <QtMof/QMofType>

QT_BEGIN_NAMESPACE

QMofPackageObject::QMofPackageObject(QMofPackage *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QMofPackageObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QMofComment *element, qmodelingelementproperty_cast<QMofPackage *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofPackageObject::owner() const
{
    if (!qmodelingelementproperty_cast<QMofPackage *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackage *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

QString QMofPackageObject::name() const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->name();
}

QObject *QMofPackageObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QMofPackage *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackage *>(this)->namespace_()->asQModelingObject();
}

QString QMofPackageObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QMofPackageObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QMofElementImport *element, qmodelingelementproperty_cast<QMofPackage *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::members() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QMofNamedElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QMofConstraint *element, qmodelingelementproperty_cast<QMofPackage *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QMofPackageImport *element, qmodelingelementproperty_cast<QMofPackage *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [PackageableElement]

QtMof::VisibilityKind QMofPackageObject::visibility() const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->visibility();
}

// OWNED ATTRIBUTES [Package]

QString QMofPackageObject::URI() const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->URI();
}

const QSet<QObject *> QMofPackageObject::nestedPackages() const
{
    QSet<QObject *> set;
    foreach (QMofPackage *element, qmodelingelementproperty_cast<QMofPackage *>(this)->nestedPackages())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofPackageObject::nestingPackage() const
{
    if (!qmodelingelementproperty_cast<QMofPackage *>(this)->nestingPackage())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackage *>(this)->nestingPackage()->asQModelingObject();
}

const QSet<QObject *> QMofPackageObject::ownedTypes() const
{
    QSet<QObject *> set;
    foreach (QMofType *element, qmodelingelementproperty_cast<QMofPackage *>(this)->ownedTypes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::packageMerges() const
{
    QSet<QObject *> set;
    foreach (QMofPackageMerge *element, qmodelingelementproperty_cast<QMofPackage *>(this)->packageMerges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QMofPackageObject::packagedElements() const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->packagedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QMofPackageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofPackageObject::getMetaClass() const
{
    if (!qmodelingelementproperty_cast<QMofPackage *>(this)->getMetaClass())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackage *>(this)->getMetaClass()->asQModelingObject();
}

QObject *QMofPackageObject::container() const
{
    if (!qmodelingelementproperty_cast<QMofPackage *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofPackage *>(this)->container()->asQModelingObject();
}

bool QMofPackageObject::isInstanceOfType(QObject *type, bool includesSubtypes) const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->isInstanceOfType(qmodelingelementproperty_cast<QMofClass *>(type), includesSubtypes);
}

void QMofPackageObject::delete_()
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->delete_();
}

// OPERATIONS [NamedElement]

QList<QObject *> QMofPackageObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QMofNamespace *element, qmodelingelementproperty_cast<QMofPackage *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

bool QMofPackageObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QMofNamedElement *>(n), qmodelingelementproperty_cast<QMofNamespace *>(ns));
}

QString QMofPackageObject::separator() const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QMofPackageObject::excludeCollisions(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->excludeCollisions(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QMofPackageObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QMofNamedElement *>(element));
}

QSet<QObject *> QMofPackageObject::importMembers(QObject *imps) const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->importMembers(qmodelingelementproperty_cast<QMofPackageableElement *>(imps)))
        set.insert(element->asQModelingObject());
    return set;
}

bool QMofPackageObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Package]

bool QMofPackageObject::makesVisible(QObject *el) const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->makesVisible(qmodelingelementproperty_cast<QMofNamedElement *>(el));
}

bool QMofPackageObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QMofPackage *>(this)->mustBeOwned();
}

QSet<QObject *> QMofPackageObject::visibleMembers() const
{
    QSet<QObject *> set;
    foreach (QMofPackageableElement *element, qmodelingelementproperty_cast<QMofPackage *>(this)->visibleMembers())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QMofPackageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofPackageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QMofComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QMofPackageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofPackageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QMofElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QMofPackageObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->setOwner(qmodelingelementproperty_cast<QMofElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QMofPackageObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QMofPackageObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->setNamespace(qmodelingelementproperty_cast<QMofNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QMofPackageObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QMofPackageObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QMofPackageObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeElementImport(qmodelingelementproperty_cast<QMofElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QMofPackageObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QMofPackageObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeImportedMember(qmodelingelementproperty_cast<QMofPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QMofPackageObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
    emit membersChanged(this->members());
}

void QMofPackageObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeMember(qmodelingelementproperty_cast<QMofNamedElement *>(member));
    emit membersChanged(this->members());
}

void QMofPackageObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QMofPackageObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QMofNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QMofPackageObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QMofPackageObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QMofConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QMofPackageObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addPackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

void QMofPackageObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removePackageImport(qmodelingelementproperty_cast<QMofPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QMofPackageObject::setVisibility(QtMof::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

void QMofPackageObject::unsetVisibility()
{
    Q_D(QModelingObject);
    setVisibility(QtMof::VisibilityKindPublic);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Package]

void QMofPackageObject::setURI(QString URI)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->setURI(URI);
    emit URIChanged(this->URI());
}

void QMofPackageObject::addNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addNestedPackage(qmodelingelementproperty_cast<QMofPackage *>(nestedPackage));
    emit nestedPackagesChanged(this->nestedPackages());
}

void QMofPackageObject::removeNestedPackage(QObject *nestedPackage)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeNestedPackage(qmodelingelementproperty_cast<QMofPackage *>(nestedPackage));
    emit nestedPackagesChanged(this->nestedPackages());
}

void QMofPackageObject::setNestingPackage(QObject *nestingPackage)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->setNestingPackage(qmodelingelementproperty_cast<QMofPackage *>(nestingPackage));
    emit nestingPackageChanged(this->nestingPackage());
}

void QMofPackageObject::addOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addOwnedType(qmodelingelementproperty_cast<QMofType *>(ownedType));
    emit ownedTypesChanged(this->ownedTypes());
}

void QMofPackageObject::removeOwnedType(QObject *ownedType)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removeOwnedType(qmodelingelementproperty_cast<QMofType *>(ownedType));
    emit ownedTypesChanged(this->ownedTypes());
}

void QMofPackageObject::addPackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addPackageMerge(qmodelingelementproperty_cast<QMofPackageMerge *>(packageMerge));
    emit packageMergesChanged(this->packageMerges());
}

void QMofPackageObject::removePackageMerge(QObject *packageMerge)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removePackageMerge(qmodelingelementproperty_cast<QMofPackageMerge *>(packageMerge));
    emit packageMergesChanged(this->packageMerges());
}

void QMofPackageObject::addPackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->addPackagedElement(qmodelingelementproperty_cast<QMofPackageableElement *>(packagedElement));
    emit packagedElementsChanged(this->packagedElements());
}

void QMofPackageObject::removePackagedElement(QObject *packagedElement)
{
    qmodelingelementproperty_cast<QMofPackage *>(this)->removePackagedElement(qmodelingelementproperty_cast<QMofPackageableElement *>(packagedElement));
    emit packagedElementsChanged(this->packagedElements());
}


void QMofPackageObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QMofNamespace");
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QMofNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QMofPackageableElement");
    d->groupProperties.insert(QStringLiteral("QMofPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QMofPackage");
    d->groupProperties.insert(QStringLiteral("QMofPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("URI"))));
    d->groupProperties.insert(QStringLiteral("QMofPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestedPackages"))));
    d->groupProperties.insert(QStringLiteral("QMofPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nestingPackage"))));
    d->groupProperties.insert(QStringLiteral("QMofPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTypes"))));
    d->groupProperties.insert(QStringLiteral("QMofPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageMerges"))));
    d->groupProperties.insert(QStringLiteral("QMofPackage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packagedElements"))));
}

void QMofPackageObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, PropertyClassRole, QStringLiteral("QMofNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, PropertyClassRole, QStringLiteral("QMofPackageableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, DocumentationRole, QStringLiteral("Indicates that packageable elements must always have a visibility, i.e., visibility is not optional."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, RedefinedPropertiesRole, QStringLiteral("NamedElement-visibility"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackageableElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, PropertyClassRole, QStringLiteral("QMofPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, DocumentationRole, QStringLiteral("Provides an identifier for the package that can be used for many purposes. A URI is the universally unique identification of the package following the IETF URI specification, RFC 2396 http://www.ietf.org/rfc/rfc2396.txt and it must comply with those syntax rules."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, URI, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, PropertyClassRole, QStringLiteral("QMofPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, DocumentationRole, QStringLiteral("References the packaged elements that are Packages."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, SubsettedPropertiesRole, QStringLiteral("Package-packagedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestedPackages, OppositeEndRole, QStringLiteral("Package-nestingPackage"));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, PropertyClassRole, QStringLiteral("QMofPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, DocumentationRole, QStringLiteral("References the Package that owns this Package."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, SubsettedPropertiesRole, QStringLiteral("A_packagedElement_owningPackage-owningPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, nestingPackage, OppositeEndRole, QStringLiteral("Package-nestedPackage"));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, PropertyClassRole, QStringLiteral("QMofPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, DocumentationRole, QStringLiteral("References the packaged elements that are Types."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, SubsettedPropertiesRole, QStringLiteral("Package-packagedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, ownedTypes, OppositeEndRole, QStringLiteral("Type-package"));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, PropertyClassRole, QStringLiteral("QMofPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, DocumentationRole, QStringLiteral("References the PackageMerges that are owned by this Package."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packageMerges, OppositeEndRole, QStringLiteral("PackageMerge-receivingPackage"));

    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, PropertyClassRole, QStringLiteral("QMofPackage"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, DocumentationRole, QStringLiteral("Specifies the packageable elements that are owned by this Package."));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QMofPackage, packagedElements, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

