/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qmofrelationship.h"
#include "qmofrelationship_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofRelationshipPrivate::QMofRelationshipPrivate()
{
}

QMofRelationshipPrivate::~QMofRelationshipPrivate()
{
}

void QMofRelationshipPrivate::addRelatedElement(QMofElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (!this->relatedElements.contains(relatedElement)) {
        this->relatedElements.insert(relatedElement);
    }
}

void QMofRelationshipPrivate::removeRelatedElement(QMofElement *relatedElement)
{
    // This is a read-only derived-union association end

    if (this->relatedElements.contains(relatedElement)) {
        this->relatedElements.remove(relatedElement);
    }
}

/*!
    \class QMofRelationship

    \inmodule QtMof

    \brief Relationship is an abstract concept that specifies some kind of relationship between elements.
 */

QMofRelationship::QMofRelationship(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(*new QMofRelationshipPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofRelationship::QMofRelationship(QMofRelationshipPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofRelationship::~QMofRelationship()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QMofRelationship
// ---------------------------------------------------------------

/*!
    Specifies the elements related by the Relationship.
 */
QSet<QMofElement *> QMofRelationship::relatedElements() const
{
    // This is a read-only derived-union association end

    Q_D(const QMofRelationship);
    return d->relatedElements;
}

void QMofRelationship::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::IsDerivedUnionRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the elements related by the Relationship.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofRelationship")][QString::fromLatin1("relatedElements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QMof");

    QMofElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofrelationship.cpp"

