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

#include "qduration.h"
#include "qduration_p.h"

#include <QtUml/QObservation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QDurationPrivate::QDurationPrivate() :
    expr(0)
{
}

QDurationPrivate::~QDurationPrivate()
{
}

/*!
    \class QDuration

    \inmodule QtUml

    \brief Duration defines a value specification that specifies the temporal distance between two time instants.
 */

QDuration::QDuration(QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(*new QDurationPrivate, wrapper, parent)
{
    setPropertyData();
}

QDuration::QDuration(QDurationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QDuration::~QDuration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDuration
// ---------------------------------------------------------------

/*!
    The value of the Duration.
 */
QValueSpecification *QDuration::expr() const
{
    // This is a read-write association end

    Q_D(const QDuration);
    return d->expr;
}

void QDuration::setExpr(QValueSpecification *expr)
{
    // This is a read-write association end

    Q_D(QDuration);
    if (d->expr != expr) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QElement *>(d->expr));

        d->expr = expr;

        // Adjust subsetted property(ies)
        if (expr) {
            (qwrappedobject_cast<QElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QElement *>(expr));
        }
    }
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
QSet<QObservation *> QDuration::observations() const
{
    // This is a read-write association end

    Q_D(const QDuration);
    return d->observations;
}

void QDuration::addObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QDuration);
    if (!d->observations.contains(observation)) {
        d->observations.insert(observation);
    }
}

void QDuration::removeObservation(QObservation *observation)
{
    // This is a read-write association end

    Q_D(QDuration);
    if (d->observations.contains(observation)) {
        d->observations.remove(observation);
    }
}

void QDuration::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("expr")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("expr")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("expr")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of the Duration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("expr")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("expr")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("expr")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("observations")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("observations")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("observations")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the time and duration observations that are involved in expr.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("observations")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("observations")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuration")][QString::fromLatin1("observations")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QValueSpecification::setPropertyData();
}

#include "moc_qduration.cpp"

QT_END_NAMESPACE_QTUML

