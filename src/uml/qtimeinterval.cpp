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

#include "qtimeinterval.h"
#include "qtimeinterval_p.h"

#include <QtUml/QTimeExpression>

QT_BEGIN_NAMESPACE_QTUML

QTimeIntervalPrivate::QTimeIntervalPrivate() :
    max(0),
    min(0)
{
}

QTimeIntervalPrivate::~QTimeIntervalPrivate()
{
}

/*!
    \class QTimeInterval

    \inmodule QtUml

    \brief A time interval defines the range between two time expressions.
 */

QTimeInterval::QTimeInterval(QWrappedObject *parent, QWrappedObject *wrapper) :
    QInterval(*new QTimeIntervalPrivate, parent, wrapper)
{
}

QTimeInterval::QTimeInterval(QTimeIntervalPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QInterval(dd, parent, wrapper)
{
}

QTimeInterval::~QTimeInterval()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QTimeInterval
// ---------------------------------------------------------------

/*!
    Refers to the TimeExpression denoting the maximum value of the range.
 */
QTimeExpression *QTimeInterval::max() const
{
    // This is a read-write association end

    Q_D(const QTimeInterval);
    return d->max;
}

void QTimeInterval::setMax(QTimeExpression *max)
{
    // This is a read-write association end

    Q_D(QTimeInterval);
    if (d->max != max) {
        d->max = max;
    }
}

/*!
    Refers to the TimeExpression denoting the minimum value of the range.
 */
QTimeExpression *QTimeInterval::min() const
{
    // This is a read-write association end

    Q_D(const QTimeInterval);
    return d->min;
}

void QTimeInterval::setMin(QTimeExpression *min)
{
    // This is a read-write association end

    Q_D(QTimeInterval);
    if (d->min != min) {
        d->min = min;
    }
}

void QTimeInterval::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QTimeInterval) *>("QT_PREPEND_NAMESPACE_QTUML(QTimeInterval) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QTimeInterval) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QTimeInterval) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QTimeInterval) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QTimeInterval) *> *");
    qRegisterMetaType<QTimeInterval *>("QTimeInterval *");
    qRegisterMetaType<const QSet<QTimeInterval *> *>("const QSet<QTimeInterval *> *");
    qRegisterMetaType<const QList<QTimeInterval *> *>("const QList<QTimeInterval *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QTimeExpression) *>("QT_PREPEND_NAMESPACE_QTUML(QTimeExpression) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QTimeExpression) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QTimeExpression) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QTimeExpression) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QTimeExpression) *> *");
    qRegisterMetaType<QTimeExpression *>("QTimeExpression *");
    qRegisterMetaType<const QSet<QTimeExpression *> *>("const QSet<QTimeExpression *> *");
    qRegisterMetaType<const QList<QTimeExpression *> *>("const QList<QTimeExpression *> *");


    QInterval::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qtimeinterval.cpp"

QT_END_NAMESPACE_QTUML

