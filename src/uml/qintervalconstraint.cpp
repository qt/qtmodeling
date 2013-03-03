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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QIntervalConstraintPrivate::QIntervalConstraintPrivate() :
    specification(0)
{
}

QIntervalConstraintPrivate::~QIntervalConstraintPrivate()
{
}

/*!
    \class QIntervalConstraint

    \inmodule QtUml

    \brief An interval constraint is a constraint that refers to an interval.
 */

QIntervalConstraint::QIntervalConstraint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QConstraint(*new QIntervalConstraintPrivate, wrapper, parent)
{
    setPropertyData();
}

QIntervalConstraint::QIntervalConstraint(QIntervalConstraintPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QConstraint(dd, wrapper, parent)
{
    setPropertyData();
}

QIntervalConstraint::~QIntervalConstraint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QIntervalConstraint
// ---------------------------------------------------------------

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QInterval *QIntervalConstraint::specification() const
{
    // This is a read-write association end

    Q_D(const QIntervalConstraint);
    return d->specification;
}

void QIntervalConstraint::setSpecification(QInterval *specification)
{
    // This is a read-write association end

    Q_D(QIntervalConstraint);
    if (d->specification != specification) {
        if (d->specification)
            qTopLevelWrapper(d->specification)->setParent(0);
        d->specification = specification;
        qTopLevelWrapper(specification)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QConstraint *>(this))->setSpecification(qwrappedobject_cast<QValueSpecification *>(specification));
    }
}

void QIntervalConstraint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A condition that must be true when evaluated in order for the constraint to be satisfied.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QConstraint::specification");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QConstraint::setPropertyData();
}

#include "moc_qintervalconstraint.cpp"

QT_END_NAMESPACE_QTUML

