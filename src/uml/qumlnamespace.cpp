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
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlStringExpression>

/*!
    \class QUmlNamespace

    \inmodule QtUml

    \brief A namespace is an element in a model that contains a set of named elements that can be identified by name.
 */
QUmlNamespace::QUmlNamespace()
{
    setClassForProperty();
    setPropertyData();
}

QUmlNamespace::~QUmlNamespace()
{
}

QModelingObject *QUmlNamespace::clone() const
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
 */
const QSet<QUmlElementImport *> QUmlNamespace::elementImports() const
{
    // This is a read-write association end

    return _elementImports;
}

void QUmlNamespace::addElementImport(QUmlElementImport *elementImport)
{
    // This is a read-write association end

    if (!_elementImports.contains(elementImport)) {
        _elementImports.insert(elementImport);
        if (elementImport && elementImport->asQObject() && this->asQObject())
            QObject::connect(elementImport->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeElementImport(QObject *)));
        elementImport->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(elementImport);

        // Adjust opposite properties
        if (elementImport) {
            elementImport->setImportingNamespace(this);
        }
    }
}

void QUmlNamespace::removeElementImport(QUmlElementImport *elementImport)
{
    // This is a read-write association end

    if (_elementImports.contains(elementImport)) {
        _elementImports.remove(elementImport);
        if (elementImport->asQObject())
            elementImport->asQObject()->setParent(0);

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

void QUmlNamespace::addImportedMember(QUmlPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("UmlNamespace::addImportedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(importedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addMember(importedMember);
    }
}

void QUmlNamespace::removeImportedMember(QUmlPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("UmlNamespace::removeImportedMember(): to be implemented (this is a derived association end)");
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
const QSet<QUmlNamedElement *> QUmlNamespace::members() const
{
    // This is a read-only derived union association end

    return _members;
}

void QUmlNamespace::addMember(QUmlNamedElement *member)
{
    // This is a read-only derived union association end

    if (!_members.contains(member)) {
        _members.insert(member);
        if (member && member->asQObject() && this->asQObject())
            QObject::connect(member->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeMember(QObject *)));
    }
}

void QUmlNamespace::removeMember(QUmlNamedElement *member)
{
    // This is a read-only derived union association end

    if (_members.contains(member)) {
        _members.remove(member);
    }
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlNamespace::ownedMembers() const
{
    // This is a read-only derived union association end

    return _ownedMembers;
}

void QUmlNamespace::addOwnedMember(QUmlNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (!_ownedMembers.contains(ownedMember)) {
        _ownedMembers.insert(ownedMember);
        if (ownedMember && ownedMember->asQObject() && this->asQObject())
            QObject::connect(ownedMember->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedMember(QObject *)));
        ownedMember->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addMember(ownedMember);
        addOwnedElement(ownedMember);

        // Adjust opposite properties
        if (ownedMember) {
            ownedMember->setNamespace(this);
        }
    }
}

void QUmlNamespace::removeOwnedMember(QUmlNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (_ownedMembers.contains(ownedMember)) {
        _ownedMembers.remove(ownedMember);
        if (ownedMember->asQObject())
            ownedMember->asQObject()->setParent(0);

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
 */
const QSet<QUmlConstraint *> QUmlNamespace::ownedRules() const
{
    // This is a read-write association end

    return _ownedRules;
}

void QUmlNamespace::addOwnedRule(QUmlConstraint *ownedRule)
{
    // This is a read-write association end

    if (!_ownedRules.contains(ownedRule)) {
        _ownedRules.insert(ownedRule);
        if (ownedRule && ownedRule->asQObject() && this->asQObject())
            QObject::connect(ownedRule->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removeOwnedRule(QObject *)));
        ownedRule->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedMember(ownedRule);

        // Adjust opposite properties
        if (ownedRule) {
            ownedRule->setContext(this);
        }
    }
}

void QUmlNamespace::removeOwnedRule(QUmlConstraint *ownedRule)
{
    // This is a read-write association end

    if (_ownedRules.contains(ownedRule)) {
        _ownedRules.remove(ownedRule);
        if (ownedRule->asQObject())
            ownedRule->asQObject()->setParent(0);

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
const QSet<QUmlPackageImport *> QUmlNamespace::packageImports() const
{
    // This is a read-write association end

    return _packageImports;
}

void QUmlNamespace::addPackageImport(QUmlPackageImport *packageImport)
{
    // This is a read-write association end

    if (!_packageImports.contains(packageImport)) {
        _packageImports.insert(packageImport);
        if (packageImport && packageImport->asQObject() && this->asQObject())
            QObject::connect(packageImport->asQObject(), SIGNAL(destroyed(QObject*)), this->asQObject(), SLOT(removePackageImport(QObject *)));
        packageImport->asQObject()->setParent(this->asQObject());

        // Adjust subsetted properties
        addOwnedElement(packageImport);

        // Adjust opposite properties
        if (packageImport) {
            packageImport->setImportingNamespace(this);
        }
    }
}

void QUmlNamespace::removePackageImport(QUmlPackageImport *packageImport)
{
    // This is a read-write association end

    if (_packageImports.contains(packageImport)) {
        _packageImports.remove(packageImport);
        if (packageImport->asQObject())
            packageImport->asQObject()->setParent(0);

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
    qWarning("UmlNamespace::excludeCollisions(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<QUmlPackageableElement *> ();
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlNamespace::getNamesOfMember(QUmlNamedElement *element) const
{
    qWarning("UmlNamespace::getNamesOfMember(): to be implemented (operation)");

    Q_UNUSED(element);
    return QSet<QString> ();
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlNamespace::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    qWarning("UmlNamespace::importMembers(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<QUmlPackageableElement *> ();
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlNamespace::membersAreDistinguishable() const
{
    qWarning("UmlNamespace::membersAreDistinguishable(): to be implemented (operation)");

    return bool ();
}

void QUmlNamespace::setClassForProperty()
{
    _classForProperty[QStringLiteral("ownedComments")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("ownedElements")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("owner")] = QStringLiteral("QUmlElement");
    _classForProperty[QStringLiteral("clientDependencies")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("name")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("nameExpression")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("namespace_")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("qualifiedName")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("visibility")] = QStringLiteral("QUmlNamedElement");
    _classForProperty[QStringLiteral("elementImports")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("importedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("members")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedMembers")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("ownedRules")] = QStringLiteral("QUmlNamespace");
    _classForProperty[QStringLiteral("packageImports")] = QStringLiteral("QUmlNamespace");
}

void QUmlNamespace::setPropertyData()
{
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::DocumentationRole] = QStringLiteral("References the ElementImports owned by the Namespace.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("elementImports")][QtModeling::OppositeEndRole] = QStringLiteral("ElementImport-importingNamespace");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::DocumentationRole] = QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-member");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("importedMembers")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::AggregationRole] = QStringLiteral("none");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::DocumentationRole] = QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("members")][QtModeling::OppositeEndRole] = QStringLiteral("");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::IsDerivedRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::IsDerivedUnionRole] = true;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::DocumentationRole] = QStringLiteral("A collection of NamedElements owned by the Namespace.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-member Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedMembers")][QtModeling::OppositeEndRole] = QStringLiteral("NamedElement-namespace");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::DocumentationRole] = QStringLiteral("Specifies a set of Constraints owned by this Namespace.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("Namespace-ownedMember");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("ownedRules")][QtModeling::OppositeEndRole] = QStringLiteral("Constraint-context");

    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::AggregationRole] = QStringLiteral("composite");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::PropertyClassRole] = QStringLiteral("QUmlNamespace");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::IsDerivedRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::IsDerivedUnionRole] = false;
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::DocumentationRole] = QStringLiteral("References the PackageImports owned by the Namespace.");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::RedefinedPropertiesRole] = QStringLiteral("");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::SubsettedPropertiesRole] = QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement");
    QModelingObject::propertyDataHash[QStringLiteral("QUmlNamespace")][QStringLiteral("packageImports")][QtModeling::OppositeEndRole] = QStringLiteral("PackageImport-importingNamespace");

}

