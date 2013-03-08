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

#include "qumlexecutionspecification.h"
#include "qumlexecutionspecification_p.h"

#include <QtUml/QUmlOccurrenceSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlExecutionSpecificationPrivate::QUmlExecutionSpecificationPrivate() :
    start(0),
    finish(0)
{
}

QUmlExecutionSpecificationPrivate::~QUmlExecutionSpecificationPrivate()
{
}

/*!
    \class QUmlExecutionSpecification

    \inmodule QtUml

    \brief An execution specification is a specification of the execution of a unit of behavior or action within the lifeline. The duration of an execution specification is represented by two cccurrence specifications, the start occurrence specification and the finish occurrence specification.
 */

QUmlExecutionSpecification::QUmlExecutionSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(*new QUmlExecutionSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlExecutionSpecification::QUmlExecutionSpecification(QUmlExecutionSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlExecutionSpecification::~QUmlExecutionSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlExecutionSpecification
// ---------------------------------------------------------------

/*!
    References the OccurrenceSpecification that designates the start of the Action or Behavior
 */
QUmlOccurrenceSpecification *QUmlExecutionSpecification::start() const
{
    // This is a read-write association end

    Q_D(const QUmlExecutionSpecification);
    return d->start;
}

void QUmlExecutionSpecification::setStart(QUmlOccurrenceSpecification *start)
{
    // This is a read-write association end

    Q_D(QUmlExecutionSpecification);
    if (d->start != start) {
        d->start = start;
    }
}

/*!
    References the OccurrenceSpecification that designates the finish of the Action or Behavior.
 */
QUmlOccurrenceSpecification *QUmlExecutionSpecification::finish() const
{
    // This is a read-write association end

    Q_D(const QUmlExecutionSpecification);
    return d->finish;
}

void QUmlExecutionSpecification::setFinish(QUmlOccurrenceSpecification *finish)
{
    // This is a read-write association end

    Q_D(QUmlExecutionSpecification);
    if (d->finish != finish) {
        d->finish = finish;
    }
}

void QUmlExecutionSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the OccurrenceSpecification that designates the start of the Action or Behavior");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the OccurrenceSpecification that designates the finish of the Action or Behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlInteractionFragment::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlexecutionspecification.cpp"

