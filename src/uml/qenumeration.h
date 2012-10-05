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
#ifndef QTUML_QENUMERATION_H
#define QTUML_QENUMERATION_H

#include <QtUml/QtUmlGlobal>

// Base class includes
#include <QtUml/QDataType>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTUML

QT_MODULE(QtUml)

class QEnumerationPrivate;
class QEnumerationLiteral;

class Q_UML_EXPORT QEnumeration : public QDataType
{
    Q_OBJECT

    // From QEnumeration
    Q_PROPERTY(const QList<QEnumerationLiteral *> * ownedLiterals READ ownedLiterals)

    Q_DISABLE_COPY(QEnumeration)
    Q_DECLARE_PRIVATE(QEnumeration)

public:
    explicit QEnumeration(QObject *parent = 0);
    virtual ~QEnumeration();

    // Association-ends
    const QList<QEnumerationLiteral *> *ownedLiterals() const;
    void addOwnedLiteral(const QEnumerationLiteral *ownedLiteral);
    void removeOwnedLiteral(const QEnumerationLiteral *ownedLiteral);

private:
    QEnumerationPrivate *d_ptr;
};

QT_END_NAMESPACE_QTUML

Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *>)
Q_DECLARE_METATYPE(QList<QT_PREPEND_NAMESPACE_QTUML(QEnumeration) *> *)

QT_END_HEADER

#endif // QTUML_QENUMERATION_H

