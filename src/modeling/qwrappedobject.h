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
#ifndef QWRAPPEDOBJECT_H
#define QWRAPPEDOBJECT_H

#include <QtModeling/QtModelingGlobal>

#include <QtCore/QObject>
#include "private/qobject_p.h"

#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtModeling)

#define Q_WRAPPEDOBJECT_REGISTRY \
    QHash<QString, QWrappedObject *> &wrappedObjectsRegistry = this->wrappedObjectsRegistry(); \
    QWrappedObject *wrappedObject;

#define Q_WRAP_OBJECT(className) \
    wrappedObject = wrappedObjectsRegistry.value(QStringLiteral(#className)); \
    if (!wrappedObject) { \
        wrappedObject = new className(this, parent); \
        wrappedObjectsRegistry.insert(QStringLiteral(#className), wrappedObject); \
    } \
    wrappedObject->setWrapper(this)

#define Q_DERIVEDUNION_CONNECTION(subsetting, subsetted) \
    QObject::connect(&subsetting, SIGNAL(objectInserted(QObject*)), &subsetted, SLOT(insert(QObject*))); \
    QObject::connect(&subsetting, SIGNAL(objectRemoved(QObject*)), &subsetted, SLOT(remove(QObject*)));

class QWrappedObjectPrivate;

class Q_MODELING_EXPORT QWrappedObject : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QWrappedObject)

public:
    explicit QWrappedObject(QWrappedObject *wrapper, QObject *parent = 0);
    virtual ~QWrappedObject();

    inline QWrappedObject *wrapper() const;
    inline void setWrapper(QWrappedObject *wrapper);
    inline QList<QPointer<QWrappedObject> > &wrappedObjects();

    template <class T>
    inline T *as() const;

    template <class T>
    inline T *privateAs() const;

protected:
    explicit QWrappedObject(QWrappedObjectPrivate &dd, QWrappedObject *wrapper = 0, QObject *parent = 0);
    inline QHash<QString, QWrappedObject *> &wrappedObjectsRegistry();

private:
    inline void initialize(QWrappedObject *wrapper);
};

template <class T>
inline T qwrappedobject_cast(QWrappedObject *base, bool restoreToWrapper = true)
{
    if (!base)
        return T(); // invalid pointer
    while (restoreToWrapper && base->wrapper())
        base = base->wrapper();
    if (dynamic_cast<T>(base))
        return dynamic_cast<T>(base);
    foreach (QWrappedObject *wrappedObject, base->wrappedObjects()) {
        T returnValue = qwrappedobject_cast<T>(wrappedObject, false);
        if (returnValue != T())
            return returnValue;
    }
    return T(); // not found
}

template <class T>
inline T qwrappedobject_cast(const QWrappedObject *base, bool restoreToWrapper = true)
{
    return qwrappedobject_cast<T>(const_cast<QWrappedObject *>(base), restoreToWrapper);
}

template <class T>
inline T *QWrappedObject::as() const
{
    return qwrappedobject_cast<T *>(this);
}

template <class T>
inline T *QWrappedObject::privateAs() const
{
    Q_D(const QWrappedObject);
    return qwrappedobject_cast<T *>(d);
}

inline QWrappedObject *qTopLevelWrapper(QWrappedObject *wrapped)
{
    if (!wrapped)
        return 0;
    while (wrapped->wrapper())
        wrapped = wrapped->wrapper();
    return wrapped;
}

class Q_MODELING_EXPORT QWrappedObjectPrivate : public QObjectPrivate
{
    Q_DECLARE_PUBLIC(QWrappedObject)

public:
    explicit QWrappedObjectPrivate();

    inline static QWrappedObjectPrivate *get(QWrappedObject *o)
    {
        return dynamic_cast<QWrappedObjectPrivate *>(o->d_func());
    }

    QWrappedObject *wrapper;
    QList< QPointer<QWrappedObject> > wrappedObjects;
    QHash<QString, QWrappedObject *>wrappedObjectsRegistry;
};

template <class T>
inline T qwrappedobject_cast(QWrappedObjectPrivate *base, bool restoreToWrapper = true)
{
    if (!base)
        return T(); // invalid pointer
    while (restoreToWrapper && base->wrapper)
        base = QWrappedObjectPrivate::get(base->wrapper);
    if (dynamic_cast<T>(base))
        return dynamic_cast<T>(base);
    foreach (QWrappedObject *wrappedObject, base->wrappedObjects) {
        T returnValue = qwrappedobject_cast<T>(QWrappedObjectPrivate::get(wrappedObject), false);
        if (returnValue != T())
            return returnValue;
    }
    return T(); // not found
}

template <class T>
inline T qwrappedobject_cast(const QWrappedObjectPrivate *base, bool restoreToWrapper = true)
{
    return qwrappedobject_cast<T>(const_cast<QWrappedObjectPrivate *>(base), restoreToWrapper);
}

inline QWrappedObject *QWrappedObject::wrapper() const
{
    Q_D(const QWrappedObject);
    return d->wrapper;
}

inline void QWrappedObject::setWrapper(QWrappedObject *wrapper)
{
    Q_D(QWrappedObject);
    if (wrapper) {
        d->wrapper = wrapper;
        QList< QPointer<QWrappedObject> > &wrappedObjects = wrapper->d_func()->wrappedObjects;
        if (!wrappedObjects.contains(this))
            wrappedObjects.append(this);
    }
}

inline QList< QPointer<QWrappedObject> > &QWrappedObject::wrappedObjects()
{
    Q_D(QWrappedObject);
    return d->wrappedObjects;
}

inline QHash<QString, QWrappedObject *> &QWrappedObject::wrappedObjectsRegistry()
{
    return qTopLevelWrapper(this)->d_func()->wrappedObjectsRegistry;
}

QT_END_NAMESPACE

QT_END_HEADER

#endif // QWRAPPEDOBJECT_H
