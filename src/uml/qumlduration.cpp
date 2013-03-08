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

#include "qumlduration.h"
#include "qumlduration_p.h"

#include <QtUml/QUmlObservation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDurationPrivate::QUmlDurationPrivate() :
    expr(0)
{
}

QUmlDurationPrivate::~QUmlDurationPrivate()
{
}

/*!
    \class QUmlDuration

    \inmodule QtUml

    \brief Duration defines a value specification that specifies the temporal distance between two time instants.
 */

QUmlDuration::QUmlDuration(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlValueSpecification(*new QUmlDurationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDuration::QUmlDuration(QUmlDurationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlValueSpecification(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDuration::~QUmlDuration()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDuration
// ---------------------------------------------------------------

/*!
    The value of the Duration.
 */
QUmlValueSpecification *QUmlDuration::expr() const
{
    // This is a read-write association end

    Q_D(const QUmlDuration);
    return d->expr;
}

void QUmlDuration::setExpr(QUmlValueSpecification *expr)
{
    // This is a read-write association end

    Q_D(QUmlDuration);
    if (d->expr != expr) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->expr));

        d->expr = expr;

        // Adjust subsetted property(ies)
        if (expr) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(expr));
        }
    }
}

/*!
    Refers to the time and duration observations that are involved in expr.
 */
QSet<QUmlObservation *> QUmlDuration::observations() const
{
    // This is a read-write association end

    Q_D(const QUmlDuration);
    return d->observations;
}

void QUmlDuration::addObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    Q_D(QUmlDuration);
    if (!d->observations.contains(observation)) {
        d->observations.insert(observation);
    }
}

void QUmlDuration::removeObservation(QUmlObservation *observation)
{
    // This is a read-write association end

    Q_D(QUmlDuration);
    if (d->observations.contains(observation)) {
        d->observations.remove(observation);
    }
}

void QUmlDuration::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("expr")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("expr")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("expr")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The value of the Duration.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("expr")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("expr")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("expr")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("observations")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("observations")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("observations")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Refers to the time and duration observations that are involved in expr.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("observations")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("observations")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDuration")][QString::fromLatin1("observations")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlValueSpecification::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlduration.cpp"

