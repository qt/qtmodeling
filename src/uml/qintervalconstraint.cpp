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

#include "qintervalconstraint.h"
#include "qintervalconstraint_p.h"

#include <QtUml/QInterval>

QT_BEGIN_NAMESPACE_QTUML

QIntervalConstraintPrivate::QIntervalConstraintPrivate() :
    specification(0)
{
}

QIntervalConstraintPrivate::~QIntervalConstraintPrivate()
{
    delete specification;
}

/*!
    \class QIntervalConstraint

    \inmodule QtUml

    \brief An interval constraint is a constraint that refers to an interval.
 */

QIntervalConstraint::QIntervalConstraint(QWrappedObject *parent, QWrappedObject *wrapper) :
    QConstraint(*new QIntervalConstraintPrivate, parent, wrapper)
{
}

QIntervalConstraint::QIntervalConstraint(QIntervalConstraintPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QConstraint(dd, parent, wrapper)
{
}

QIntervalConstraint::~QIntervalConstraint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QIntervalConstraint
// ---------------------------------------------------------------

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QInterval *QIntervalConstraint::specification() const
{
    // This is a read-write association end

    Q_D(const QIntervalConstraint);
    return d->specification;
}

void QIntervalConstraint::setSpecification(QInterval *specification)
{
    // This is a read-write association end

    Q_D(QIntervalConstraint);
    if (d->specification != specification) {
        d->specification = specification;
    }
}

void QIntervalConstraint::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QIntervalConstraint) *>("QT_PREPEND_NAMESPACE_QTUML(QIntervalConstraint) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QIntervalConstraint) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QIntervalConstraint) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QIntervalConstraint) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QIntervalConstraint) *> *");
    qRegisterMetaType<QIntervalConstraint *>("QIntervalConstraint *");
    qRegisterMetaType<const QSet<QIntervalConstraint *> *>("const QSet<QIntervalConstraint *> *");
    qRegisterMetaType<const QList<QIntervalConstraint *> *>("const QList<QIntervalConstraint *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInterval) *>("QT_PREPEND_NAMESPACE_QTUML(QInterval) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInterval) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInterval) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInterval) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInterval) *> *");
    qRegisterMetaType<QInterval *>("QInterval *");
    qRegisterMetaType<const QSet<QInterval *> *>("const QSet<QInterval *> *");
    qRegisterMetaType<const QList<QInterval *> *>("const QList<QInterval *> *");


    QConstraint::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qintervalconstraint.cpp"

QT_END_NAMESPACE_QTUML

