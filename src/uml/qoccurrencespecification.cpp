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

#include "qoccurrencespecification.h"
#include "qoccurrencespecification_p.h"

#include <QtUml/QLifeline>
#include <QtUml/QGeneralOrdering>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QOccurrenceSpecificationPrivate::QOccurrenceSpecificationPrivate() :
    covered(0)
{
}

QOccurrenceSpecificationPrivate::~QOccurrenceSpecificationPrivate()
{
}

/*!
    \class QOccurrenceSpecification

    \inmodule QtUml

    \brief An occurrence specification is the basic semantic unit of interactions. The sequences of occurrences specified by them are the meanings of interactions.
 */

QOccurrenceSpecification::QOccurrenceSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(*new QOccurrenceSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QOccurrenceSpecification::QOccurrenceSpecification(QOccurrenceSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QOccurrenceSpecification::~QOccurrenceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QOccurrenceSpecification
// ---------------------------------------------------------------

/*!
    References the Lifeline on which the OccurrenceSpecification appears.
 */
QLifeline *QOccurrenceSpecification::covered() const
{
    // This is a read-write association end

    Q_D(const QOccurrenceSpecification);
    return d->covered;
}

void QOccurrenceSpecification::setCovered(QLifeline *covered)
{
    // This is a read-write association end

    Q_D(QOccurrenceSpecification);
    if (d->covered != covered) {
        d->covered = covered;
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification
 */
QSet<QGeneralOrdering *> QOccurrenceSpecification::toAfter() const
{
    // This is a read-write association end

    Q_D(const QOccurrenceSpecification);
    return d->toAfter;
}

void QOccurrenceSpecification::addToAfter(QGeneralOrdering *toAfter)
{
    // This is a read-write association end

    Q_D(QOccurrenceSpecification);
    if (!d->toAfter.contains(toAfter)) {
        d->toAfter.insert(toAfter);

        // Adjust opposite property
        toAfter->setBefore(this);
    }
}

void QOccurrenceSpecification::removeToAfter(QGeneralOrdering *toAfter)
{
    // This is a read-write association end

    Q_D(QOccurrenceSpecification);
    if (d->toAfter.contains(toAfter)) {
        d->toAfter.remove(toAfter);

        // Adjust opposite property
        toAfter->setBefore(0);
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification
 */
QSet<QGeneralOrdering *> QOccurrenceSpecification::toBefore() const
{
    // This is a read-write association end

    Q_D(const QOccurrenceSpecification);
    return d->toBefore;
}

void QOccurrenceSpecification::addToBefore(QGeneralOrdering *toBefore)
{
    // This is a read-write association end

    Q_D(QOccurrenceSpecification);
    if (!d->toBefore.contains(toBefore)) {
        d->toBefore.insert(toBefore);

        // Adjust opposite property
        toBefore->setAfter(this);
    }
}

void QOccurrenceSpecification::removeToBefore(QGeneralOrdering *toBefore)
{
    // This is a read-write association end

    Q_D(QOccurrenceSpecification);
    if (d->toBefore.contains(toBefore)) {
        d->toBefore.remove(toBefore);

        // Adjust opposite property
        toBefore->setAfter(0);
    }
}

void QOccurrenceSpecification::registerMetaTypes() const
{
    qRegisterMetaType<QLifeline *>("QLifeline *");
    qRegisterMetaType<QSet<QLifeline *>>("QSet<QLifeline *>");
    qRegisterMetaType<QList<QLifeline *>>("QList<QLifeline *>");

    qRegisterMetaType<QGeneralOrdering *>("QGeneralOrdering *");
    qRegisterMetaType<QSet<QGeneralOrdering *>>("QSet<QGeneralOrdering *>");
    qRegisterMetaType<QList<QGeneralOrdering *>>("QList<QGeneralOrdering *>");

    QInteractionFragment::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QOccurrenceSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Lifeline on which the OccurrenceSpecification appears.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QInteractionFragment::covered");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QGeneralOrdering::before");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QGeneralOrdering::after");

    QInteractionFragment::setPropertyData();
}

#include "moc_qoccurrencespecification.cpp"

QT_END_NAMESPACE_QTUML

