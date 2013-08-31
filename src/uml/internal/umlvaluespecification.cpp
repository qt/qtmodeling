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
#include "umlvaluespecification_p.h"

#include "private/umlparameterableelement_p.h"

UmlValueSpecification::UmlValueSpecification()
{
}

// OPERATIONS

bool UmlValueSpecification::booleanValue(
    ) const
{
    qWarning("UmlValueSpecification::booleanValue(): to be implemented (operation)");

    return bool ();
}

int UmlValueSpecification::integerValue(
    ) const
{
    qWarning("UmlValueSpecification::integerValue(): to be implemented (operation)");

    return int ();
}

bool UmlValueSpecification::isCompatibleWith(
    UmlParameterableElement *p) const
{
    qWarning("UmlValueSpecification::isCompatibleWith(): to be implemented (operation)");

    Q_UNUSED(p);
    return bool ();
}

bool UmlValueSpecification::isComputable(
    ) const
{
    qWarning("UmlValueSpecification::isComputable(): to be implemented (operation)");

    return bool ();
}

bool UmlValueSpecification::isNull(
    ) const
{
    qWarning("UmlValueSpecification::isNull(): to be implemented (operation)");

    return bool ();
}

double UmlValueSpecification::realValue(
    ) const
{
    qWarning("UmlValueSpecification::realValue(): to be implemented (operation)");

    return double ();
}

QString UmlValueSpecification::stringValue(
    ) const
{
    qWarning("UmlValueSpecification::stringValue(): to be implemented (operation)");

    return QString ();
}

int UmlValueSpecification::unlimitedValue(
    ) const
{
    qWarning("UmlValueSpecification::unlimitedValue(): to be implemented (operation)");

    return int ();
}

