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

#include "qumlraiseexceptionaction.h"
#include "qumlraiseexceptionaction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlRaiseExceptionActionPrivate::QUmlRaiseExceptionActionPrivate() :
    exception(0)
{
}

QUmlRaiseExceptionActionPrivate::~QUmlRaiseExceptionActionPrivate()
{
}

/*!
    \class QUmlRaiseExceptionAction

    \inmodule QtUml

    \brief A raise exception action is an action that causes an exception to occur. The input value becomes the exception object.
 */

QUmlRaiseExceptionAction::QUmlRaiseExceptionAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlRaiseExceptionActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlRaiseExceptionAction::QUmlRaiseExceptionAction(QUmlRaiseExceptionActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlRaiseExceptionAction::~QUmlRaiseExceptionAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlRaiseExceptionAction
// ---------------------------------------------------------------

/*!
    An input pin whose value becomes an exception object.
 */
QUmlInputPin *QUmlRaiseExceptionAction::exception() const
{
    // This is a read-write association end

    Q_D(const QUmlRaiseExceptionAction);
    return d->exception;
}

void QUmlRaiseExceptionAction::setException(QUmlInputPin *exception)
{
    // This is a read-write association end

    Q_D(QUmlRaiseExceptionAction);
    if (d->exception != exception) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->exception));

        d->exception = exception;

        // Adjust subsetted property(ies)
        if (exception) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(exception));
        }
    }
}

void QUmlRaiseExceptionAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An input pin whose value becomes an exception object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlraiseexceptionaction.cpp"

