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
#ifndef QTMOF_QENUMERATIONLITERAL_H
#define QTMOF_QENUMERATIONLITERAL_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QInstanceSpecification>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QEnumeration;

class QEnumerationLiteralPrivate;

class Q_MOF_EXPORT QEnumerationLiteral : public QInstanceSpecification
{
    Q_OBJECT

    Q_PROPERTY(QEnumeration * classifier READ classifier STORED false)
    Q_PROPERTY(QEnumeration * enumeration READ enumeration WRITE setEnumeration)

    Q_DISABLE_COPY(QEnumerationLiteral)
    Q_DECLARE_PRIVATE(QEnumerationLiteral)

public:
    Q_INVOKABLE explicit QEnumerationLiteral(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QEnumerationLiteral();

    // Association ends from QEnumerationLiteral
    Q_INVOKABLE QEnumeration *classifier() const;
    Q_INVOKABLE QEnumeration *enumeration() const;
    Q_INVOKABLE void setEnumeration(QEnumeration *enumeration);

protected:
    explicit QEnumerationLiteral(QEnumerationLiteralPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE_QTMOF(QEnumerationLiteral) *)
Q_DECLARE_METATYPE(const QSet<QT_PREPEND_NAMESPACE_QTMOF(QEnumerationLiteral) *> *)
Q_DECLARE_METATYPE(const QList<QT_PREPEND_NAMESPACE_QTMOF(QEnumerationLiteral) *> *)

QT_END_HEADER

#endif // QTMOF_QENUMERATIONLITERAL_H

