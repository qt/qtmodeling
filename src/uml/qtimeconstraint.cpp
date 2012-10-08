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

#include "qtimeconstraint.h"
#include "qtimeconstraint_p.h"

#include <QtUml/QTimeInterval>

QT_BEGIN_NAMESPACE_QTUML

QTimeConstraintPrivate::QTimeConstraintPrivate() :
    firstEvent(true),
    specification(0)
{
}

QTimeConstraintPrivate::~QTimeConstraintPrivate()
{
}

/*!
    \class QTimeConstraint

    \inmodule QtUml

    \brief A time constraint is a constraint that refers to a time interval.
 */

QTimeConstraint::QTimeConstraint(QObject *parent)
    : QIntervalConstraint(parent), d_ptr(new QTimeConstraintPrivate)
{
}

QTimeConstraint::~QTimeConstraint()
{
    delete d_ptr;
}

/*!
    The value of firstEvent is related to constrainedElement. If firstEvent is true, then the corresponding observation event is the first time instant the execution enters constrainedElement. If firstEvent is false, then the corresponding observation event is the last time instant the execution is within constrainedElement.
 */
bool QTimeConstraint::firstEvent() const
{
    return d_ptr->firstEvent;
}

void QTimeConstraint::setFirstEvent(bool firstEvent)
{
    d_ptr->firstEvent = firstEvent;
}

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QTimeInterval *QTimeConstraint::specification() const
{
    return d_ptr->specification;
}

void QTimeConstraint::setSpecification(const QTimeInterval *specification)
{
    d_ptr->specification = const_cast<QTimeInterval *>(specification);
}

#include "moc_qtimeconstraint.cpp"

QT_END_NAMESPACE_QTUML

