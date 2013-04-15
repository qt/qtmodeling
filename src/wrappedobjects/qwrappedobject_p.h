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
#ifndef QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_P_H
#define QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_P_H

#include "qtwrappedobjectsglobal.h"
#include "private/qobject_p.h"

#include <QtCore/QStringList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtWrappedObjects)

class Q_WRAPPEDOBJECTS_EXPORT QWrappedObjectPrivate : public QObjectPrivate
{
    Q_DECLARE_PUBLIC(QWrappedObject)

public:
    explicit QWrappedObjectPrivate(int version = QObjectPrivateVersion);
    virtual ~QWrappedObjectPrivate();

    static QWrappedObjectPrivate *get(QWrappedObject *o);

    QList<QWrappedObject *> wrappedObjects;
    QWrappedObject *wrapper;
    QMetaWrappedObject *metaWrappedObject;
    QStringList modifiedResettableProperties;
};

QT_END_NAMESPACE

template <class T>
inline T qwrappedobject_cast(QT_PREPEND_NAMESPACE(QWrappedObjectPrivate) *base, bool restoreToWrapper = true)
{
    while (restoreToWrapper && base->wrapper)
        base = base->get(base->wrapper);
    if (dynamic_cast<T>(base))
        return dynamic_cast<T>(base);
    foreach (QT_PREPEND_NAMESPACE(QWrappedObject) *wrappedObject, base->wrappedObjects) {
        T returnValue = qwrappedobject_cast<T>(base->get(wrappedObject), false);
        if (returnValue != T())
            return returnValue;
    }
    return T(); // not found
}

QT_END_HEADER

#endif // QTWRAPPEDOBJECTS_QWRAPPEDOBJECT_P_H

