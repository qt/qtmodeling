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
#include "qumlconnectorend.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlConnectorEnd

    \inmodule QtUml

    \brief A connector end is an endpoint of a connector, which attaches the connector to a connectable element. Each connector end is part of one connector.
 */

QUmlConnectorEnd::QUmlConnectorEnd(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlConnectorEnd::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlConnectorEnd::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlConnectorEnd::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [MultiplicityElement]

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlConnectorEnd::isOrdered() const
{
    return _isOrdered;
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlConnectorEnd::isUnique() const
{
    return _isUnique;
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
int QUmlConnectorEnd::lower() const
{
    return UmlMultiplicityElement::lower();
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlConnectorEnd::lowerValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_lowerValue);
}

/*!
    Specifies the upper bound of the multiplicity interval.
 */
int QUmlConnectorEnd::upper() const
{
    return UmlMultiplicityElement::upper();
}

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlConnectorEnd::upperValue() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_upperValue);
}

// OWNED ATTRIBUTES [ConnectorEnd]

/*!
    A derived association referencing the corresponding association end on the association which types the connector owing this connector end. This association is derived by selecting the association end at the same place in the ordering of association ends as this connector end.
 */
QUmlProperty *QUmlConnectorEnd::definingEnd() const
{
    return reinterpret_cast<QUmlProperty *>(UmlConnectorEnd::definingEnd());
}

/*!
    Indicates the role of the internal structure of a classifier with the port to which the connector end is attached.
 */
QUmlProperty *QUmlConnectorEnd::partWithPort() const
{
    return reinterpret_cast<QUmlProperty *>(_partWithPort);
}

/*!
    The connectable element attached at this connector end. When an instance of the containing classifier is created, a link may (depending on the multiplicities) be created to an instance of the classifier that types this connectable element.
 */
QUmlConnectableElement *QUmlConnectorEnd::role() const
{
    return reinterpret_cast<QUmlConnectableElement *>(_role);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlConnectorEnd::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlConnectorEnd::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

/*!
    The operation compatibleWith takes another multiplicity as input. It checks if one multiplicity is compatible with another.
 */
bool QUmlConnectorEnd::compatibleWith(QUmlMultiplicityElement *other) const
{
    return UmlMultiplicityElement::compatibleWith(other);
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QUmlConnectorEnd::includesCardinality(int C) const
{
    return UmlMultiplicityElement::includesCardinality(C);
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QUmlConnectorEnd::includesMultiplicity(QUmlMultiplicityElement *M) const
{
    return UmlMultiplicityElement::includesMultiplicity(M);
}

/*!
    The operation is determines if the upper and lower bound of the ranges are the ones given.
 */
bool QUmlConnectorEnd::is(int lowerbound, int upperbound) const
{
    return UmlMultiplicityElement::is(lowerbound, upperbound);
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QUmlConnectorEnd::isMultivalued() const
{
    return UmlMultiplicityElement::isMultivalued();
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
int QUmlConnectorEnd::lowerBound() const
{
    return UmlMultiplicityElement::lowerBound();
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
int QUmlConnectorEnd::upperBound() const
{
    return UmlMultiplicityElement::upperBound();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectorEnd::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlConnectorEnd::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlConnectorEnd::setOrdered(bool isOrdered)
{
    UmlMultiplicityElement::setOrdered(isOrdered);
}

void QUmlConnectorEnd::setUnique(bool isUnique)
{
    UmlMultiplicityElement::setUnique(isUnique);
}

void QUmlConnectorEnd::setLower(int lower)
{
    UmlMultiplicityElement::setLower(lower);
}

void QUmlConnectorEnd::setLowerValue(QUmlValueSpecification *lowerValue)
{
    UmlMultiplicityElement::setLowerValue(lowerValue);
}

void QUmlConnectorEnd::setUpper(int upper)
{
    UmlMultiplicityElement::setUpper(upper);
}

void QUmlConnectorEnd::setUpperValue(QUmlValueSpecification *upperValue)
{
    UmlMultiplicityElement::setUpperValue(upperValue);
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectorEnd]

void QUmlConnectorEnd::setPartWithPort(QUmlProperty *partWithPort)
{
    UmlConnectorEnd::setPartWithPort(partWithPort);
}

void QUmlConnectorEnd::setRole(QUmlConnectableElement *role)
{
    UmlConnectorEnd::setRole(role);
}

QT_END_NAMESPACE

