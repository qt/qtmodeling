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

#include "qumlintervalconstraint.h"
#include "qumlintervalconstraint_p.h"

#include <QtUml/QUmlInterval>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlIntervalConstraintPrivate::QUmlIntervalConstraintPrivate() :
    specification(0)
{
}

QUmlIntervalConstraintPrivate::~QUmlIntervalConstraintPrivate()
{
}

/*!
    \class QUmlIntervalConstraint

    \inmodule QtUml

    \brief An interval constraint is a constraint that refers to an interval.
 */

QUmlIntervalConstraint::QUmlIntervalConstraint(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlConstraint(*new QUmlIntervalConstraintPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlIntervalConstraint::QUmlIntervalConstraint(QUmlIntervalConstraintPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlConstraint(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlIntervalConstraint::~QUmlIntervalConstraint()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlIntervalConstraint
// ---------------------------------------------------------------

/*!
    A condition that must be true when evaluated in order for the constraint to be satisfied.
 */
QUmlInterval *QUmlIntervalConstraint::specification() const
{
    // This is a read-write association end

    Q_D(const QUmlIntervalConstraint);
    return d->specification;
}

void QUmlIntervalConstraint::setSpecification(QUmlInterval *specification)
{
    // This is a read-write association end

    Q_D(QUmlIntervalConstraint);
    if (d->specification != specification) {
        if (d->specification)
            qTopLevelWrapper(d->specification)->setParent(0);
        d->specification = specification;
        qTopLevelWrapper(specification)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlConstraint *>(this))->setSpecification(qwrappedobject_cast<QUmlValueSpecification *>(specification));
    }
}

void QUmlIntervalConstraint::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A condition that must be true when evaluated in order for the constraint to be satisfied.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlConstraint::specification");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlIntervalConstraint")][QString::fromLatin1("specification")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlConstraint::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlintervalconstraint.cpp"

