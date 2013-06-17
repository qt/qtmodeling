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
#include "qdusequalitymetric.h"
#include "qdusequalitymetric_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QDuseQualityMetricPrivate::QDuseQualityMetricPrivate()
{
}

QDuseQualityMetricPrivate::~QDuseQualityMetricPrivate()
{
}

/*!
    \class QDuseQualityMetric

    \inmodule QtDuse

    \brief A quality metric defined for the corresponding design space.
 */

QDuseQualityMetric::QDuseQualityMetric(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QDuseQualityMetricPrivate, wrapper, parent)
{
    setPropertyData();
}

QDuseQualityMetric::QDuseQualityMetric(QDuseQualityMetricPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QDuseQualityMetric::~QDuseQualityMetric()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QDuseQualityMetric
// ---------------------------------------------------------------

/*!
    The quality metric's evaluation expression.
 */
QString QDuseQualityMetric::expression() const
{
    // This is a read-write attribute

    Q_D(const QDuseQualityMetric);
    return d->expression;
}

void QDuseQualityMetric::setExpression(QString expression)
{
    // This is a read-write attribute

    Q_D(QDuseQualityMetric);
    if (d->expression != expression) {
        d->expression = expression;
    }
}

/*!
    The quality metric's name.
 */
QString QDuseQualityMetric::name() const
{
    // This is a read-write attribute

    Q_D(const QDuseQualityMetric);
    return d->name;
}

void QDuseQualityMetric::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QDuseQualityMetric);
    if (d->name != name) {
        d->name = name;
    }
}

void QDuseQualityMetric::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("expression")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("expression")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("expression")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The quality metric's evaluation expression.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("expression")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("expression")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("expression")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("name")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("name")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("name")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The quality metric's name.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("name")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("name")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QDuseQualityMetric")][QString::fromLatin1("name")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qdusequalitymetric.cpp"

