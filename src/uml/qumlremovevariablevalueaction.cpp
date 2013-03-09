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

#include "qumlremovevariablevalueaction.h"
#include "qumlremovevariablevalueaction_p.h"

#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlRemoveVariableValueActionPrivate::QUmlRemoveVariableValueActionPrivate() :
    isRemoveDuplicates(false),
    removeAt(0)
{
}

QUmlRemoveVariableValueActionPrivate::~QUmlRemoveVariableValueActionPrivate()
{
}

/*!
    \class QUmlRemoveVariableValueAction

    \inmodule QtUml

    \brief A remove variable value action is a write variable action that removes values from variables.
 */

QUmlRemoveVariableValueAction::QUmlRemoveVariableValueAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlWriteVariableAction(*new QUmlRemoveVariableValueActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlRemoveVariableValueAction::QUmlRemoveVariableValueAction(QUmlRemoveVariableValueActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlWriteVariableAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlRemoveVariableValueAction::~QUmlRemoveVariableValueAction()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlRemoveVariableValueAction
// ---------------------------------------------------------------

/*!
    Specifies whether to remove duplicates of the value in nonunique variables.
 */
bool QUmlRemoveVariableValueAction::isRemoveDuplicates() const
{
    // This is a read-write attribute

    Q_D(const QUmlRemoveVariableValueAction);
    return d->isRemoveDuplicates;
}

void QUmlRemoveVariableValueAction::setRemoveDuplicates(bool isRemoveDuplicates)
{
    // This is a read-write attribute

    Q_D(QUmlRemoveVariableValueAction);
    if (d->isRemoveDuplicates != isRemoveDuplicates) {
        d->isRemoveDuplicates = isRemoveDuplicates;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isRemoveDuplicates");
}

void QUmlRemoveVariableValueAction::unsetRemoveDuplicates()
{
    setRemoveDuplicates(false);
    Q_D(QUmlRemoveVariableValueAction);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isRemoveDuplicates"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlRemoveVariableValueAction
// ---------------------------------------------------------------

/*!
    Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.
 */
QUmlInputPin *QUmlRemoveVariableValueAction::removeAt() const
{
    // This is a read-write association end

    Q_D(const QUmlRemoveVariableValueAction);
    return d->removeAt;
}

void QUmlRemoveVariableValueAction::setRemoveAt(QUmlInputPin *removeAt)
{
    // This is a read-write association end

    Q_D(QUmlRemoveVariableValueAction);
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

void QUmlRemoveVariableValueAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies whether to remove duplicates of the value in nonunique variables.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("isRemoveDuplicates")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Specifies the position of an existing value to remove in ordered nonunique variables. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRemoveVariableValueAction")][QString::fromLatin1("removeAt")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlWriteVariableAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlremovevariablevalueaction.cpp"

