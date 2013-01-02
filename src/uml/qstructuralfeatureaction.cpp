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

#include "qstructuralfeatureaction.h"
#include "qstructuralfeatureaction_p.h"

#include <QtUml/QInputPin>
#include <QtUml/QStructuralFeature>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QStructuralFeatureActionPrivate::QStructuralFeatureActionPrivate() :
    object(0),
    structuralFeature(0)
{
}

QStructuralFeatureActionPrivate::~QStructuralFeatureActionPrivate()
{
}

/*!
    \class QStructuralFeatureAction

    \inmodule QtUml

    \brief StructuralFeatureAction is an abstract class for all structural feature actions.
 */

QStructuralFeatureAction::QStructuralFeatureAction(QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(*new QStructuralFeatureActionPrivate, parent, wrapper)
{
    setPropertyData();
}

QStructuralFeatureAction::QStructuralFeatureAction(QStructuralFeatureActionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QAction(dd, parent, wrapper)
{
    setPropertyData();
}

QStructuralFeatureAction::~QStructuralFeatureAction()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QStructuralFeatureAction
// ---------------------------------------------------------------

/*!
    Gives the input pin from which the object whose structural feature is to be read or written is obtained.
 */
QInputPin *QStructuralFeatureAction::object() const
{
    // This is a read-write association end

    Q_D(const QStructuralFeatureAction);
    return d->object;
}

void QStructuralFeatureAction::setObject(QInputPin *object)
{
    // This is a read-write association end

    Q_D(QStructuralFeatureAction);
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
    Structural feature to be read.
 */
QStructuralFeature *QStructuralFeatureAction::structuralFeature() const
{
    // This is a read-write association end

    Q_D(const QStructuralFeatureAction);
    return d->structuralFeature;
}

void QStructuralFeatureAction::setStructuralFeature(QStructuralFeature *structuralFeature)
{
    // This is a read-write association end

    Q_D(QStructuralFeatureAction);
    if (d->structuralFeature != structuralFeature) {
        d->structuralFeature = structuralFeature;
    }
}

void QStructuralFeatureAction::registerMetaTypes() const
{
    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    qRegisterMetaType<QStructuralFeature *>("QStructuralFeature *");
    qRegisterMetaType<QSet<QStructuralFeature *>>("QSet<QStructuralFeature *>");
    qRegisterMetaType<QList<QStructuralFeature *>>("QList<QStructuralFeature *>");

    QAction::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QStructuralFeatureAction::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Gives the input pin from which the object whose structural feature is to be read or written is obtained.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("object")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Structural feature to be read.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QStructuralFeatureAction")][QString::fromLatin1("structuralFeature")][QtWrappedObjects::QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QAction::setPropertyData();
}

#include "moc_qstructuralfeatureaction.cpp"

QT_END_NAMESPACE_QTUML

