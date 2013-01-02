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

#include "qmultiplicityelement.h"
#include "qmultiplicityelement_p.h"

#include <QtMof/QValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTMOF

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

/*!
    \class QMultiplicityElement

    \inmodule QtMof

    \brief A multiplicity is a definition of an inclusive interval of non-negative integers beginning with a lower bound and ending with a (possibly infinite) upper bound. A multiplicity element embeds this information to specify the allowable cardinalities for an instantiation of this element.
 */

QMultiplicityElement::QMultiplicityElement(QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(*new QMultiplicityElementPrivate, parent, wrapper)
{
    setPropertyData();
}

QMultiplicityElement::QMultiplicityElement(QMultiplicityElementPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QElement(dd, parent, wrapper)
{
    setPropertyData();
}

QMultiplicityElement::~QMultiplicityElement()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QMultiplicityElement::upper() const
{
    // This is a read-write derived attribute

    qWarning("QMultiplicityElement::upper: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

void QMultiplicityElement::setUpper(qint32 upper)
{
    // This is a read-write derived attribute

    qWarning("QMultiplicityElement::setUpper: to be implemented (this is a derived attribute)");
    Q_UNUSED(upper);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

void QMultiplicityElement::unsetUpper()
{
    setUpper(1);
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QMultiplicityElement::isUnique() const
{
    // This is a read-write attribute

    Q_D(const QMultiplicityElement);
    return d->isUnique;
}

void QMultiplicityElement::setUnique(bool isUnique)
{
    // This is a read-write attribute

    Q_D(QMultiplicityElement);
    if (d->isUnique != isUnique) {
        d->isUnique = isUnique;
    }
}

void QMultiplicityElement::unsetUnique()
{
    setUnique(true);
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QMultiplicityElement::isOrdered() const
{
    // This is a read-write attribute

    Q_D(const QMultiplicityElement);
    return d->isOrdered;
}

void QMultiplicityElement::setOrdered(bool isOrdered)
{
    // This is a read-write attribute

    Q_D(QMultiplicityElement);
    if (d->isOrdered != isOrdered) {
        d->isOrdered = isOrdered;
    }
}

void QMultiplicityElement::unsetOrdered()
{
    setOrdered(false);
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QMultiplicityElement::lower() const
{
    // This is a read-write derived attribute

    qWarning("QMultiplicityElement::lower: to be implemented (this is a derived attribute)");

    return qint32(); // change here to your derived return
}

void QMultiplicityElement::setLower(qint32 lower)
{
    // This is a read-write derived attribute

    qWarning("QMultiplicityElement::setLower: to be implemented (this is a derived attribute)");
    Q_UNUSED(lower);

    if (false) { // change to your derived change criteria
        // change to your derived code
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QMultiplicityElement::upperValue() const
{
    // This is a read-write association end

    Q_D(const QMultiplicityElement);
    return d->upperValue;
}

void QMultiplicityElement::setUpperValue(QValueSpecification *upperValue)
{
    // This is a read-write association end

    Q_D(QMultiplicityElement);
    if (d->upperValue != upperValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->upperValue));

        d->upperValue = upperValue;

        // Adjust subsetted property(ies)
        if (upperValue) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(upperValue));
        }
    }
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QMultiplicityElement::lowerValue() const
{
    // This is a read-write association end

    Q_D(const QMultiplicityElement);
    return d->lowerValue;
}

void QMultiplicityElement::setLowerValue(QValueSpecification *lowerValue)
{
    // This is a read-write association end

    Q_D(QMultiplicityElement);
    if (d->lowerValue != lowerValue) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->lowerValue));

        d->lowerValue = lowerValue;

        // Adjust subsetted property(ies)
        if (lowerValue) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(lowerValue));
        }
    }
}

/*!
    The query includesCardinality() checks whether the specified cardinality is valid for this multiplicity.
 */
bool QMultiplicityElement::includesCardinality(qint32 C) const
{
    qWarning("QMultiplicityElement::includesCardinality: operation to be implemented");
    Q_UNUSED(C);

    return bool(); // change here to your derived return
}

/*!
    The query includesMultiplicity() checks whether this multiplicity includes all the cardinalities allowed by the specified multiplicity.
 */
bool QMultiplicityElement::includesMultiplicity(const QMultiplicityElement *M) const
{
    qWarning("QMultiplicityElement::includesMultiplicity: operation to be implemented");
    Q_UNUSED(M);

    return bool(); // change here to your derived return
}

/*!
    The query isMultivalued() checks whether this multiplicity has an upper bound greater than one.
 */
bool QMultiplicityElement::isMultivalued() const
{
    qWarning("QMultiplicityElement::isMultivalued: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The query lowerBound() returns the lower bound of the multiplicity as an integer.
 */
qint32 QMultiplicityElement::lowerBound() const
{
    qWarning("QMultiplicityElement::lowerBound: operation to be implemented");

    return qint32(); // change here to your derived return
}

/*!
    The query upperBound() returns the upper bound of the multiplicity for a bounded multiplicity as an unlimited natural.
 */
qint32 QMultiplicityElement::upperBound() const
{
    qWarning("QMultiplicityElement::upperBound: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QMultiplicityElement::registerMetaTypes() const
{
    qRegisterMetaType<QValueSpecification *>("QValueSpecification *");
    qRegisterMetaType<QSet<QValueSpecification *>>("QSet<QValueSpecification *>");
    qRegisterMetaType<QList<QValueSpecification *>>("QList<QValueSpecification *>");

    QElement::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QMultiplicityElement::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the upper bound of the multiplicity interval.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upper")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isUnique")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("isOrdered")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the lower bound of the multiplicity interval.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lower")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of the upper bound for this multiplicity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("upperValue")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The specification of the lower bound for this multiplicity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMultiplicityElement")][QString::fromLatin1("lowerValue")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QElement::setPropertyData();
}

#include "moc_qmultiplicityelement.cpp"

QT_END_NAMESPACE_QTMOF

