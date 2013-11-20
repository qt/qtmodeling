/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtMof module of the Qt Toolkit.
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
#include "qmofargumentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofArgument>
#include <QtMof/QMofObject>

QT_BEGIN_NAMESPACE

QMofArgumentObject::QMofArgumentObject(QMofArgument *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Argument]

QString QMofArgumentObject::name() const
{
    return qmodelingelementproperty_cast<QMofArgument *>(this)->name();
}

QObject *QMofArgumentObject::value() const
{
    if (!qmodelingelementproperty_cast<QMofArgument *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofArgument *>(this)->value()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Argument]

void QMofArgumentObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofArgument *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QMofArgumentObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QMofArgument *>(this)->setValue(qmodelingelementproperty_cast<QMofObject *>(value));
    emit valueChanged(this->value());
}


void QMofArgumentObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofArgument");
    d->groupProperties.insert(QStringLiteral("QMofArgument"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QMofArgument"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QMofArgumentObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, PropertyClassRole, QStringLiteral("QMofArgument"));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, PropertyClassRole, QStringLiteral("QMofArgument"));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, PropertyTypeRole, QStringLiteral("QMofObject *"));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofArgument, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

