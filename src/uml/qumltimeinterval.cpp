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
#include "qumltimeinterval.h"
#include "qumltimeinterval_p.h"

#include <QtUml/QUmlTimeExpression>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTimeIntervalPrivate::QUmlTimeIntervalPrivate() :
    max(0),
    min(0)
{
}

QUmlTimeIntervalPrivate::~QUmlTimeIntervalPrivate()
{
}

/*!
    \class QUmlTimeInterval

    \inmodule QtUml

    \brief A time interval defines the range between two time expressions.
 */

QUmlTimeInterval::QUmlTimeInterval(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInterval(*new QUmlTimeIntervalPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTimeInterval::QUmlTimeInterval(QUmlTimeIntervalPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInterval(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTimeInterval::~QUmlTimeInterval()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTimeInterval
// ---------------------------------------------------------------

/*!
    Refers to the TimeExpression denoting the maximum value of the range.
 */
QUmlTimeExpression *QUmlTimeInterval::max() const
{
    // This is a read-write association end

    Q_D(const QUmlTimeInterval);
    return d->max;
}

void QUmlTimeInterval::setMax(QUmlTimeExpression *max)
{
    // This is a read-write association end

    Q_D(QUmlTimeInterval);
    if (d->max != max) {
        d->max = max;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlInterval *>(this))->setMax(qwrappedobject_cast<QUmlValueSpecification *>(max));
    }
}

/*!
    Refers to the TimeExpression denoting the minimum value of the range.
 */
QUmlTimeExpression *QUmlTimeInterval::min() const
{
    // This is a read-write association end

    Q_D(const QUmlTimeInterval);
    return d->min;
}

void QUmlTimeInterval::setMin(QUmlTimeExpression *min)
{
    // This is a read-write association end

    Q_D(QUmlTimeInterval);
    if (d->min != min) {
        d->min = min;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlInterval *>(this))->setMin(qwrappedobject_cast<QUmlValueSpecification *>(min));
    }
}

void QUmlTimeInterval::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("max")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("max")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("max")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the TimeExpression denoting the maximum value of the range.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("max")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlInterval::max");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("max")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("max")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("min")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("min")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("min")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the TimeExpression denoting the minimum value of the range.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("min")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlInterval::min");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("min")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTimeInterval")][QString::fromLatin1("min")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlInterval::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltimeinterval.cpp"

