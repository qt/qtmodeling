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

#include "qunmarshallaction.h"
#include "qunmarshallaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>
#include <QtUml/QClassifier>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QUnmarshallActionPrivate::QUnmarshallActionPrivate() :
    object(0),
    unmarshallType(0)
{
}

QUnmarshallActionPrivate::~QUnmarshallActionPrivate()
{
}

/*!
    \class QUnmarshallAction

    \inmodule QtUml

    \brief An unmarshall action is an action that breaks an object of a known type into outputs each of which is equal to a value from a structural feature of the object.
 */

QUnmarshallAction::QUnmarshallAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QUnmarshallActionPrivate, parent, wrapper)
{
    setPropertyData();
}

QUnmarshallAction::QUnmarshallAction(QUnmarshallActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
    setPropertyData();
}

QUnmarshallAction::~QUnmarshallAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUnmarshallAction
// ---------------------------------------------------------------

/*!
    The object to be unmarshalled.
 */
QInputPin *QUnmarshallAction::object() const
{
    // This is a read-write association end

    Q_D(const QUnmarshallAction);
    return d->object;
}

void QUnmarshallAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QUnmarshallAction);
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

/*!
    The values of the structural features of the input object.
 */
QSet<QOutputPin *> QUnmarshallAction::results() const
{
    // This is a read-write association end

    Q_D(const QUnmarshallAction);
    return d->results;
}

void QUnmarshallAction::addResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUnmarshallAction);
    if (!d->results.contains(result)) {
        d->results.insert(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
    }
}

void QUnmarshallAction::removeResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUnmarshallAction);
    if (d->results.contains(result)) {
        d->results.remove(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(result));
    }
}

/*!
    The type of the object to be unmarshalled.
 */
QClassifier *QUnmarshallAction::unmarshallType() const
{
    // This is a read-write association end

    Q_D(const QUnmarshallAction);
    return d->unmarshallType;
}

void QUnmarshallAction::setUnmarshallType(QClassifier *unmarshallType)
{
    // This is a read-write association end

    Q_D(QUnmarshallAction);
    if (d->unmarshallType != unmarshallType) {
        d->unmarshallType = unmarshallType;
    }
}

void QUnmarshallAction::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    qRegisterMetaType<QClassifier *>("QClassifier *");
    qRegisterMetaType<QSet<QClassifier *>>("QSet<QClassifier *>");
    qRegisterMetaType<QList<QClassifier *>>("QList<QClassifier *>");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QUnmarshallAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The object to be unmarshalled.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The values of the structural features of the input object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The type of the object to be unmarshalled.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qunmarshallaction.cpp"

QT_END_NAMESPACE_QTUML

