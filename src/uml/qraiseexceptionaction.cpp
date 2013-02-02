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

#include "qraiseexceptionaction.h"
#include "qraiseexceptionaction_p.h"

#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QRaiseExceptionActionPrivate::QRaiseExceptionActionPrivate() :
    exception(0)
{
}

QRaiseExceptionActionPrivate::~QRaiseExceptionActionPrivate()
{
}

/*!
    \class QRaiseExceptionAction

    \inmodule QtUml

    \brief A raise exception action is an action that causes an exception to occur. The input value becomes the exception object.
 */

QRaiseExceptionAction::QRaiseExceptionAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QRaiseExceptionActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QRaiseExceptionAction::QRaiseExceptionAction(QRaiseExceptionActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QRaiseExceptionAction::~QRaiseExceptionAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QRaiseExceptionAction
// ---------------------------------------------------------------

/*!
    An input pin whose value becomes an exception object.
 */
QInputPin *QRaiseExceptionAction::exception() const
{
    // This is a read-write association end

    Q_D(const QRaiseExceptionAction);
    return d->exception;
}

void QRaiseExceptionAction::setException(QInputPin *exception)
{
    // This is a read-write association end

    Q_D(QRaiseExceptionAction);
    if (d->exception != exception) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->exception));

        d->exception = exception;

        // Adjust subsetted property(ies)
        if (exception) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(exception));
        }
    }
}

void QRaiseExceptionAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An input pin whose value becomes an exception object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRaiseExceptionAction")][QString::fromLatin1("exception")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qraiseexceptionaction.cpp"

QT_END_NAMESPACE_QTUML

