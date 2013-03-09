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

#include "qumldurationconstraint.h"
#include "qumldurationconstraint_p.h"

#include <QtUml/QUmlDurationInterval>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDurationConstraintPrivate::QUmlDurationConstraintPrivate() :
    specification(0)
{
}

QUmlDurationConstraintPrivate::~QUmlDurationConstraintPrivate()
{
}

/*!
    \class QUmlDurationConstraint

    \inmodule QtUml

    \brief A duration constraint is a constraint that refers to a duration interval.
 */

QUmlDurationConstraint::QUmlDurationConstraint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlIntervalConstraint(*new QUmlDurationConstraintPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDurationConstraint::QUmlDurationConstraint(QUmlDurationConstraintPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlIntervalConstraint(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDurationConstraint::~QUmlDurationConstraint()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlDurationConstraint
// ---------------------------------------------------------------

/*!
    The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i]. Default value is true applied when constrainedElement[i] refers an element that represents only one time instant.
 */
QSet<bool> QUmlDurationConstraint::firstEvents() const
{
    // This is a read-write attribute

    Q_D(const QUmlDurationConstraint);
    return d->firstEvents;
}

void QUmlDurationConstraint::addFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    Q_D(QUmlDurationConstraint);
    if (!d->firstEvents.contains(firstEvent)) {
        d->firstEvents.insert(firstEvent);
    }
}

void QUmlDurationConstraint::removeFirstEvent(bool firstEvent)
{
    // This is a read-write attribute

    Q_D(QUmlDurationConstraint);
    if (d->firstEvents.contains(firstEvent)) {
        d->firstEvents.remove(firstEvent);
    }
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDurationConstraint
// ---------------------------------------------------------------

/*!
    The interval constraining the duration.
 */
QUmlDurationInterval *QUmlDurationConstraint::specification() const
{
    // This is a read-write association end

    Q_D(const QUmlDurationConstraint);
    return d->specification;
}

void QUmlDurationConstraint::setSpecification(QUmlDurationInterval *specification)
{
    // This is a read-write association end

    Q_D(QUmlDurationConstraint);
    if (d->specification != specification) {
        if (d->specification)
            qTopLevelWrapper(d->specification)->setParent(0);
        d->specification = specification;
        qTopLevelWrapper(specification)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlIntervalConstraint *>(this))->setSpecification(qwrappedobject_cast<QUmlInterval *>(specification));
    }
}

void QUmlDurationConstraint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("firstEvents")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("firstEvents")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("firstEvents")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i]. Default value is true applied when constrainedElement[i] refers an element that represents only one time instant.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("firstEvents")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("firstEvents")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("firstEvents")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The interval constraining the duration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlIntervalConstraint::specification");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDurationConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlIntervalConstraint::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldurationconstraint.cpp"

