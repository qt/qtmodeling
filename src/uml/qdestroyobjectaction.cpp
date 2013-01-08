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

#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

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

/*!
    \class QDestroyObjectAction

    \inmodule QtUml

    \brief A destroy object action is an action that destroys objects.
 */

QDestroyObjectAction::QDestroyObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QDestroyObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QDestroyObjectAction::QDestroyObjectAction(QDestroyObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QDestroyObjectAction::~QDestroyObjectAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QDestroyObjectAction
// ---------------------------------------------------------------

/*!
    Specifies whether links in which the object participates are destroyed along with the object.
 */
bool QDestroyObjectAction::isDestroyLinks() const
{
    // This is a read-write attribute

    Q_D(const QDestroyObjectAction);
    return d->isDestroyLinks;
}

void QDestroyObjectAction::setDestroyLinks(bool isDestroyLinks)
{
    // This is a read-write attribute

    Q_D(QDestroyObjectAction);
    if (d->isDestroyLinks != isDestroyLinks) {
        d->isDestroyLinks = isDestroyLinks;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDestroyLinks");
}

void QDestroyObjectAction::unsetDestroyLinks()
{
    setDestroyLinks(false);
    Q_D(QDestroyObjectAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDestroyLinks"));
}

/*!
    Specifies whether objects owned by the object are destroyed along with the object.
 */
bool QDestroyObjectAction::isDestroyOwnedObjects() const
{
    // This is a read-write attribute

    Q_D(const QDestroyObjectAction);
    return d->isDestroyOwnedObjects;
}

void QDestroyObjectAction::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    // This is a read-write attribute

    Q_D(QDestroyObjectAction);
    if (d->isDestroyOwnedObjects != isDestroyOwnedObjects) {
        d->isDestroyOwnedObjects = isDestroyOwnedObjects;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDestroyOwnedObjects");
}

void QDestroyObjectAction::unsetDestroyOwnedObjects()
{
    setDestroyOwnedObjects(false);
    Q_D(QDestroyObjectAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDestroyOwnedObjects"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDestroyObjectAction
// ---------------------------------------------------------------

/*!
    The input pin providing the object to be destroyed.
 */
QInputPin *QDestroyObjectAction::target() const
{
    // This is a read-write association end

    Q_D(const QDestroyObjectAction);
    return d->target;
}

void QDestroyObjectAction::setTarget(QInputPin *target)
{
    // This is a read-write association end

    Q_D(QDestroyObjectAction);
    if (d->target != target) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->target));

        d->target = target;

        // Adjust subsetted property(ies)
        if (target) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(target));
        }
    }
}

void QDestroyObjectAction::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QDestroyObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether links in which the object participates are destroyed along with the object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether objects owned by the object are destroyed along with the object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The input pin providing the object to be destroyed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qdestroyobjectaction.cpp"

QT_END_NAMESPACE_QTUML

