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

#include "qexecutionspecification.h"
#include "qexecutionspecification_p.h"

#include <QtUml/QOccurrenceSpecification>

QT_BEGIN_NAMESPACE_QTUML

QExecutionSpecificationPrivate::QExecutionSpecificationPrivate() :
    start(0),
    finish(0)
{
}

QExecutionSpecificationPrivate::~QExecutionSpecificationPrivate()
{
}

void QExecutionSpecificationPrivate::setStart(QOccurrenceSpecification *start)
{
    // This is a read-write association end

    this->start = start;
}

void QExecutionSpecificationPrivate::setFinish(QOccurrenceSpecification *finish)
{
    // This is a read-write association end

    this->finish = finish;
}

/*!
    \class QExecutionSpecification

    \inmodule QtUml

    \brief An execution specification is a specification of the execution of a unit of behavior or action within the lifeline. The duration of an execution specification is represented by two cccurrence specifications, the start occurrence specification and the finish occurrence specification.
 */

QExecutionSpecification::QExecutionSpecification()
{
}

QExecutionSpecification::~QExecutionSpecification()
{
}

/*!
    References the OccurrenceSpecification that designates the start of the Action or Behavior
 */
QOccurrenceSpecification *QExecutionSpecification::start() const
{
    // This is a read-write association end

    QTUML_D(const QExecutionSpecification);
    return d->start;
}

void QExecutionSpecification::setStart(QOccurrenceSpecification *start)
{
    // This is a read-write association end

    QTUML_D(QExecutionSpecification);
    if (d->start != start) {
        d->setStart(start);
    }
}

/*!
    References the OccurrenceSpecification that designates the finish of the Action or Behavior.
 */
QOccurrenceSpecification *QExecutionSpecification::finish() const
{
    // This is a read-write association end

    QTUML_D(const QExecutionSpecification);
    return d->finish;
}

void QExecutionSpecification::setFinish(QOccurrenceSpecification *finish)
{
    // This is a read-write association end

    QTUML_D(QExecutionSpecification);
    if (d->finish != finish) {
        d->setFinish(finish);
    }
}

QT_END_NAMESPACE_QTUML

