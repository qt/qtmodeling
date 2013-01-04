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

#include "qlinkendcreationdata.h"
#include "qlinkendcreationdata_p.h"

#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QLinkEndCreationDataPrivate::QLinkEndCreationDataPrivate() :
    isReplaceAll(false),
    insertAt(0)
{
}

QLinkEndCreationDataPrivate::~QLinkEndCreationDataPrivate()
{
}

/*!
    \class QLinkEndCreationData

    \inmodule QtUml

    \brief A link end creation data is not an action. It is an element that identifies links. It identifies one end of a link to be created by a create link action.
 */

QLinkEndCreationData::QLinkEndCreationData(QWrappedObject *wrapper, QWrappedObject *parent) :
    QLinkEndData(*new QLinkEndCreationDataPrivate, wrapper, parent)
{
    setPropertyData();
}

QLinkEndCreationData::QLinkEndCreationData(QLinkEndCreationDataPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QLinkEndData(dd, wrapper, parent)
{
    setPropertyData();
}

QLinkEndCreationData::~QLinkEndCreationData()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLinkEndCreationData
// ---------------------------------------------------------------

/*!
    Specifies whether the existing links emanating from the object on this end should be destroyed before creating a new link.
 */
bool QLinkEndCreationData::isReplaceAll() const
{
    // This is a read-write attribute

    Q_D(const QLinkEndCreationData);
    return d->isReplaceAll;
}

void QLinkEndCreationData::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write attribute

    Q_D(QLinkEndCreationData);
    if (d->isReplaceAll != isReplaceAll) {
        d->isReplaceAll = isReplaceAll;
    }
}

void QLinkEndCreationData::unsetReplaceAll()
{
    setReplaceAll(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QLinkEndCreationData
// ---------------------------------------------------------------

/*!
    Specifies where the new link should be inserted for ordered association ends, or where an existing link should be moved to. The type of the input is UnlimitedNatural, but the input cannot be zero. This pin is omitted for association ends that are not ordered.
 */
QInputPin *QLinkEndCreationData::insertAt() const
{
    // This is a read-write association end

    Q_D(const QLinkEndCreationData);
    return d->insertAt;
}

void QLinkEndCreationData::setInsertAt(QInputPin *insertAt)
{
    // This is a read-write association end

    Q_D(QLinkEndCreationData);
    if (d->insertAt != insertAt) {
        d->insertAt = insertAt;
    }
}

void QLinkEndCreationData::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QLinkEndData::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QLinkEndCreationData::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the existing links emanating from the object on this end should be destroyed before creating a new link.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies where the new link should be inserted for ordered association ends, or where an existing link should be moved to. The type of the input is UnlimitedNatural, but the input cannot be zero. This pin is omitted for association ends that are not ordered.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QLinkEndData::setPropertyData();
}

#include "moc_qlinkendcreationdata.cpp"

QT_END_NAMESPACE_QTUML

