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

#include "qremovestructuralfeaturevalueaction.h"
#include "qremovestructuralfeaturevalueaction_p.h"

#include <QtUml/QInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE_QTUML

QRemoveStructuralFeatureValueActionPrivate::QRemoveStructuralFeatureValueActionPrivate() :
    isRemoveDuplicates(false),
    removeAt(0)
{
}

QRemoveStructuralFeatureValueActionPrivate::~QRemoveStructuralFeatureValueActionPrivate()
{
}

/*!
    \class QRemoveStructuralFeatureValueAction

    \inmodule QtUml

    \brief A remove structural feature value action is a write structural feature action that removes values from structural features.
 */

QRemoveStructuralFeatureValueAction::QRemoveStructuralFeatureValueAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWriteStructuralFeatureAction(*new QRemoveStructuralFeatureValueActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QRemoveStructuralFeatureValueAction::QRemoveStructuralFeatureValueAction(QRemoveStructuralFeatureValueActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWriteStructuralFeatureAction(dd, wrapper, parent)
{
    setPropertyData();
}

QRemoveStructuralFeatureValueAction::~QRemoveStructuralFeatureValueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QRemoveStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Specifies whether to remove duplicates of the value in nonunique structural features.
 */
bool QRemoveStructuralFeatureValueAction::isRemoveDuplicates() const
{
    // This is a read-write attribute

    Q_D(const QRemoveStructuralFeatureValueAction);
    return d->isRemoveDuplicates;
}

void QRemoveStructuralFeatureValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    // This is a read-write attribute

    Q_D(QRemoveStructuralFeatureValueAction);
    if (d->isRemoveDuplicates != isRemoveDuplicates) {
        d->isRemoveDuplicates = isRemoveDuplicates;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isRemoveDuplicates");
}

void QRemoveStructuralFeatureValueAction::unsetRemoveDuplicates()
{
    setRemoveDuplicates(false);
    Q_D(QRemoveStructuralFeatureValueAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isRemoveDuplicates"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QRemoveStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QInputPin *QRemoveStructuralFeatureValueAction::removeAt() const
{
    // This is a read-write association end

    Q_D(const QRemoveStructuralFeatureValueAction);
    return d->removeAt;
}

void QRemoveStructuralFeatureValueAction::setRemoveAt(QInputPin *removeAt)
{
    // This is a read-write association end

    Q_D(QRemoveStructuralFeatureValueAction);
    if (d->removeAt != removeAt) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QActionPrivate *>(d))->removeInput(qwrappedobject_cast<QInputPin *>(d->removeAt));

        d->removeAt = removeAt;

        // Adjust subsetted property(ies)
        if (removeAt) {
            (qwrappedobject_cast<QActionPrivate *>(d))->addInput(qwrappedobject_cast<QInputPin *>(removeAt));
        }
    }
}

void QRemoveStructuralFeatureValueAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether to remove duplicates of the value in nonunique structural features.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWriteStructuralFeatureAction::setPropertyData();
}

#include "moc_qremovestructuralfeaturevalueaction.cpp"

QT_END_NAMESPACE_QTUML

