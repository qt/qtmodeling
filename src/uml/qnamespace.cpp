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
#include "qelement_p.h"
#include "qelement_p.h"
#include "qelement_p.h"

#include <QtUml/QPackageImport>
#include <QtUml/QConstraint>
#include <QtUml/QElementImport>
#include <QtUml/QPackageableElement>

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

/*!
    \class QNamespace

    \inmodule QtUml

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.
 */

QNamespace::QNamespace()
    : d_ptr(new QNamespacePrivate)
{
}

QNamespace::~QNamespace()
{
    delete d_ptr;
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QNamespace::packageImports() const
{
    return d_ptr->packageImports;
}

void QNamespace::addPackageImport(const QPackageImport *packageImport)
{
    d_ptr->packageImports->insert(const_cast<QPackageImport *>(packageImport));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->insert(const_cast<QPackageImport *>(packageImport));
}

void QNamespace::removePackageImport(const QPackageImport *packageImport)
{
    d_ptr->packageImports->remove(const_cast<QPackageImport *>(packageImport));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->remove(const_cast<QPackageImport *>(packageImport));
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QNamespace::members() const
{
    return d_ptr->members;
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QPackageableElement *> *QNamespace::importedMembers() const
{
    qWarning("QNamespace::importedMembers: to be implemented (this is a derived associationend)");
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QNamespace::elementImports() const
{
    return d_ptr->elementImports;
}

void QNamespace::addElementImport(const QElementImport *elementImport)
{
    d_ptr->elementImports->insert(const_cast<QElementImport *>(elementImport));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->insert(const_cast<QElementImport *>(elementImport));
}

void QNamespace::removeElementImport(const QElementImport *elementImport)
{
    d_ptr->elementImports->remove(const_cast<QElementImport *>(elementImport));
    // Adjust subsetted property(ies)
    QElement::d_ptr->ownedElements->remove(const_cast<QElementImport *>(elementImport));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QNamespace::ownedRules() const
{
    return d_ptr->ownedRules;
}

void QNamespace::addOwnedRule(const QConstraint *ownedRule)
{
    d_ptr->ownedRules->insert(const_cast<QConstraint *>(ownedRule));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->insert(const_cast<QConstraint *>(ownedRule));
}

void QNamespace::removeOwnedRule(const QConstraint *ownedRule)
{
    d_ptr->ownedRules->remove(const_cast<QConstraint *>(ownedRule));
    // Adjust subsetted property(ies)
    QNamespace::d_ptr->ownedMembers->remove(const_cast<QConstraint *>(ownedRule));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QNamespace::ownedMembers() const
{
    return d_ptr->ownedMembers;
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

