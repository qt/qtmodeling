/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtDuse module of the Qt Toolkit.
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
#include "qdusequalitymetricobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtDuse/QDuseQualityMetric>
QT_BEGIN_NAMESPACE

QDuseQualityMetricObject::QDuseQualityMetricObject(QDuseQualityMetric *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [QualityMetric]

QString QDuseQualityMetricObject::name() const
{
    return qmodelingelementproperty_cast<QDuseQualityMetric *>(this)->name();
}

double QDuseQualityMetricObject::value() const
{
    return qmodelingelementproperty_cast<QDuseQualityMetric *>(this)->value();
}

QString QDuseQualityMetricObject::expression() const
{
    return qmodelingelementproperty_cast<QDuseQualityMetric *>(this)->expression();
}

// SLOTS FOR OWNED ATTRIBUTES [QualityMetric]

void QDuseQualityMetricObject::setName(QString name)
{
    qmodelingelementproperty_cast<QDuseQualityMetric *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QDuseQualityMetricObject::setValue(double value)
{
    qmodelingelementproperty_cast<QDuseQualityMetric *>(this)->setValue(value);
    emit valueChanged(this->value());
}

void QDuseQualityMetricObject::setExpression(QString expression)
{
    qmodelingelementproperty_cast<QDuseQualityMetric *>(this)->setExpression(expression);
    emit expressionChanged(this->expression());
}


void QDuseQualityMetricObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QDuseQualityMetric");
    d->groupProperties.insert(QStringLiteral("QDuseQualityMetric"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QDuseQualityMetric"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
    d->groupProperties.insert(QStringLiteral("QDuseQualityMetric"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("expression"))));
}

void QDuseQualityMetricObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, PropertyClassRole, QStringLiteral("QDuseQualityMetric"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, DocumentationRole, QStringLiteral("The quality metric's name."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, PropertyClassRole, QStringLiteral("QDuseQualityMetric"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, DocumentationRole, QStringLiteral("The quality metric's value."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, value, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, PropertyClassRole, QStringLiteral("QDuseQualityMetric"));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, DocumentationRole, QStringLiteral("The quality metric's evaluation expression."));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QDuseQualityMetric, expression, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

