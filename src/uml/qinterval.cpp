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

QInterval::QInterval(QObject *parent)
    : QObject(parent), d_ptr(new QIntervalPrivate)
{
}

QInterval::~QInterval()
{
    delete d_ptr;
}

/*!
    Refers to the ValueSpecification denoting the minimum value of the range.
 */
QValueSpecification *QInterval::min() const
{
    return d_ptr->min;
}

void QInterval::setMin(const QValueSpecification *min)
{
    d_ptr->min = const_cast<QValueSpecification *>(min);
}

/*!
    Refers to the ValueSpecification denoting the maximum value of the range.
 */
QValueSpecification *QInterval::max() const
{
    return d_ptr->max;
}

void QInterval::setMax(const QValueSpecification *max)
{
    d_ptr->max = const_cast<QValueSpecification *>(max);
}

#include "moc_qinterval.cpp"

QT_END_NAMESPACE_QTUML

