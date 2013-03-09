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

#include "qumlreadisclassifiedobjectaction.h"
#include "qumlreadisclassifiedobjectaction_p.h"

#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlReadIsClassifiedObjectActionPrivate::QUmlReadIsClassifiedObjectActionPrivate() :
    isDirect(false),
    result(0),
    object(0),
    classifier(0)
{
}

QUmlReadIsClassifiedObjectActionPrivate::~QUmlReadIsClassifiedObjectActionPrivate()
{
}

/*!
    \class QUmlReadIsClassifiedObjectAction

    \inmodule QtUml

    \brief A read is classified object action is an action that determines whether a runtime object is classified by a given classifier.
 */

QUmlReadIsClassifiedObjectAction::QUmlReadIsClassifiedObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlReadIsClassifiedObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlReadIsClassifiedObjectAction::QUmlReadIsClassifiedObjectAction(QUmlReadIsClassifiedObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlReadIsClassifiedObjectAction::~QUmlReadIsClassifiedObjectAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlReadIsClassifiedObjectAction
// ---------------------------------------------------------------

/*!
    Indicates whether the classifier must directly classify the input object.
 */
bool QUmlReadIsClassifiedObjectAction::isDirect() const
{
    // This is a read-write attribute

    Q_D(const QUmlReadIsClassifiedObjectAction);
    return d->isDirect;
}

void QUmlReadIsClassifiedObjectAction::setDirect(bool isDirect)
{
    // This is a read-write attribute

    Q_D(QUmlReadIsClassifiedObjectAction);
    if (d->isDirect != isDirect) {
        d->isDirect = isDirect;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDirect");
}

void QUmlReadIsClassifiedObjectAction::unsetDirect()
{
    setDirect(false);
    Q_D(QUmlReadIsClassifiedObjectAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDirect"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlReadIsClassifiedObjectAction
// ---------------------------------------------------------------

/*!
    After termination of the action, will hold the result of the test.
 */
QUmlOutputPin *QUmlReadIsClassifiedObjectAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlReadIsClassifiedObjectAction);
    return d->result;
}

void QUmlReadIsClassifiedObjectAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlReadIsClassifiedObjectAction);
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
    Holds the object whose classification is to be tested.
 */
QUmlInputPin *QUmlReadIsClassifiedObjectAction::object() const
{
    // This is a read-write association end

    Q_D(const QUmlReadIsClassifiedObjectAction);
    return d->object;
}

void QUmlReadIsClassifiedObjectAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    Q_D(QUmlReadIsClassifiedObjectAction);
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
    The classifier against which the classification of the input object is tested.
 */
QUmlClassifier *QUmlReadIsClassifiedObjectAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QUmlReadIsClassifiedObjectAction);
    return d->classifier;
}

void QUmlReadIsClassifiedObjectAction::setClassifier(QUmlClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QUmlReadIsClassifiedObjectAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

void QUmlReadIsClassifiedObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether the classifier must directly classify the input object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("After termination of the action, will hold the result of the test.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Holds the object whose classification is to be tested.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier against which the classification of the input object is tested.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlreadisclassifiedobjectaction.cpp"

