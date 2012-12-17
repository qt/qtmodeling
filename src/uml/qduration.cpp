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

#include "qduration.h"
#include "qduration_p.h"

#include <QtUml/QObservation>

QT_BEGIN_NAMESPACE_QTUML

QDurationPrivate::QDurationPrivate() :
    expr(0),
    observations(new QSet<QObservation *>)
{
}

QDurationPrivate::~QDurationPrivate()
{
    delete observations;
}

/*!
    \class QDuration

    \inmodule QtUml

    \brief Duration defines a value specification that specifies the temporal distance between two time instants.
 */

QDuration::QDuration(QWrappedObject *parent, QWrappedObject *wrapper) :
    QValueSpecification(*new QDurationPrivate, parent, wrapper)
{
}

QDuration::QDuration(QDurationPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QValueSpecification(dd, parent, wrapper)
{
}

QDuration::~QDuration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDuration
// ---------------------------------------------------------------

/*!
    The value of the Duration.
 */
QValueSpecification *QDuration::expr() const
{
    // This is a read-write association end

    Q_D(const QDuration);
    return d->expr;
}

void QDuration::setExpr(QValueSpecification *expr)
{
    // This is a read-write association end

    Q_D(QDuration);
    if (d->expr != expr) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->expr));

        d->expr = expr;

        // Adjust subsetted property(ies)
        if (expr) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(expr));
        }
    }
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
const QSet<QObservation *> *QDuration::observations() const
{
    // This is a read-write association end

    Q_D(const QDuration);
    return d->observations;
}

void QDuration::addObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QDuration);
    if (!d->observations->contains(observation)) {
        d->observations->insert(observation);
    }
}

void QDuration::removeObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QDuration);
    if (d->observations->contains(observation)) {
        d->observations->remove(observation);
    }
}

void QDuration::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QDuration) *>("QT_PREPEND_NAMESPACE_QTUML(QDuration) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QDuration) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QDuration) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QDuration) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QDuration) *> *");
    qRegisterMetaType<QDuration *>("QDuration *");
    qRegisterMetaType<const QSet<QDuration *> *>("const QSet<QDuration *> *");
    qRegisterMetaType<const QList<QDuration *> *>("const QList<QDuration *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QObservation) *>("QT_PREPEND_NAMESPACE_QTUML(QObservation) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QObservation) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QObservation) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QObservation) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QObservation) *> *");
    qRegisterMetaType<QObservation *>("QObservation *");
    qRegisterMetaType<const QSet<QObservation *> *>("const QSet<QObservation *> *");
    qRegisterMetaType<const QList<QObservation *> *>("const QList<QObservation *> *");

    QValueSpecification::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qduration.cpp"

QT_END_NAMESPACE_QTUML

