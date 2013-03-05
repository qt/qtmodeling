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

#include "qdurationinterval.h"
#include "qdurationinterval_p.h"

#include <QtUml/QDuration>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QDurationIntervalPrivate::QDurationIntervalPrivate() :
    max(0),
    min(0)
{
}

QDurationIntervalPrivate::~QDurationIntervalPrivate()
{
}

/*!
    \class QDurationInterval

    \inmodule QtUml

    \brief A duration interval defines the range between two durations.
 */

QDurationInterval::QDurationInterval(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInterval(*new QDurationIntervalPrivate, wrapper, parent)
{
    setPropertyData();
}

QDurationInterval::QDurationInterval(QDurationIntervalPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInterval(dd, wrapper, parent)
{
    setPropertyData();
}

QDurationInterval::~QDurationInterval()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDurationInterval
// ---------------------------------------------------------------

/*!
    Refers to the Duration denoting the maximum value of the range.
 */
QDuration *QDurationInterval::max() const
{
    // This is a read-write association end

    Q_D(const QDurationInterval);
    return d->max;
}

void QDurationInterval::setMax(QDuration *max)
{
    // This is a read-write association end

    Q_D(QDurationInterval);
    if (d->max != max) {
        d->max = max;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QInterval *>(this))->setMax(qwrappedobject_cast<QValueSpecification *>(max));
    }
}

/*!
    Refers to the Duration denoting the minimum value of the range.
 */
QDuration *QDurationInterval::min() const
{
    // This is a read-write association end

    Q_D(const QDurationInterval);
    return d->min;
}

void QDurationInterval::setMin(QDuration *min)
{
    // This is a read-write association end

    Q_D(QDurationInterval);
    if (d->min != min) {
        d->min = min;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QInterval *>(this))->setMin(qwrappedobject_cast<QValueSpecification *>(min));
    }
}

void QDurationInterval::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("max")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("max")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("max")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the Duration denoting the maximum value of the range.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("max")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QInterval::max");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("max")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("max")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("min")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("min")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("min")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the Duration denoting the minimum value of the range.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("min")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QInterval::min");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("min")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QDurationInterval")][QString::fromLatin1("min")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInterval::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qdurationinterval.cpp"

