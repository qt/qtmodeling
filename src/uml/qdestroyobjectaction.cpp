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

#include "qdestroyobjectaction.h"
#include "qdestroyobjectaction_p.h"
#include "qaction_p.h"

#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QDestroyObjectActionPrivate::QDestroyObjectActionPrivate() :
    isDestroyLinks(false),
    isDestroyOwnedObjects(false),
    target(0)
{
}

QDestroyObjectActionPrivate::~QDestroyObjectActionPrivate()
{
}

void QDestroyObjectActionPrivate::setDestroyLinks(bool isDestroyLinks)
{
    // This is a read-write attribute

    this->isDestroyLinks = isDestroyLinks;
}

void QDestroyObjectActionPrivate::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    // This is a read-write attribute

    this->isDestroyOwnedObjects = isDestroyOwnedObjects;
}

void QDestroyObjectActionPrivate::setTarget(QInputPin *target)
{
    // This is a read-write association end

    // Adjust subsetted property(ies)
    removeInput(this->target);

    this->target = target;

    // Adjust subsetted property(ies)
    addInput(target);
}

/*!
    \class QDestroyObjectAction

    \inmodule QtUml

    \brief A destroy object action is an action that destroys objects.
 */

QDestroyObjectAction::QDestroyObjectAction(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QDestroyObjectActionPrivate;
}

QDestroyObjectAction::QDestroyObjectAction(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QDestroyObjectActionPrivate;
}

QDestroyObjectAction::~QDestroyObjectAction()
{
}

/*!
    Specifies whether links in which the object participates are destroyed along with the object.
 */
bool QDestroyObjectAction::isDestroyLinks() const
{
    // This is a read-write attribute

    QTUML_D(const QDestroyObjectAction);
    return d->isDestroyLinks;
}

void QDestroyObjectAction::setDestroyLinks(bool isDestroyLinks)
{
    // This is a read-write attribute

    QTUML_D(QDestroyObjectAction);
    if (d->isDestroyLinks != isDestroyLinks) {
        d->setDestroyLinks(isDestroyLinks);
    }
}

/*!
    Specifies whether objects owned by the object are destroyed along with the object.
 */
bool QDestroyObjectAction::isDestroyOwnedObjects() const
{
    // This is a read-write attribute

    QTUML_D(const QDestroyObjectAction);
    return d->isDestroyOwnedObjects;
}

void QDestroyObjectAction::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    // This is a read-write attribute

    QTUML_D(QDestroyObjectAction);
    if (d->isDestroyOwnedObjects != isDestroyOwnedObjects) {
        d->setDestroyOwnedObjects(isDestroyOwnedObjects);
    }
}

/*!
    The input pin providing the object to be destroyed.
 */
QInputPin *QDestroyObjectAction::target() const
{
    // This is a read-write association end

    QTUML_D(const QDestroyObjectAction);
    return d->target;
}

void QDestroyObjectAction::setTarget(QInputPin *target)
{
    // This is a read-write association end

    QTUML_D(QDestroyObjectAction);
    if (d->target != target) {
        d->setTarget(target);
    }
}

#include "moc_qdestroyobjectaction.cpp"

QT_END_NAMESPACE_QTUML

