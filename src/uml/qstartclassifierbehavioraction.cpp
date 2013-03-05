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

#include "qstartclassifierbehavioraction.h"
#include "qstartclassifierbehavioraction_p.h"

#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QStartClassifierBehaviorActionPrivate::QStartClassifierBehaviorActionPrivate() :
    object(0)
{
}

QStartClassifierBehaviorActionPrivate::~QStartClassifierBehaviorActionPrivate()
{
}

/*!
    \class QStartClassifierBehaviorAction

    \inmodule QtUml

    \brief A start classifier behavior action is an action that starts the classifier behavior of the input.
 */

QStartClassifierBehaviorAction::QStartClassifierBehaviorAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QStartClassifierBehaviorActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QStartClassifierBehaviorAction::QStartClassifierBehaviorAction(QStartClassifierBehaviorActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QStartClassifierBehaviorAction::~QStartClassifierBehaviorAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QStartClassifierBehaviorAction
// ---------------------------------------------------------------

/*!
    Holds the object on which to start the owned behavior.
 */
QInputPin *QStartClassifierBehaviorAction::object() const
{
    // This is a read-write association end

    Q_D(const QStartClassifierBehaviorAction);
    return d->object;
}

void QStartClassifierBehaviorAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QStartClassifierBehaviorAction);
    if (d->object != object) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->object));

        d->object = object;

        // Adjust subsetted property(ies)
        if (object) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(object));
        }
    }
}

void QStartClassifierBehaviorAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Holds the object on which to start the owned behavior.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QStartClassifierBehaviorAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qstartclassifierbehavioraction.cpp"

