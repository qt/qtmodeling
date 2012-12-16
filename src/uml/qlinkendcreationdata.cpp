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

QLinkEndCreationData::QLinkEndCreationData(QWrappedObject *parent, QWrappedObject *wrapper) :
    QLinkEndData(*new QLinkEndCreationDataPrivate, parent, wrapper)
{
}

QLinkEndCreationData::QLinkEndCreationData(QLinkEndCreationDataPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QLinkEndData(dd, parent, wrapper)
{
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
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *>("QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QLinkEndCreationData) *> *");
    qRegisterMetaType<QLinkEndCreationData *>("QLinkEndCreationData *");
    qRegisterMetaType<const QSet<QLinkEndCreationData *> *>("const QSet<QLinkEndCreationData *> *");
    qRegisterMetaType<const QList<QLinkEndCreationData *> *>("const QList<QLinkEndCreationData *> *");


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

#include "moc_qlinkendcreationdata.cpp"

QT_END_NAMESPACE_QTUML

