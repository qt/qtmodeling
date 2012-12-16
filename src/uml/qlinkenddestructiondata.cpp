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

QLinkEndDestructionData::QLinkEndDestructionData(QWrappedObject *parent, QWrappedObject *wrapper) :
    QLinkEndData(*new QLinkEndDestructionDataPrivate, parent, wrapper)
{
}

QLinkEndDestructionData::QLinkEndDestructionData(QLinkEndDestructionDataPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QLinkEndData(dd, parent, wrapper)
{
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
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QLinkEndDestructionData) *>("QT_PREPEND_NAMESPACE_QTUML(QLinkEndDestructionData) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QLinkEndDestructionData) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QLinkEndDestructionData) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QLinkEndDestructionData) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QLinkEndDestructionData) *> *");
    qRegisterMetaType<QLinkEndDestructionData *>("QLinkEndDestructionData *");
    qRegisterMetaType<const QSet<QLinkEndDestructionData *> *>("const QSet<QLinkEndDestructionData *> *");
    qRegisterMetaType<const QList<QLinkEndDestructionData *> *>("const QList<QLinkEndDestructionData *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *>("QT_PREPEND_NAMESPACE_QTUML(QInputPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QInputPin) *> *");
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<const QSet<QInputPin *> *>("const QSet<QInputPin *> *");
    qRegisterMetaType<const QList<QInputPin *> *>("const QList<QInputPin *> *");


    QLinkEndData::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qlinkenddestructiondata.cpp"

QT_END_NAMESPACE_QTUML

