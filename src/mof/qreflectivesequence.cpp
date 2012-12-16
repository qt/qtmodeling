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

#include "qreflectivesequence.h"
#include "qreflectivesequence_p.h"

#include <QtMof/QMofObject>

QT_BEGIN_NAMESPACE_QTMOF

QReflectiveSequencePrivate::QReflectiveSequencePrivate()
{
}

QReflectiveSequencePrivate::~QReflectiveSequencePrivate()
{
}


QReflectiveSequence::QReflectiveSequence(QWrappedObject *parent, QWrappedObject *wrapper) :
    QReflectiveCollection(*new QReflectiveSequencePrivate, parent, wrapper)
{
}

QReflectiveSequence::QReflectiveSequence(QReflectiveSequencePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QReflectiveCollection(dd, parent, wrapper)
{
}

QReflectiveSequence::~QReflectiveSequence()
{
}

void QReflectiveSequence::add(qint32 index, const QMofObject *object)
{
    qWarning("QReflectiveSequence::add: operation to be implemented");
    Q_UNUSED(index);
    Q_UNUSED(object);
}

QMofObject *QReflectiveSequence::get(qint32 index) const
{
    qWarning("QReflectiveSequence::get: operation to be implemented");
    Q_UNUSED(index);

    return 0; // change here to your derived return
}

QMofObject *QReflectiveSequence::remove(qint32 index)
{
    qWarning("QReflectiveSequence::remove: operation to be implemented");
    Q_UNUSED(index);

    return 0; // change here to your derived return
}

QMofObject *QReflectiveSequence::set(qint32 index, const QMofObject *object)
{
    qWarning("QReflectiveSequence::set: operation to be implemented");
    Q_UNUSED(index);
    Q_UNUSED(object);

    return 0; // change here to your derived return
}

void QReflectiveSequence::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *>("QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QReflectiveSequence) *> *");
    qRegisterMetaType<QReflectiveSequence *>("QReflectiveSequence *");
    qRegisterMetaType<const QSet<QReflectiveSequence *> *>("const QSet<QReflectiveSequence *> *");
    qRegisterMetaType<const QList<QReflectiveSequence *> *>("const QList<QReflectiveSequence *> *");


    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *>("QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *>("const QList<QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *> *");
    qRegisterMetaType<QMofObject *>("QMofObject *");
    qRegisterMetaType<const QSet<QMofObject *> *>("const QSet<QMofObject *> *");
    qRegisterMetaType<const QList<QMofObject *> *>("const QList<QMofObject *> *");


    QReflectiveCollection::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qreflectivesequence.cpp"

QT_END_NAMESPACE_QTMOF

