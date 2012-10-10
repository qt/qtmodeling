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

#include "qexecutionoccurrencespecification.h"
#include "qexecutionoccurrencespecification_p.h"

#include <QtUml/QExecutionSpecification>

QT_BEGIN_NAMESPACE_QTUML

QExecutionOccurrenceSpecificationPrivate::QExecutionOccurrenceSpecificationPrivate() :
    execution(0)
{
}

QExecutionOccurrenceSpecificationPrivate::~QExecutionOccurrenceSpecificationPrivate()
{
}
  
void QExecutionOccurrenceSpecificationPrivate::setExecution(const QExecutionSpecification *execution) 
{  
    this->execution = const_cast<QExecutionSpecification *>(execution);   
}

/*!
    \class QExecutionOccurrenceSpecification

    \inmodule QtUml

    \brief An execution occurrence specification represents moments in time at which actions or behaviors start or finish.
 */

QExecutionOccurrenceSpecification::QExecutionOccurrenceSpecification(QObject *parent)
    : QOccurrenceSpecification(false, parent)
{
    d_umlptr = new QExecutionOccurrenceSpecificationPrivate;
}

QExecutionOccurrenceSpecification::QExecutionOccurrenceSpecification(bool createPimpl, QObject *parent)
    : QOccurrenceSpecification(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QExecutionOccurrenceSpecificationPrivate;
}

QExecutionOccurrenceSpecification::~QExecutionOccurrenceSpecification()
{
}

/*!
    References the execution specification describing the execution that is started or finished at this execution event.
 */
QExecutionSpecification *QExecutionOccurrenceSpecification::execution() const
{
    Q_D(const QExecutionOccurrenceSpecification);
    return d->execution;
}

void QExecutionOccurrenceSpecification::setExecution(const QExecutionSpecification *execution)
{
    Q_D(QExecutionOccurrenceSpecification);
    d->setExecution(const_cast<QExecutionSpecification *>(execution));
}

#include "moc_qexecutionoccurrencespecification.cpp"

QT_END_NAMESPACE_QTUML

