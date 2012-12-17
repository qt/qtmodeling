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
#ifndef QTMOF_QLITERALUNLIMITEDNATURAL_H
#define QTMOF_QLITERALUNLIMITEDNATURAL_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QLiteralSpecification>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

class QLiteralUnlimitedNaturalPrivate;

class Q_MOF_EXPORT QLiteralUnlimitedNatural : public QLiteralSpecification
{
    Q_OBJECT

    Q_PROPERTY(qint32 value READ value WRITE setValue RESET unsetValue)

    Q_DISABLE_COPY(QLiteralUnlimitedNatural)
    Q_DECLARE_PRIVATE(QLiteralUnlimitedNatural)

public:
    Q_INVOKABLE explicit QLiteralUnlimitedNatural(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QLiteralUnlimitedNatural();

    // Attributes from QLiteralUnlimitedNatural
    Q_INVOKABLE qint32 value() const;
    Q_INVOKABLE void setValue(qint32 value);
    Q_INVOKABLE void unsetValue();

    // Operations
    Q_INVOKABLE bool isComputable() const;
    Q_INVOKABLE qint32 unlimitedValue() const;
    virtual void registerMetaTypes() const;

protected:
    explicit QLiteralUnlimitedNatural(QLiteralUnlimitedNaturalPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QLiteralUnlimitedNatural) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QLiteralUnlimitedNatural) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QLiteralUnlimitedNatural) *> *)

QT_END_HEADER

#endif // QTMOF_QLITERALUNLIMITEDNATURAL_H

