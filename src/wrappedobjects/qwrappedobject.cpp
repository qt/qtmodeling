/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtWrappedObjects module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qwrappedobject.h"
#include "qwrappedobject_p.h"

#include <QtWrappedObjects/QMetaWrappedObject>

#include <QtCore/QDebug>

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS

QWrappedObjectPrivate::QWrappedObjectPrivate(int version)
    : QObjectPrivate(version), wrapper(0), metaWrappedObject(0)
{
}

QWrappedObjectPrivate::~QWrappedObjectPrivate()
{
    delete metaWrappedObject;
    qDebug() << "Removendo" << wrappedObjects.size() << "wrapped objects";
    foreach (QWrappedObject *w, wrappedObjects)
        qDebug() << "A remover objeto do tipo" << w->metaObject()->className() << "e nome" << w->objectName();
    qDeleteAll(wrappedObjects);
}

QHash<QString, QHash<QString, QHash<QtWrappedObjects::MetaPropertyDataRole, QVariant>>> QWrappedObject::propertyDataHash;

QWrappedObject::QWrappedObject(QWrappedObject *wrapper, QWrappedObject *parent) :
    QObject(*new QWrappedObjectPrivate, parent)
{
    initialize(wrapper);
}

QWrappedObject::QWrappedObject(QWrappedObjectPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QObject(dd, parent)
{
    initialize(wrapper);
}

QWrappedObject::~QWrappedObject()
{
}

void QWrappedObject::setObjectName(const QString &name)
{
    QWrappedObject *topLevelWrapperObject = qTopLevelWrapper(this);
    if (topLevelWrapperObject->metaObject()->indexOfProperty("name") != -1)
        topLevelWrapperObject->setProperty("name", name);

    QObject::setObjectName(name);
}

void QWrappedObject::initialize(QWrappedObject *wrapper)
{
    setWrapper(wrapper);
    setPropertyData();
}

void QWrappedObject::setPropertyData()
{
}

const QList<QPointer<QWrappedObject>> &QWrappedObject::wrappedObjects() const
{
    Q_D(const QWrappedObject);
    return d->wrappedObjects;
}

void QWrappedObject::setWrapper(QWrappedObject *wrapper)
{
    Q_D(QWrappedObject);
    if (wrapper == d->wrapper)
        return;

    if (d->wrapper)
        d->wrapper->d_func()->wrappedObjects.removeAll(this);

    d->wrapper = wrapper;

    if (wrapper) {
        qDebug() << "Inserindo" << this->metaObject()->className() << "como filho de" << wrapper->metaObject()->className();
        wrapper->d_func()->wrappedObjects.append(this);
    }
}

QWrappedObject *QWrappedObject::wrapper() const
{
    Q_D(const QWrappedObject);
    return d->wrapper;
}

const QMetaWrappedObject *QWrappedObject::metaWrappedObject()
{
    Q_D(QWrappedObject);
    if (!d->metaWrappedObject)
        d->metaWrappedObject = new QMetaWrappedObject(qTopLevelWrapper(this));
    return d->metaWrappedObject;
}

bool QWrappedObject::setProperty(const char *name, const QVariant &value)
{
    Q_D(QWrappedObject);
    int index;
    if ((index = d->metaWrappedObject->indexOfProperty(name)) != -1) {
        QMetaPropertyInfo metaPropertyInfo = d->metaWrappedObject->property(index);
        metaPropertyInfo.metaProperty.write(metaPropertyInfo.propertyWrappedObject, value);
        return true;
    }
    else
        return false;
}

QVariant QWrappedObject::property(const char *name) const
{
    Q_D(const QWrappedObject);
    int index;
    if ((index = d->metaWrappedObject->indexOfProperty(name)) != -1) {
        QMetaPropertyInfo metaPropertyInfo = d->metaWrappedObject->property(index);
        return metaPropertyInfo.metaProperty.read(metaPropertyInfo.propertyWrappedObject);
    }
    else
        return QVariant();
}

void QWrappedObject::registerMetaTypes() const
{
}

#include "moc_qwrappedobject.cpp"

QT_END_NAMESPACE_QTWRAPPEDOBJECTS

