/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qmultiplicityelement.h"

#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

class QMultiplicityElementPrivate
{
public:
    explicit QMultiplicityElementPrivate();
    virtual ~QMultiplicityElementPrivate();

    bool isOrdered;
    bool isUnique;
    QValueSpecification *lowerValue;
    QValueSpecification *upperValue;
};

QMultiplicityElementPrivate::QMultiplicityElementPrivate() :
    isOrdered(false),
    isUnique(true),
    lowerValue(0),
    upperValue(0)
{
}

QMultiplicityElementPrivate::~QMultiplicityElementPrivate()
{
}

/*!
    \class QMultiplicityElement

    \inmodule QtUml

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.
 */

QMultiplicityElement::QMultiplicityElement()
    : d_ptr(new QMultiplicityElementPrivate)
{
}

QMultiplicityElement::~QMultiplicityElement()
{
    delete d_ptr;
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QMultiplicityElement::isOrdered() const
{
    return d_ptr->isOrdered;
}

void QMultiplicityElement::setOrdered(bool isOrdered)
{
    d_ptr->isOrdered = isOrdered;
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QMultiplicityElement::isUnique() const
{
    return d_ptr->isUnique;
}

void QMultiplicityElement::setUnique(bool isUnique)
{
    d_ptr->isUnique = isUnique;
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QMultiplicityElement::lower() const
{
    qWarning("QMultiplicityElement::lower: to be implemented (this is a derived attribute)");
}

void QMultiplicityElement::setLower(qint32 lower)
{
    qWarning("QMultiplicityElement::setLower: to be implemented (this is a derived attribute)");
}

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QMultiplicityElement::upper() const
{
    qWarning("QMultiplicityElement::upper: to be implemented (this is a derived attribute)");
}

void QMultiplicityElement::setUpper(qint32 upper)
{
    qWarning("QMultiplicityElement::setUpper: to be implemented (this is a derived attribute)");
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QMultiplicityElement::lowerValue() const
{
    return d_ptr->lowerValue;
}

void QMultiplicityElement::setLowerValue(const QValueSpecification *lowerValue)
{
    d_ptr->lowerValue = const_cast<QValueSpecification *>(lowerValue);
}

/*!
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QMultiplicityElement::upperValue() const
{
    return d_ptr->upperValue;
}

void QMultiplicityElement::setUpperValue(const QValueSpecification *upperValue)
{
    d_ptr->upperValue = const_cast<QValueSpecification *>(upperValue);
}

/*!
    The operation compatibleWith takes another multiplicity as input. It checks if one multiplicity is compatible with another.
 */
bool QMultiplicityElement::compatibleWith(const QMultiplicityElement *other) const
{
    qWarning("QMultiplicityElement::compatibleWith: operation to be implemented");
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QMultiplicityElement::includesCardinality(qint32 C) const
{
    qWarning("QMultiplicityElement::includesCardinality: operation to be implemented");
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QMultiplicityElement::includesMultiplicity(const QMultiplicityElement *M) const
{
    qWarning("QMultiplicityElement::includesMultiplicity: operation to be implemented");
}

/*!
    The operation is determines if the upper and lower bound of the ranges are the ones given.
 */
bool QMultiplicityElement::is(qint32 lowerbound, qint32 upperbound) const
{
    qWarning("QMultiplicityElement::is: operation to be implemented");
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QMultiplicityElement::isMultivalued() const
{
    qWarning("QMultiplicityElement::isMultivalued: operation to be implemented");
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
qint32 QMultiplicityElement::lowerBound() const
{
    qWarning("QMultiplicityElement::lowerBound: operation to be implemented");
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
//qint32 QMultiplicityElement::upperBound() const
//{
//    qWarning("QMultiplicityElement::upperBound: operation to be implemented");
//}

QT_END_NAMESPACE_QTUML
