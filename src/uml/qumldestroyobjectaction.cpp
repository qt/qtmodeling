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

#include "qumldestroyobjectaction.h"
#include "qumldestroyobjectaction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlDestroyObjectActionPrivate::QUmlDestroyObjectActionPrivate() :
    isDestroyLinks(false),
    isDestroyOwnedObjects(false),
    target(0)
{
}

QUmlDestroyObjectActionPrivate::~QUmlDestroyObjectActionPrivate()
{
}

/*!
    \class QUmlDestroyObjectAction

    \inmodule QtUml

    \brief A destroy object action is an action that destroys objects.
 */

QUmlDestroyObjectAction::QUmlDestroyObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlDestroyObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlDestroyObjectAction::QUmlDestroyObjectAction(QUmlDestroyObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlDestroyObjectAction::~QUmlDestroyObjectAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlDestroyObjectAction
// ---------------------------------------------------------------

/*!
    Specifies whether links in which the object participates are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyLinks() const
{
    // This is a read-write attribute

    Q_D(const QUmlDestroyObjectAction);
    return d->isDestroyLinks;
}

void QUmlDestroyObjectAction::setDestroyLinks(bool isDestroyLinks)
{
    // This is a read-write attribute

    Q_D(QUmlDestroyObjectAction);
    if (d->isDestroyLinks != isDestroyLinks) {
        d->isDestroyLinks = isDestroyLinks;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDestroyLinks");
}

void QUmlDestroyObjectAction::unsetDestroyLinks()
{
    setDestroyLinks(false);
    Q_D(QUmlDestroyObjectAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDestroyLinks"));
}

/*!
    Specifies whether objects owned by the object are destroyed along with the object.
 */
bool QUmlDestroyObjectAction::isDestroyOwnedObjects() const
{
    // This is a read-write attribute

    Q_D(const QUmlDestroyObjectAction);
    return d->isDestroyOwnedObjects;
}

void QUmlDestroyObjectAction::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    // This is a read-write attribute

    Q_D(QUmlDestroyObjectAction);
    if (d->isDestroyOwnedObjects != isDestroyOwnedObjects) {
        d->isDestroyOwnedObjects = isDestroyOwnedObjects;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDestroyOwnedObjects");
}

void QUmlDestroyObjectAction::unsetDestroyOwnedObjects()
{
    setDestroyOwnedObjects(false);
    Q_D(QUmlDestroyObjectAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDestroyOwnedObjects"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlDestroyObjectAction
// ---------------------------------------------------------------

/*!
    The input pin providing the object to be destroyed.
 */
QUmlInputPin *QUmlDestroyObjectAction::target() const
{
    // This is a read-write association end

    Q_D(const QUmlDestroyObjectAction);
    return d->target;
}

void QUmlDestroyObjectAction::setTarget(QUmlInputPin *target)
{
    // This is a read-write association end

    Q_D(QUmlDestroyObjectAction);
    if (d->target != target) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->target));

        d->target = target;

        // Adjust subsetted property(ies)
        if (target) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(target));
        }
    }
}

void QUmlDestroyObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether links in which the object participates are destroyed along with the object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyLinks")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether objects owned by the object are destroyed along with the object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("isDestroyOwnedObjects")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The input pin providing the object to be destroyed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlDestroyObjectAction")][QString::fromLatin1("target")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumldestroyobjectaction.cpp"

