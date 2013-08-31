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
#include "umlpackage_p.h"

#include "private/umlnamedelement_p.h"
#include "private/umlpackagemerge_p.h"
#include "private/umlprofile_p.h"
#include "private/umlprofileapplication_p.h"
#include "private/umlstereotype_p.h"
#include "private/umltype_p.h"

UmlPackage::UmlPackage() :
    _nestingPackage(0)
{
}

// OWNED ATTRIBUTES

QString UmlPackage::URI() const
{
    // This is a read-write property

    return _URI;
}

void UmlPackage::setURI(QString URI)
{
    // This is a read-write property

    if (_URI != URI) {
        _URI = URI;
    }
}

const QSet<UmlPackage *> UmlPackage::nestedPackage() const
{
    // This is a read-write derived association end

    qWarning("UmlPackage::nestedPackage(): to be implemented (this is a derived association end)");

    return QSet<UmlPackage *>();
}

void UmlPackage::addNestedPackage(UmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("UmlPackage::nestedPackage(): to be implemented (this is a derived association end)");
    Q_UNUSED(nestedPackage);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addPackagedElement(nestedPackage);
    }
}

void UmlPackage::removeNestedPackage(UmlPackage *nestedPackage)
{
    // This is a read-write derived association end

    qWarning("UmlPackage::nestedPackage(): to be implemented (this is a derived association end)");
    Q_UNUSED(nestedPackage);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removePackagedElement(nestedPackage);
    }
}

UmlPackage *UmlPackage::nestingPackage() const
{
    // This is a read-write association end

    return _nestingPackage;
}

void UmlPackage::setNestingPackage(UmlPackage *nestingPackage)
{
    // This is a read-write association end

    if (_nestingPackage != nestingPackage) {
        _nestingPackage = nestingPackage;
    }
}

const QSet<UmlStereotype *> UmlPackage::ownedStereotype() const
{
    // This is a read-only derived association end

    qWarning("UmlPackage::ownedStereotype(): to be implemented (this is a derived association end)");

    return QSet<UmlStereotype *>();
}

void UmlPackage::addOwnedStereotype(UmlStereotype *ownedStereotype)
{
    // This is a read-only derived association end

    qWarning("UmlPackage::ownedStereotype(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedStereotype);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addPackagedElement(ownedStereotype);
    }
}

void UmlPackage::removeOwnedStereotype(UmlStereotype *ownedStereotype)
{
    // This is a read-only derived association end

    qWarning("UmlPackage::ownedStereotype(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedStereotype);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removePackagedElement(ownedStereotype);
    }
}

const QSet<UmlType *> UmlPackage::ownedType() const
{
    // This is a read-write derived association end

    qWarning("UmlPackage::ownedType(): to be implemented (this is a derived association end)");

    return QSet<UmlType *>();
}

void UmlPackage::addOwnedType(UmlType *ownedType)
{
    // This is a read-write derived association end

    qWarning("UmlPackage::ownedType(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        addPackagedElement(ownedType);

        // Adjust opposite properties
        if (ownedType) {
            ownedType->setPackage(this);
        }
    }
}

void UmlPackage::removeOwnedType(UmlType *ownedType)
{
    // This is a read-write derived association end

    qWarning("UmlPackage::ownedType(): to be implemented (this is a derived association end)");
    Q_UNUSED(ownedType);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>

        // Adjust subsetted properties
        removePackagedElement(ownedType);

        // Adjust opposite properties
        if (ownedType) {
            ownedType->setPackage(0);
        }
    }
}

const QSet<UmlPackageMerge *> UmlPackage::packageMerge() const
{
    // This is a read-write association end

    return _packageMerge;
}

void UmlPackage::addPackageMerge(UmlPackageMerge *packageMerge)
{
    // This is a read-write association end

    if (!_packageMerge.contains(packageMerge)) {
        _packageMerge.insert(packageMerge);

        // Adjust subsetted properties
        addOwnedElement(packageMerge);

        // Adjust opposite properties
        if (packageMerge) {
            packageMerge->setReceivingPackage(this);
        }
    }
}

void UmlPackage::removePackageMerge(UmlPackageMerge *packageMerge)
{
    // This is a read-write association end

    if (_packageMerge.contains(packageMerge)) {
        _packageMerge.remove(packageMerge);

        // Adjust subsetted properties
        removeOwnedElement(packageMerge);

        // Adjust opposite properties
        if (packageMerge) {
            packageMerge->setReceivingPackage(0);
        }
    }
}

const QSet<UmlPackageableElement *> UmlPackage::packagedElement() const
{
    // This is a read-write association end

    return _packagedElement;
}

void UmlPackage::addPackagedElement(UmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (!_packagedElement.contains(packagedElement)) {
        _packagedElement.insert(packagedElement);

        // Adjust subsetted properties
        addOwnedMember(packagedElement);
    }
}

void UmlPackage::removePackagedElement(UmlPackageableElement *packagedElement)
{
    // This is a read-write association end

    if (_packagedElement.contains(packagedElement)) {
        _packagedElement.remove(packagedElement);

        // Adjust subsetted properties
        removeOwnedMember(packagedElement);
    }
}

const QSet<UmlProfileApplication *> UmlPackage::profileApplication() const
{
    // This is a read-write association end

    return _profileApplication;
}

void UmlPackage::addProfileApplication(UmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    if (!_profileApplication.contains(profileApplication)) {
        _profileApplication.insert(profileApplication);

        // Adjust subsetted properties
        addOwnedElement(profileApplication);

        // Adjust opposite properties
        if (profileApplication) {
            profileApplication->setApplyingPackage(this);
        }
    }
}

void UmlPackage::removeProfileApplication(UmlProfileApplication *profileApplication)
{
    // This is a read-write association end

    if (_profileApplication.contains(profileApplication)) {
        _profileApplication.remove(profileApplication);

        // Adjust subsetted properties
        removeOwnedElement(profileApplication);

        // Adjust opposite properties
        if (profileApplication) {
            profileApplication->setApplyingPackage(0);
        }
    }
}

// OPERATIONS

QSet<UmlStereotype *> UmlPackage::allApplicableStereotypes(
    ) const
{
    qWarning("UmlPackage::allApplicableStereotypes(): to be implemented (operation)");

    return QSet<UmlStereotype *> ();
}

UmlProfile *UmlPackage::containingProfile(
    ) const
{
    qWarning("UmlPackage::containingProfile(): to be implemented (operation)");

    return 0;
}

bool UmlPackage::makesVisible(
    UmlNamedElement *el) const
{
    qWarning("UmlPackage::makesVisible(): to be implemented (operation)");

    Q_UNUSED(el);
    return bool ();
}

bool UmlPackage::mustBeOwned(
    ) const
{
    qWarning("UmlPackage::mustBeOwned(): to be implemented (operation)");

    return bool ();
}

QSet<UmlPackageableElement *> UmlPackage::visibleMembers(
    ) const
{
    qWarning("UmlPackage::visibleMembers(): to be implemented (operation)");

    return QSet<UmlPackageableElement *> ();
}

