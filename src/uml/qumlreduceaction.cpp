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

#include "qumlreduceaction.h"
#include "qumlreduceaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlReduceActionPrivate::QUmlReduceActionPrivate() :
    isOrdered(false),
    result(0),
    collection(0),
    reducer(0)
{
}

QUmlReduceActionPrivate::~QUmlReduceActionPrivate()
{
}

/*!
    \class QUmlReduceAction

    \inmodule QtUml

    \brief A reduce action is an action that reduces a collection to a single value by combining the elements of the collection.
 */

QUmlReduceAction::QUmlReduceAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlReduceActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlReduceAction::QUmlReduceAction(QUmlReduceActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlReduceAction::~QUmlReduceAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlReduceAction
// ---------------------------------------------------------------

/*!
    Tells whether the order of the input collection should determine the order in which the behavior is applied to its elements.
 */
bool QUmlReduceAction::isOrdered() const
{
    // This is a read-write attribute

    Q_D(const QUmlReduceAction);
    return d->isOrdered;
}

void QUmlReduceAction::setOrdered(bool isOrdered)
{
    // This is a read-write attribute

    Q_D(QUmlReduceAction);
    if (d->isOrdered != isOrdered) {
        d->isOrdered = isOrdered;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isOrdered");
}

void QUmlReduceAction::unsetOrdered()
{
    setOrdered(false);
    Q_D(QUmlReduceAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlReduceAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QUmlOutputPin *QUmlReduceAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlReduceAction);
    return d->result;
}

void QUmlReduceAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlReduceAction);
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
    The collection to be reduced.
 */
QUmlInputPin *QUmlReduceAction::collection() const
{
    // This is a read-write association end

    Q_D(const QUmlReduceAction);
    return d->collection;
}

void QUmlReduceAction::setCollection(QUmlInputPin *collection)
{
    // This is a read-write association end

    Q_D(QUmlReduceAction);
    if (d->collection != collection) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->collection));

        d->collection = collection;

        // Adjust subsetted property(ies)
        if (collection) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(collection));
        }
    }
}

/*!
    Behavior that is applied to two elements of the input collection to produce a value that is the same type as elements of the collection.
 */
QUmlBehavior *QUmlReduceAction::reducer() const
{
    // This is a read-write association end

    Q_D(const QUmlReduceAction);
    return d->reducer;
}

void QUmlReduceAction::setReducer(QUmlBehavior *reducer)
{
    // This is a read-write association end

    Q_D(QUmlReduceAction);
    if (d->reducer != reducer) {
        d->reducer = reducer;
    }
}

void QUmlReduceAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("isOrdered")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("isOrdered")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("isOrdered")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the order of the input collection should determine the order in which the behavior is applied to its elements.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("isOrdered")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("isOrdered")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("isOrdered")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("collection")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("collection")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("collection")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The collection to be reduced.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("collection")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("collection")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("collection")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("reducer")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("reducer")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("reducer")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Behavior that is applied to two elements of the input collection to produce a value that is the same type as elements of the collection.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("reducer")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("reducer")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReduceAction")][QString::fromLatin1("reducer")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlreduceaction.cpp"

