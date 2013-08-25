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
#include "qumlnamespace.h"
#include "qumlnamespace_p.h"

#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>

QT_BEGIN_NAMESPACE

QUmlNamespacePrivate::QUmlNamespacePrivate()
{
}

/*!
    \class QUmlNamespace

    \inmodule QtUml

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.
 */

QUmlNamespace::QUmlNamespace(bool create_d_ptr) :
    QUmlNamedElement(false)
{
    if (create_d_ptr) {
        qDebug() << "QUmlNamespace::QUmlNamespace criando";
        set_d_ptr(new QUmlNamespacePrivate);
    }
}

// Owned attributes

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlNamespace::elementImport() const
{
    return QSet<QUmlElementImport *>();
}

void QUmlNamespace::addElementImport(QSet<QUmlElementImport *> elementImport)
{
    Q_UNUSED(elementImport);
}

void QUmlNamespace::removeElementImport(QSet<QUmlElementImport *> elementImport)
{
    Q_UNUSED(elementImport);
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::importedMember() const
{
    return QSet<QUmlPackageableElement *>();
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlNamespace::member() const
{
    return QSet<QUmlNamedElement *>();
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlNamespace::ownedMember() const
{
    return QSet<QUmlNamedElement *>();
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlNamespace::ownedRule() const
{
    return QSet<QUmlConstraint *>();
}

void QUmlNamespace::addOwnedRule(QSet<QUmlConstraint *> ownedRule)
{
    Q_UNUSED(ownedRule);
}

void QUmlNamespace::removeOwnedRule(QSet<QUmlConstraint *> ownedRule)
{
    Q_UNUSED(ownedRule);
}

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlNamespace::packageImport() const
{
    return QSet<QUmlPackageImport *>();
}

void QUmlNamespace::addPackageImport(QSet<QUmlPackageImport *> packageImport)
{
    Q_UNUSED(packageImport);
}

void QUmlNamespace::removePackageImport(QSet<QUmlPackageImport *> packageImport)
{
    Q_UNUSED(packageImport);
}

// Operations

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    Q_UNUSED(imps);
    return QSet<QUmlPackageableElement *> ();
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlNamespace::getNamesOfMember(QUmlNamedElement *element) const
{
    Q_UNUSED(element);
    return QSet<QString> ();
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    Q_UNUSED(imps);
    return QSet<QUmlPackageableElement *> ();
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlNamespace::membersAreDistinguishable() const
{
    return bool ();
}

QT_END_NAMESPACE

