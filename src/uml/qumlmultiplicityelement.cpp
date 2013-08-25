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
#include "qumlmultiplicityelement_p.h"

#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlMultiplicityElementPrivate::QUmlMultiplicityElementPrivate() :
    isOrdered(false),
    isUnique(true),
    lower(1),
    lowerValue(0),
    upper(1),
    upperValue(0)
{
}

/*!
    \class QUmlMultiplicityElement

    \inmodule QtUml

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.
 */

QUmlMultiplicityElement::QUmlMultiplicityElement(bool create_d_ptr) :
    QUmlElement(false)
{
    if (create_d_ptr)
        set_d_ptr(new QUmlMultiplicityElementPrivate);
}

// Owned attributes

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlMultiplicityElement::isOrdered() const
{
    return bool();
}

void QUmlMultiplicityElement::setOrdered(bool isOrdered)
{
    Q_UNUSED(isOrdered);
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlMultiplicityElement::isUnique() const
{
    return bool();
}

void QUmlMultiplicityElement::setUnique(bool isUnique)
{
    Q_UNUSED(isUnique);
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
int QUmlMultiplicityElement::lower() const
{
    return int();
}

void QUmlMultiplicityElement::setLower(int lower)
{
    Q_UNUSED(lower);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlMultiplicityElement::lowerValue() const
{
    return 0;
}

void QUmlMultiplicityElement::setLowerValue(QUmlValueSpecification *lowerValue)
{
    Q_UNUSED(lowerValue);
}

/*!
    Specifies the upper bound of the multiplicity interval.
 */
int QUmlMultiplicityElement::upper() const
{
    return int();
}

void QUmlMultiplicityElement::setUpper(int upper)
{
    Q_UNUSED(upper);
}

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlMultiplicityElement::upperValue() const
{
    return 0;
}

void QUmlMultiplicityElement::setUpperValue(QUmlValueSpecification *upperValue)
{
    Q_UNUSED(upperValue);
}

// Operations

/*!
    The operation compatibleWith takes another multiplicity as input. It checks if one multiplicity is compatible with another.
 */
bool QUmlMultiplicityElement::compatibleWith(QUmlMultiplicityElement *other) const
{
    Q_UNUSED(other);
    return bool ();
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QUmlMultiplicityElement::includesCardinality(int C) const
{
    Q_UNUSED(C);
    return bool ();
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QUmlMultiplicityElement::includesMultiplicity(QUmlMultiplicityElement *M) const
{
    Q_UNUSED(M);
    return bool ();
}

/*!
    The operation is determines if the upper and lower bound of the ranges are the ones given.
 */
bool QUmlMultiplicityElement::is(int lowerbound, int upperbound) const
{
    Q_UNUSED(lowerbound);
    Q_UNUSED(upperbound);
    return bool ();
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QUmlMultiplicityElement::isMultivalued() const
{
    return bool ();
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
int QUmlMultiplicityElement::lowerBound() const
{
    return int ();
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
int QUmlMultiplicityElement::upperBound() const
{
    return int ();
}

QT_END_NAMESPACE

