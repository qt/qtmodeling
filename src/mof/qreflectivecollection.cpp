/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtMof module of the Qt Toolkit.
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

#include "qreflectivecollection.h"
#include "qreflectivecollection_p.h"

QT_BEGIN_NAMESPACE_QTMOF

QReflectiveCollectionPrivate::QReflectiveCollectionPrivate()
{
}

QReflectiveCollectionPrivate::~QReflectiveCollectionPrivate()
{
}


QReflectiveCollection::QReflectiveCollection(QWrappedObject *parent, QWrappedObject *wrapper) :
    QMofObject(*new QReflectiveCollectionPrivate, parent, wrapper)
{
}

QReflectiveCollection::QReflectiveCollection(QReflectiveCollectionPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QMofObject(dd, parent, wrapper)
{
}

QReflectiveCollection::~QReflectiveCollection()
{
}

bool QReflectiveCollection::add(const QMofObject *object)
{
    qWarning("QReflectiveCollection::add: operation to be implemented");
    Q_UNUSED(object);

    return bool(); // change here to your derived return
}

bool QReflectiveCollection::addAll(const QReflectiveCollection *objects)
{
    qWarning("QReflectiveCollection::addAll: operation to be implemented");
    Q_UNUSED(objects);

    return bool(); // change here to your derived return
}

void QReflectiveCollection::clear()
{
    qWarning("QReflectiveCollection::clear: operation to be implemented");
}

bool QReflectiveCollection::remove(const QMofObject *object)
{
    qWarning("QReflectiveCollection::remove: operation to be implemented");
    Q_UNUSED(object);

    return bool(); // change here to your derived return
}

qint32 QReflectiveCollection::size() const
{
    qWarning("QReflectiveCollection::size: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QReflectiveCollection::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveCollection) *>("QT_PREPEND_NAMESPACE_QTMOF(QReflectiveCollection) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveCollection) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveCollection) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveCollection) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveCollection) *> *");
    qRegisterMetaType<QReflectiveCollection *>("QReflectiveCollection *");
    qRegisterMetaType<const QSet<QReflectiveCollection *> *>("const QSet<QReflectiveCollection *> *");
    qRegisterMetaType<const QList<QReflectiveCollection *> *>("const QList<QReflectiveCollection *> *");


    QMofObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qreflectivecollection.cpp"

QT_END_NAMESPACE_QTMOF

