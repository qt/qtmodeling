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
#ifndef QTMOF_QENUMERATION_H
#define QTMOF_QENUMERATION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QDataType>

// Qt includes
#include <QtCore/QList>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

// Forward decls for function parameters
class QEnumerationLiteral;

class QEnumerationPrivate;

class Q_MOF_EXPORT QEnumeration : public QDataType
{
    Q_OBJECT

    Q_PROPERTY(QList<QEnumerationLiteral *> ownedLiterals READ ownedLiterals)

    Q_DISABLE_COPY(QEnumeration)
    Q_DECLARE_PRIVATE(QEnumeration)

public:
    Q_INVOKABLE explicit QEnumeration(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QEnumeration();

    // Association ends from QEnumeration
    Q_INVOKABLE QList<QEnumerationLiteral *> ownedLiterals() const;
    Q_INVOKABLE void addOwnedLiteral(QEnumerationLiteral *ownedLiteral);
    Q_INVOKABLE void removeOwnedLiteral(QEnumerationLiteral *ownedLiteral);

    virtual void setPropertyData();

protected:
    explicit QEnumeration(QEnumerationPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QENUMERATION_H

