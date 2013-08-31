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
#include "umlnamespace_p.h"

#include "private/umlconstraint_p.h"
#include "private/umlelementimport_p.h"
#include "private/umlpackageableelement_p.h"
#include "private/umlpackageimport_p.h"

UmlNamespace::UmlNamespace()
{
}

// OWNED ATTRIBUTES

const QSet<UmlElementImport *> UmlNamespace::elementImport() const
{
    // This is a read-write association end

    return _elementImport;
}

void UmlNamespace::addElementImport(UmlElementImport *elementImport)
{
    // This is a read-write association end

    if (!_elementImport.contains(elementImport)) {
        _elementImport.insert(elementImport);

        // Adjust subsetted properties
        addOwnedElement(elementImport);

        // Adjust opposite properties
        if (elementImport) {
            elementImport->setImportingNamespace(this);
        }
    }
}

void UmlNamespace::removeElementImport(UmlElementImport *elementImport)
{
    // This is a read-write association end

    if (_elementImport.contains(elementImport)) {
        _elementImport.remove(elementImport);

        // Adjust subsetted properties
        removeOwnedElement(elementImport);

        // Adjust opposite properties
        if (elementImport) {
            elementImport->setImportingNamespace(0);
        }
    }
}

const QSet<UmlPackageableElement *> UmlNamespace::importedMember() const
{
    // This is a read-only derived association end

    qWarning("UmlNamespace::importedMember(): to be implemented (this is a derived association end)");

    return QSet<UmlPackageableElement *>();
}

void UmlNamespace::addImportedMember(UmlPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("UmlNamespace::importedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(importedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addMember(importedMember);
    }
}

void UmlNamespace::removeImportedMember(UmlPackageableElement *importedMember)
{
    // This is a read-only derived association end

    qWarning("UmlNamespace::importedMember(): to be implemented (this is a derived association end)");
    Q_UNUSED(importedMember);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removeMember(importedMember);
    }
}

const QSet<UmlNamedElement *> UmlNamespace::member() const
{
    // This is a read-only derived union association end

    return _member;
}

void UmlNamespace::addMember(UmlNamedElement *member)
{
    // This is a read-only derived union association end

    if (!_member.contains(member)) {
        _member.insert(member);
    }
}

void UmlNamespace::removeMember(UmlNamedElement *member)
{
    // This is a read-only derived union association end

    if (_member.contains(member)) {
        _member.remove(member);
    }
}

const QSet<UmlNamedElement *> UmlNamespace::ownedMember() const
{
    // This is a read-only derived union association end

    return _ownedMember;
}

void UmlNamespace::addOwnedMember(UmlNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (!_ownedMember.contains(ownedMember)) {
        _ownedMember.insert(ownedMember);

        // Adjust subsetted properties
        addMember(ownedMember);
        addOwnedElement(ownedMember);

        // Adjust opposite properties
        if (ownedMember) {
            ownedMember->setNamespace(this);
        }
    }
}

void UmlNamespace::removeOwnedMember(UmlNamedElement *ownedMember)
{
    // This is a read-only derived union association end

    if (_ownedMember.contains(ownedMember)) {
        _ownedMember.remove(ownedMember);

        // Adjust subsetted properties
        removeMember(ownedMember);
        removeOwnedElement(ownedMember);

        // Adjust opposite properties
        if (ownedMember) {
            ownedMember->setNamespace(0);
        }
    }
}

const QSet<UmlConstraint *> UmlNamespace::ownedRule() const
{
    // This is a read-write association end

    return _ownedRule;
}

void UmlNamespace::addOwnedRule(UmlConstraint *ownedRule)
{
    // This is a read-write association end

    if (!_ownedRule.contains(ownedRule)) {
        _ownedRule.insert(ownedRule);

        // Adjust subsetted properties
        addOwnedMember(ownedRule);

        // Adjust opposite properties
        if (ownedRule) {
            ownedRule->setContext(this);
        }
    }
}

void UmlNamespace::removeOwnedRule(UmlConstraint *ownedRule)
{
    // This is a read-write association end

    if (_ownedRule.contains(ownedRule)) {
        _ownedRule.remove(ownedRule);

        // Adjust subsetted properties
        removeOwnedMember(ownedRule);

        // Adjust opposite properties
        if (ownedRule) {
            ownedRule->setContext(0);
        }
    }
}

const QSet<UmlPackageImport *> UmlNamespace::packageImport() const
{
    // This is a read-write association end

    return _packageImport;
}

void UmlNamespace::addPackageImport(UmlPackageImport *packageImport)
{
    // This is a read-write association end

    if (!_packageImport.contains(packageImport)) {
        _packageImport.insert(packageImport);

        // Adjust subsetted properties
        addOwnedElement(packageImport);

        // Adjust opposite properties
        if (packageImport) {
            packageImport->setImportingNamespace(this);
        }
    }
}

void UmlNamespace::removePackageImport(UmlPackageImport *packageImport)
{
    // This is a read-write association end

    if (_packageImport.contains(packageImport)) {
        _packageImport.remove(packageImport);

        // Adjust subsetted properties
        removeOwnedElement(packageImport);

        // Adjust opposite properties
        if (packageImport) {
            packageImport->setImportingNamespace(0);
        }
    }
}

// OPERATIONS

QSet<UmlPackageableElement *> UmlNamespace::excludeCollisions(
    QSet<UmlPackageableElement *> imps) const
{
    qWarning("UmlNamespace::excludeCollisions(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<UmlPackageableElement *> ();
}

QSet<QString> UmlNamespace::getNamesOfMember(
    UmlNamedElement *element) const
{
    qWarning("UmlNamespace::getNamesOfMember(): to be implemented (operation)");

    Q_UNUSED(element);
    return QSet<QString> ();
}

QSet<UmlPackageableElement *> UmlNamespace::importMembers(
    QSet<UmlPackageableElement *> imps) const
{
    qWarning("UmlNamespace::importMembers(): to be implemented (operation)");

    Q_UNUSED(imps);
    return QSet<UmlPackageableElement *> ();
}

bool UmlNamespace::membersAreDistinguishable(
    ) const
{
    qWarning("UmlNamespace::membersAreDistinguishable(): to be implemented (operation)");

    return bool ();
}

