/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#include "qumlimageobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlImage>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

QUmlImageObject::QUmlImageObject(QUmlImage *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlImageObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlImage *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlImageObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlImage *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlImageObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlImage *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlImage *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Image]

QString QUmlImageObject::content() const
{
    return qmodelingelementproperty_cast<QUmlImage *>(this)->content();
}

QString QUmlImageObject::format() const
{
    return qmodelingelementproperty_cast<QUmlImage *>(this)->format();
}

QString QUmlImageObject::location() const
{
    return qmodelingelementproperty_cast<QUmlImage *>(this)->location();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlImageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlImage *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlImageObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlImage *>(this)->mustBeOwned();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlImageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlImageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlImageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlImageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlImageObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Image]

void QUmlImageObject::setContent(QString content)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->setContent(content);
}

void QUmlImageObject::setFormat(QString format)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->setFormat(format);
}

void QUmlImageObject::setLocation(QString location)
{
    qmodelingelementproperty_cast<QUmlImage *>(this)->setLocation(location);
}


void QUmlImageObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlImage");
    d->groupProperties.insert(QStringLiteral("QUmlImage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("content"))));
    d->groupProperties.insert(QStringLiteral("QUmlImage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("format"))));
    d->groupProperties.insert(QStringLiteral("QUmlImage"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("location"))));
}

void QUmlImageObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, PropertyClassRole, QStringLiteral("QUmlImage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, DocumentationRole, QStringLiteral("This contains the serialization of the image according to the format. The value could represent a bitmap, image such as a GIF file, or drawing 'instructions' using a standard such as Scalable Vector Graphic (SVG) (which is XML based)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, content, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, PropertyClassRole, QStringLiteral("QUmlImage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, DocumentationRole, QStringLiteral("This indicates the format of the content - which is how the string content should be interpreted. The following values are reserved: SVG, GIF, PNG, JPG, WMF, EMF, BMP. In addition the prefix 'MIME: ' is also reserved. This option can be used as an alternative to express the reserved values above, for example 'SVG' could instead be expressed as 'MIME: image/svg+xml'."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, format, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, PropertyClassRole, QStringLiteral("QUmlImage"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, DocumentationRole, QStringLiteral("This contains a location that can be used by a tool to locate the image as an alternative to embedding it in the stereotype."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlImage, location, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

