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

void QIntervalConstraintPrivate::setSpecification(const QInterval *specification)
{
    this->specification = const_cast<QInterval *>(specification);
}

/*!
    \class QIntervalConstraint

    \inmodule QtUml

    \brief An interval constraint is a constraint that refers to an interval.
 */

QIntervalConstraint::QIntervalConstraint(QObject *parent)
    : QConstraint(false, parent)
{
    d_umlptr = new QIntervalConstraintPrivate;
}

QIntervalConstraint::QIntervalConstraint(bool createPimpl, QObject *parent)
    : QConstraint(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QIntervalConstraintPrivate;
}

QIntervalConstraint::~QIntervalConstraint()
{
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QInterval *QIntervalConstraint::specification() const
{
    QTUML_D(const QIntervalConstraint);
    return d->specification;
}

void QIntervalConstraint::setSpecification(const QInterval *specification)
{
    QTUML_D(QIntervalConstraint);
    d->setSpecification(const_cast<QInterval *>(specification));
}

#include "moc_qintervalconstraint.cpp"

QT_END_NAMESPACE_QTUML

