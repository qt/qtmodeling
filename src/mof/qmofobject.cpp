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
#include "qmofobject.h"
#include "qmofobject_p.h"

#include <QtMof/QMofArgument>
#include <QtMof/QMofOperation>
#include <QtMof/QMofProperty>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QMofObjectPrivate::QMofObjectPrivate()
{
}

QMofObjectPrivate::~QMofObjectPrivate()
{
}


QMofObject::QMofObject(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QMofObjectPrivate, wrapper, parent)
{
    setPropertyData();
}

QMofObject::QMofObject(QMofObjectPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent)
{
    setPropertyData();
}

QMofObject::~QMofObject()
{
}

QMofObject *QMofObject::get(const QMofProperty *property) const
{
    qWarning("QMofObject::get: operation to be implemented");
    Q_UNUSED(property);

    return 0; // change here to your derived return
}

bool QMofObject::equals(const QMofObject *element) const
{
    qWarning("QMofObject::equals: operation to be implemented");
    Q_UNUSED(element);

    return bool(); // change here to your derived return
}

void QMofObject::set(const QMofProperty *property, const QMofObject *value)
{
    qWarning("QMofObject::set: operation to be implemented");
    Q_UNUSED(property);
    Q_UNUSED(value);
}

bool QMofObject::isSet(const QMofProperty *property) const
{
    qWarning("QMofObject::isSet: operation to be implemented");
    Q_UNUSED(property);

    return bool(); // change here to your derived return
}

void QMofObject::unset(const QMofProperty *property)
{
    qWarning("QMofObject::unset: operation to be implemented");
    Q_UNUSED(property);
}

QMofObject *QMofObject::invoke(const QMofOperation *op, QSet<QMofArgument *> arguments)
{
    qWarning("QMofObject::invoke: operation to be implemented");
    Q_UNUSED(op);
    Q_UNUSED(arguments);

    return 0; // change here to your derived return
}

void QMofObject::setPropertyData()
{
    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qmofobject.cpp"

