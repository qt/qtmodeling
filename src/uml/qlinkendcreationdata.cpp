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

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

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
    d->modifiedResettableProperties << QString::fromLatin1("isReplaceAll");
}

void QLinkEndCreationData::unsetReplaceAll()
{
    setReplaceAll(false);
    Q_D(QLinkEndCreationData);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReplaceAll"));
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

void QLinkEndCreationData::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether the existing links emanating from the object on this end should be destroyed before creating a new link.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies where the new link should be inserted for ordered association ends, or where an existing link should be moved to. The type of the input is UnlimitedNatural, but the input cannot be zero. This pin is omitted for association ends that are not ordered.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QLinkEndCreationData")][QString::fromLatin1("insertAt")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QLinkEndData::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qlinkendcreationdata.cpp"

