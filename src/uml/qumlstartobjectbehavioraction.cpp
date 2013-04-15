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
#include "qumlstartobjectbehavioraction.h"
#include "qumlstartobjectbehavioraction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStartObjectBehaviorActionPrivate::QUmlStartObjectBehaviorActionPrivate() :
    object(0)
{
}

QUmlStartObjectBehaviorActionPrivate::~QUmlStartObjectBehaviorActionPrivate()
{
}

/*!
    \class QUmlStartObjectBehaviorAction

    \inmodule QtUml

    \brief StartObjectBehaviorAction is an action that starts the execution either of a directly instantiated behavior or of the classifier behavior of an object. Argument values may be supplied for the input parameters of the behavior. If the behavior is invoked synchronously, then output values may be obtained for output parameters.
 */

QUmlStartObjectBehaviorAction::QUmlStartObjectBehaviorAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlCallAction(*new QUmlStartObjectBehaviorActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlStartObjectBehaviorAction::QUmlStartObjectBehaviorAction(QUmlStartObjectBehaviorActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlCallAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlStartObjectBehaviorAction::~QUmlStartObjectBehaviorAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStartObjectBehaviorAction
// ---------------------------------------------------------------

/*!
    Holds the object which is either a behavior to be started or has a classifier behavior to be started.
 */
QUmlInputPin *QUmlStartObjectBehaviorAction::object() const
{
    // This is a read-write association end

    Q_D(const QUmlStartObjectBehaviorAction);
    return d->object;
}

void QUmlStartObjectBehaviorAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    Q_D(QUmlStartObjectBehaviorAction);
    if (d->object != object) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->object));

        d->object = object;

        // Adjust subsetted property(ies)
        if (object) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(object));
        }
    }
}

void QUmlStartObjectBehaviorAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartObjectBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartObjectBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartObjectBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Holds the object which is either a behavior to be started or has a classifier behavior to be started.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartObjectBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartObjectBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartObjectBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlCallAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstartobjectbehavioraction.cpp"

