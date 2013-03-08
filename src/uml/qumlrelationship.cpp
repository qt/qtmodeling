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

#include "qumlrelationship.h"
#include "qumlrelationship_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlRelationshipPrivate::QUmlRelationshipPrivate()
{
}

QUmlRelationshipPrivate::~QUmlRelationshipPrivate()
{
}

void QUmlRelationshipPrivate::addRelatedElement(QUmlElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (!this->relatedElements.contains(relatedElement)) {
        this->relatedElements.insert(relatedElement);
    }
}

void QUmlRelationshipPrivate::removeRelatedElement(QUmlElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (this->relatedElements.contains(relatedElement)) {
        this->relatedElements.remove(relatedElement);
    }
}

/*!
    \class QUmlRelationship

    \inmodule QtUml

    \brief Relationship is an abstract concept that specifies some kind of relationship between elements.
 */

QUmlRelationship::QUmlRelationship(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(*new QUmlRelationshipPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlRelationship::QUmlRelationship(QUmlRelationshipPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlElement(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlRelationship::~QUmlRelationship()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QUmlElement *> QUmlRelationship::relatedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QUmlRelationship);
    return d->relatedElements;
}

void QUmlRelationship::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the elements related by the Relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlrelationship.cpp"

