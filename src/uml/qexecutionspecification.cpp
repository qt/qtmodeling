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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QExecutionSpecificationPrivate::QExecutionSpecificationPrivate() :
    start(0),
    finish(0)
{
}

QExecutionSpecificationPrivate::~QExecutionSpecificationPrivate()
{
}

/*!
    \class QExecutionSpecification

    \inmodule QtUml

    \brief An execution specification is a specification of the execution of a unit of behavior or action within the lifeline. The duration of an execution specification is represented by two cccurrence specifications, the start occurrence specification and the finish occurrence specification.
 */

QExecutionSpecification::QExecutionSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(*new QExecutionSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QExecutionSpecification::QExecutionSpecification(QExecutionSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QExecutionSpecification::~QExecutionSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QExecutionSpecification
// ---------------------------------------------------------------

/*!
    References the OccurrenceSpecification that designates the start of the Action or Behavior
 */
QOccurrenceSpecification *QExecutionSpecification::start() const
{
    // This is a read-write association end

    Q_D(const QExecutionSpecification);
    return d->start;
}

void QExecutionSpecification::setStart(QOccurrenceSpecification *start)
{
    // This is a read-write association end

    Q_D(QExecutionSpecification);
    if (d->start != start) {
        d->start = start;
    }
}

/*!
    References the OccurrenceSpecification that designates the finish of the Action or Behavior.
 */
QOccurrenceSpecification *QExecutionSpecification::finish() const
{
    // This is a read-write association end

    Q_D(const QExecutionSpecification);
    return d->finish;
}

void QExecutionSpecification::setFinish(QOccurrenceSpecification *finish)
{
    // This is a read-write association end

    Q_D(QExecutionSpecification);
    if (d->finish != finish) {
        d->finish = finish;
    }
}

void QExecutionSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the OccurrenceSpecification that designates the start of the Action or Behavior");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("start")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the OccurrenceSpecification that designates the finish of the Action or Behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QExecutionSpecification")][QString::fromLatin1("finish")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInteractionFragment::setPropertyData();
}

#include "moc_qexecutionspecification.cpp"

QT_END_NAMESPACE_QTUML

