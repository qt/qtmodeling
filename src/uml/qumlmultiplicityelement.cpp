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

#include <QtUml/QUmlComment>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlMultiplicityElement

    \inmodule QtUml

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.

    \b {QUmlMultiplicityElement is an abstract class.}
 */

/*!
    Creates a new QUmlMultiplicityElement.
*/
QUmlMultiplicityElement::QUmlMultiplicityElement() :
    _isOrdered(false),
    _isUnique(true),
    _lowerValue(0),
    _upperValue(0)
{
}

/*!
    Destroys the QUmlMultiplicityElement.
 */
QUmlMultiplicityElement::~QUmlMultiplicityElement()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QUmlMultiplicityElement.
*/
QModelingElement *QUmlMultiplicityElement::clone() const
{
    QUmlMultiplicityElement *c = new QUmlMultiplicityElement;
    c->asQModelingObject()->setObjectName(this->asQModelingObject()->objectName());
    c->asQModelingObject()->setProperty("role", this->asQModelingObject()->property("role"));
    foreach (QUmlComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QUmlComment *>(element->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QUmlValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QUmlValueSpecification *>(upperValue()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlMultiplicityElement::isOrdered() const
{
    // This is a read-write property

    return _isOrdered;
}

/*!
    Adjusts isOrdered to \a isOrdered.
 */
void QUmlMultiplicityElement::setOrdered(bool isOrdered)
{
    // This is a read-write property

    if (_isOrdered != isOrdered) {
        _isOrdered = isOrdered;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isOrdered");
    }
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlMultiplicityElement::isUnique() const
{
    // This is a read-write property

    return _isUnique;
}

/*!
    Adjusts isUnique to \a isUnique.
 */
void QUmlMultiplicityElement::setUnique(bool isUnique)
{
    // This is a read-write property

    if (_isUnique != isUnique) {
        _isUnique = isUnique;
        _qModelingObject->modifiedResettableProperties() << QStringLiteral("isUnique");
    }
}

/*!
    Specifies the lower bound of the multiplicity interval.

    \b {This is a derived property.}
 */
int QUmlMultiplicityElement::lower() const
{
    // This is a read-write derived property

    qWarning("QUmlMultiplicityElement::lower(): to be implemented (this is a derived property)");

    return int();
}

/*!
    Adjusts lower to \a lower.
 */
void QUmlMultiplicityElement::setLower(int lower)
{
    // This is a read-write derived property

    qWarning("QUmlMultiplicityElement::setLower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The specification of the lower bound for this multiplicity.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlValueSpecification *QUmlMultiplicityElement::lowerValue() const
{
    // This is a read-write association end

    return _lowerValue;
}

/*!
    Adjusts lowerValue to \a lowerValue.
 */
void QUmlMultiplicityElement::setLowerValue(QUmlValueSpecification *lowerValue)
{
    // This is a read-write association end

    if (_lowerValue != lowerValue) {
        // Adjust subsetted properties
        removeOwnedElement(_lowerValue);

        _lowerValue = lowerValue;
        if (lowerValue && lowerValue->asQModelingObject() && this->asQModelingObject())
            QObject::connect(lowerValue->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setLowerValue()));
        lowerValue->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (lowerValue) {
            addOwnedElement(lowerValue);
        }
    }
}

/*!
    Specifies the upper bound of the multiplicity interval.

    \b {This is a derived property.}
 */
QString QUmlMultiplicityElement::upper() const
{
    // This is a read-write derived property

    qWarning("QUmlMultiplicityElement::upper(): to be implemented (this is a derived property)");

    return QString();
}

/*!
    Adjusts upper to \a upper.
 */
void QUmlMultiplicityElement::setUpper(QString upper)
{
    // This is a read-write derived property

    qWarning("QUmlMultiplicityElement::setUpper(): to be implemented (this is a derived property)");
    Q_UNUSED(upper);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The specification of the upper bound for this multiplicity.

    \b {Subsetted property(ies):} QUmlElement::ownedElements().
 */
QUmlValueSpecification *QUmlMultiplicityElement::upperValue() const
{
    // This is a read-write association end

    return _upperValue;
}

/*!
    Adjusts upperValue to \a upperValue.
 */
void QUmlMultiplicityElement::setUpperValue(QUmlValueSpecification *upperValue)
{
    // This is a read-write association end

    if (_upperValue != upperValue) {
        // Adjust subsetted properties
        removeOwnedElement(_upperValue);

        _upperValue = upperValue;
        if (upperValue && upperValue->asQModelingObject() && this->asQModelingObject())
            QObject::connect(upperValue->asQModelingObject(), SIGNAL(destroyed()), this->asQModelingObject(), SLOT(setUpperValue()));
        upperValue->asQModelingObject()->setParent(this->asQModelingObject());

        // Adjust subsetted properties
        if (upperValue) {
            addOwnedElement(upperValue);
        }
    }
}

// OPERATIONS

/*!
    The operation compatibleWith takes another multiplicity as input. It checks if one multiplicity is compatible with another.
 */
bool QUmlMultiplicityElement::compatibleWith(QUmlMultiplicityElement *other) const
{
    qWarning("QUmlMultiplicityElement::compatibleWith(): to be implemented (operation)");

    Q_UNUSED(other);
    return bool ();
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QUmlMultiplicityElement::includesCardinality(int C) const
{
    qWarning("QUmlMultiplicityElement::includesCardinality(): to be implemented (operation)");

    Q_UNUSED(C);
    return bool ();
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QUmlMultiplicityElement::includesMultiplicity(QUmlMultiplicityElement *M) const
{
    qWarning("QUmlMultiplicityElement::includesMultiplicity(): to be implemented (operation)");

    Q_UNUSED(M);
    return bool ();
}

/*!
    The operation is determines if the upper and lower bound of the ranges are the ones given.
 */
bool QUmlMultiplicityElement::is(int lowerbound, int upperbound) const
{
    qWarning("QUmlMultiplicityElement::is(): to be implemented (operation)");

    Q_UNUSED(lowerbound);
    Q_UNUSED(upperbound);
    return bool ();
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QUmlMultiplicityElement::isMultivalued() const
{
    qWarning("QUmlMultiplicityElement::isMultivalued(): to be implemented (operation)");

    return bool ();
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
int QUmlMultiplicityElement::lowerBound() const
{
    qWarning("QUmlMultiplicityElement::lowerBound(): to be implemented (operation)");

    return int ();
}

/*!
    The query upperBoundOperation() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
QString QUmlMultiplicityElement::upperBoundOperation() const
{
    qWarning("QUmlMultiplicityElement::upperBoundOperation(): to be implemented (operation)");

    return QString ();
}

QT_END_NAMESPACE

