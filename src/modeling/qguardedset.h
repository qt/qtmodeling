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
#ifndef QGUARDEDSET_H
#define QGUARDEDSET_H

#include <QtModeling/QtModelingGlobal>

#include <QtModeling/QWrappedObject>

#include <QtCore/QObject>
#include "private/qobject_p.h"

#include <QtCore/QSet>

// QGuardedSet does not work with foreach constructor because it requires the container
// type be copiable. Since QGuardedList inherits from QObject that isn't possible

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtModeling)

class Q_MODELING_EXPORT QAbstractGuardedSetPrivate : public QObjectPrivate
{
public:
    QSet<QWrappedObject *> set;
};

class Q_MODELING_EXPORT QAbstractGuardedSet : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QAbstractGuardedSet)

public:
    Q_INVOKABLE virtual inline bool contains(QWrappedObject *wobject) const { Q_D(const QAbstractGuardedSet); return d->set.contains(wobject); }
    Q_INVOKABLE inline int size() const { Q_D(const QAbstractGuardedSet); return d->set.size(); }

public Q_SLOTS:
    virtual inline void insert(QWrappedObject *wobject)
    {
        Q_D(QAbstractGuardedSet);
        if (!d->set.contains(wobject)) {
            d->set.insert(wobject);
            connect(wobject, SIGNAL(destroyed(QObject*)), this, SLOT(remove(QObject*)));
            emit objectInserted(wobject);
        }
    }

    virtual inline int remove(QObject *object)
    {
        Q_D(QAbstractGuardedSet);
        disconnect(object, SIGNAL(destroyed(QObject*)), this, SLOT(remove(QObject*)));
        QWrappedObject *wobject = qobject_cast<QWrappedObject *>(object);
        int r = d->set.remove(wobject);
        if (r > 0)
            emit objectRemoved(wobject);
        return r;
    }

Q_SIGNALS:
    void objectRemoved(QWrappedObject *wobject);
    void objectInserted(QWrappedObject *wobject);

protected:
    QAbstractGuardedSet(QObject *parent = 0) : QObject(*new QAbstractGuardedSetPrivate, parent) { }

    template <class T>
    inline const QSet<T *> *toQSet() const { Q_D(const QAbstractGuardedSet); return reinterpret_cast<const QSet<T *> *>(&d->set); }

    template <class T>
    inline QSet<T *> *toQSet() { Q_D(QAbstractGuardedSet); return reinterpret_cast<QSet<T *> *>(&d->set); }
};

template <typename T>
class Q_MODELING_EXPORT QGuardedSet : public QAbstractGuardedSet
{
public:
    typedef typename QSet<T *>::const_iterator const_iterator;

    QGuardedSet(QObject *parent = 0) : QAbstractGuardedSet(parent) {}
    inline const_iterator cbegin() const { return toQSet<T>()->cbegin(); }
    inline const_iterator cend() const { return toQSet<T>()->cend(); }
    inline bool contains(T *wobject) const { return QAbstractGuardedSet::contains(wobject); }
    virtual inline void insert(T *wobject) { QAbstractGuardedSet::insert(wobject); }
    virtual inline int remove(T *wobject) { return QAbstractGuardedSet::remove(wobject); }
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QGUARDEDSET_H
