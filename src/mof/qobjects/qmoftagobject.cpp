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
#include "qmoftagobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtMof/QMofTag>
#include <QtMof/QMofElement>

QT_BEGIN_NAMESPACE

QMofTagObject::QMofTagObject(QMofTag *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Tag]

QString QMofTagObject::name() const
{
    return qmodelingelementproperty_cast<QMofTag *>(this)->name();
}

QString QMofTagObject::value() const
{
    return qmodelingelementproperty_cast<QMofTag *>(this)->value();
}

const QSet<QObject *> QMofTagObject::elements() const
{
    QSet<QObject *> set;
    foreach (QMofElement *element, qmodelingelementproperty_cast<QMofTag *>(this)->elements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QMofTagObject::tagOwner() const
{
    if (!qmodelingelementproperty_cast<QMofTag *>(this)->tagOwner())
        return 0;
    else
        return qmodelingelementproperty_cast<QMofTag *>(this)->tagOwner()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Tag]

void QMofTagObject::setName(QString name)
{
    qmodelingelementproperty_cast<QMofTag *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QMofTagObject::setValue(QString value)
{
    qmodelingelementproperty_cast<QMofTag *>(this)->setValue(value);
    emit valueChanged(this->value());
}

void QMofTagObject::addElement(QObject *element)
{
    qmodelingelementproperty_cast<QMofTag *>(this)->addElement(qmodelingelementproperty_cast<QMofElement *>(element));
    emit elementsChanged(this->elements());
}

void QMofTagObject::removeElement(QObject *element)
{
    qmodelingelementproperty_cast<QMofTag *>(this)->removeElement(qmodelingelementproperty_cast<QMofElement *>(element));
    emit elementsChanged(this->elements());
}

void QMofTagObject::setTagOwner(QObject *tagOwner)
{
    qmodelingelementproperty_cast<QMofTag *>(this)->setTagOwner(qmodelingelementproperty_cast<QMofElement *>(tagOwner));
    emit tagOwnerChanged(this->tagOwner());
}


void QMofTagObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QMof");

    d->propertyGroups << QStringLiteral("QMofTag");
    d->groupProperties.insert(QStringLiteral("QMofTag"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QMofTag"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
    d->groupProperties.insert(QStringLiteral("QMofTag"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elements"))));
    d->groupProperties.insert(QStringLiteral("QMofTag"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("tagOwner"))));
}

void QMofTagObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, PropertyClassRole, QStringLiteral("QMofTag"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, PropertyClassRole, QStringLiteral("QMofTag"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, value, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, PropertyClassRole, QStringLiteral("QMofTag"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, PropertyTypeRole, QStringLiteral("QSet<QMofElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, elements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, PropertyClassRole, QStringLiteral("QMofTag"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, PropertyTypeRole, QStringLiteral("QMofElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QMofTag, tagOwner, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

