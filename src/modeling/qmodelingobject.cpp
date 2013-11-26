/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtModeling module of the Qt Toolkit.
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
#include "qmodelingobject.h"
#include "qmodelingobject_p.h"

#include <QtModeling/QModelingElement>

QT_BEGIN_NAMESPACE

/*!
    \class QModelingObject

    \inmodule QtModeling

    \brief The QModelingObject class acts as base class for all QObject-based representation of modeling elements.

    \sa QModelingElement
*/

QHash< QString, QHash< QString, QHash<QtModeling::MetaPropertyDataRole, QVariant> > > QModelingObject::propertyDataHash;

QModelingObjectPrivate::QModelingObjectPrivate()
{
}

QModelingObjectPrivate::~QModelingObjectPrivate()
{
    qDeleteAll(groupProperties);
}

/*!
    Destroys the QModelingObject.
*/
QModelingObject::~QModelingObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QModelingElement *>(this)->deletingFromQModelingObject = true;
        // Force removal of element from other element's property lists before element gets actually
        // destroy in the following sentence.
        emit destroyed(this);
        delete qmodelingelementproperty_cast<QModelingElement *>(this);
    }
}

/*!
    Returs true if \a metaProperty has been modified (dirty property) since object creation. This
    function returns false if property has not been modified or its RESET function has been called.
*/
bool QModelingObject::isPropertyModified(QMetaProperty metaProperty) const
{
    Q_D(const QModelingObject);
    return d->modifiedResettableProperties.contains(QString::fromLatin1(metaProperty.name()));
}

/*!
    Returns \a metaProperty's metadata identified by \a role and associated with \a className in the
    pseudo inheritance tree.
*/
QVariant QModelingObject::propertyData(QString className, QMetaProperty metaProperty, QtModeling::MetaPropertyDataRole role)
{
    return QModelingObject::propertyDataHash[className][QString::fromLatin1(metaProperty.name())][role];
}

/*!
    \fn void QModelingObject::setPropertyData()

    This virtual pure function allows for subclasses to define metaproperty metadata.
*/

/*!
    Returns the index of the \a metaProperty's group in the QStringList returned by propertyGroups().
*/
int QModelingObject::propertyGroupIndex(QMetaProperty metaProperty) const
{
    Q_D(const QModelingObject);
    int groupIndex = 0;
    foreach (QString group, d->propertyGroups) {
        foreach (QMetaProperty *metaPropertyPointer, d->groupProperties.values(group))
            if (metaPropertyPointer->name() == metaProperty.name())
                return groupIndex;
        ++groupIndex;
    }
    return -1;
}

/*!
    Returns the property groups (classes in the pseudo inheritance tree) for this QModelingObject.
*/
const QStringList &QModelingObject::propertyGroups() const
{
    Q_D(const QModelingObject);
    return d->propertyGroups;
}

/*!
    Returns a QMultiHash containing all property groups and their corresponding properties.
*/
const QMultiHash<QString, QMetaProperty *> &QModelingObject::groupProperties() const
{
    Q_D(const QModelingObject);
    return d->groupProperties;
}

/*!
    \fn void QModelingObject::setGroupProperties()

    This virtual pure function allows for subclasses to define new metaproperty groups.
*/

/*!
    Returns all QModelingObject's properties that have been modified since object creation.
*/
QStringList &QModelingObject::modifiedResettableProperties()
{
    Q_D(QModelingObject);
    return d->modifiedResettableProperties;
}

/*!
    Returns true if the QModelingObject is a kind of \a type in the pseudo inheritance tree, otherwise returns false.
*/
bool QModelingObject::isKindOf(QString type) const
{
    Q_D(const QModelingObject);
    return d->propertyGroups.contains(type);
}

/*!
    Creates a new QModelingObject with the given \a parent. This is a protected constructor
    since this class is not intended to be directly instantiated.
*/
QModelingObject::QModelingObject(QObject *parent)
    : QObject(*new QModelingObjectPrivate, parent)
{
}

QT_END_NAMESPACE

