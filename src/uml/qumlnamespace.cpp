/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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

#include "qumlnamespace.h"
#include "qumlnamespace_p.h"

#include "qumlnamedelement_p.h"

#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackage>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlNamespacePrivate::QUmlNamespacePrivate()
{
}

QUmlNamespacePrivate::~QUmlNamespacePrivate()
{
}

void QUmlNamespacePrivate::addMember(QUmlNamedElement *member)
{
    // This is a read-only derived-union association end

    if (!this->members.contains(member)) {
        this->members.insert(member);
    }
}

void QUmlNamespacePrivate::removeMember(QUmlNamedElement *member)
{
    // This is a read-only derived-union association end

    if (this->members.contains(member)) {
        this->members.remove(member);
    }
}

void QUmlNamespacePrivate::addOwnedMember(QUmlNamedElement *ownedMember)
{
    // This is a read-only derived-union association end

    if (!this->ownedMembers.contains(ownedMember)) {
        this->ownedMembers.insert(ownedMember);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(this))->addMember(qwrappedobject_cast<QUmlNamedElement *>(ownedMember));
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedMember));

        // Adjust opposite property
        Q_Q(QUmlNamespace);
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(ownedMember->d_func()))->setNamespace_(q);
    }
}

void QUmlNamespacePrivate::removeOwnedMember(QUmlNamedElement *ownedMember)
{
    // This is a read-only derived-union association end

    if (this->ownedMembers.contains(ownedMember)) {
        this->ownedMembers.remove(ownedMember);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(this))->removeMember(qwrappedobject_cast<QUmlNamedElement *>(ownedMember));
        (qwrappedobject_cast<QUmlElementPrivate *>(this))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(ownedMember));

        // Adjust opposite property
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(ownedMember->d_func()))->setNamespace_(0);
    }
}

/*!
    \class QUmlNamespace

    \inmodule QtUml

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.
 */

QUmlNamespace::QUmlNamespace(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlNamespacePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlNamespace::QUmlNamespace(QUmlNamespacePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlNamespace::~QUmlNamespace()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlNamespace::packageImports() const
{
    // This is a read-write association end

    Q_D(const QUmlNamespace);
    return d->packageImports;
}

void QUmlNamespace::addPackageImport(QUmlPackageImport *packageImport)
{
    // This is a read-write association end

    Q_D(QUmlNamespace);
    if (!d->packageImports.contains(packageImport)) {
        d->packageImports.insert(packageImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(packageImport));

        // Adjust opposite property
        packageImport->setImportingNamespace(this);
    }
}

void QUmlNamespace::removePackageImport(QUmlPackageImport *packageImport)
{
    // This is a read-write association end

    Q_D(QUmlNamespace);
    if (d->packageImports.contains(packageImport)) {
        d->packageImports.remove(packageImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(packageImport));

        // Adjust opposite property
        packageImport->setImportingNamespace(0);
    }
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlNamespace::members() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlNamespace);
    return d->members;
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::importedMembers() const
{
    // This is a read-only derived association end

    Q_D(const QUmlNamespace);
    QSet<QUmlPackageableElement *> importedMembers_;
    foreach (QUmlElementImport *elementImport, d->elementImports)
        importedMembers_.insert(elementImport->importedElement());
    foreach (QUmlPackageImport *packageImport, d->packageImports)
        if (packageImport->importedPackage())
            importedMembers_.unite(packageImport->importedPackage()->packagedElements());
    return importedMembers_;
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlNamespace::elementImports() const
{
    // This is a read-write association end

    Q_D(const QUmlNamespace);
    return d->elementImports;
}

void QUmlNamespace::addElementImport(QUmlElementImport *elementImport)
{
    // This is a read-write association end

    Q_D(QUmlNamespace);
    if (!d->elementImports.contains(elementImport)) {
        d->elementImports.insert(elementImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(elementImport));

        // Adjust opposite property
        elementImport->setImportingNamespace(this);
    }
}

void QUmlNamespace::removeElementImport(QUmlElementImport *elementImport)
{
    // This is a read-write association end

    Q_D(QUmlNamespace);
    if (d->elementImports.contains(elementImport)) {
        d->elementImports.remove(elementImport);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(elementImport));

        // Adjust opposite property
        elementImport->setImportingNamespace(0);
    }
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlNamespace::ownedRules() const
{
    // This is a read-write association end

    Q_D(const QUmlNamespace);
    return d->ownedRules;
}

void QUmlNamespace::addOwnedRule(QUmlConstraint *ownedRule)
{
    // This is a read-write association end

    Q_D(QUmlNamespace);
    if (!d->ownedRules.contains(ownedRule)) {
        d->ownedRules.insert(ownedRule);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedRule));

        // Adjust opposite property
        ownedRule->setContext(this);
    }
}

void QUmlNamespace::removeOwnedRule(QUmlConstraint *ownedRule)
{
    // This is a read-write association end

    Q_D(QUmlNamespace);
    if (d->ownedRules.contains(ownedRule)) {
        d->ownedRules.remove(ownedRule);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(ownedRule));

        // Adjust opposite property
        ownedRule->setContext(0);
    }
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlNamespace::ownedMembers() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlNamespace);
    return d->ownedMembers;
}

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    qWarning("QUmlNamespace::excludeCollisions: operation to be implemented");
    Q_UNUSED(imps);

    return QSet<QUmlPackageableElement *>(); // change here to your derived return
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlNamespace::getNamesOfMember(const QUmlNamedElement *element) const
{
    qWarning("QUmlNamespace::getNamesOfMember: operation to be implemented");
    Q_UNUSED(element);

    return QSet<QString>(); // change here to your derived return
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    qWarning("QUmlNamespace::importMembers: operation to be implemented");
    Q_UNUSED(imps);

    return QSet<QUmlPackageableElement *>(); // change here to your derived return
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlNamespace::membersAreDistinguishable() const
{
    qWarning("QUmlNamespace::membersAreDistinguishable: operation to be implemented");

    return bool(); // change here to your derived return
}

void QUmlNamespace::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the PackageImports owned by the Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("packageImports")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlPackageImport::importingNamespace");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("members")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("members")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("members")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("members")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("members")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("members")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::members");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("importedMembers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the ElementImports owned by the Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("elementImports")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlElementImport::importingNamespace");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies a set of Constraints owned by this Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedRules")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlConstraint::context");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A collection of NamedElements owned by the Namespace.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::members QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlNamespace")][QString::fromLatin1("ownedMembers")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlNamedElement::namespace");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlnamespace.cpp"

