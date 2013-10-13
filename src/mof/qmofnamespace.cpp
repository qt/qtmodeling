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
#include "qmofnamespace.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofConstraint>
#include <QtMof/QMofElement>
#include <QtMof/QMofElementImport>
#include <QtMof/QMofPackageableElement>
#include <QtMof/QMofPackageImport>

#include <QtMof/QMofPackage>

/*!
    \class QMofNamespace

    \inmodule QtMof

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.
 */
QMofNamespace::QMofNamespace()
{
}

QModelingElement *QMofNamespace::clone() const
{
    QMofNamespace *c = new QMofNamespace;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setName(name());
    c->setVisibility(visibility());
    foreach (QMofElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QMofElementImport *>(element->clone()));
    foreach (QMofConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QMofConstraint *>(element->clone()));
    foreach (QMofPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QMofPackageImport *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QMofElementImport *> QMofNamespace::elementImports() const
{
    // This is a read-write association end

    return _elementImports;
}

void QMofNamespace::addElementImport(QMofElementImport *elementImport)
{
    // This is a read-write association end

    if (!_elementImports.contains(elementImport)) {
        _elementImports.insert(elementImport);
        if (elementImport && elementImport->asQModelingObject() && this->asQModelingObject())
            QObject::connect(elementImport->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeElementImport(QObject *)));
        elementImport->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(elementImport);

        // Adjust opposite properties
        if (elementImport) {
            elementImport->setImportingNamespace(this);
        }
    }
}

void QMofNamespace::removeElementImport(QMofElementImport *elementImport)
{
    // This is a read-write association end

    if (_elementImports.contains(elementImport)) {
        _elementImports.remove(elementImport);
        if (elementImport->asQModelingObject())
            elementImport->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(elementImport);

        // Adjust opposite properties
        if (elementImport) {
            elementImport->setImportingNamespace(0);
        }
    }
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QMofPackageableElement *> QMofNamespace::importedMembers() const
{
    // This is a read-only derived association end

    QSet<QMofPackageableElement *> importedMembers_;
    foreach (QMofElementImport *elementImport, _elementImports)
        importedMembers_.insert(elementImport->importedElement());
    foreach (QMofPackageImport *packageImport, _packageImports)
        if (packageImport->importedPackage())
            importedMembers_.unite(packageImport->importedPackage()->packagedElements());
    return importedMembers_;
}

void QMofNamespace::addImportedMember(QMofPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("QMofNamespace::addImportedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(importedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addMember(importedMember);
    }
}

void QMofNamespace::removeImportedMember(QMofPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("QMofNamespace::removeImportedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(importedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeMember(importedMember);
    }
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QMofNamedElement *> QMofNamespace::members() const
{
    // This is a read-only derived union association end

    return _members;
}

void QMofNamespace::addMember(QMofNamedElement *member)
{
    // This is a read-only derived union association end

    if (!_members.contains(member)) {
        _members.insert(member);
        if (member && member->asQModelingObject() && this->asQModelingObject())
            QObject::connect(member->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeMember(QObject *)));
    }
}

void QMofNamespace::removeMember(QMofNamedElement *member)
{
    // This is a read-only derived union association end

    if (_members.contains(member)) {
        _members.remove(member);
    }
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QMofNamedElement *> QMofNamespace::ownedMembers() const
{
    // This is a read-only derived union association end

    return _ownedMembers;
}

void QMofNamespace::addOwnedMember(QMofNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (!_ownedMembers.contains(ownedMember)) {
        _ownedMembers.insert(ownedMember);
        if (ownedMember && ownedMember->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedMember->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedMember(QObject *)));
        ownedMember->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(ownedMember);
        addMember(ownedMember);

        // Adjust opposite properties
        if (ownedMember) {
            ownedMember->setNamespace(this);
        }
    }
}

void QMofNamespace::removeOwnedMember(QMofNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (_ownedMembers.contains(ownedMember)) {
        _ownedMembers.remove(ownedMember);
        if (ownedMember->asQModelingObject())
            ownedMember->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(ownedMember);
        removeMember(ownedMember);

        // Adjust opposite properties
        if (ownedMember) {
            ownedMember->setNamespace(0);
        }
    }
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QMofConstraint *> QMofNamespace::ownedRules() const
{
    // This is a read-write association end

    return _ownedRules;
}

void QMofNamespace::addOwnedRule(QMofConstraint *ownedRule)
{
    // This is a read-write association end

    if (!_ownedRules.contains(ownedRule)) {
        _ownedRules.insert(ownedRule);
        if (ownedRule && ownedRule->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedRule->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedRule(QObject *)));
        ownedRule->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedMember(ownedRule);

        // Adjust opposite properties
        if (ownedRule) {
            ownedRule->setContext(this);
        }
    }
}

void QMofNamespace::removeOwnedRule(QMofConstraint *ownedRule)
{
    // This is a read-write association end

    if (_ownedRules.contains(ownedRule)) {
        _ownedRules.remove(ownedRule);
        if (ownedRule->asQModelingObject())
            ownedRule->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedMember(ownedRule);

        // Adjust opposite properties
        if (ownedRule) {
            ownedRule->setContext(0);
        }
    }
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QMofPackageImport *> QMofNamespace::packageImports() const
{
    // This is a read-write association end

    return _packageImports;
}

void QMofNamespace::addPackageImport(QMofPackageImport *packageImport)
{
    // This is a read-write association end

    if (!_packageImports.contains(packageImport)) {
        _packageImports.insert(packageImport);
        if (packageImport && packageImport->asQModelingObject() && this->asQModelingObject())
            QObject::connect(packageImport->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removePackageImport(QObject *)));
        packageImport->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addOwnedElement(packageImport);

        // Adjust opposite properties
        if (packageImport) {
            packageImport->setImportingNamespace(this);
        }
    }
}

void QMofNamespace::removePackageImport(QMofPackageImport *packageImport)
{
    // This is a read-write association end

    if (_packageImports.contains(packageImport)) {
        _packageImports.remove(packageImport);
        if (packageImport->asQModelingObject())
            packageImport->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeOwnedElement(packageImport);

        // Adjust opposite properties
        if (packageImport) {
            packageImport->setImportingNamespace(0);
        }
    }
}

// OPERATIONS

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QMofPackageableElement *> QMofNamespace::excludeCollisions(QMofPackageableElement *imps) const
{
    qWarning("QMofNamespace::excludeCollisions(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<QMofPackageableElement *> ();
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QMofNamespace::getNamesOfMember(QMofNamedElement *element) const
{
    qWarning("QMofNamespace::getNamesOfMember(): to be implemented (operation)");

    Q_UNUSED(element);
    return QSet<QString> ();
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QMofPackageableElement *> QMofNamespace::importMembers(QMofPackageableElement *imps) const
{
    qWarning("QMofNamespace::importMembers(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<QMofPackageableElement *> ();
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QMofNamespace::membersAreDistinguishable() const
{
    qWarning("QMofNamespace::membersAreDistinguishable(): to be implemented (operation)");

    return bool ();
}

