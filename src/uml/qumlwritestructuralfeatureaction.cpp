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

#include "qumlwritestructuralfeatureaction.h"
#include "qumlwritestructuralfeatureaction_p.h"

#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlWriteStructuralFeatureActionPrivate::QUmlWriteStructuralFeatureActionPrivate() :
    result(0),
    value(0)
{
}

QUmlWriteStructuralFeatureActionPrivate::~QUmlWriteStructuralFeatureActionPrivate()
{
}

/*!
    \class QUmlWriteStructuralFeatureAction

    \inmodule QtUml

    \brief WriteStructuralFeatureAction is an abstract class for structural feature actions that change structural feature values.
 */

QUmlWriteStructuralFeatureAction::QUmlWriteStructuralFeatureAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuralFeatureAction(*new QUmlWriteStructuralFeatureActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlWriteStructuralFeatureAction::QUmlWriteStructuralFeatureAction(QUmlWriteStructuralFeatureActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuralFeatureAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlWriteStructuralFeatureAction::~QUmlWriteStructuralFeatureAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlWriteStructuralFeatureAction
// ---------------------------------------------------------------

/*!
    Gives the output pin on which the result is put.
 */
QUmlOutputPin *QUmlWriteStructuralFeatureAction::result() const
{
    // This is a read-write association end

    Q_D(const QUmlWriteStructuralFeatureAction);
    return d->result;
}

void QUmlWriteStructuralFeatureAction::setResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlWriteStructuralFeatureAction);
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
    Value to be added or removed from the structural feature.
 */
QUmlInputPin *QUmlWriteStructuralFeatureAction::value() const
{
    // This is a read-write association end

    Q_D(const QUmlWriteStructuralFeatureAction);
    return d->value;
}

void QUmlWriteStructuralFeatureAction::setValue(QUmlInputPin *value)
{
    // This is a read-write association end

    Q_D(QUmlWriteStructuralFeatureAction);
    if (d->value != value) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->value));

        d->value = value;

        // Adjust subsetted property(ies)
        if (value) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(value));
        }
    }
}

void QUmlWriteStructuralFeatureAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the output pin on which the result is put.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("result")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Value to be added or removed from the structural feature.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlWriteStructuralFeatureAction")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlStructuralFeatureAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlwritestructuralfeatureaction.cpp"

