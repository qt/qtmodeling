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
#include "qmoftag.h"
#include "qmoftag_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofTagPrivate::QMofTagPrivate() :
    tagOwner(0)
{
}

QMofTagPrivate::~QMofTagPrivate()
{
}


QMofTag::QMofTag(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(*new QMofTagPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofTag::QMofTag(QMofTagPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofElement(dd, wrapper, parent)
{
    setPropertyData();
}

QMofTag::~QMofTag()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QMofTag
// ---------------------------------------------------------------

QSet<QMofElement *> QMofTag::elements() const
{
    // This is a read-write attribute

    Q_D(const QMofTag);
    return d->elements;
}

void QMofTag::addElement(QMofElement *element)
{
    // This is a read-write attribute

    Q_D(QMofTag);
    if (!d->elements.contains(element)) {
        d->elements.insert(element);
    }
}

void QMofTag::removeElement(QMofElement *element)
{
    // This is a read-write attribute

    Q_D(QMofTag);
    if (d->elements.contains(element)) {
        d->elements.remove(element);
    }
}

QString QMofTag::value() const
{
    // This is a read-write attribute

    Q_D(const QMofTag);
    return d->value;
}

void QMofTag::setValue(QString value)
{
    // This is a read-write attribute

    Q_D(QMofTag);
    if (d->value != value) {
        d->value = value;
    }
}

QString QMofTag::name() const
{
    // This is a read-write attribute

    Q_D(const QMofTag);
    return d->name;
}

void QMofTag::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QMofTag);
    if (d->name != name) {
        d->name = name;
    }
}

QMofElement *QMofTag::tagOwner() const
{
    // This is a read-write attribute

    Q_D(const QMofTag);
    return d->tagOwner;
}

void QMofTag::setTagOwner(QMofElement *tagOwner)
{
    // This is a read-write attribute

    Q_D(QMofTag);
    if (d->tagOwner != tagOwner) {
        d->tagOwner = tagOwner;
    }
}

void QMofTag::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("elements")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("elements")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("elements")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("elements")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("elements")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("elements")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("value")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("value")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("value")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("value")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("value")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("value")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("name")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("name")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("name")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("name")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("name")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("name")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("tagOwner")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("tagOwner")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("tagOwner")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("tagOwner")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("tagOwner")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QMofTag")][QString::fromLatin1("tagOwner")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QMofElement::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmoftag.cpp"

