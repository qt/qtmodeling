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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlNamespace

    \inmodule QtUml

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.

    \b {QUmlNamespace is an abstract class.}
 */

/*!
    Creates a new QUmlNamespace.
*/
QUmlNamespace::QUmlNamespace()
{
}

/*!
    Returns a deep-copied clone of the QUmlNamespace.
*/
QModelingElement *QUmlNamespace::clone() const
{
    QUmlNamespace *c = new QUmlNamespace;
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    foreach (QUmlDependency *element, clientDependencies())
        c->addClientDependency(dynamic_cast<QUmlDependency *>(element->clone()));
    c->setName(name());
    if (nameExpression())
        c->setNameExpression(dynamic_cast<QUmlStringExpression *>(nameExpression()->clone()));
    c->setVisibility(visibility());
    foreach (QUmlElementImport *element, elementImports())
        c->addElementImport(dynamic_cast<QUmlElementImport *>(element->clone()));
    foreach (QUmlConstraint *element, ownedRules())
        c->addOwnedRule(dynamic_cast<QUmlConstraint *>(element->clone()));
    foreach (QUmlPackageImport *element, packageImports())
        c->addPackageImport(dynamic_cast<QUmlPackageImport *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    References the ElementImports owned by the Namespace.

    \sa addElementImport(), removeElementImport()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlElementImport::importingNamespace().
 */
const QSet<QUmlElementImport *> QUmlNamespace::elementImports() const
{
    // This is a read-write association end

    return _elementImports;
}

/*!
    Adds \a elementImport to elementImports.

    \sa elementImports(), removeElementImport()
 */
void QUmlNamespace::addElementImport(QUmlElementImport *elementImport)
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

/*!
    Removes \a elementImport from elementImports.

    \sa elementImports(), addElementImport()
 */
void QUmlNamespace::removeElementImport(QUmlElementImport *elementImport)
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

    \b {This is a read-only derived property.}

    \b {Subsetted property(ies):} QUmlNamespace::members().
 */
const QSet<QUmlPackageableElement *> QUmlNamespace::importedMembers() const
{
    // This is a read-only derived association end

    QSet<QUmlPackageableElement *> importedMembers_;
    foreach (QUmlElementImport *elementImport, _elementImports)
        importedMembers_.insert(elementImport->importedElement());
    foreach (QUmlPackageImport *packageImport, _packageImports)
        if (packageImport->importedPackage())
            importedMembers_.unite(packageImport->importedPackage()->packagedElements());
    return importedMembers_;
}

/*!
    Adds \a importedMember to importedMembers.

    \sa importedMembers(), removeImportedMember()
 */
void QUmlNamespace::addImportedMember(QUmlPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("QUmlNamespace::addImportedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(importedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addMember(importedMember);
    }
}

/*!
    Removes \a importedMember from importedMembers.

    \sa importedMembers(), addImportedMember()
 */
void QUmlNamespace::removeImportedMember(QUmlPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("QUmlNamespace::removeImportedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(importedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeMember(importedMember);
    }
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.

    \b {This is a read-only derived union property.}
 */
const QSet<QUmlNamedElement *> QUmlNamespace::members() const
{
    // This is a read-only derived union association end

    return _members;
}

/*!
    Adds \a member to members.

    \sa members(), removeMember()
 */
void QUmlNamespace::addMember(QUmlNamedElement *member)
{
    // This is a read-only derived union association end

    if (!_members.contains(member)) {
        _members.insert(member);
        if (member && member->asQModelingObject() && this->asQModelingObject())
            QObject::connect(member->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeMember(QObject *)));
    }
}

/*!
    Removes \a member from members.

    \sa members(), addMember()
 */
void QUmlNamespace::removeMember(QUmlNamedElement *member)
{
    // This is a read-only derived union association end

    if (_members.contains(member)) {
        _members.remove(member);
    }
}

/*!
    A collection of NamedElements owned by the Namespace.

    \b {This is a read-only derived union property.}

    \b {Subsetted property(ies):} QUmlNamespace::members(), QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlNamedElement::namespace_().
 */
const QSet<QUmlNamedElement *> QUmlNamespace::ownedMembers() const
{
    // This is a read-only derived union association end

    return _ownedMembers;
}

/*!
    Adds \a ownedMember to ownedMembers.

    \sa ownedMembers(), removeOwnedMember()
 */
void QUmlNamespace::addOwnedMember(QUmlNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (!_ownedMembers.contains(ownedMember)) {
        _ownedMembers.insert(ownedMember);
        if (ownedMember && ownedMember->asQModelingObject() && this->asQModelingObject())
            QObject::connect(ownedMember->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeOwnedMember(QObject *)));
        ownedMember->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        addMember(ownedMember);
        addOwnedElement(ownedMember);

        // Adjust opposite properties
        if (ownedMember) {
            ownedMember->setNamespace(this);
        }
    }
}

/*!
    Removes \a ownedMember from ownedMembers.

    \sa ownedMembers(), addOwnedMember()
 */
void QUmlNamespace::removeOwnedMember(QUmlNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (_ownedMembers.contains(ownedMember)) {
        _ownedMembers.remove(ownedMember);
        if (ownedMember->asQModelingObject())
            ownedMember->asQModelingObject()->setParent(0);

        // Adjust subsetted properties
        removeMember(ownedMember);
        removeOwnedElement(ownedMember);

        // Adjust opposite properties
        if (ownedMember) {
            ownedMember->setNamespace(0);
        }
    }
}

/*!
    Specifies a set of Constraints owned by this Namespace.

    \sa addOwnedRule(), removeOwnedRule()

    \b {Subsetted property(ies):} QUmlNamespace::ownedMembers().

    \b {Opposite property(ies):} QUmlConstraint::context().
 */
const QSet<QUmlConstraint *> QUmlNamespace::ownedRules() const
{
    // This is a read-write association end

    return _ownedRules;
}

/*!
    Adds \a ownedRule to ownedRules.

    \sa ownedRules(), removeOwnedRule()
 */
void QUmlNamespace::addOwnedRule(QUmlConstraint *ownedRule)
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

/*!
    Removes \a ownedRule from ownedRules.

    \sa ownedRules(), addOwnedRule()
 */
void QUmlNamespace::removeOwnedRule(QUmlConstraint *ownedRule)
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

    \sa addPackageImport(), removePackageImport()

    \b {Subsetted property(ies):} QUmlElement::ownedElements().

    \b {Opposite property(ies):} QUmlPackageImport::importingNamespace().
 */
const QSet<QUmlPackageImport *> QUmlNamespace::packageImports() const
{
    // This is a read-write association end

    return _packageImports;
}

/*!
    Adds \a packageImport to packageImports.

    \sa packageImports(), removePackageImport()
 */
void QUmlNamespace::addPackageImport(QUmlPackageImport *packageImport)
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

/*!
    Removes \a packageImport from packageImports.

    \sa packageImports(), addPackageImport()
 */
void QUmlNamespace::removePackageImport(QUmlPackageImport *packageImport)
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
QSet<QUmlPackageableElement *> QUmlNamespace::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    qWarning("QUmlNamespace::excludeCollisions(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<QUmlPackageableElement *> ();
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlNamespace::getNamesOfMember(QUmlNamedElement *element) const
{
    qWarning("QUmlNamespace::getNamesOfMember(): to be implemented (operation)");

    Q_UNUSED(element);
    return QSet<QString> ();
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    qWarning("QUmlNamespace::importMembers(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<QUmlPackageableElement *> ();
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlNamespace::membersAreDistinguishable() const
{
    qWarning("QUmlNamespace::membersAreDistinguishable(): to be implemented (operation)");

    return bool ();
}

QT_END_NAMESPACE

