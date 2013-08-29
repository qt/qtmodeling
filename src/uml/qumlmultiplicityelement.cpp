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
#include "qumlmultiplicityelement.h"

#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlMultiplicityElement::QUmlMultiplicityElement(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

bool QUmlMultiplicityElement::isOrdered() const
{
    return _isOrdered;
}

void QUmlMultiplicityElement::setOrdered(bool isOrdered)
{
    UmlMultiplicityElement::setOrdered(isOrdered);
}

bool QUmlMultiplicityElement::isUnique() const
{
    return _isUnique;
}

void QUmlMultiplicityElement::setUnique(bool isUnique)
{
    UmlMultiplicityElement::setUnique(isUnique);
}

int QUmlMultiplicityElement::lower() const
{
    return UmlMultiplicityElement::lower();
}

void QUmlMultiplicityElement::setLower(int lower)
{
    UmlMultiplicityElement::setLower(lower);
}

QUmlValueSpecification *QUmlMultiplicityElement::lowerValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_lowerValue);
}

void QUmlMultiplicityElement::setLowerValue(QUmlValueSpecification *lowerValue)
{
    UmlMultiplicityElement::setLowerValue(lowerValue);
}

int QUmlMultiplicityElement::upper() const
{
    return UmlMultiplicityElement::upper();
}

void QUmlMultiplicityElement::setUpper(int upper)
{
    UmlMultiplicityElement::setUpper(upper);
}

QUmlValueSpecification *QUmlMultiplicityElement::upperValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_upperValue);
}

void QUmlMultiplicityElement::setUpperValue(QUmlValueSpecification *upperValue)
{
    UmlMultiplicityElement::setUpperValue(upperValue);
}

// Operations

bool QUmlMultiplicityElement::compatibleWith(QUmlMultiplicityElement *other) const
{
    return UmlMultiplicityElement::compatibleWith(other);
}

bool QUmlMultiplicityElement::includesCardinality(int C) const
{
    return UmlMultiplicityElement::includesCardinality(C);
}

bool QUmlMultiplicityElement::includesMultiplicity(QUmlMultiplicityElement *M) const
{
    return UmlMultiplicityElement::includesMultiplicity(M);
}

bool QUmlMultiplicityElement::is(int lowerbound, int upperbound) const
{
    return UmlMultiplicityElement::is(lowerbound, upperbound);
}

bool QUmlMultiplicityElement::isMultivalued() const
{
    return UmlMultiplicityElement::isMultivalued();
}

int QUmlMultiplicityElement::lowerBound() const
{
    return UmlMultiplicityElement::lowerBound();
}

int QUmlMultiplicityElement::upperBound() const
{
    return UmlMultiplicityElement::upperBound();
}

QT_END_NAMESPACE

