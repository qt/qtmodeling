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
#ifndef QTMOF_QLITERALBOOLEAN_H
#define QTMOF_QLITERALBOOLEAN_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QLiteralSpecification>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

class QLiteralBooleanPrivate;

class Q_MOF_EXPORT QLiteralBoolean : public QLiteralSpecification
{
    Q_OBJECT

    Q_PROPERTY(bool value READ value WRITE setValue)

    Q_DISABLE_COPY(QLiteralBoolean)
    Q_DECLARE_PRIVATE(QLiteralBoolean)

public:
    Q_INVOKABLE explicit QLiteralBoolean(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QLiteralBoolean();

    // Attributes from QLiteralBoolean
    Q_INVOKABLE bool value() const;
    Q_INVOKABLE void setValue(bool value);

    // Operations
    Q_INVOKABLE bool booleanValue() const;
    Q_INVOKABLE bool isComputable() const;

protected:
    explicit QLiteralBoolean(QLiteralBooleanPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QLiteralBoolean) *> *)

QT_END_HEADER

#endif // QTMOF_QLITERALBOOLEAN_H

