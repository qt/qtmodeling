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

#include "qreadisclassifiedobjectaction.h"
#include "qreadisclassifiedobjectaction_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QInputPin>
#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

namespace QtUml
{

QReadIsClassifiedObjectActionPrivate::QReadIsClassifiedObjectActionPrivate() :
    isDirect(false),
    result(0),
    object(0),
    classifier(0)
{
}

QReadIsClassifiedObjectActionPrivate::~QReadIsClassifiedObjectActionPrivate()
{
}

/*!
    \class QReadIsClassifiedObjectAction

    \inmodule QtUml

    \brief A read is classified object action is an action that determines whether a runtime object is classified by a given classifier.
 */

QReadIsClassifiedObjectAction::QReadIsClassifiedObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QReadIsClassifiedObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QReadIsClassifiedObjectAction::QReadIsClassifiedObjectAction(QReadIsClassifiedObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QReadIsClassifiedObjectAction::~QReadIsClassifiedObjectAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QReadIsClassifiedObjectAction
// ---------------------------------------------------------------

/*!
    Indicates whether the classifier must directly classify the input object.
 */
bool QReadIsClassifiedObjectAction::isDirect() const
{
    // This is a read-write attribute

    Q_D(const QReadIsClassifiedObjectAction);
    return d->isDirect;
}

void QReadIsClassifiedObjectAction::setDirect(bool isDirect)
{
    // This is a read-write attribute

    Q_D(QReadIsClassifiedObjectAction);
    if (d->isDirect != isDirect) {
        d->isDirect = isDirect;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isDirect");
}

void QReadIsClassifiedObjectAction::unsetDirect()
{
    setDirect(false);
    Q_D(QReadIsClassifiedObjectAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isDirect"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QReadIsClassifiedObjectAction
// ---------------------------------------------------------------

/*!
    After termination of the action, will hold the result of the test.
 */
QOutputPin *QReadIsClassifiedObjectAction::result() const
{
    // This is a read-write association end

    Q_D(const QReadIsClassifiedObjectAction);
    return d->result;
}

void QReadIsClassifiedObjectAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QReadIsClassifiedObjectAction);
    if (d->result != result) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QOutputPin *>(d->result));

        d->result = result;

        // Adjust subsetted property(ies)
        if (result) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addOutput(qwrappedobject_cast<QOutputPin *>(result));
        }
    }
}

/*!
    Holds the object whose classification is to be tested.
 */
QInputPin *QReadIsClassifiedObjectAction::object() const
{
    // This is a read-write association end

    Q_D(const QReadIsClassifiedObjectAction);
    return d->object;
}

void QReadIsClassifiedObjectAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QReadIsClassifiedObjectAction);
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
    The classifier against which the classification of the input object is tested.
 */
QClassifier *QReadIsClassifiedObjectAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QReadIsClassifiedObjectAction);
    return d->classifier;
}

void QReadIsClassifiedObjectAction::setClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QReadIsClassifiedObjectAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

void QReadIsClassifiedObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Indicates whether the classifier must directly classify the input object.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("isDirect")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("After termination of the action, will hold the result of the test.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Holds the object whose classification is to be tested.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The classifier against which the classification of the input object is tested.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QtUml::QReadIsClassifiedObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

}

QT_END_NAMESPACE

#include "moc_qreadisclassifiedobjectaction.cpp"

