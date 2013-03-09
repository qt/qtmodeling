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

#include "qumldirectedrelationship.h"
#include "qumldirectedrelationship_p.h"

#include <QtUml/QUmlElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDirectedRelationshipPrivate::QUmlDirectedRelationshipPrivate()
{
}

QUmlDirectedRelationshipPrivate::~QUmlDirectedRelationshipPrivate()
{
}

void QUmlDirectedRelationshipPrivate::addSource(QUmlElement *source)
{
    // This is a read-only derived-union association end

    if (!this->sources.contains(source)) {
        this->sources.insert(source);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRelationshipPrivate *>(this))->addRelatedElement(qwrappedobject_cast<QUmlElement *>(source));
    }
}

void QUmlDirectedRelationshipPrivate::removeSource(QUmlElement *source)
{
    // This is a read-only derived-union association end

    if (this->sources.contains(source)) {
        this->sources.remove(source);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRelationshipPrivate *>(this))->removeRelatedElement(qwrappedobject_cast<QUmlElement *>(source));
    }
}

void QUmlDirectedRelationshipPrivate::addTarget(QUmlElement *target)
{
    // This is a read-only derived-union association end

    if (!this->targets.contains(target)) {
        this->targets.insert(target);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRelationshipPrivate *>(this))->addRelatedElement(qwrappedobject_cast<QUmlElement *>(target));
    }
}

void QUmlDirectedRelationshipPrivate::removeTarget(QUmlElement *target)
{
    // This is a read-only derived-union association end

    if (this->targets.contains(target)) {
        this->targets.remove(target);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRelationshipPrivate *>(this))->removeRelatedElement(qwrappedobject_cast<QUmlElement *>(target));
    }
}

/*!
    \class QUmlDirectedRelationship

    \inmodule QtUml

    \brief A directed relationship represents a relationship between a collection of source model elements and a collection of target model elements.
 */

QUmlDirectedRelationship::QUmlDirectedRelationship(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRelationship(*new QUmlDirectedRelationshipPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDirectedRelationship::QUmlDirectedRelationship(QUmlDirectedRelationshipPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDirectedRelationship::~QUmlDirectedRelationship()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlDirectedRelationship::sources() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlDirectedRelationship);
    return d->sources;
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QUmlElement *> QUmlDirectedRelationship::targets() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlDirectedRelationship);
    return d->targets;
}

void QUmlDirectedRelationship::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the sources of the DirectedRelationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the targets of the DirectedRelationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldirectedrelationship.cpp"

