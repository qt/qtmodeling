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

#include "qcallaction.h"
#include "qcallaction_p.h"

#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QCallActionPrivate::QCallActionPrivate() :
    isSynchronous(true)
{
}

QCallActionPrivate::~QCallActionPrivate()
{
}

/*!
    \class QCallAction

    \inmodule QtUml

    \brief CallAction is an abstract class for actions that invoke behavior and receive return values.
 */

QCallAction::QCallAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QInvocationAction(*new QCallActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QCallAction::QCallAction(QCallActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QInvocationAction(dd, wrapper, parent)
{
    setPropertyData();
}

QCallAction::~QCallAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QCallAction
// ---------------------------------------------------------------

/*!
    If true, the call is synchronous and the caller waits for completion of the invoked behavior. If false, the call is asynchronous and the caller proceeds immediately and does not expect a return values.
 */
bool QCallAction::isSynchronous() const
{
    // This is a read-write attribute

    Q_D(const QCallAction);
    return d->isSynchronous;
}

void QCallAction::setSynchronous(bool isSynchronous)
{
    // This is a read-write attribute

    Q_D(QCallAction);
    if (d->isSynchronous != isSynchronous) {
        d->isSynchronous = isSynchronous;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isSynchronous");
}

void QCallAction::unsetSynchronous()
{
    setSynchronous(true);
    Q_D(QCallAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isSynchronous"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCallAction
// ---------------------------------------------------------------

/*!
    A list of output pins where the results of performing the invocation are placed.
 */
QList<QOutputPin *> QCallAction::results() const
{
    // This is a read-write association end

    Q_D(const QCallAction);
    return d->results;
}

void QCallAction::addResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QCallAction);
    if (!d->results.contains(result)) {
        d->results.append(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
    }
}

void QCallAction::removeResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QCallAction);
    if (d->results.contains(result)) {
        d->results.removeAll(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(result));
    }
}

void QCallAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the call is synchronous and the caller waits for completion of the invoked behavior. If false, the call is asynchronous and the caller proceeds immediately and does not expect a return values.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("results")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("results")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("results")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins where the results of performing the invocation are placed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("results")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("results")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCallAction")][QString::fromLatin1("results")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QInvocationAction::setPropertyData();
}

#include "moc_qcallaction.cpp"

QT_END_NAMESPACE_QTUML

