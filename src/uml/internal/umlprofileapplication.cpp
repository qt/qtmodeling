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
#include "umlprofileapplication_p.h"

#include "private/umlpackage_p.h"
#include "private/umlprofile_p.h"

UmlProfileApplication::UmlProfileApplication() :
    _appliedProfile(0),
    _applyingPackage(0),
    _isStrict(false)
{
}

// OWNED ATTRIBUTES

UmlProfile *UmlProfileApplication::appliedProfile() const
{
    // This is a read-write association end

    return _appliedProfile;
}

void UmlProfileApplication::setAppliedProfile(UmlProfile *appliedProfile)
{
    // This is a read-write association end

    if (_appliedProfile != appliedProfile) {
        // Adjust subsetted properties
        removeTarget(_appliedProfile);

        _appliedProfile = appliedProfile;

        // Adjust subsetted properties
        if (appliedProfile) {
            addTarget(appliedProfile);
        }
    }
}

UmlPackage *UmlProfileApplication::applyingPackage() const
{
    // This is a read-write association end

    return _applyingPackage;
}

void UmlProfileApplication::setApplyingPackage(UmlPackage *applyingPackage)
{
    // This is a read-write association end

    if (_applyingPackage != applyingPackage) {
        // Adjust subsetted properties
        removeSource(_applyingPackage);

        _applyingPackage = applyingPackage;

        // Adjust subsetted properties
        setOwner(applyingPackage);
        if (applyingPackage) {
            addSource(applyingPackage);
        }
    }
}

bool UmlProfileApplication::isStrict() const
{
    // This is a read-write property

    return _isStrict;
}

void UmlProfileApplication::setStrict(bool isStrict)
{
    // This is a read-write property

    if (_isStrict != isStrict) {
        _isStrict = isStrict;
    }
}

