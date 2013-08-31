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
#include "umlopaqueexpression_p.h"

#include "private/umlbehavior_p.h"
#include "private/umlparameter_p.h"

UmlOpaqueExpression::UmlOpaqueExpression() :
    _behavior(0)
{
}

// OWNED ATTRIBUTES

UmlBehavior *UmlOpaqueExpression::behavior() const
{
    // This is a read-write association end

    return _behavior;
}

void UmlOpaqueExpression::setBehavior(UmlBehavior *behavior)
{
    // This is a read-write association end

    if (_behavior != behavior) {
        _behavior = behavior;
    }
}

const QList<QString> UmlOpaqueExpression::body() const
{
    // This is a read-write property

    return _body;
}

void UmlOpaqueExpression::addBody(QString body)
{
    // This is a read-write property

    if (!_body.contains(body)) {
        _body.append(body);
    }
}

void UmlOpaqueExpression::removeBody(QString body)
{
    // This is a read-write property

    if (_body.contains(body)) {
        _body.removeAll(body);
    }
}

const QList<QString> UmlOpaqueExpression::language() const
{
    // This is a read-write property

    return _language;
}

void UmlOpaqueExpression::addLanguage(QString language)
{
    // This is a read-write property

    if (!_language.contains(language)) {
        _language.append(language);
    }
}

void UmlOpaqueExpression::removeLanguage(QString language)
{
    // This is a read-write property

    if (_language.contains(language)) {
        _language.removeAll(language);
    }
}

UmlParameter *UmlOpaqueExpression::result() const
{
    // This is a read-only derived association end

    qWarning("UmlOpaqueExpression::result(): to be implemented (this is a derived association end)");

    return 0;
}

void UmlOpaqueExpression::setResult(UmlParameter *result)
{
    // This is a read-only derived association end

    qWarning("UmlOpaqueExpression::result(): to be implemented (this is a derived association end)");
    Q_UNUSED(result);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

// OPERATIONS

bool UmlOpaqueExpression::isIntegral(
    ) const
{
    qWarning("UmlOpaqueExpression::isIntegral(): to be implemented (operation)");

    return bool ();
}

bool UmlOpaqueExpression::isNonNegative(
    ) const
{
    qWarning("UmlOpaqueExpression::isNonNegative(): to be implemented (operation)");

    return bool ();
}

bool UmlOpaqueExpression::isPositive(
    ) const
{
    qWarning("UmlOpaqueExpression::isPositive(): to be implemented (operation)");

    return bool ();
}

int UmlOpaqueExpression::value(
    ) const
{
    qWarning("UmlOpaqueExpression::value(): to be implemented (operation)");

    return int ();
}

