/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** :LGPL
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia  LGPL Exception
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
**
**
****************************************************************************/

#include "qumlobject.h"
#include "qumlobject_p.h"

QT_BEGIN_NAMESPACE_QTUML

QUmlObjectPrivate::QUmlObjectPrivate(int version)
    : QObjectPrivate(version), wrapper(0)
{
}

QUmlObjectPrivate::~QUmlObjectPrivate()
{
}

QUmlObject::QUmlObject(QUmlObject *parent, QUmlObject *wrapper)
    : QObject(*new QUmlObjectPrivate, parent)
{
    setWrapper(wrapper);
}

QUmlObject::QUmlObject(QUmlObjectPrivate &dd, QUmlObject *parent, QUmlObject *wrapper)
    : QObject(dd, parent)
{
    setWrapper(wrapper);
}

QUmlObject::~QUmlObject()
{
}

const QList<QUmlObject *> &QUmlObject::wrappedObjects() const
{
    Q_D(const QUmlObject);
    return d->wrappedObjects;
}

void QUmlObject::setWrapper(QUmlObject *wrapper)
{
    Q_D(QUmlObject);
    if (wrapper == d->wrapper)
        return;

    if (d->wrapper)
        d->wrapper->d_func()->wrappedObjects.removeAll(this);

    d->wrapper = wrapper;

    if (wrapper)
        wrapper->d_func()->wrappedObjects.append(this);
}

QUmlObject *QUmlObject::wrapper() const
{
    Q_D(const QUmlObject);
    return d->wrapper;
}

#include "moc_qumlobject.cpp"

QT_END_NAMESPACE_QTUML

