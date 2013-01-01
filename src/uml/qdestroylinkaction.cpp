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

#include "qdestroylinkaction.h"
#include "qdestroylinkaction_p.h"

#include <QtUml/QLinkEndDestructionData>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QDestroyLinkActionPrivate::QDestroyLinkActionPrivate()
{
}

QDestroyLinkActionPrivate::~QDestroyLinkActionPrivate()
{
    qDeleteAll(endData);
}

/*!
    \class QDestroyLinkAction

    \inmodule QtUml

    \brief A destroy link action is a write link action that destroys links and link objects.
 */

QDestroyLinkAction::QDestroyLinkAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteLinkAction(*new QDestroyLinkActionPrivate, parent, wrapper)
{
    setPropertyData();
}

QDestroyLinkAction::QDestroyLinkAction(QDestroyLinkActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteLinkAction(dd, parent, wrapper)
{
    setPropertyData();
}

QDestroyLinkAction::~QDestroyLinkAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QDestroyLinkAction
// ---------------------------------------------------------------

/*!
    Specifies ends of association and inputs.
 */
QSet<QLinkEndDestructionData *> QDestroyLinkAction::endData() const
{
    // This is a read-write association end

    Q_D(const QDestroyLinkAction);
    return d->endData;
}

void QDestroyLinkAction::addEndData(QLinkEndDestructionData *endData)
{
    // This is a read-write association end

    Q_D(QDestroyLinkAction);
    if (!d->endData.contains(endData)) {
        d->endData.insert(endData);
        qTopLevelWrapper(endData)->setParent(qTopLevelWrapper(this));
    }
}

void QDestroyLinkAction::removeEndData(QLinkEndDestructionData *endData)
{
    // This is a read-write association end

    Q_D(QDestroyLinkAction);
    if (d->endData.contains(endData)) {
        d->endData.remove(endData);
        qTopLevelWrapper(endData)->setParent(0);
    }
}

void QDestroyLinkAction::registerMetaTypes() const
{
    qRegisterMetaType<QLinkEndDestructionData *>("QLinkEndDestructionData *");
    qRegisterMetaType<QSet<QLinkEndDestructionData *>>("QSet<QLinkEndDestructionData *>");
    qRegisterMetaType<QList<QLinkEndDestructionData *>>("QList<QLinkEndDestructionData *>");

    QWriteLinkAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QDestroyLinkAction::setPropertyData()
{

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::QtWrappedObjects::IsCompositeRole] = true;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDestroyLinkAction")][QString::fromLatin1("endData")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies ends of association and inputs.");

    QWriteLinkAction::setPropertyData();
}

#include "moc_qdestroylinkaction.cpp"

QT_END_NAMESPACE_QTUML

