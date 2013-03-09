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

#include "qumloccurrencespecification.h"
#include "qumloccurrencespecification_p.h"

#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlGeneralOrdering>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlOccurrenceSpecificationPrivate::QUmlOccurrenceSpecificationPrivate() :
    covered(0)
{
}

QUmlOccurrenceSpecificationPrivate::~QUmlOccurrenceSpecificationPrivate()
{
}

/*!
    \class QUmlOccurrenceSpecification

    \inmodule QtUml

    \brief An occurrence specification is the basic semantic unit of interactions. The sequences of occurrences specified by them are the meanings of interactions.
 */

QUmlOccurrenceSpecification::QUmlOccurrenceSpecification(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(*new QUmlOccurrenceSpecificationPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlOccurrenceSpecification::QUmlOccurrenceSpecification(QUmlOccurrenceSpecificationPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInteractionFragment(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlOccurrenceSpecification::~QUmlOccurrenceSpecification()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlOccurrenceSpecification
// ---------------------------------------------------------------

/*!
    References the Lifeline on which the OccurrenceSpecification appears.
 */
QUmlLifeline *QUmlOccurrenceSpecification::covered() const
{
    // This is a read-write association end

    Q_D(const QUmlOccurrenceSpecification);
    return d->covered;
}

void QUmlOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    // This is a read-write association end

    Q_D(QUmlOccurrenceSpecification);
    if (d->covered != covered) {
        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlInteractionFragment *>(this))->removeCovered(qwrappedobject_cast<QUmlLifeline *>(d->covered));

        d->covered = covered;

        // Adjust redefined property(ies)
        if (covered) {
            (qwrappedobject_cast<QUmlInteractionFragment *>(this))->addCovered(qwrappedobject_cast<QUmlLifeline *>(covered));
        }
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification
 */
QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toAfter() const
{
    // This is a read-write association end

    Q_D(const QUmlOccurrenceSpecification);
    return d->toAfter;
}

void QUmlOccurrenceSpecification::addToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    Q_D(QUmlOccurrenceSpecification);
    if (!d->toAfter.contains(toAfter)) {
        d->toAfter.insert(toAfter);

        // Adjust opposite property
        toAfter->setBefore(this);
    }
}

void QUmlOccurrenceSpecification::removeToAfter(QUmlGeneralOrdering *toAfter)
{
    // This is a read-write association end

    Q_D(QUmlOccurrenceSpecification);
    if (d->toAfter.contains(toAfter)) {
        d->toAfter.remove(toAfter);

        // Adjust opposite property
        toAfter->setBefore(0);
    }
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification
 */
QSet<QUmlGeneralOrdering *> QUmlOccurrenceSpecification::toBefore() const
{
    // This is a read-write association end

    Q_D(const QUmlOccurrenceSpecification);
    return d->toBefore;
}

void QUmlOccurrenceSpecification::addToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    Q_D(QUmlOccurrenceSpecification);
    if (!d->toBefore.contains(toBefore)) {
        d->toBefore.insert(toBefore);

        // Adjust opposite property
        toBefore->setAfter(this);
    }
}

void QUmlOccurrenceSpecification::removeToBefore(QUmlGeneralOrdering *toBefore)
{
    // This is a read-write association end

    Q_D(QUmlOccurrenceSpecification);
    if (d->toBefore.contains(toBefore)) {
        d->toBefore.remove(toBefore);

        // Adjust opposite property
        toBefore->setAfter(0);
    }
}

void QUmlOccurrenceSpecification::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the Lifeline on which the OccurrenceSpecification appears.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlInteractionFragment::covered");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("covered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toAfter")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlGeneralOrdering::before");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlOccurrenceSpecification")][QString::fromLatin1("toBefore")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlGeneralOrdering::after");

    QUmlInteractionFragment::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumloccurrencespecification.cpp"

