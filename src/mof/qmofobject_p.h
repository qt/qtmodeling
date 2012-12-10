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
#ifndef QTMOF_QMOFOBJECT_P_H
#define QTMOF_QMOFOBJECT_P_H

// Base class includes
#include "private/qobject_p.h"

#include "QtMof/QMofObject"

// Qt includes
#include "QtCore/QSet"

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QArgument;
class QOperation;
class QMofObject;
class QProperty;

class Q_MOF_EXPORT QMofObjectPrivate : public QObjectPrivate
{
    Q_DECLARE_PUBLIC(QMofObject)

public:
    explicit QMofObjectPrivate();
    virtual ~QMofObjectPrivate();

    static QMofObjectPrivate *get(QMofObject *o)
    {
        return dynamic_cast<QMofObjectPrivate *>(o->d_func());
    }

    QList<QMofObject *> wrappedObjects;
    QMofObject *wrapper;
};

QT_END_NAMESPACE_QTMOF

template <class T>
inline T qmofobject_cast(QT_PREPEND_NAMESPACE_QTMOF(QMofObjectPrivate) *base, bool restoreToWrapper = true)
{
    while (restoreToWrapper && base->wrapper)
        base = base->get(base->wrapper);
    if (dynamic_cast<T>(base))
        return dynamic_cast<T>(base);
    foreach (QT_PREPEND_NAMESPACE_QTMOF(QMofObject) *wrappedObject, base->wrappedObjects) {
        T returnValue = qmofobject_cast<T>(base->get(wrappedObject), false);
        if (returnValue != T())
            return returnValue;
    }
    return T(); // not found
}

QT_END_HEADER

#endif // QTMOF_QMOFOBJECT_P_H

