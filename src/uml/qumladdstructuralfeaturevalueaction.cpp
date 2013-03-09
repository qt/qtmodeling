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

#include "qumladdstructuralfeaturevalueaction.h"
#include "qumladdstructuralfeaturevalueaction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlAddStructuralFeatureValueActionPrivate::QUmlAddStructuralFeatureValueActionPrivate() :
    isReplaceAll(false),
    insertAt(0)
{
}

QUmlAddStructuralFeatureValueActionPrivate::~QUmlAddStructuralFeatureValueActionPrivate()
{
}

/*!
    \class QUmlAddStructuralFeatureValueAction

    \inmodule QtUml

    \brief An add structural feature value action is a write structural feature action for adding values to a structural feature.
 */

QUmlAddStructuralFeatureValueAction::QUmlAddStructuralFeatureValueAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlWriteStructuralFeatureAction(*new QUmlAddStructuralFeatureValueActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlAddStructuralFeatureValueAction::QUmlAddStructuralFeatureValueAction(QUmlAddStructuralFeatureValueActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlWriteStructuralFeatureAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlAddStructuralFeatureValueAction::~QUmlAddStructuralFeatureValueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlAddStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Specifies whether existing values of the structural feature of the object should be removed before adding the new value.
 */
bool QUmlAddStructuralFeatureValueAction::isReplaceAll() const
{
    // This is a read-write attribute

    Q_D(const QUmlAddStructuralFeatureValueAction);
    return d->isReplaceAll;
}

void QUmlAddStructuralFeatureValueAction::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write attribute

    Q_D(QUmlAddStructuralFeatureValueAction);
    if (d->isReplaceAll != isReplaceAll) {
        d->isReplaceAll = isReplaceAll;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isReplaceAll");
}

void QUmlAddStructuralFeatureValueAction::unsetReplaceAll()
{
    setReplaceAll(false);
    Q_D(QUmlAddStructuralFeatureValueAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isReplaceAll"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlAddStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features.
 */
QUmlInputPin *QUmlAddStructuralFeatureValueAction::insertAt() const
{
    // This is a read-write association end

    Q_D(const QUmlAddStructuralFeatureValueAction);
    return d->insertAt;
}

void QUmlAddStructuralFeatureValueAction::setInsertAt(QUmlInputPin *insertAt)
{
    // This is a read-write association end

    Q_D(QUmlAddStructuralFeatureValueAction);
    if (d->insertAt != insertAt) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->insertAt));

        d->insertAt = insertAt;

        // Adjust subsetted property(ies)
        if (insertAt) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(insertAt));
        }
    }
}

void QUmlAddStructuralFeatureValueAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether existing values of the structural feature of the object should be removed before adding the new value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlWriteStructuralFeatureAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumladdstructuralfeaturevalueaction.cpp"

