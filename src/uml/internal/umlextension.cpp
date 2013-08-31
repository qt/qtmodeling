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
#include "umlextension_p.h"

#include "private/umlclass_p.h"
#include "private/umlextensionend_p.h"
#include "private/umlproperty_p.h"

UmlExtension::UmlExtension() :
    _ownedEnd(0)
{
}

// OWNED ATTRIBUTES

bool UmlExtension::isRequired() const
{
    // This is a read-only derived property

    qWarning("UmlExtension::isRequired(): to be implemented (this is a derived property)");

    return bool();
}

void UmlExtension::setRequired(bool isRequired)
{
    // This is a read-only derived property

    qWarning("UmlExtension::isRequired(): to be implemented (this is a derived property)");
    Q_UNUSED(isRequired);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlClass *UmlExtension::metaclass() const
{
    // This is a read-only derived association end

    qWarning("UmlExtension::metaclass(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlExtension::setMetaclass(UmlClass *metaclass)
{
    // This is a read-only derived association end

    qWarning("UmlExtension::metaclass(): to be implemented (this is a derived association end)");
    Q_UNUSED(metaclass);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlExtensionEnd *UmlExtension::ownedEnd() const
{
    // This is a read-write association end

    return _ownedEnd;
}

void UmlExtension::setOwnedEnd(UmlExtensionEnd *ownedEnd)
{
    // This is a read-write association end

    if (_ownedEnd != ownedEnd) {
        _ownedEnd = ownedEnd;
    }
}

// OPERATIONS

UmlProperty *UmlExtension::metaclassEnd(
    ) const
{
    qWarning("UmlExtension::metaclassEnd(): to be implemented (operation)");

    return 0;
}

