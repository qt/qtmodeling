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

#include "qcreateobjectaction.h"
#include "qcreateobjectaction_p.h"

#include <QtUml/QClassifier>
#include <QtUml/QOutputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QCreateObjectActionPrivate::QCreateObjectActionPrivate() :
    classifier(0),
    result(0)
{
}

QCreateObjectActionPrivate::~QCreateObjectActionPrivate()
{
}

/*!
    \class QCreateObjectAction

    \inmodule QtUml

    \brief A create object action is an action that creates an object that conforms to a statically specified classifier and puts it on an output pin at runtime.
 */

QCreateObjectAction::QCreateObjectAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(*new QCreateObjectActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QCreateObjectAction::QCreateObjectAction(QCreateObjectActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QAction(dd, wrapper, parent)
{
    setPropertyData();
}

QCreateObjectAction::~QCreateObjectAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QCreateObjectAction
// ---------------------------------------------------------------

/*!
    Classifier to be instantiated.
 */
QClassifier *QCreateObjectAction::classifier() const
{
    // This is a read-write association end

    Q_D(const QCreateObjectAction);
    return d->classifier;
}

void QCreateObjectAction::setClassifier(QClassifier *classifier)
{
    // This is a read-write association end

    Q_D(QCreateObjectAction);
    if (d->classifier != classifier) {
        d->classifier = classifier;
    }
}

/*!
    Gives the output pin on which the result is put.
 */
QOutputPin *QCreateObjectAction::result() const
{
    // This is a read-write association end

    Q_D(const QCreateObjectAction);
    return d->result;
}

void QCreateObjectAction::setResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QCreateObjectAction);
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

void QCreateObjectAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Classifier to be instantiated.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("classifier")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QCreateObjectAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qcreateobjectaction.cpp"

QT_END_NAMESPACE_QTUML

