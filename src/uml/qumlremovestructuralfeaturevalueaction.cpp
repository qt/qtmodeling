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

#include "qumlremovestructuralfeaturevalueaction.h"
#include "qumlremovestructuralfeaturevalueaction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlRemoveStructuralFeatureValueActionPrivate::QUmlRemoveStructuralFeatureValueActionPrivate() :
    isRemoveDuplicates(false),
    removeAt(0)
{
}

QUmlRemoveStructuralFeatureValueActionPrivate::~QUmlRemoveStructuralFeatureValueActionPrivate()
{
}

/*!
    \class QUmlRemoveStructuralFeatureValueAction

    \inmodule QtUml

    \brief A remove structural feature value action is a write structural feature action that removes values from structural features.
 */

QUmlRemoveStructuralFeatureValueAction::QUmlRemoveStructuralFeatureValueAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlWriteStructuralFeatureAction(*new QUmlRemoveStructuralFeatureValueActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlRemoveStructuralFeatureValueAction::QUmlRemoveStructuralFeatureValueAction(QUmlRemoveStructuralFeatureValueActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlWriteStructuralFeatureAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlRemoveStructuralFeatureValueAction::~QUmlRemoveStructuralFeatureValueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlRemoveStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Specifies whether to remove duplicates of the value in nonunique structural features.
 */
bool QUmlRemoveStructuralFeatureValueAction::isRemoveDuplicates() const
{
    // This is a read-write attribute

    Q_D(const QUmlRemoveStructuralFeatureValueAction);
    return d->isRemoveDuplicates;
}

void QUmlRemoveStructuralFeatureValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    // This is a read-write attribute

    Q_D(QUmlRemoveStructuralFeatureValueAction);
    if (d->isRemoveDuplicates != isRemoveDuplicates) {
        d->isRemoveDuplicates = isRemoveDuplicates;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isRemoveDuplicates");
}

void QUmlRemoveStructuralFeatureValueAction::unsetRemoveDuplicates()
{
    setRemoveDuplicates(false);
    Q_D(QUmlRemoveStructuralFeatureValueAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isRemoveDuplicates"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlRemoveStructuralFeatureValueAction
// ---------------------------------------------------------------

/*!
    Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QUmlInputPin *QUmlRemoveStructuralFeatureValueAction::removeAt() const
{
    // This is a read-write association end

    Q_D(const QUmlRemoveStructuralFeatureValueAction);
    return d->removeAt;
}

void QUmlRemoveStructuralFeatureValueAction::setRemoveAt(QUmlInputPin *removeAt)
{
    // This is a read-write association end

    Q_D(QUmlRemoveStructuralFeatureValueAction);
    if (d->removeAt != removeAt) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(d->removeAt));

        d->removeAt = removeAt;

        // Adjust subsetted property(ies)
        if (removeAt) {
            (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(removeAt));
        }
    }
}

void QUmlRemoveStructuralFeatureValueAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether to remove duplicates of the value in nonunique structural features.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveStructuralFeatureValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlWriteStructuralFeatureAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlremovestructuralfeaturevalueaction.cpp"

