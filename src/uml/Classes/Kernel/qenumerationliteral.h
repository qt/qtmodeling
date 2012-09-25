/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#ifndef CLASSES_KERNEL_QENUMERATIONLITERAL_H
#define CLASSES_KERNEL_QENUMERATIONLITERAL_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtCore/QObject>
#include <QtUml/QInstanceSpecification>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_UML_CLASSES_KERNEL

QT_MODULE(QtUml)

class QEnumerationLiteralPrivate;

class QEnumeration;

class Q_UML_EXPORT QEnumerationLiteral : public QInstanceSpecification
{
    Q_OBJECT

    Q_PROPERTY(QEnumeration * enumeration READ enumeration WRITE setEnumeration)

public:
    explicit QEnumerationLiteral(QObject *parent = 0);
    virtual ~QEnumerationLiteral();

    // Association-ends (except those derived && !derivedUnion)
    QEnumeration *enumeration() const;
    void setEnumeration(QEnumeration *enumeration);

    // Operations (including accessors for derived && !derivedUnion attributes and association-ends)
    const QEnumeration *classifier() const;

private:
    Q_DISABLE_COPY(QEnumerationLiteral)
    Q_DECLARE_PRIVATE(QEnumerationLiteral)
};

QT_END_NAMESPACE_UML_CLASSES_KERNEL

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QEnumerationLiteral) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_UML_CLASSES_KERNEL(QEnumerationLiteral) *> *)

QT_END_HEADER

#endif // CLASSES_KERNEL_QENUMERATIONLITERAL_H

