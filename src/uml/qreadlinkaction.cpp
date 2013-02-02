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

#include "qreadlinkaction.h"
#include "qreadlinkaction_p.h"

#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QReadLinkActionPrivate::QReadLinkActionPrivate() :
    result(0)
{
}

QReadLinkActionPrivate::~QReadLinkActionPrivate()
{
}

/*!
    \class QReadLinkAction

    \inmodule QtUml

    \brief A read link action is a link action that navigates across associations to retrieve objects on one end.
 */

QReadLinkAction::QReadLinkAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QLinkAction(*new QReadLinkActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QReadLinkAction::QReadLinkAction(QReadLinkActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QLinkAction(dd, wrapper, parent)
{
    setPropertyData();
}

QReadLinkAction::~QReadLinkAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReadLinkAction
// ---------------------------------------------------------------

/*!
    The pin on which are put the objects participating in the association at the end not specified by the inputs.
 */
QOutputPin *QReadLinkAction::result() const
{
    // This is a read-write association end

    Q_D(const QReadLinkAction);
    return d->result;
}

void QReadLinkAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReadLinkAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
        }
    }
}

void QReadLinkAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The pin on which are put the objects participating in the association at the end not specified by the inputs.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QReadLinkAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QLinkAction::setPropertyData();
}

#include "moc_qreadlinkaction.cpp"

QT_END_NAMESPACE_QTUML

