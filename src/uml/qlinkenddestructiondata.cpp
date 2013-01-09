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

#include "qlinkenddestructiondata.h"
#include "qlinkenddestructiondata_p.h"

#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QLinkEndDestructionDataPrivate::QLinkEndDestructionDataPrivate() :
    isDestroyDuplicates(false),
    destroyAt(0)
{
}

QLinkEndDestructionDataPrivate::~QLinkEndDestructionDataPrivate()
{
}

/*!
    \class QLinkEndDestructionData

    \inmodule QtUml

    \brief A link end destruction data is not an action. It is an element that identifies links. It identifies one end of a link to be destroyed by destroy link action.
 */

QLinkEndDestructionData::QLinkEndDestructionData(QWrappedObject *wrapper, QWrappedObject *parent) :
    QLinkEndData(*new QLinkEndDestructionDataPrivate, wrapper, parent)
{
    setPropertyData();
}

QLinkEndDestructionData::QLinkEndDestructionData(QLinkEndDestructionDataPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QLinkEndData(dd, wrapper, parent)
{
    setPropertyData();
}

QLinkEndDestructionData::~QLinkEndDestructionData()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLinkEndDestructionData
// ---------------------------------------------------------------

/*!
    Specifies whether to destroy duplicates of the value in nonunique association ends.
 */
bool QLinkEndDestructionData::isDestroyDuplicates() const
{
    // This is a read-write attribute

    Q_D(const QLinkEndDestructionData);
    return d->isDestroyDuplicates;
}

void QLinkEndDestructionData::setDestroyDuplicates(bool isDestroyDuplicates)
{
    // This is a read-write attribute

    Q_D(QLinkEndDestructionData);
    if (d->isDestroyDuplicates != isDestroyDuplicates) {
        d->isDestroyDuplicates = isDestroyDuplicates;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDestroyDuplicates");
}

void QLinkEndDestructionData::unsetDestroyDuplicates()
{
    setDestroyDuplicates(false);
    Q_D(QLinkEndDestructionData);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDestroyDuplicates"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QLinkEndDestructionData
// ---------------------------------------------------------------

/*!
    Specifies the position of an existing link to be destroyed in ordered nonunique association ends. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QInputPin *QLinkEndDestructionData::destroyAt() const
{
    // This is a read-write association end

    Q_D(const QLinkEndDestructionData);
    return d->destroyAt;
}

void QLinkEndDestructionData::setDestroyAt(QInputPin *destroyAt)
{
    // This is a read-write association end

    Q_D(QLinkEndDestructionData);
    if (d->destroyAt != destroyAt) {
        d->destroyAt = destroyAt;
    }
}

void QLinkEndDestructionData::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QLinkEndData::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QLinkEndDestructionData::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("isDestroyDuplicates")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("isDestroyDuplicates")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("isDestroyDuplicates")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether to destroy duplicates of the value in nonunique association ends.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("isDestroyDuplicates")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("isDestroyDuplicates")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("isDestroyDuplicates")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("destroyAt")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("destroyAt")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("destroyAt")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the position of an existing link to be destroyed in ordered nonunique association ends. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("destroyAt")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("destroyAt")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLinkEndDestructionData")][QString::fromLatin1("destroyAt")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QLinkEndData::setPropertyData();
}

#include "moc_qlinkenddestructiondata.cpp"

QT_END_NAMESPACE_QTUML

