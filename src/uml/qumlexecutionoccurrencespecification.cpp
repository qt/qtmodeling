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

#include "qumlexecutionoccurrencespecification.h"
#include "qumlexecutionoccurrencespecification_p.h"

#include <QtUml/QUmlExecutionSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlExecutionOccurrenceSpecificationPrivate::QUmlExecutionOccurrenceSpecificationPrivate() :
    execution(0)
{
}

QUmlExecutionOccurrenceSpecificationPrivate::~QUmlExecutionOccurrenceSpecificationPrivate()
{
}

/*!
    \class QUmlExecutionOccurrenceSpecification

    \inmodule QtUml

    \brief An execution occurrence specification represents moments in time at which actions or behaviors start or finish.
 */

QUmlExecutionOccurrenceSpecification::QUmlExecutionOccurrenceSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlOccurrenceSpecification(*new QUmlExecutionOccurrenceSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlExecutionOccurrenceSpecification::QUmlExecutionOccurrenceSpecification(QUmlExecutionOccurrenceSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlOccurrenceSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlExecutionOccurrenceSpecification::~QUmlExecutionOccurrenceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlExecutionOccurrenceSpecification
// ---------------------------------------------------------------

/*!
    References the execution specification describing the execution that is started or finished at this execution event.
 */
QUmlExecutionSpecification *QUmlExecutionOccurrenceSpecification::execution() const
{
    // This is a read-write association end

    Q_D(const QUmlExecutionOccurrenceSpecification);
    return d->execution;
}

void QUmlExecutionOccurrenceSpecification::setExecution(QUmlExecutionSpecification *execution)
{
    // This is a read-write association end

    Q_D(QUmlExecutionOccurrenceSpecification);
    if (d->execution != execution) {
        d->execution = execution;
    }
}

void QUmlExecutionOccurrenceSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionOccurrenceSpecification")][QString::fromLatin1("execution")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionOccurrenceSpecification")][QString::fromLatin1("execution")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionOccurrenceSpecification")][QString::fromLatin1("execution")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the execution specification describing the execution that is started or finished at this execution event.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionOccurrenceSpecification")][QString::fromLatin1("execution")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionOccurrenceSpecification")][QString::fromLatin1("execution")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionOccurrenceSpecification")][QString::fromLatin1("execution")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlOccurrenceSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlexecutionoccurrencespecification.cpp"

