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

#include "qumlstartclassifierbehavioraction.h"
#include "qumlstartclassifierbehavioraction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStartClassifierBehaviorActionPrivate::QUmlStartClassifierBehaviorActionPrivate() :
    object(0)
{
}

QUmlStartClassifierBehaviorActionPrivate::~QUmlStartClassifierBehaviorActionPrivate()
{
}

/*!
    \class QUmlStartClassifierBehaviorAction

    \inmodule QtUml

    \brief A start classifier behavior action is an action that starts the classifier behavior of the input.
 */

QUmlStartClassifierBehaviorAction::QUmlStartClassifierBehaviorAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlStartClassifierBehaviorActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlStartClassifierBehaviorAction::QUmlStartClassifierBehaviorAction(QUmlStartClassifierBehaviorActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlStartClassifierBehaviorAction::~QUmlStartClassifierBehaviorAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStartClassifierBehaviorAction
// ---------------------------------------------------------------

/*!
    Holds the object on which to start the owned behavior.
 */
QUmlInputPin *QUmlStartClassifierBehaviorAction::object() const
{
    // This is a read-write association end

    Q_D(const QUmlStartClassifierBehaviorAction);
    return d->object;
}

void QUmlStartClassifierBehaviorAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    Q_D(QUmlStartClassifierBehaviorAction);
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

void QUmlStartClassifierBehaviorAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Holds the object on which to start the owned behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstartclassifierbehavioraction.cpp"

