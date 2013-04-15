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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlMultiplicityElementPrivate::QUmlMultiplicityElementPrivate() :
    isUnique(true),
    isOrdered(false),
    upperValue(0),
    lowerValue(0)
{
}

QUmlMultiplicityElementPrivate::~QUmlMultiplicityElementPrivate()
{
}

/*!
    \class QUmlMultiplicityElement

    \inmodule QtUml

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.
 */

QUmlMultiplicityElement::QUmlMultiplicityElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlMultiplicityElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlMultiplicityElement::QUmlMultiplicityElement(QUmlMultiplicityElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlMultiplicityElement::~QUmlMultiplicityElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QUmlMultiplicityElement::upper() const
{
    // This is a read-write derived attribute

    qWarning("QUmlMultiplicityElement::upper: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

void QUmlMultiplicityElement::setUpper(qint32 upper)
{
    // This is a read-write derived attribute

    qWarning("QUmlMultiplicityElement::setUpper: to be implemented (this is a derived attribute)");
    Q_UNUSED(upper);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

void QUmlMultiplicityElement::unsetUpper()
{
    setUpper(1);
    Q_D(QUmlMultiplicityElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlMultiplicityElement::isUnique() const
{
    // This is a read-write attribute

    Q_D(const QUmlMultiplicityElement);
    return d->isUnique;
}

void QUmlMultiplicityElement::setUnique(bool isUnique)
{
    // This is a read-write attribute

    Q_D(QUmlMultiplicityElement);
    if (d->isUnique != isUnique) {
        d->isUnique = isUnique;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isUnique");
}

void QUmlMultiplicityElement::unsetUnique()
{
    setUnique(true);
    Q_D(QUmlMultiplicityElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlMultiplicityElement::isOrdered() const
{
    // This is a read-write attribute

    Q_D(const QUmlMultiplicityElement);
    return d->isOrdered;
}

void QUmlMultiplicityElement::setOrdered(bool isOrdered)
{
    // This is a read-write attribute

    Q_D(QUmlMultiplicityElement);
    if (d->isOrdered != isOrdered) {
        d->isOrdered = isOrdered;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isOrdered");
}

void QUmlMultiplicityElement::unsetOrdered()
{
    setOrdered(false);
    Q_D(QUmlMultiplicityElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QUmlMultiplicityElement::lower() const
{
    // This is a read-write derived attribute

    qWarning("QUmlMultiplicityElement::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

void QUmlMultiplicityElement::setLower(qint32 lower)
{
    // This is a read-write derived attribute

    qWarning("QUmlMultiplicityElement::setLower: to be implemented (this is a derived attribute)");
    Q_UNUSED(lower);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlMultiplicityElement::upperValue() const
{
    // This is a read-write association end

    Q_D(const QUmlMultiplicityElement);
    return d->upperValue;
}

void QUmlMultiplicityElement::setUpperValue(QUmlValueSpecification *upperValue)
{
    // This is a read-write association end

    Q_D(QUmlMultiplicityElement);
    if (d->upperValue != upperValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->upperValue));

        d->upperValue = upperValue;

        // Adjust subsetted property(ies)
        if (upperValue) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(upperValue));
        }
    }
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlMultiplicityElement::lowerValue() const
{
    // This is a read-write association end

    Q_D(const QUmlMultiplicityElement);
    return d->lowerValue;
}

void QUmlMultiplicityElement::setLowerValue(QUmlValueSpecification *lowerValue)
{
    // This is a read-write association end

    Q_D(QUmlMultiplicityElement);
    if (d->lowerValue != lowerValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->lowerValue));

        d->lowerValue = lowerValue;

        // Adjust subsetted property(ies)
        if (lowerValue) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(lowerValue));
        }
    }
}

/*!
    The operation compatibleWith takes another multiplicity as input. It checks if one multiplicity is compatible with another.
 */
bool QUmlMultiplicityElement::compatibleWith(const QUmlMultiplicityElement *other) const
{
    qWarning("QUmlMultiplicityElement::compatibleWith: operation to be implemented");
    Q_UNUSED(other);

    return bool(); // change here to your derived return
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QUmlMultiplicityElement::includesCardinality(qint32 C) const
{
    qWarning("QUmlMultiplicityElement::includesCardinality: operation to be implemented");
    Q_UNUSED(C);

    return bool(); // change here to your derived return
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QUmlMultiplicityElement::includesMultiplicity(const QUmlMultiplicityElement *M) const
{
    qWarning("QUmlMultiplicityElement::includesMultiplicity: operation to be implemented");
    Q_UNUSED(M);

    return bool(); // change here to your derived return
}

/*!
    The operation is determines if the upper and lower bound of the ranges are the ones given.
 */
bool QUmlMultiplicityElement::is(qint32 lowerbound, qint32 upperbound) const
{
    qWarning("QUmlMultiplicityElement::is: operation to be implemented");
    Q_UNUSED(lowerbound);
    Q_UNUSED(upperbound);

    return bool(); // change here to your derived return
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QUmlMultiplicityElement::isMultivalued() const
{
    qWarning("QUmlMultiplicityElement::isMultivalued: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
qint32 QUmlMultiplicityElement::lowerBound() const
{
    qWarning("QUmlMultiplicityElement::lowerBound: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
qint32 QUmlMultiplicityElement::upperBound() const
{
    qWarning("QUmlMultiplicityElement::upperBound: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QUmlMultiplicityElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the upper bound of the multiplicity interval.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the lower bound of the multiplicity interval.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of the upper bound for this multiplicity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of the lower bound for this multiplicity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlmultiplicityelement.cpp"

