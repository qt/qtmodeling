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

#include "qnamespace.h"
#include "qnamespace_p.h"
#include "qnamedelement_p.h"

#include <QtUml/QPackageImport>
#include <QtUml/QConstraint>
#include <QtUml/QElementImport>
#include <QtUml/QPackageableElement>
#include <QtUml/QPackage>

QT_BEGIN_NAMESPACE_QTUML

QNamespacePrivate::QNamespacePrivate() :
    packageImports(new QSet<QPackageImport *>),
    members(new QSet<QNamedElement *>),
    elementImports(new QSet<QElementImport *>),
    ownedRules(new QSet<QConstraint *>),
    ownedMembers(new QSet<QNamedElement *>)
{
}

QNamespacePrivate::~QNamespacePrivate()
{
    delete packageImports;
    delete members;
    delete elementImports;
    delete ownedRules;
    delete ownedMembers;
}

void QNamespacePrivate::addMember(QNamedElement *member)
{
    // This is a read-only derived-union association end

    if (!this->members->contains(member)) {
        this->members->insert(member);
    }
}

void QNamespacePrivate::removeMember(QNamedElement *member)
{
    // This is a read-only derived-union association end

    if (this->members->contains(member)) {
        this->members->remove(member);
    }
}

void QNamespacePrivate::addOwnedMember(QNamedElement *ownedMember)
{
    // This is a read-only derived-union association end

    if (!this->ownedMembers->contains(ownedMember)) {
        this->ownedMembers->insert(ownedMember);

        // Adjust subsetted property(ies)
        addMember(ownedMember);
        addOwnedElement(ownedMember);

        // Adjust opposite property
        QTUML_Q(QNamespace);
        (dynamic_cast<QNamedElementPrivate *>(ownedMember->d_umlptr))->setNamespace_(q);
    }
}

void QNamespacePrivate::removeOwnedMember(QNamedElement *ownedMember)
{
    // This is a read-only derived-union association end

    if (this->ownedMembers->contains(ownedMember)) {
        this->ownedMembers->remove(ownedMember);

        // Adjust subsetted property(ies)
        removeMember(ownedMember);
        removeOwnedElement(ownedMember);

        // Adjust opposite property
        QTUML_Q(QNamespace);
        (dynamic_cast<QNamedElementPrivate *>(ownedMember->d_umlptr))->setNamespace_(0);
    }
}

/*!
    \class QNamespace

    \inmodule QtUml

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.
 */

QNamespace::QNamespace()
{
}

QNamespace::~QNamespace()
{
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QNamespace::packageImports() const
{
    // This is a read-write association end

    QTUML_D(const QNamespace);
    return d->packageImports;
}

void QNamespace::addPackageImport(QPackageImport *packageImport)
{
    // This is a read-write association end

    QTUML_D(QNamespace);
    if (!d->packageImports->contains(packageImport)) {
        d->packageImports->insert(packageImport);

        // Adjust subsetted property(ies)
        d->addOwnedElement(packageImport);

        // Adjust opposite property
        packageImport->setImportingNamespace(this);

        // Adjust indirectly subsetted property(ies)
        // This is because importedMembers is derived (not derivedUnion) and subsets member
        foreach (QPackageableElement *packageableElement, *packageImport->importedPackage()->packagedElements())
            d->addMember(packageableElement);
    }
}

void QNamespace::removePackageImport(QPackageImport *packageImport)
{
    // This is a read-write association end

    QTUML_D(QNamespace);
    if (d->packageImports->contains(packageImport)) {
        d->packageImports->remove(packageImport);

        // Adjust subsetted property(ies)
        d->removeOwnedElement(packageImport);

        // Adjust opposite property
        packageImport->setImportingNamespace(0);

        // Adjust indirectly subsetted property(ies)
        // This is because importedMembers is derived (not derivedUnion) and subsets member
        foreach (QPackageableElement *packageableElement, *packageImport->importedPackage()->packagedElements())
            d->removeMember(packageableElement);
    }
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QNamespace::members() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QNamespace);
    return d->members;
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
    It is the caller's responsibility to delete the returned set.
 */
const QSet<QPackageableElement *> *QNamespace::importedMembers() const
{
    // This is a read-only derived association end

    QTUML_D(const QNamespace);
    QSet<QPackageableElement *> * importedMembers_ = new QSet<QPackageableElement *>;
    foreach (QElementImport *elementImport, *d->elementImports)
        importedMembers_->insert(elementImport->importedElement());
    foreach (QPackageImport *packageImport, *d->packageImports)
        importedMembers_->unite(*packageImport->importedPackage()->packagedElements());
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QNamespace::elementImports() const
{
    // This is a read-write association end

    QTUML_D(const QNamespace);
    return d->elementImports;
}

void QNamespace::addElementImport(QElementImport *elementImport)
{
    // This is a read-write association end

    QTUML_D(QNamespace);
    if (!d->elementImports->contains(elementImport)) {
        d->elementImports->insert(elementImport);

        // Adjust subsetted property(ies)
        d->addOwnedElement(elementImport);

        // Adjust opposite property
        elementImport->setImportingNamespace(this);
    }
}

void QNamespace::removeElementImport(QElementImport *elementImport)
{
    // This is a read-write association end

    QTUML_D(QNamespace);
    if (d->elementImports->contains(elementImport)) {
        d->elementImports->remove(elementImport);

        // Adjust subsetted property(ies)
        d->removeOwnedElement(elementImport);

        // Adjust opposite property
        elementImport->setImportingNamespace(0);
    }
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QNamespace::ownedRules() const
{
    // This is a read-write association end

    QTUML_D(const QNamespace);
    return d->ownedRules;
}

void QNamespace::addOwnedRule(QConstraint *ownedRule)
{
    // This is a read-write association end

    QTUML_D(QNamespace);
    if (!d->ownedRules->contains(ownedRule)) {
        d->ownedRules->insert(ownedRule);

        // Adjust subsetted property(ies)
        d->addOwnedMember(ownedRule);

        // Adjust opposite property
        ownedRule->setContext(this);
    }
}

void QNamespace::removeOwnedRule(QConstraint *ownedRule)
{
    // This is a read-write association end

    QTUML_D(QNamespace);
    if (d->ownedRules->contains(ownedRule)) {
        d->ownedRules->remove(ownedRule);

        // Adjust subsetted property(ies)
        d->removeOwnedMember(ownedRule);

        // Adjust opposite property
        ownedRule->setContext(0);
    }
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QNamespace::ownedMembers() const
{
    // This is a read-only derived-union association end

    QTUML_D(const QNamespace);
    return d->ownedMembers;
}

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
const QSet<QPackageableElement *> *QNamespace::excludeCollisions(const QSet<QPackageableElement *> *imps) const
{
    qWarning("QNamespace::excludeCollisions: operation to be implemented");
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
const QSet<QString> *QNamespace::getNamesOfMember(const QNamedElement *element) const
{
    qWarning("QNamespace::getNamesOfMember: operation to be implemented");
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
const QSet<QPackageableElement *> *QNamespace::importMembers(const QSet<QPackageableElement *> *imps) const
{
    qWarning("QNamespace::importMembers: operation to be implemented");
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QNamespace::membersAreDistinguishable() const
{
    qWarning("QNamespace::membersAreDistinguishable: operation to be implemented");
}

QT_END_NAMESPACE_QTUML

