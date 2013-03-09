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

#include "qumlstructuralfeatureaction.h"
#include "qumlstructuralfeatureaction_p.h"

#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlStructuralFeature>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStructuralFeatureActionPrivate::QUmlStructuralFeatureActionPrivate() :
    object(0),
    structuralFeature(0)
{
}

QUmlStructuralFeatureActionPrivate::~QUmlStructuralFeatureActionPrivate()
{
}

/*!
    \class QUmlStructuralFeatureAction

    \inmodule QtUml

    \brief StructuralFeatureAction is an abstract class for all structural feature actions.
 */

QUmlStructuralFeatureAction::QUmlStructuralFeatureAction(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(*new QUmlStructuralFeatureActionPrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlStructuralFeatureAction::QUmlStructuralFeatureAction(QUmlStructuralFeatureActionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlAction(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlStructuralFeatureAction::~QUmlStructuralFeatureAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStructuralFeatureAction
// ---------------------------------------------------------------

/*!
    Gives the input pin from which the object whose structural feature is to be read or written is obtained.
 */
QUmlInputPin *QUmlStructuralFeatureAction::object() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuralFeatureAction);
    return d->object;
}

void QUmlStructuralFeatureAction::setObject(QUmlInputPin *object)
{
    // This is a read-write association end

    Q_D(QUmlStructuralFeatureAction);
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
    Structural feature to be read.
 */
QUmlStructuralFeature *QUmlStructuralFeatureAction::structuralFeature() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuralFeatureAction);
    return d->structuralFeature;
}

void QUmlStructuralFeatureAction::setStructuralFeature(QUmlStructuralFeature *structuralFeature)
{
    // This is a read-write association end

    Q_D(QUmlStructuralFeatureAction);
    if (d->structuralFeature != structuralFeature) {
        d->structuralFeature = structuralFeature;
    }
}

void QUmlStructuralFeatureAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the input pin from which the object whose structural feature is to be read or written is obtained.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Structural feature to be read.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QUmlAction::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstructuralfeatureaction.cpp"

