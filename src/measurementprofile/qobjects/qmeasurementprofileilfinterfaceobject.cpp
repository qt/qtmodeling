/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMeasurementProfile module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qmeasurementprofileilfinterfaceobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMeasurementProfile/QMeasurementProfileILFInterface>
#include <QtUml/QUmlInterface>

QT_BEGIN_NAMESPACE

QMeasurementProfileILFInterfaceObject::QMeasurementProfileILFInterfaceObject(QMeasurementProfileILFInterface *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [ILFInterface]

QObject *QMeasurementProfileILFInterfaceObject::base_Interface() const
{
    if (!qmodelingelementproperty_cast<QMeasurementProfileILFInterface *>(this)->base_Interface())
        return 0;
    else
        return qmodelingelementproperty_cast<QMeasurementProfileILFInterface *>(this)->base_Interface()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [ILFInterface]

void QMeasurementProfileILFInterfaceObject::setBase_Interface(QObject *base_Interface)
{
    qmodelingelementproperty_cast<QMeasurementProfileILFInterface *>(this)->setBase_Interface(qmodelingelementproperty_cast<QUmlInterface *>(base_Interface));
    emit base_InterfaceChanged(this->base_Interface());
}


void QMeasurementProfileILFInterfaceObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMeasurementProfileILFInterface");
    d->groupProperties.insert(QStringLiteral("QMeasurementProfileILFInterface"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("base_Interface"))));
}

void QMeasurementProfileILFInterfaceObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, PropertyClassRole, QStringLiteral("QMeasurementProfileILFInterface"));
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, PropertyTypeRole, QStringLiteral("QUmlInterface *"));
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMeasurementProfileILFInterface, base_Interface, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

