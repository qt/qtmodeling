/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** :LGPL
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
**
**
****************************************************************************/
#ifndef QTUML_QUMLOBJECT_H
#define QTUML_QUMLOBJECT_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>

#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QUmlObjectPrivate;

class Q_UML_EXPORT QUmlObject : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QUmlObject)
    Q_DECLARE_PRIVATE(QUmlObject)

public:
    Q_INVOKABLE explicit QUmlObject(QUmlObject *parent = 0, QUmlObject *wrapper=0);
    virtual ~QUmlObject();

    const QList<QUmlObject *> &wrappedObjects() const;

    void setWrapper(QUmlObject *wrapper);
    QUmlObject *wrapper() const;

protected:
    QUmlObject(QUmlObjectPrivate &dd, QUmlObject *parent= 0, QUmlObject *wrapper= 0);
};

QT_END_NAMESPACE_QTUML

template <class T>
inline T qumlobject_cast(QT_PREPEND_NAMESPACE_QTUML(QUmlObject) *base, bool restoreToWrapper = true)
{
    if (!base)
        return T();
    while (restoreToWrapper && base->wrapper())
        base = base->wrapper();
    if (dynamic_cast<T>(base))
        return dynamic_cast<T>(base);
    foreach (QT_PREPEND_NAMESPACE_QTUML(QUmlObject) *wrappedObject, base->wrappedObjects()) {
        T returnValue = qumlobject_cast<T>(wrappedObject, false);
        if (returnValue != T())
            return returnValue;
    }
    return T(); // not found
}

template <class T>
inline T qumlobject_cast(const QT_PREPEND_NAMESPACE_QTUML(QUmlObject) *base, bool restoreToWrapper = true)
{
    return qumlobject_cast<T>(const_cast<QT_PREPEND_NAMESPACE_QTUML(QUmlObject) *>(base), restoreToWrapper);
}

inline QT_PREPEND_NAMESPACE_QTUML(QUmlObject) *quml_topLevelWrapper(QT_PREPEND_NAMESPACE_QTUML(QUmlObject) *wrapped)
{
    while (wrapped->wrapper())
        wrapped = wrapped->wrapper();
    return wrapped;
}

QT_END_HEADER

#endif // QTUML_QUMLOBJECT_H

