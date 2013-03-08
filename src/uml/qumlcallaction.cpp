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

#include "qumlcallaction.h"
#include "qumlcallaction_p.h"

#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlCallActionPrivate::QUmlCallActionPrivate() :
    isSynchronous(true)
{
}

QUmlCallActionPrivate::~QUmlCallActionPrivate()
{
}

/*!
    \class QUmlCallAction

    \inmodule QtUml

    \brief CallAction is an abstract class for actions that invoke behavior and receive return values.
 */

QUmlCallAction::QUmlCallAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(*new QUmlCallActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlCallAction::QUmlCallAction(QUmlCallActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlInvocationAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlCallAction::~QUmlCallAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlCallAction
// ---------------------------------------------------------------

/*!
    If true, the call is synchronous and the caller waits for completion of the invoked behavior. If false, the call is asynchronous and the caller proceeds immediately and does not expect a return values.
 */
bool QUmlCallAction::isSynchronous() const
{
    // This is a read-write attribute

    Q_D(const QUmlCallAction);
    return d->isSynchronous;
}

void QUmlCallAction::setSynchronous(bool isSynchronous)
{
    // This is a read-write attribute

    Q_D(QUmlCallAction);
    if (d->isSynchronous != isSynchronous) {
        d->isSynchronous = isSynchronous;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isSynchronous");
}

void QUmlCallAction::unsetSynchronous()
{
    setSynchronous(true);
    Q_D(QUmlCallAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isSynchronous"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlCallAction
// ---------------------------------------------------------------

/*!
    A list of output pins where the results of performing the invocation are placed.
 */
QList<QUmlOutputPin *> QUmlCallAction::results() const
{
    // This is a read-write association end

    Q_D(const QUmlCallAction);
    return d->results;
}

void QUmlCallAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlCallAction);
    if (!d->results.contains(result)) {
        d->results.append(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

void QUmlCallAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlCallAction);
    if (d->results.contains(result)) {
        d->results.removeAll(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

void QUmlCallAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the call is synchronous and the caller waits for completion of the invoked behavior. If false, the call is asynchronous and the caller proceeds immediately and does not expect a return values.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("isSynchronous")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("results")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("results")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("results")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins where the results of performing the invocation are placed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("results")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("results")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlCallAction")][QString::fromLatin1("results")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlInvocationAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlcallaction.cpp"

