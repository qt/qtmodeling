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
#include "qmofexceptionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofException>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

QMofExceptionObject::QMofExceptionObject(QMofException *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Exception]

QObject *QMofExceptionObject::objectInError() const
{
    if (!qmodelingelementproperty_cast<QMofException *>(this)->objectInError())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofException *>(this)->objectInError()->asQModelingObject();
}

QObject *QMofExceptionObject::elementInError() const
{
    if (!qmodelingelementproperty_cast<QMofException *>(this)->elementInError())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofException *>(this)->elementInError()->asQModelingObject();
}

QString QMofExceptionObject::description() const
{
    return qmodelingelementproperty_cast<QMofException *>(this)->description();
}

// SLOTS FOR OWNED ATTRIBUTES [Exception]

void QMofExceptionObject::setObjectInError(QObject *objectInError)
{
    qmodelingelementproperty_cast<QMofException *>(this)->setObjectInError(qmodelingelementproperty_cast<QMofElement *>(objectInError));
    emit objectInErrorChanged(this->objectInError());
}

void QMofExceptionObject::setElementInError(QObject *elementInError)
{
    qmodelingelementproperty_cast<QMofException *>(this)->setElementInError(qmodelingelementproperty_cast<QMofElement *>(elementInError));
    emit elementInErrorChanged(this->elementInError());
}

void QMofExceptionObject::setDescription(QString description)
{
    qmodelingelementproperty_cast<QMofException *>(this)->setDescription(description);
    emit descriptionChanged(this->description());
}


void QMofExceptionObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMofException");
    d->groupProperties.insert(QStringLiteral("QMofException"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectInError"))));
    d->groupProperties.insert(QStringLiteral("QMofException"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementInError"))));
    d->groupProperties.insert(QStringLiteral("QMofException"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("description"))));
}

void QMofExceptionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, PropertyClassRole, QStringLiteral("QMofException"));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, objectInError, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, PropertyClassRole, QStringLiteral("QMofException"));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, elementInError, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, PropertyClassRole, QStringLiteral("QMofException"));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofException, description, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

