/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofmultiplicityelement.h"

#include <QtMof/QMofClass>
#include <QtMof/QMofComment>
#include <QtMof/QMofValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class QMofMultiplicityElement

    \inmodule QtMof

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.

    \b {QMofMultiplicityElement is an abstract class.}
 */

/*!
    Creates a new QMofMultiplicityElement.
*/
QMofMultiplicityElement::QMofMultiplicityElement() :
    _isOrdered(false),
    _isUnique(true),
    _lowerValue(0),
    _upperValue(0)
{
}

/*!
    Destroys the QMofMultiplicityElement.
 */
QMofMultiplicityElement::~QMofMultiplicityElement()
{
    QModelingElement::deleteQModelingObject();
}

/*!
    Returns a deep-copied clone of the QMofMultiplicityElement.
*/
QModelingElement *QMofMultiplicityElement::clone() const
{
    QMofMultiplicityElement *c = new QMofMultiplicityElement;
    foreach (QMofComment *element, ownedComments())
        c->addOwnedComment(dynamic_cast<QMofComment *>(element->clone()));
    c->setOrdered(isOrdered());
    c->setUnique(isUnique());
    if (lowerValue())
        c->setLowerValue(dynamic_cast<QMofValueSpecification *>(lowerValue()->clone()));
    if (upperValue())
        c->setUpperValue(dynamic_cast<QMofValueSpecification *>(upperValue()->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QMofMultiplicityElement::isOrdered() const
{
    // This is a read-write property

    return _isOrdered;
}

/*!
    Adjusts isOrdered to \a isOrdered.
 */
void QMofMultiplicityElement::setOrdered(bool isOrdered)
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
bool QMofMultiplicityElement::isUnique() const
{
    // This is a read-write property

    return _isUnique;
}

/*!
    Adjusts isUnique to \a isUnique.
 */
void QMofMultiplicityElement::setUnique(bool isUnique)
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
int QMofMultiplicityElement::lower() const
{
    // This is a read-write derived property

    qWarning("QMofMultiplicityElement::lower(): to be implemented (this is a derived property)");

    return int();
}

/*!
    Adjusts lower to \a lower.
 */
void QMofMultiplicityElement::setLower(int lower)
{
    // This is a read-write derived property

    qWarning("QMofMultiplicityElement::setLower(): to be implemented (this is a derived property)");
    Q_UNUSED(lower);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The specification of the lower bound for this multiplicity.

    \b {Subsetted property(ies):} QMofElement::ownedElements().
 */
QMofValueSpecification *QMofMultiplicityElement::lowerValue() const
{
    // This is a read-write association end

    return _lowerValue;
}

/*!
    Adjusts lowerValue to \a lowerValue.
 */
void QMofMultiplicityElement::setLowerValue(QMofValueSpecification *lowerValue)
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
QString QMofMultiplicityElement::upper() const
{
    // This is a read-write derived property

    qWarning("QMofMultiplicityElement::upper(): to be implemented (this is a derived property)");

    return QString();
}

/*!
    Adjusts upper to \a upper.
 */
void QMofMultiplicityElement::setUpper(QString upper)
{
    // This is a read-write derived property

    qWarning("QMofMultiplicityElement::setUpper(): to be implemented (this is a derived property)");
    Q_UNUSED(upper);

    if (false /* <derivedexclusion-criteria> */) {
        // <derived-code>
    }
}

/*!
    The specification of the upper bound for this multiplicity.

    \b {Subsetted property(ies):} QMofElement::ownedElements().
 */
QMofValueSpecification *QMofMultiplicityElement::upperValue() const
{
    // This is a read-write association end

    return _upperValue;
}

/*!
    Adjusts upperValue to \a upperValue.
 */
void QMofMultiplicityElement::setUpperValue(QMofValueSpecification *upperValue)
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
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QMofMultiplicityElement::includesCardinality(int C) const
{
    qWarning("QMofMultiplicityElement::includesCardinality(): to be implemented (operation)");

    Q_UNUSED(C);
    return bool ();
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QMofMultiplicityElement::includesMultiplicity(QMofMultiplicityElement *M) const
{
    qWarning("QMofMultiplicityElement::includesMultiplicity(): to be implemented (operation)");

    Q_UNUSED(M);
    return bool ();
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QMofMultiplicityElement::isMultivalued() const
{
    qWarning("QMofMultiplicityElement::isMultivalued(): to be implemented (operation)");

    return bool ();
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
int QMofMultiplicityElement::lowerBound() const
{
    qWarning("QMofMultiplicityElement::lowerBound(): to be implemented (operation)");

    return int ();
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
QString QMofMultiplicityElement::upperBound() const
{
    qWarning("QMofMultiplicityElement::upperBound(): to be implemented (operation)");

    return QString ();
}

QT_END_NAMESPACE

