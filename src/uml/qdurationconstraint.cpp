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

#include "qdurationconstraint.h"
#include "qdurationconstraint_p.h"

#include <QtUml/QDurationInterval>

QT_BEGIN_NAMESPACE_QTUML

QDurationConstraintPrivate::QDurationConstraintPrivate(QDurationConstraint *q_umlptr) :
    firstEvents(new QSet<bool>),
    specification(0)
{
    this->q_umlptr = q_umlptr;
}

QDurationConstraintPrivate::~QDurationConstraintPrivate()
{
    delete firstEvents;
    delete specification;
}

/*!
    \class QDurationConstraint

    \inmodule QtUml

    \brief A duration constraint is a constraint that refers to a duration interval.
 */

QDurationConstraint::QDurationConstraint(QObject *parent)
    : QIntervalConstraint(false, parent)
{
    d_umlptr = new QDurationConstraintPrivate(this);
}

QDurationConstraint::QDurationConstraint(bool createPimpl, QObject *parent)
    : QIntervalConstraint(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QDurationConstraintPrivate;
}

QDurationConstraint::~QDurationConstraint()
{
}

/*!
    The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i]. Default value is true applied when constrainedElement[i] refers an element that represents only one time instant.
 */
const QSet<bool> *QDurationConstraint::firstEvents() const
{
    // This is a read-write attribute

    QTUML_D(const QDurationConstraint);
    return d->firstEvents;
}

void QDurationConstraint::addFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    QTUML_D(QDurationConstraint);
    if (!d->firstEvents->contains(firstEvent)) {
        d->firstEvents->insert(firstEvent);
    }
}

void QDurationConstraint::removeFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    QTUML_D(QDurationConstraint);
    if (d->firstEvents->contains(firstEvent)) {
        d->firstEvents->remove(firstEvent);
    }
}

/*!
    The interval constraining the duration.
 */
QDurationInterval *QDurationConstraint::specification() const
{
    // This is a read-write association end

    QTUML_D(const QDurationConstraint);
    return d->specification;
}

void QDurationConstraint::setSpecification(QDurationInterval *specification)
{
    // This is a read-write association end

    QTUML_D(QDurationConstraint);
    if (d->specification != specification) {
        d->specification = specification;
    }
}

#include "moc_qdurationconstraint.cpp"

QT_END_NAMESPACE_QTUML

