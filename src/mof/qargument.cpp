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

#include "qargument.h"
#include "qargument_p.h"

#include <QtMof/QMofObject>

QT_BEGIN_NAMESPACE_QTMOF

QArgumentPrivate::QArgumentPrivate() :
    value(0)
{
}

QArgumentPrivate::~QArgumentPrivate()
{
}


QArgument::QArgument(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QArgumentPrivate, parent, wrapper)
{
}

QArgument::QArgument(QArgumentPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper)
{
}

QArgument::~QArgument()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QArgument
// ---------------------------------------------------------------

QString QArgument::name() const
{
    // This is a read-write attribute

    Q_D(const QArgument);
    return d->name;
}

void QArgument::setName(QString name)
{
    // This is a read-write attribute

    Q_D(QArgument);
    if (d->name != name) {
        d->name = name;
    }
}

QMofObject *QArgument::value() const
{
    // This is a read-write attribute

    Q_D(const QArgument);
    return d->value;
}

void QArgument::setValue(QMofObject *value)
{
    // This is a read-write attribute

    Q_D(QArgument);
    if (d->value != value) {
        d->value = value;
    }
}

void QArgument::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *>("QT_PREPEND_NAMESPACE_QTMOF(QArgument) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QArgument) *> *");
    qRegisterMetaType<QArgument *>("QArgument *");
    qRegisterMetaType<const QSet<QArgument *> *>("const QSet<QArgument *> *");
    qRegisterMetaType<const QList<QArgument *> *>("const QList<QArgument *> *");

    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *>("QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *");
    qRegisterMetaType<QMofObject *>("QMofObject *");
    qRegisterMetaType<const QSet<QMofObject *> *>("const QSet<QMofObject *> *");
    qRegisterMetaType<const QList<QMofObject *> *>("const QList<QMofObject *> *");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qargument.cpp"

QT_END_NAMESPACE_QTMOF

