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

#include "qmofdirectedrelationship.h"
#include "qmofdirectedrelationship_p.h"

#include <QtMof/QMofElement>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofDirectedRelationshipPrivate::QMofDirectedRelationshipPrivate()
{
}

QMofDirectedRelationshipPrivate::~QMofDirectedRelationshipPrivate()
{
}

void QMofDirectedRelationshipPrivate::addSource(QMofElement *source)
{
    // This is a read-only derived-union association end

    if (!this->sources.contains(source)) {
        this->sources.insert(source);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRelationshipPrivate *>(this))->addRelatedElement(qwrappedobject_cast<QMofElement *>(source));
    }
}

void QMofDirectedRelationshipPrivate::removeSource(QMofElement *source)
{
    // This is a read-only derived-union association end

    if (this->sources.contains(source)) {
        this->sources.remove(source);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRelationshipPrivate *>(this))->removeRelatedElement(qwrappedobject_cast<QMofElement *>(source));
    }
}

void QMofDirectedRelationshipPrivate::addTarget(QMofElement *target)
{
    // This is a read-only derived-union association end

    if (!this->targets.contains(target)) {
        this->targets.insert(target);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRelationshipPrivate *>(this))->addRelatedElement(qwrappedobject_cast<QMofElement *>(target));
    }
}

void QMofDirectedRelationshipPrivate::removeTarget(QMofElement *target)
{
    // This is a read-only derived-union association end

    if (this->targets.contains(target)) {
        this->targets.remove(target);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QMofRelationshipPrivate *>(this))->removeRelatedElement(qwrappedobject_cast<QMofElement *>(target));
    }
}

/*!
    \class QMofDirectedRelationship

    \inmodule QtMof

    \brief A directed relationship represents a relationship between a collection of source model elements and a collection of target model elements.
 */

QMofDirectedRelationship::QMofDirectedRelationship(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofRelationship(*new QMofDirectedRelationshipPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofDirectedRelationship::QMofDirectedRelationship(QMofDirectedRelationshipPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofRelationship(dd, wrapper, parent)
{
    setPropertyData();
}

QMofDirectedRelationship::~QMofDirectedRelationship()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofDirectedRelationship
// ---------------------------------------------------------------

/*!
    Specifies the sources of the DirectedRelationship.
 */
QSet<QMofElement *> QMofDirectedRelationship::sources() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofDirectedRelationship);
    return d->sources;
}

/*!
    Specifies the targets of the DirectedRelationship.
 */
QSet<QMofElement *> QMofDirectedRelationship::targets() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofDirectedRelationship);
    return d->targets;
}

void QMofDirectedRelationship::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the sources of the DirectedRelationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("sources")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the targets of the DirectedRelationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QMofRelationship::relatedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofDirectedRelationship")][QString::fromLatin1("targets")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofRelationship::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofdirectedrelationship.cpp"

