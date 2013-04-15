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
#include "qumlunmarshallaction.h"
#include "qumlunmarshallaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlClassifier>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlUnmarshallActionPrivate::QUmlUnmarshallActionPrivate() :
    object(0),
    unmarshallType(0)
{
}

QUmlUnmarshallActionPrivate::~QUmlUnmarshallActionPrivate()
{
}

/*!
    \class QUmlUnmarshallAction

    \inmodule QtUml

    \brief An unmarshall action is an action that breaks an object of a known type into outputs each of which is equal to a value from a structural feature of the object.
 */

QUmlUnmarshallAction::QUmlUnmarshallAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlUnmarshallActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlUnmarshallAction::QUmlUnmarshallAction(QUmlUnmarshallActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlUnmarshallAction::~QUmlUnmarshallAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlUnmarshallAction
// ---------------------------------------------------------------

/*!
    The object to be unmarshalled.
 */
QUmlInputPin *QUmlUnmarshallAction::object() const
{
    // This is a read-write association end

    Q_D(const QUmlUnmarshallAction);
    return d->object;
}

void QUmlUnmarshallAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    Q_D(QUmlUnmarshallAction);
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

/*!
    The values of the structural features of the input object.
 */
QSet<QUmlOutputPin *> QUmlUnmarshallAction::results() const
{
    // This is a read-write association end

    Q_D(const QUmlUnmarshallAction);
    return d->results;
}

void QUmlUnmarshallAction::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlUnmarshallAction);
    if (!d->results.contains(result)) {
        d->results.insert(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

void QUmlUnmarshallAction::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlUnmarshallAction);
    if (d->results.contains(result)) {
        d->results.remove(result);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

/*!
    The type of the object to be unmarshalled.
 */
QUmlClassifier *QUmlUnmarshallAction::unmarshallType() const
{
    // This is a read-write association end

    Q_D(const QUmlUnmarshallAction);
    return d->unmarshallType;
}

void QUmlUnmarshallAction::setUnmarshallType(QUmlClassifier *unmarshallType)
{
    // This is a read-write association end

    Q_D(QUmlUnmarshallAction);
    if (d->unmarshallType != unmarshallType) {
        d->unmarshallType = unmarshallType;
    }
}

void QUmlUnmarshallAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The object to be unmarshalled.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The values of the structural features of the input object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("results")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The type of the object to be unmarshalled.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlUnmarshallAction")][QString::fromLatin1("unmarshallType")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlunmarshallaction.cpp"

