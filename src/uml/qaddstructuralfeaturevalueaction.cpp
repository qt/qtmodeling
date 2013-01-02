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

#include "qaddstructuralfeaturevalueaction.h"
#include "qaddstructuralfeaturevalueaction_p.h"

#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QAddStructuralFeatureValueActionPrivate::QAddStructuralFeatureValueActionPrivate() :
    isReplaceAll(false),
    insertAt(0)
{
}

QAddStructuralFeatureValueActionPrivate::~QAddStructuralFeatureValueActionPrivate()
{
}

/*!
    \class QAddStructuralFeatureValueAction

    \inmodule QtUml

    \brief An add structural feature value action is a write structural feature action for adding values to a structural feature.
 */

QAddStructuralFeatureValueAction::QAddStructuralFeatureValueAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteStructuralFeatureAction(*new QAddStructuralFeatureValueActionPrivate, parent, wrapper)
{
    setPropertyData();
}

QAddStructuralFeatureValueAction::QAddStructuralFeatureValueAction(QAddStructuralFeatureValueActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWriteStructuralFeatureAction(dd, parent, wrapper)
{
    setPropertyData();
}

QAddStructuralFeatureValueAction::~QAddStructuralFeatureValueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QAddStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Specifies whether existing values of the structural feature of the object should be removed before adding the new value.
 */
bool QAddStructuralFeatureValueAction::isReplaceAll() const
{
    // This is a read-write attribute

    Q_D(const QAddStructuralFeatureValueAction);
    return d->isReplaceAll;
}

void QAddStructuralFeatureValueAction::setReplaceAll(bool isReplaceAll)
{
    // This is a read-write attribute

    Q_D(QAddStructuralFeatureValueAction);
    if (d->isReplaceAll != isReplaceAll) {
        d->isReplaceAll = isReplaceAll;
    }
}

void QAddStructuralFeatureValueAction::unsetReplaceAll()
{
    setReplaceAll(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QAddStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features.
 */
QInputPin *QAddStructuralFeatureValueAction::insertAt() const
{
    // This is a read-write association end

    Q_D(const QAddStructuralFeatureValueAction);
    return d->insertAt;
}

void QAddStructuralFeatureValueAction::setInsertAt(QInputPin *insertAt)
{
    // This is a read-write association end

    Q_D(QAddStructuralFeatureValueAction);
    if (d->insertAt != insertAt) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->insertAt));

        d->insertAt = insertAt;

        // Adjust subsetted property(ies)
        if (insertAt) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(insertAt));
        }
    }
}

void QAddStructuralFeatureValueAction::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QWriteStructuralFeatureAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QAddStructuralFeatureValueAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether existing values of the structural feature of the object should be removed before adding the new value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("isReplaceAll")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QAddStructuralFeatureValueAction")][QString::fromLatin1("insertAt")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWriteStructuralFeatureAction::setPropertyData();
}

#include "moc_qaddstructuralfeaturevalueaction.cpp"

QT_END_NAMESPACE_QTUML

