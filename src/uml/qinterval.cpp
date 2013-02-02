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

#include "qinterval.h"
#include "qinterval_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QIntervalPrivate::QIntervalPrivate() :
    min(0),
    max(0)
{
}

QIntervalPrivate::~QIntervalPrivate()
{
}

/*!
    \class QInterval

    \inmodule QtUml

    \brief An interval defines the range between two value specifications.
 */

QInterval::QInterval(QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(*new QIntervalPrivate, wrapper, parent)
{
    setPropertyData();
}

QInterval::QInterval(QIntervalPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QInterval::~QInterval()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInterval
// ---------------------------------------------------------------

/*!
    Refers to the ValueSpecification denoting the minimum value of the range.
 */
QValueSpecification *QInterval::min() const
{
    // This is a read-write association end

    Q_D(const QInterval);
    return d->min;
}

void QInterval::setMin(QValueSpecification *min)
{
    // This is a read-write association end

    Q_D(QInterval);
    if (d->min != min) {
        d->min = min;
    }
}

/*!
    Refers to the ValueSpecification denoting the maximum value of the range.
 */
QValueSpecification *QInterval::max() const
{
    // This is a read-write association end

    Q_D(const QInterval);
    return d->max;
}

void QInterval::setMax(QValueSpecification *max)
{
    // This is a read-write association end

    Q_D(QInterval);
    if (d->max != max) {
        d->max = max;
    }
}

void QInterval::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("min")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("min")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("min")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the ValueSpecification denoting the minimum value of the range.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("min")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("min")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("min")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("max")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("max")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("max")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the ValueSpecification denoting the maximum value of the range.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("max")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("max")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QInterval")][QString::fromLatin1("max")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QValueSpecification::setPropertyData();
}

#include "moc_qinterval.cpp"

QT_END_NAMESPACE_QTUML

