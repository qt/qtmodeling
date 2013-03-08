/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmofnamespace.h"
#include "qmofnamespace_p.h"

#include "qmofnamedelement_p.h"

#include <QtMof/QMofPackageImport>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackage>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofNamespacePrivate::QMofNamespacePrivate()
{
}

QMofNamespacePrivate::~QMofNamespacePrivate()
{
}

void QMofNamespacePrivate::addMember(QMofNamedElement *member)
{
    // This is a read-only derived-union association end

    if (!this->members.contains(member)) {
        this->members.insert(member);
    }
}

void QMofNamespacePrivate::removeMember(QMofNamedElement *member)
{
    // This is a read-only derived-union association end

    if (this->members.contains(member)) {
        this->members.remove(member);
    }
}

void QMofNamespacePrivate::addOwnedMember(QMofNamedElement *ownedMember)
{
    // This is a read-only derived-union association end

    if (!this->ownedMembers.contains(ownedMember)) {
        this->ownedMembers.insert(ownedMember);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QMofElement *>(ownedMember));
        (qwrappedobject_cast<QMofNamespacePrivate *>(this))->addMember(qwrappedobject_cast<QMofNamedElement *>(ownedMember));

        // Adjust opposite property
        Q_Q(QMofNamespace);
        (qwrappedobject_cast<QMofNamedElementPrivate *>(ownedMember->d_func()))->setNamespace_(q);
    }
}

void QMofNamespacePrivate::removeOwnedMember(QMofNamedElement *ownedMember)
{
    // This is a read-only derived-union association end

    if (this->ownedMembers.contains(ownedMember)) {
        this->ownedMembers.remove(ownedMember);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(ownedMember));
        (qwrappedobject_cast<QMofNamespacePrivate *>(this))->removeMember(qwrappedobject_cast<QMofNamedElement *>(ownedMember));

        // Adjust opposite property
        (qwrappedobject_cast<QMofNamedElementPrivate *>(ownedMember->d_func()))->setNamespace_(0);
    }
}

/*!
    \class QMofNamespace

    \inmodule QtMof

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.
 */

QMofNamespace::QMofNamespace(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofNamedElement(*new QMofNamespacePrivate, wrapper, parent)
{
    setPropertyData();
}

QMofNamespace::QMofNamespace(QMofNamespacePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofNamespace::~QMofNamespace()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QMofPackageImport *> QMofNamespace::packageImports() const
{
    // This is a read-write association end

    Q_D(const QMofNamespace);
    return d->packageImports;
}

void QMofNamespace::addPackageImport(QMofPackageImport *packageImport)
{
    // This is a read-write association end

    Q_D(QMofNamespace);
    if (!d->packageImports.contains(packageImport)) {
        d->packageImports.insert(packageImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(packageImport));

        // Adjust opposite property
        packageImport->setImportingNamespace(this);
    }
}

void QMofNamespace::removePackageImport(QMofPackageImport *packageImport)
{
    // This is a read-write association end

    Q_D(QMofNamespace);
    if (d->packageImports.contains(packageImport)) {
        d->packageImports.remove(packageImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(packageImport));

        // Adjust opposite property
        packageImport->setImportingNamespace(0);
    }
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QMofNamedElement *> QMofNamespace::members() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofNamespace);
    return d->members;
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QMofPackageableElement *> QMofNamespace::importedMembers() const
{
    // This is a read-only derived association end

    Q_D(const QMofNamespace);
    QSet<QMofPackageableElement *> importedMembers_;
    foreach (QMofElementImport *elementImport, d->elementImports)
        importedMembers_.insert(elementImport->importedElement());
    foreach (QMofPackageImport *packageImport, d->packageImports)
        if (packageImport->importedPackage())
            importedMembers_.unite(packageImport->importedPackage()->packagedElements());
    return importedMembers_;
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QMofElementImport *> QMofNamespace::elementImports() const
{
    // This is a read-write association end

    Q_D(const QMofNamespace);
    return d->elementImports;
}

void QMofNamespace::addElementImport(QMofElementImport *elementImport)
{
    // This is a read-write association end

    Q_D(QMofNamespace);
    if (!d->elementImports.contains(elementImport)) {
        d->elementImports.insert(elementImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(elementImport));

        // Adjust opposite property
        elementImport->setImportingNamespace(this);
    }
}

void QMofNamespace::removeElementImport(QMofElementImport *elementImport)
{
    // This is a read-write association end

    Q_D(QMofNamespace);
    if (d->elementImports.contains(elementImport)) {
        d->elementImports.remove(elementImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(elementImport));

        // Adjust opposite property
        elementImport->setImportingNamespace(0);
    }
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QMofConstraint *> QMofNamespace::ownedRules() const
{
    // This is a read-write association end

    Q_D(const QMofNamespace);
    return d->ownedRules;
}

void QMofNamespace::addOwnedRule(QMofConstraint *ownedRule)
{
    // This is a read-write association end

    Q_D(QMofNamespace);
    if (!d->ownedRules.contains(ownedRule)) {
        d->ownedRules.insert(ownedRule);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedRule));

        // Adjust opposite property
        ownedRule->setContext(this);
    }
}

void QMofNamespace::removeOwnedRule(QMofConstraint *ownedRule)
{
    // This is a read-write association end

    Q_D(QMofNamespace);
    if (d->ownedRules.contains(ownedRule)) {
        d->ownedRules.remove(ownedRule);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QMofNamedElement *>(ownedRule));

        // Adjust opposite property
        ownedRule->setContext(0);
    }
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QMofNamedElement *> QMofNamespace::ownedMembers() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofNamespace);
    return d->ownedMembers;
}

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QMofPackageableElement *> QMofNamespace::excludeCollisions(const QMofPackageableElement *imps) const
{
    qWarning("QMofNamespace::excludeCollisions: operation to be implemented");
    Q_UNUSED(imps);

    return QSet<QMofPackageableElement *>(); // change here to your derived return
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QMofNamespace::getNamesOfMember(const QMofNamedElement *element) const
{
    qWarning("QMofNamespace::getNamesOfMember: operation to be implemented");
    Q_UNUSED(element);

    return QSet<QString>(); // change here to your derived return
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QMofPackageableElement *> QMofNamespace::importMembers(const QMofPackageableElement *imps) const
{
    qWarning("QMofNamespace::importMembers: operation to be implemented");
    Q_UNUSED(imps);

    return QSet<QMofPackageableElement *>(); // change here to your derived return
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QMofNamespace::membersAreDistinguishable() const
{
    qWarning("QMofNamespace::membersAreDistinguishable: operation to be implemented");

    return bool(); // change here to your derived return
}

void QMofNamespace::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the PackageImports owned by the Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QPackageImport::importingNamespace");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("members")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("members")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("members")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("members")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("members")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("members")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the ElementImports owned by the Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QElementImport::importingNamespace");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a set of Constraints owned by this Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QConstraint::context");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A collection of NamedElements owned by the Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements QMofNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QNamedElement::namespace");

    QMofNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofnamespace.cpp"

