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
#include "umlmultiplicityelement_p.h"

#include "private/umlvaluespecification_p.h"

UmlMultiplicityElement::UmlMultiplicityElement() :
    _isOrdered(false),
    _isUnique(true),
    _lowerValue(0),
    _upperValue(0)
{
}

// OWNED ATTRIBUTES

bool UmlMultiplicityElement::isOrdered() const
{
    // This is a read-write property

    return _isOrdered;
}

void UmlMultiplicityElement::setOrdered(bool isOrdered)
{
    // This is a read-write property

    if (_isOrdered != isOrdered) {
        _isOrdered = isOrdered;
    }
}

bool UmlMultiplicityElement::isUnique() const
{
    // This is a read-write property

    return _isUnique;
}

void UmlMultiplicityElement::setUnique(bool isUnique)
{
    // This is a read-write property

    if (_isUnique != isUnique) {
        _isUnique = isUnique;
    }
}

int UmlMultiplicityElement::lower() const
{
    // This is a read-write derived property

    qWarning("UmlMultiplicityElement::lower(): to be implemented (this is a derived property)");

    return int();
}

void UmlMultiplicityElement::setLower(int lower)
{
    // This is a read-write derived property

    qWarning("UmlMultiplicityElement::lower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlValueSpecification *UmlMultiplicityElement::lowerValue() const
{
    // This is a read-write association end

    return _lowerValue;
}

void UmlMultiplicityElement::setLowerValue(UmlValueSpecification *lowerValue)
{
    // This is a read-write association end

    if (_lowerValue != lowerValue) {
        // Adjust subsetted properties
        removeOwnedElement(_lowerValue);

        _lowerValue = lowerValue;

        // Adjust subsetted properties
        if (lowerValue) {
            addOwnedElement(lowerValue);
        }
    }
}

int UmlMultiplicityElement::upper() const
{
    // This is a read-write derived property

    qWarning("UmlMultiplicityElement::upper(): to be implemented (this is a derived property)");

    return int();
}

void UmlMultiplicityElement::setUpper(int upper)
{
    // This is a read-write derived property

    qWarning("UmlMultiplicityElement::upper(): to be implemented (this is a derived property)");
    Q_UNUSED(upper);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

UmlValueSpecification *UmlMultiplicityElement::upperValue() const
{
    // This is a read-write association end

    return _upperValue;
}

void UmlMultiplicityElement::setUpperValue(UmlValueSpecification *upperValue)
{
    // This is a read-write association end

    if (_upperValue != upperValue) {
        // Adjust subsetted properties
        removeOwnedElement(_upperValue);

        _upperValue = upperValue;

        // Adjust subsetted properties
        if (upperValue) {
            addOwnedElement(upperValue);
        }
    }
}

// OPERATIONS

bool UmlMultiplicityElement::compatibleWith(
    UmlMultiplicityElement *other) const
{
    qWarning("UmlMultiplicityElement::compatibleWith(): to be implemented (operation)");

    Q_UNUSED(other);
    return bool ();
}

bool UmlMultiplicityElement::includesCardinality(
    int C) const
{
    qWarning("UmlMultiplicityElement::includesCardinality(): to be implemented (operation)");

    Q_UNUSED(C);
    return bool ();
}

bool UmlMultiplicityElement::includesMultiplicity(
    UmlMultiplicityElement *M) const
{
    qWarning("UmlMultiplicityElement::includesMultiplicity(): to be implemented (operation)");

    Q_UNUSED(M);
    return bool ();
}

bool UmlMultiplicityElement::is(
    int lowerbound, int upperbound) const
{
    qWarning("UmlMultiplicityElement::is(): to be implemented (operation)");

    Q_UNUSED(lowerbound);
    Q_UNUSED(upperbound);
    return bool ();
}

bool UmlMultiplicityElement::isMultivalued(
    ) const
{
    qWarning("UmlMultiplicityElement::isMultivalued(): to be implemented (operation)");

    return bool ();
}

int UmlMultiplicityElement::lowerBound(
    ) const
{
    qWarning("UmlMultiplicityElement::lowerBound(): to be implemented (operation)");

    return int ();
}

int UmlMultiplicityElement::upperBound(
    ) const
{
    qWarning("UmlMultiplicityElement::upperBound(): to be implemented (operation)");

    return int ();
}

