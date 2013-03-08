/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qmofmultiplicityelement.h"
#include "qmofmultiplicityelement_p.h"

#include <QtMof/QMofValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofMultiplicityElementPrivate::QMofMultiplicityElementPrivate() :
    isUnique(true),
    isOrdered(false),
    upperValue(0),
    lowerValue(0)
{
}

QMofMultiplicityElementPrivate::~QMofMultiplicityElementPrivate()
{
}

/*!
    \class QMofMultiplicityElement

    \inmodule QtMof

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.
 */

QMofMultiplicityElement::QMofMultiplicityElement(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(*new QMofMultiplicityElementPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofMultiplicityElement::QMofMultiplicityElement(QMofMultiplicityElementPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofMultiplicityElement::~QMofMultiplicityElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QMofMultiplicityElement::upper() const
{
    // This is a read-write derived attribute

    qWarning("QMofMultiplicityElement::upper: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

void QMofMultiplicityElement::setUpper(qint32 upper)
{
    // This is a read-write derived attribute

    qWarning("QMofMultiplicityElement::setUpper: to be implemented (this is a derived attribute)");
    Q_UNUSED(upper);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

void QMofMultiplicityElement::unsetUpper()
{
    setUpper(1);
    Q_D(QMofMultiplicityElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QMofMultiplicityElement::isUnique() const
{
    // This is a read-write attribute

    Q_D(const QMofMultiplicityElement);
    return d->isUnique;
}

void QMofMultiplicityElement::setUnique(bool isUnique)
{
    // This is a read-write attribute

    Q_D(QMofMultiplicityElement);
    if (d->isUnique != isUnique) {
        d->isUnique = isUnique;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isUnique");
}

void QMofMultiplicityElement::unsetUnique()
{
    setUnique(true);
    Q_D(QMofMultiplicityElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QMofMultiplicityElement::isOrdered() const
{
    // This is a read-write attribute

    Q_D(const QMofMultiplicityElement);
    return d->isOrdered;
}

void QMofMultiplicityElement::setOrdered(bool isOrdered)
{
    // This is a read-write attribute

    Q_D(QMofMultiplicityElement);
    if (d->isOrdered != isOrdered) {
        d->isOrdered = isOrdered;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isOrdered");
}

void QMofMultiplicityElement::unsetOrdered()
{
    setOrdered(false);
    Q_D(QMofMultiplicityElement);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QMofMultiplicityElement::lower() const
{
    // This is a read-write derived attribute

    qWarning("QMofMultiplicityElement::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

void QMofMultiplicityElement::setLower(qint32 lower)
{
    // This is a read-write derived attribute

    qWarning("QMofMultiplicityElement::setLower: to be implemented (this is a derived attribute)");
    Q_UNUSED(lower);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QMofValueSpecification *QMofMultiplicityElement::upperValue() const
{
    // This is a read-write association end

    Q_D(const QMofMultiplicityElement);
    return d->upperValue;
}

void QMofMultiplicityElement::setUpperValue(QMofValueSpecification *upperValue)
{
    // This is a read-write association end

    Q_D(QMofMultiplicityElement);
    if (d->upperValue != upperValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(d->upperValue));

        d->upperValue = upperValue;

        // Adjust subsetted property(ies)
        if (upperValue) {
            (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(upperValue));
        }
    }
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QMofValueSpecification *QMofMultiplicityElement::lowerValue() const
{
    // This is a read-write association end

    Q_D(const QMofMultiplicityElement);
    return d->lowerValue;
}

void QMofMultiplicityElement::setLowerValue(QMofValueSpecification *lowerValue)
{
    // This is a read-write association end

    Q_D(QMofMultiplicityElement);
    if (d->lowerValue != lowerValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QMofElement *>(d->lowerValue));

        d->lowerValue = lowerValue;

        // Adjust subsetted property(ies)
        if (lowerValue) {
            (qwrappedobject_cast<QMofElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QMofElement *>(lowerValue));
        }
    }
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QMofMultiplicityElement::includesCardinality(qint32 C) const
{
    qWarning("QMofMultiplicityElement::includesCardinality: operation to be implemented");
    Q_UNUSED(C);

    return bool(); // change here to your derived return
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QMofMultiplicityElement::includesMultiplicity(const QMofMultiplicityElement *M) const
{
    qWarning("QMofMultiplicityElement::includesMultiplicity: operation to be implemented");
    Q_UNUSED(M);

    return bool(); // change here to your derived return
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QMofMultiplicityElement::isMultivalued() const
{
    qWarning("QMofMultiplicityElement::isMultivalued: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
qint32 QMofMultiplicityElement::lowerBound() const
{
    qWarning("QMofMultiplicityElement::lowerBound: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
qint32 QMofMultiplicityElement::upperBound() const
{
    qWarning("QMofMultiplicityElement::upperBound: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QMofMultiplicityElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the upper bound of the multiplicity interval.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the lower bound of the multiplicity interval.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of the upper bound for this multiplicity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of the lower bound for this multiplicity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofmultiplicityelement.cpp"

