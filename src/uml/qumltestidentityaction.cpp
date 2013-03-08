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

#include "qumltestidentityaction.h"
#include "qumltestidentityaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlTestIdentityActionPrivate::QUmlTestIdentityActionPrivate() :
    second(0),
    result(0),
    first(0)
{
}

QUmlTestIdentityActionPrivate::~QUmlTestIdentityActionPrivate()
{
}

/*!
    \class QUmlTestIdentityAction

    \inmodule QtUml

    \brief A test identity action is an action that tests if two values are identical objects.
 */

QUmlTestIdentityAction::QUmlTestIdentityAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlTestIdentityActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlTestIdentityAction::QUmlTestIdentityAction(QUmlTestIdentityActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlTestIdentityAction::~QUmlTestIdentityAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlTestIdentityAction
// ---------------------------------------------------------------

/*!
    Gives the pin on which an object is placed.
 */
QUmlInputPin *QUmlTestIdentityAction::second() const
{
    // This is a read-write association end

    Q_D(const QUmlTestIdentityAction);
    return d->second;
}

void QUmlTestIdentityAction::setSecond(QUmlInputPin *second)
{
    // This is a read-write association end

    Q_D(QUmlTestIdentityAction);
    if (d->second != second) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->second));

        d->second = second;

        // Adjust subsetted property(ies)
        if (second) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(second));
        }
    }
}

/*!
    Tells whether the two input objects are identical.
 */
QUmlOutputPin *QUmlTestIdentityAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlTestIdentityAction);
    return d->result;
}

void QUmlTestIdentityAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlTestIdentityAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
        }
    }
}

/*!
    Gives the pin on which an object is placed.
 */
QUmlInputPin *QUmlTestIdentityAction::first() const
{
    // This is a read-write association end

    Q_D(const QUmlTestIdentityAction);
    return d->first;
}

void QUmlTestIdentityAction::setFirst(QUmlInputPin *first)
{
    // This is a read-write association end

    Q_D(QUmlTestIdentityAction);
    if (d->first != first) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->first));

        d->first = first;

        // Adjust subsetted property(ies)
        if (first) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(first));
        }
    }
}

void QUmlTestIdentityAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("second")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("second")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("second")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the pin on which an object is placed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("second")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("second")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("second")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the two input objects are identical.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("first")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("first")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("first")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the pin on which an object is placed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("first")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("first")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlTestIdentityAction")][QString::fromLatin1("first")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumltestidentityaction.cpp"

