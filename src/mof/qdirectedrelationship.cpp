/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qdirectedrelationship.h"
#include "qdirectedrelationship_p.h"

#include <QtMof/QElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtMof
{

QDirectedRelationshipPrivate::QDirectedRelationshipPrivate()
{
}

QDirectedRelationshipPrivate::~QDirectedRelationshipPrivate()
{
}

void QDirectedRelationshipPrivate::addSource(QElement *source)
{
    // This is a read-only derived-union association end

    if (!this->sources.contains(source)) {
        this->sources.insert(source);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRelationshipPrivate *>(this))->addRelatedElement(qwrappedobject_cast<QElement *>(source));
    }
}

void QDirectedRelationshipPrivate::removeSource(QElement *source)
{
    // This is a read-only derived-union association end

    if (this->sources.contains(source)) {
        this->sources.remove(source);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRelationshipPrivate *>(this))->removeRelatedElement(qwrappedobject_cast<QElement *>(source));
    }
}

void QDirectedRelationshipPrivate::addTarget(QElement *target)
{
    // This is a read-only derived-union association end

    if (!this->targets.contains(target)) {
        this->targets.insert(target);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRelationshipPrivate *>(this))->addRelatedElement(qwrappedobject_cast<QElement *>(target));
    }
}

void QDirectedRelationshipPrivate::removeTarget(QElement *target)
{
    // This is a read-only derived-union association end

    if (this->targets.contains(target)) {
        this->targets.remove(target);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QRelationshipPrivate *>(this))->removeRelatedElement(qwrappedobject_cast<QElement *>(target));
    }
}

/*!
    \class QDirectedRelationship

    \inmodule QtMof

    \brief A directed relationship represents a relationship between a collection of source model elements and a collection of target model elements.
 */

QDirectedRelationship::QDirectedRelationship(QWrappedObject *wrapper, QWrappedObject *parent) :
    QRelationship(*new QDirectedRelationshipPrivate, wrapper, parent)
{
    setPropertyData();
}

QDirectedRelationship::QDirectedRelationship(QDirectedRelationshipPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QDirectedRelationship::~QDirectedRelationship()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QElement *> QDirectedRelationship::sources() const
{
    // This is a read-only derived-union association end

    Q_D(const QDirectedRelationship);
    return d->sources;
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QElement *> QDirectedRelationship::targets() const
{
    // This is a read-only derived-union association end

    Q_D(const QDirectedRelationship);
    return d->targets;
}

void QDirectedRelationship::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the sources of the DirectedRelationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the targets of the DirectedRelationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QRelationship::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qdirectedrelationship.cpp"

