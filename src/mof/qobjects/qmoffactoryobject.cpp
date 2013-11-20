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
#include "qmoffactoryobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofFactory>
#include <QtMof/QMofArgument>
#include <QtMof/QMofAssociation>
#include <QtMof/QMofClass>
#include <QtMof/QMofDataType>
#include <QtMof/QMofElement>
#include <QtMof/QMofLink>
#include <QtMof/QMofObject>
#include <QtMof/QMofPackage>

QT_BEGIN_NAMESPACE

QMofFactoryObject::QMofFactoryObject(QMofFactory *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Factory]

QObject *QMofFactoryObject::package() const
{
    if (!qmodelingelementproperty_cast<QMofFactory *>(this)->package())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofFactory *>(this)->package()->asQModelingObject();
}

// OPERATIONS [Factory]

QObject *QMofFactoryObject::createFromString(QObject *dataType, QString string)
{
    if (!qmodelingelementproperty_cast<QMofFactory *>(this)->createFromString(qmodelingelementproperty_cast<QMofDataType *>(dataType), string))
        return 0;
    else
        return qmodelingelementproperty_cast<QMofFactory *>(this)->createFromString(qmodelingelementproperty_cast<QMofDataType *>(dataType), string)->asQModelingObject();
}

QString QMofFactoryObject::convertToString(QObject *dataType, QObject *object)
{
    return qmodelingelementproperty_cast<QMofFactory *>(this)->convertToString(qmodelingelementproperty_cast<QMofDataType *>(dataType), qmodelingelementproperty_cast<QMofObject *>(object));
}

QObject *QMofFactoryObject::create(QObject *metaClass)
{
    if (!qmodelingelementproperty_cast<QMofFactory *>(this)->create(qmodelingelementproperty_cast<QMofClass *>(metaClass)))
        return 0;
    else
        return qmodelingelementproperty_cast<QMofFactory *>(this)->create(qmodelingelementproperty_cast<QMofClass *>(metaClass))->asQModelingObject();
}

QObject *QMofFactoryObject::createElement(QObject *class_, QSet<QObject *> arguments)
{
    QSet<QMofArgument *> argumentsConverted;
    foreach (QObject *object, arguments)
        argumentsConverted.insert(qmodelingelementproperty_cast<QMofArgument *>(object));
    if (!qmodelingelementproperty_cast<QMofFactory *>(this)->createElement(qmodelingelementproperty_cast<QMofClass *>(class_), argumentsConverted))
        return 0;
    else
        return qmodelingelementproperty_cast<QMofFactory *>(this)->createElement(qmodelingelementproperty_cast<QMofClass *>(class_), argumentsConverted)->asQModelingObject();
}

QObject *QMofFactoryObject::createLink(QObject *association, QObject *firstElement, QObject *secondElement)
{
    if (!qmodelingelementproperty_cast<QMofFactory *>(this)->createLink(qmodelingelementproperty_cast<QMofAssociation *>(association), qmodelingelementproperty_cast<QMofElement *>(firstElement), qmodelingelementproperty_cast<QMofElement *>(secondElement)))
        return 0;
    else
        return qmodelingelementproperty_cast<QMofFactory *>(this)->createLink(qmodelingelementproperty_cast<QMofAssociation *>(association), qmodelingelementproperty_cast<QMofElement *>(firstElement), qmodelingelementproperty_cast<QMofElement *>(secondElement))->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Factory]

void QMofFactoryObject::setPackage(QObject *package)
{
    qmodelingelementproperty_cast<QMofFactory *>(this)->setPackage(qmodelingelementproperty_cast<QMofPackage *>(package));
    emit packageChanged(this->package());
}


void QMofFactoryObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMof");

    d->propertyGroups << QStringLiteral("QMofFactory");
    d->groupProperties.insert(QStringLiteral("QMofFactory"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("package"))));
}

void QMofFactoryObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, PropertyClassRole, QStringLiteral("QMofFactory"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, PropertyTypeRole, QStringLiteral("QMofPackage *"));
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofFactory, package, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

