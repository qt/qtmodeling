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

#include "qumlgeneralordering.h"
#include "qumlgeneralordering_p.h"

#include <QtUml/QUmlOccurrenceSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlGeneralOrderingPrivate::QUmlGeneralOrderingPrivate() :
    before(0),
    after(0)
{
}

QUmlGeneralOrderingPrivate::~QUmlGeneralOrderingPrivate()
{
}

/*!
    \class QUmlGeneralOrdering

    \inmodule QtUml

    \brief A general ordering represents a binary relation between two occurrence specifications, to describe that one occurrence specification must occur before the other in a valid trace. This mechanism provides the ability to define partial orders of occurrence cpecifications that may otherwise not have a specified order.
 */

QUmlGeneralOrdering::QUmlGeneralOrdering(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(*new QUmlGeneralOrderingPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlGeneralOrdering::QUmlGeneralOrdering(QUmlGeneralOrderingPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlNamedElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlGeneralOrdering::~QUmlGeneralOrdering()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlGeneralOrdering
// ---------------------------------------------------------------

/*!
    The OccurrenceSpecification referenced comes before the OccurrenceSpecification referenced by after.
 */
QUmlOccurrenceSpecification *QUmlGeneralOrdering::before() const
{
    // This is a read-write association end

    Q_D(const QUmlGeneralOrdering);
    return d->before;
}

void QUmlGeneralOrdering::setBefore(QUmlOccurrenceSpecification *before)
{
    // This is a read-write association end

    Q_D(QUmlGeneralOrdering);
    if (d->before != before) {
        // Adjust opposite property
        if (d->before)
            d->before->removeToAfter(this);

        d->before = before;

        // Adjust opposite property
        if (before)
            before->addToAfter(this);
    }
}

/*!
    The OccurrenceSpecification referenced comes after the OccurrenceSpecification referenced by before.
 */
QUmlOccurrenceSpecification *QUmlGeneralOrdering::after() const
{
    // This is a read-write association end

    Q_D(const QUmlGeneralOrdering);
    return d->after;
}

void QUmlGeneralOrdering::setAfter(QUmlOccurrenceSpecification *after)
{
    // This is a read-write association end

    Q_D(QUmlGeneralOrdering);
    if (d->after != after) {
        // Adjust opposite property
        if (d->after)
            d->after->removeToBefore(this);

        d->after = after;

        // Adjust opposite property
        if (after)
            after->addToBefore(this);
    }
}

void QUmlGeneralOrdering::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("before")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("before")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("before")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The OccurrenceSpecification referenced comes before the OccurrenceSpecification referenced by after.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("before")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("before")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("before")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOccurrenceSpecification::toAfter");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("after")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("after")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("after")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The OccurrenceSpecification referenced comes after the OccurrenceSpecification referenced by before.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("after")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("after")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlGeneralOrdering")][QString::fromLatin1("after")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QOccurrenceSpecification::toBefore");

    QUmlNamedElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlgeneralordering.cpp"

