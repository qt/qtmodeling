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
#include "qmofreflectivecollection.h"
#include "qmofreflectivecollection_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofReflectiveCollectionPrivate::QMofReflectiveCollectionPrivate()
{
}

QMofReflectiveCollectionPrivate::~QMofReflectiveCollectionPrivate()
{
}


QMofReflectiveCollection::QMofReflectiveCollection(QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(*new QMofReflectiveCollectionPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofReflectiveCollection::QMofReflectiveCollection(QMofReflectiveCollectionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QMofObject(dd, wrapper, parent)
{
    setPropertyData();
}

QMofReflectiveCollection::~QMofReflectiveCollection()
{
}

bool QMofReflectiveCollection::add(const QMofObject *object)
{
    qWarning("QMofReflectiveCollection::add: operation to be implemented");
    Q_UNUSED(object);

    return bool(); // change here to your derived return
}

bool QMofReflectiveCollection::addAll(const QMofReflectiveCollection *objects)
{
    qWarning("QMofReflectiveCollection::addAll: operation to be implemented");
    Q_UNUSED(objects);

    return bool(); // change here to your derived return
}

void QMofReflectiveCollection::clear()
{
    qWarning("QMofReflectiveCollection::clear: operation to be implemented");
}

bool QMofReflectiveCollection::remove(const QMofObject *object)
{
    qWarning("QMofReflectiveCollection::remove: operation to be implemented");
    Q_UNUSED(object);

    return bool(); // change here to your derived return
}

qint32 QMofReflectiveCollection::size() const
{
    qWarning("QMofReflectiveCollection::size: operation to be implemented");

    return qint32(); // change here to your derived return
}

void QMofReflectiveCollection::setPropertyData()
{
    QMofObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofreflectivecollection.cpp"

