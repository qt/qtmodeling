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
#include "qmultiplicityelement_p.h"
#include "qelement_p.h"

#include <QtUml/QValueSpecification>

QT_BEGIN_NAMESPACE_QTUML

QMultiplicityElementPrivate::QMultiplicityElementPrivate() :
    isUnique(true),
    isOrdered(false),
    upperValue(0),
    lowerValue(0)
{
}

QMultiplicityElementPrivate::~QMultiplicityElementPrivate()
{
}

void QMultiplicityElementPrivate::setUnique(bool isUnique)
{
    this->isUnique = isUnique;
}

void QMultiplicityElementPrivate::setOrdered(bool isOrdered)
{
    this->isOrdered = isOrdered;
}

void QMultiplicityElementPrivate::setUpperValue(QValueSpecification *upperValue)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->upperValue);

    this->upperValue = upperValue;

    // Adjust subsetted property(ies)
    addOwnedElement(upperValue);
}

void QMultiplicityElementPrivate::setLowerValue(QValueSpecification *lowerValue)
{
    // Adjust subsetted property(ies)
    removeOwnedElement(this->lowerValue);

    this->lowerValue = lowerValue;

    // Adjust subsetted property(ies)
    addOwnedElement(lowerValue);
}

/*!
    \class QMultiplicityElement

    \inmodule QtUml

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.
 */

QMultiplicityElement::QMultiplicityElement()
{
}

QMultiplicityElement::~QMultiplicityElement()
{
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
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QMultiplicityElement::isUnique() const
{
    QTUML_D(const QMultiplicityElement);
    return d->isUnique;
}

void QMultiplicityElement::setUnique(bool isUnique)
{
    QTUML_D(QMultiplicityElement);
    if (d->isUnique != isUnique) {
        d->setUnique(isUnique);
    }
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QMultiplicityElement::isOrdered() const
{
    QTUML_D(const QMultiplicityElement);
    return d->isOrdered;
}

void QMultiplicityElement::setOrdered(bool isOrdered)
{
    QTUML_D(QMultiplicityElement);
    if (d->isOrdered != isOrdered) {
        d->setOrdered(isOrdered);
    }
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
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QMultiplicityElement::upperValue() const
{
    QTUML_D(const QMultiplicityElement);
    return d->upperValue;
}

void QMultiplicityElement::setUpperValue(QValueSpecification *upperValue)
{
    QTUML_D(QMultiplicityElement);
    if (d->upperValue != upperValue) {
        d->setUpperValue(upperValue);
    }
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QMultiplicityElement::lowerValue() const
{
    QTUML_D(const QMultiplicityElement);
    return d->lowerValue;
}

void QMultiplicityElement::setLowerValue(QValueSpecification *lowerValue)
{
    QTUML_D(QMultiplicityElement);
    if (d->lowerValue != lowerValue) {
        d->setLowerValue(lowerValue);
    }
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

