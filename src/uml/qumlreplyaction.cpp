/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qumlreplyaction.h"
#include "qumlreplyaction_p.h"

#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlReplyActionPrivate::QUmlReplyActionPrivate() :
    replyToCall(0),
    returnInformation(0)
{
}

QUmlReplyActionPrivate::~QUmlReplyActionPrivate()
{
}

/*!
    \class QUmlReplyAction

    \inmodule QtUml

    \brief A reply action is an action that accepts a set of return values and a value containing return information produced by a previous accept call action. The reply action returns the values to the caller of the previous call, completing execution of the call.
 */

QUmlReplyAction::QUmlReplyAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlReplyActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlReplyAction::QUmlReplyAction(QUmlReplyActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlReplyAction::~QUmlReplyAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlReplyAction
// ---------------------------------------------------------------

/*!
    The trigger specifying the operation whose call is being replied to.
 */
QUmlTrigger *QUmlReplyAction::replyToCall() const
{
    // This is a read-write association end

    Q_D(const QUmlReplyAction);
    return d->replyToCall;
}

void QUmlReplyAction::setReplyToCall(QUmlTrigger *replyToCall)
{
    // This is a read-write association end

    Q_D(QUmlReplyAction);
    if (d->replyToCall != replyToCall) {
        d->replyToCall = replyToCall;
    }
}

/*!
    A pin containing the return information value produced by an earlier AcceptCallAction.
 */
QUmlInputPin *QUmlReplyAction::returnInformation() const
{
    // This is a read-write association end

    Q_D(const QUmlReplyAction);
    return d->returnInformation;
}

void QUmlReplyAction::setReturnInformation(QUmlInputPin *returnInformation)
{
    // This is a read-write association end

    Q_D(QUmlReplyAction);
    if (d->returnInformation != returnInformation) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->returnInformation));

        d->returnInformation = returnInformation;

        // Adjust subsetted property(ies)
        if (returnInformation) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(returnInformation));
        }
    }
}

/*!
    A list of pins containing the reply values of the operation. These values are returned to the caller.
 */
QSet<QUmlInputPin *> QUmlReplyAction::replyValues() const
{
    // This is a read-write association end

    Q_D(const QUmlReplyAction);
    return d->replyValues;
}

void QUmlReplyAction::addReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    Q_D(QUmlReplyAction);
    if (!d->replyValues.contains(replyValue)) {
        d->replyValues.insert(replyValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(replyValue));
    }
}

void QUmlReplyAction::removeReplyValue(QUmlInputPin *replyValue)
{
    // This is a read-write association end

    Q_D(QUmlReplyAction);
    if (d->replyValues.contains(replyValue)) {
        d->replyValues.remove(replyValue);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(replyValue));
    }
}

void QUmlReplyAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyToCall")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyToCall")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyToCall")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The trigger specifying the operation whose call is being replied to.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyToCall")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyToCall")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyToCall")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("returnInformation")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("returnInformation")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("returnInformation")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A pin containing the return information value produced by an earlier AcceptCallAction.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("returnInformation")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("returnInformation")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("returnInformation")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyValues")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyValues")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyValues")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of pins containing the reply values of the operation. These values are returned to the caller.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyValues")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyValues")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReplyAction")][QString::fromLatin1("replyValues")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlreplyaction.cpp"

