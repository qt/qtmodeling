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

#include "qrelationship.h"
#include "qrelationship_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QRelationshipPrivate::QRelationshipPrivate()
{
}

QRelationshipPrivate::~QRelationshipPrivate()
{
}

void QRelationshipPrivate::addRelatedElement(QElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (!this->relatedElements.contains(relatedElement)) {
        this->relatedElements.insert(relatedElement);
    }
}

void QRelationshipPrivate::removeRelatedElement(QElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (this->relatedElements.contains(relatedElement)) {
        this->relatedElements.remove(relatedElement);
    }
}

/*!
    \class QRelationship

    \inmodule QtUml

    \brief Relationship is an abstract concept that specifies some kind of relationship between elements.
 */

QRelationship::QRelationship(QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(*new QRelationshipPrivate, wrapper, parent)
{
    setPropertyData();
}

QRelationship::QRelationship(QRelationshipPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QElement(dd, wrapper, parent)
{
    setPropertyData();
}

QRelationship::~QRelationship()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QElement *> QRelationship::relatedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QRelationship);
    return d->relatedElements;
}

void QRelationship::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the elements related by the Relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QElement::setPropertyData();
}

#include "moc_qrelationship.cpp"

QT_END_NAMESPACE_QTUML

