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
#ifndef QGUARDEDLIST_H
#define QGUARDEDLIST_H

#include <QtModeling/QtModelingGlobal>

#include <QtModeling/QWrappedObject>

#include <QtCore/QObject>
#include "private/qobject_p.h"

#include <QtCore/QList>

// QGuardedList does not work with foreach constructor because it requires the container
// type be copiable. Since QGuardedList inherits from QObject that isn't possible

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtModeling)

class Q_MODELING_EXPORT QAbstractGuardedListPrivate : public QObjectPrivate
{
public:
    QList<QWrappedObject *> list;
};

class Q_MODELING_EXPORT QAbstractGuardedList : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QAbstractGuardedList)

public:
    Q_INVOKABLE virtual inline QWrappedObject *at(int index) const { Q_D(const QAbstractGuardedList); return d->list.at(index); }
    Q_INVOKABLE virtual inline bool contains(QWrappedObject *wobject) const { Q_D(const QAbstractGuardedList); return d->list.contains(wobject); }
    Q_INVOKABLE inline int size() const { Q_D(const QAbstractGuardedList); return d->list.size(); }

public Q_SLOTS:
    virtual inline void insert(QWrappedObject *wobject)
    {
        Q_D(QAbstractGuardedList);
        if (!d->list.contains(wobject)) {
            d->list.append(wobject);
            connect(wobject, SIGNAL(destroyed(QObject*)), this, SLOT(remove(QWrappedObject*)));
            emit objectInserted(wobject);
        }
    }

    virtual inline int remove(QObject *object)
    {
        Q_D(QAbstractGuardedList);
        disconnect(object, SIGNAL(destroyed(QObject*)), this, SLOT(remove(QObject*)));
        QWrappedObject *wobject = qobject_cast<QWrappedObject *>(object);
        int r = d->list.removeAll(wobject);
        if (r > 0)
            emit objectRemoved(wobject);
        return r;
    }

Q_SIGNALS:
    void objectRemoved(QWrappedObject *wobject);
    void objectInserted(QWrappedObject *wobject);

protected:
    QAbstractGuardedList(QObject *parent = 0) : QObject(*new QAbstractGuardedListPrivate, parent) { }

    template <class T>
    inline const QList<T *> *toQList() const { Q_D(const QAbstractGuardedList); return reinterpret_cast<const QList<T *> *>(&d->list); }

    template <class T>
    inline QList<T *> *toQList() { Q_D(QAbstractGuardedList); return reinterpret_cast<QList<T *> *>(&d->list); }
};

template <typename T>
class Q_MODELING_EXPORT QGuardedList : public QAbstractGuardedList
{
public:
    typedef typename QList<T *>::const_iterator const_iterator;

    QGuardedList(QObject *parent = 0) : QAbstractGuardedList(parent) { }
    inline const_iterator cbegin() const { return toQList<T>()->cbegin(); }
    inline const_iterator cend() const { return toQList<T>()->cend(); }
    inline T *at(int index) const { return qobject_cast<T *>(QAbstractGuardedList::at(index)); }
    inline bool contains(T *wobject) const { return QAbstractGuardedList::contains(wobject); }
    inline void insert(T *wobject) { QAbstractGuardedList::insert(wobject); }
    inline int remove(T *wobject) { return QAbstractGuardedList::remove(wobject); }
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QGUARDEDLIST_H
