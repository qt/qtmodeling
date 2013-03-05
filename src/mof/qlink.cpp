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

#include "qlink.h"
#include "qlink_p.h"

#include <QtMof/QElement>
#include <QtMof/QAssociation>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtMof
{

QLinkPrivate::QLinkPrivate() :
    association(0),
    secondElement(0),
    firstElement(0)
{
}

QLinkPrivate::~QLinkPrivate()
{
}


QLink::QLink(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(*new QLinkPrivate, wrapper, parent)
{
    setPropertyData();
}

QLink::QLink(QLinkPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(dd, wrapper, parent)
{
    setPropertyData();
}

QLink::~QLink()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLink
// ---------------------------------------------------------------

QAssociation *QLink::association() const
{
    // This is a read-write attribute

    Q_D(const QLink);
    return d->association;
}

void QLink::setAssociation(QAssociation *association)
{
    // This is a read-write attribute

    Q_D(QLink);
    if (d->association != association) {
        d->association = association;
    }
}

QElement *QLink::secondElement() const
{
    // This is a read-write attribute

    Q_D(const QLink);
    return d->secondElement;
}

void QLink::setSecondElement(QElement *secondElement)
{
    // This is a read-write attribute

    Q_D(QLink);
    if (d->secondElement != secondElement) {
        d->secondElement = secondElement;
    }
}

QElement *QLink::firstElement() const
{
    // This is a read-write attribute

    Q_D(const QLink);
    return d->firstElement;
}

void QLink::setFirstElement(QElement *firstElement)
{
    // This is a read-write attribute

    Q_D(QLink);
    if (d->firstElement != firstElement) {
        d->firstElement = firstElement;
    }
}

bool QLink::equals(const QLink *otherLink) const
{
    qWarning("QLink::equals: operation to be implemented");
    Q_UNUSED(otherLink);

    return bool(); // change here to your derived return
}

void QLink::delete_()
{
    qWarning("QLink::delete_: operation to be implemented");
}

void QLink::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("association")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("association")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("association")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("association")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("association")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("association")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("secondElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtMof::QLink")][QString::fromLatin1("firstElement")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofObject::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qlink.cpp"

