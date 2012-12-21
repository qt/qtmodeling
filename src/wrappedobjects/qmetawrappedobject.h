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
#ifndef QTWRAPPEDOBJECTS_QMETAWRAPPEDOBJECT_H
#define QTWRAPPEDOBJECTS_QMETAWRAPPEDOBJECT_H

#include <QtWrappedObjects/QtWrappedObjectsGlobal>

#include <QtCore/QMetaProperty>

QT_BEGIN_HEADER

class QStringList;

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS

QT_MODULE(QtWrappedObjects)

class QWrappedObject;
class QMetaWrappedObjectPrivate;

struct Q_WRAPPEDOBJECTS_EXPORT QMetaPropertyInfo
{
    QMetaProperty metaProperty;
    const QMetaObject *propertyMetaObject;
    QWrappedObject *propertyWrappedObject;
    bool wasChanged;

    inline bool operator==(const QMetaPropertyInfo &other) const
    {
        return qstrcmp(metaProperty.name(), other.metaProperty.name()) == 0 ? true:false;
    }

    inline bool operator==(const char *name) const
    {
        return qstrcmp(metaProperty.name(), name) == 0 ? true:false;
    }
};

class Q_WRAPPEDOBJECTS_EXPORT QMetaWrappedObject
{
    Q_DISABLE_COPY(QMetaWrappedObject)
    Q_DECLARE_PRIVATE(QMetaWrappedObject)

public:
    virtual ~QMetaWrappedObject();

    int propertyGroupCount() const;
    int propertyCount() const;
    int propertyCount(int groupIndex) const;
    QMetaPropertyInfo &property(int index) const;
    QMetaPropertyInfo &property(int groupIndex, int index) const;
    int indexOfProperty(const char *name) const;
    int indexOfGroup(const char *name) const;

protected:
    explicit QMetaWrappedObject(QWrappedObject *wrappedObject);
    explicit QMetaWrappedObject(QMetaWrappedObjectPrivate &dd, QWrappedObject *wrappedObject);
    void initialize(QWrappedObject *wrappedObject);
    void handleWrappedObjectProperties(const QWrappedObject *wrappingObject, QStringList &visitedClasses) const;

    QMetaWrappedObjectPrivate *d_ptr;

    friend class QWrappedObject;
};

QT_END_NAMESPACE_QTWRAPPEDOBJECTS

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTWRAPPEDOBJECTS(QMetaPropertyInfo))

QT_END_HEADER

#endif // QTWRAPPEDOBJECTS_QMETAWRAPPEDOBJECT_H

