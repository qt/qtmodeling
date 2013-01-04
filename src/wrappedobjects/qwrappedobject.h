/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtWrappedObjects module of the Qt Toolkit.
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
** $QT_END_LICENSE$
**
****************************************************************************/
#ifndef QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_H
#define QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_H

#include <QtWrappedObjects/QtWrappedObjectsGlobal>

// Base class includes
#include <QtCore/QObject>

// Qt includes
#include <QtCore/QSet>
#include <QtCore/QList>
#include <QtCore/QMetaProperty>

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS

QT_MODULE(QtWrappedObjects)

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

    const QList<QPointer<QWrappedObject>> &wrappedObjects() const;

    void setWrapper(QWrappedObject *wrapper);
    QWrappedObject *wrapper() const;

    const QMetaWrappedObject *metaWrappedObject();
    bool setProperty(const char *name, const QVariant &value);
    QVariant property(const char *name) const;

    static QVariant propertyData(QString className, QMetaProperty metaProperty, QtWrappedObjects::MetaPropertyDataRole role)
    {
        return propertyDataHash[className][QString::fromLatin1(metaProperty.name())][role];
    }

    virtual void registerMetaTypes() const;

protected:
    explicit QWrappedObject(QWrappedObjectPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    void initialize(QWrappedObject *wrapper);
    virtual void setPropertyData();

    static QHash<QString, QHash<QString, QHash<QtWrappedObjects::MetaPropertyDataRole, QVariant>>> propertyDataHash;
};

QT_END_NAMESPACE_QTWRAPPEDOBJECTS

template <class T>
inline T qwrappedobject_cast(QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QWrappedObject) *base, bool restoreToWrapper = true)
{
    if (!base)
        return T();
    while (restoreToWrapper && base->wrapper())
        base = base->wrapper();
    if (dynamic_cast<T>(base))
        return dynamic_cast<T>(base);
    foreach (QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QWrappedObject) *wrappedObject, base->wrappedObjects()) {
        T returnValue = qwrappedobject_cast<T>(wrappedObject, false);
        if (returnValue != T())
            return returnValue;
    }
    return T(); // not found
}

template <class T>
inline T qwrappedobject_cast(const QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QWrappedObject) *base, bool restoreToWrapper = true)
{
    return qwrappedobject_cast<T>(const_cast<QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QWrappedObject) *>(base), restoreToWrapper);
}

inline QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QWrappedObject) *qTopLevelWrapper(QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QWrappedObject) *wrapped)
{
    if (!wrapped)
        return 0;
    while (wrapped->wrapper())
        wrapped = wrapped->wrapper();
    return wrapped;
}

QT_END_HEADER

#endif // QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_H

