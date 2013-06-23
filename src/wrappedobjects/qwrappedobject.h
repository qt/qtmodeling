/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtWrappedObjects module of the Qt Toolkit.
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
#ifndef QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_H
#define QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_H

#include <QtWrappedObjects/QtWrappedObjectsGlobal>
#include <QtWrappedObjects/QtWrappedObjectsNamespace>

#include <QtCore/QObject>

#include <QtScript/QScriptEngine>
#include <QtScript/QScriptValueIterator>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtWrappedObjects)

class QQmlContext;
class QMetaWrappedObject;
class QWrappedObjectPrivate;

class Q_WRAPPEDOBJECTS_EXPORT QWrappedObject : public QObject
{
    Q_OBJECT

    Q_DISABLE_COPY(QWrappedObject)
    Q_DECLARE_PRIVATE(QWrappedObject)

public:
    Q_INVOKABLE explicit QWrappedObject(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QWrappedObject();

    void setObjectName(const QString &name);

    enum WrappedObjectRole
    {
        ModelElementRole = 0,
        ImportedElementRole,
        ImportedPackageRole,
        AppliedProfileRole
    };
    void setRole(WrappedObjectRole role);
    WrappedObjectRole role() const;

    const QList<QWrappedObject *> &wrappedObjects() const;

    void setWrapper(QWrappedObject *wrapper);
    QWrappedObject *wrapper() const;

    const QMetaWrappedObject *metaWrappedObject();
    bool setProperty(const char *name, const QVariant &value);
    QVariant property(const char *name) const;

    static QVariant propertyData(QString className, QMetaProperty metaProperty, QtWrappedObjects::MetaPropertyDataRole role);

    bool isPropertyModified(QMetaProperty metaProperty) const;

    virtual void setQmlContextProperties(QQmlContext *qmlContext);

protected:
    explicit QWrappedObject(QWrappedObjectPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);

    void initialize(QWrappedObject *wrapper);
    virtual void setPropertyData();

    static QHash< QString, QHash< QString, QHash<QtWrappedObjects::MetaPropertyDataRole, QVariant> > > propertyDataHash;
};

QT_END_NAMESPACE

template <class T>
inline T qwrappedobject_cast(QT_PREPEND_NAMESPACE(QWrappedObject) *base, bool restoreToWrapper = true)
{
    if (!base)
        return T();
    while (restoreToWrapper && base->wrapper())
        base = base->wrapper();
    if (dynamic_cast<T>(base))
        return dynamic_cast<T>(base);
    foreach (QT_PREPEND_NAMESPACE(QWrappedObject) *wrappedObject, base->wrappedObjects()) {
        T returnValue = qwrappedobject_cast<T>(wrappedObject, false);
        if (returnValue != T())
            return returnValue;
    }
    return T(); // not found
}

template <class T>
inline T qwrappedobject_cast(const QT_PREPEND_NAMESPACE(QWrappedObject) *base, bool restoreToWrapper = true)
{
    return qwrappedobject_cast<T>(const_cast<QT_PREPEND_NAMESPACE(QWrappedObject) *>(base), restoreToWrapper);
}

inline QT_PREPEND_NAMESPACE(QWrappedObject) *qTopLevelWrapper(QT_PREPEND_NAMESPACE(QWrappedObject) *wrapped)
{
    if (!wrapped)
        return 0;
    while (wrapped->wrapper())
        wrapped = wrapped->wrapper();
    return wrapped;
}

template <class T>
QScriptValue qSetToScriptValue(QScriptEngine *engine, const QSet<T *> &elements)
{
    QScriptValue array = engine->newArray();
    foreach (T *element, elements)
        array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << engine->newQObject(qTopLevelWrapper(element)));
    return array;
}

template <class T>
void scriptValueToQSet(const QScriptValue &obj, QSet<T *> &elements)
{
    QScriptValueIterator it(obj);
    while (it.hasNext()) {
        it.next();
        elements.insert(qobject_cast<T *>(it.value().toQObject()));
    }
}

template <class T>
QScriptValue qListToScriptValue(QScriptEngine *engine, const QList<T *> &elements)
{
    QScriptValue array = engine->newArray();
    foreach (T *element, elements)
        array.property(QString::fromLatin1("push")).call(array, QScriptValueList() << engine->newQObject(qTopLevelWrapper(element)));
    return array;
}

template <class T>
void scriptValueToQList(const QScriptValue &obj, QList<T *> &elements)
{
    QScriptValueIterator it(obj);
    while (it.hasNext()) {
        it.next();
        elements.append(qobject_cast<T *>(it.value().toQObject()));
    }
}

QT_END_HEADER

#endif // QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_H

