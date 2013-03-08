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

#include "qmoflink.h"
#include "qmoflink_p.h"

#include <QtMof/QMofElement>
#include <QtMof/QMofAssociation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofLinkPrivate::QMofLinkPrivate() :
    association(0),
    secondElement(0),
    firstElement(0)
{
}

QMofLinkPrivate::~QMofLinkPrivate()
{
}


QMofLink::QMofLink(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(*new QMofLinkPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofLink::QMofLink(QMofLinkPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(dd, wrapper, parent)
{
    setPropertyData();
}

QMofLink::~QMofLink()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofLink
// ---------------------------------------------------------------

QMofAssociation *QMofLink::association() const
{
    // This is a read-write attribute

    Q_D(const QMofLink);
    return d->association;
}

void QMofLink::setAssociation(QMofAssociation *association)
{
    // This is a read-write attribute

    Q_D(QMofLink);
    if (d->association != association) {
        d->association = association;
    }
}

QMofElement *QMofLink::secondElement() const
{
    // This is a read-write attribute

    Q_D(const QMofLink);
    return d->secondElement;
}

void QMofLink::setSecondElement(QMofElement *secondElement)
{
    // This is a read-write attribute

    Q_D(QMofLink);
    if (d->secondElement != secondElement) {
        d->secondElement = secondElement;
    }
}

QMofElement *QMofLink::firstElement() const
{
    // This is a read-write attribute

    Q_D(const QMofLink);
    return d->firstElement;
}

void QMofLink::setFirstElement(QMofElement *firstElement)
{
    // This is a read-write attribute

    Q_D(QMofLink);
    if (d->firstElement != firstElement) {
        d->firstElement = firstElement;
    }
}

bool QMofLink::equals(const QMofLink *otherLink) const
{
    qWarning("QMofLink::equals: operation to be implemented");
    Q_UNUSED(otherLink);

    return bool(); // change here to your derived return
}

void QMofLink::delete_()
{
    qWarning("QMofLink::delete_: operation to be implemented");
}

void QMofLink::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("association")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("association")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("association")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("association")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("association")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("association")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmoflink.cpp"

