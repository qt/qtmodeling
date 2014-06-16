/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtSADuseProfile module of the Qt Toolkit.
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
#include "qsaduseprofilesisocontrollerobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtSADuseProfile/QSADuseProfileSISOController>
#include <QtUml/QUmlComponent>

QT_BEGIN_NAMESPACE

QSADuseProfileSISOControllerObject::QSADuseProfileSISOControllerObject(QSADuseProfileSISOController *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Controller]

QObject *QSADuseProfileSISOControllerObject::base_Component() const
{
    if (!qmodelingelementproperty_cast<QSADuseProfileSISOController *>(this)->base_Component())
        return 0;
    else
        return qmodelingelementproperty_cast<QSADuseProfileSISOController *>(this)->base_Component()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Controller]

void QSADuseProfileSISOControllerObject::setBase_Component(QObject *base_Component)
{
    qmodelingelementproperty_cast<QSADuseProfileSISOController *>(this)->setBase_Component(qmodelingelementproperty_cast<QUmlComponent *>(base_Component));
    emit base_ComponentChanged(this->base_Component());
}


void QSADuseProfileSISOControllerObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QSADuseProfileController");
    d->groupProperties.insert(QStringLiteral("QSADuseProfileController"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("base_Component"))));

    d->propertyGroups << QStringLiteral("QSADuseProfileSISOController");
}

void QSADuseProfileSISOControllerObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, PropertyClassRole, QStringLiteral("QSADuseProfileController"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, PropertyTypeRole, QStringLiteral("QUmlComponent *"));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QSADuseProfileController, base_Component, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

