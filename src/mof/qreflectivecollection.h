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
#ifndef QTMOF_QREFLECTIVECOLLECTION_H
#define QTMOF_QREFLECTIVECOLLECTION_H

#include <QtMof/QtMofGlobal>

// Base class includes
#include <QtMof/QMofObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTMOF

QT_MODULE(QtMof)

class QReflectiveCollectionPrivate;

class Q_MOF_EXPORT QReflectiveCollection : public QMofObject
{
    Q_OBJECT

    Q_DISABLE_COPY(QReflectiveCollection)
    Q_DECLARE_PRIVATE(QReflectiveCollection)

public:
    Q_INVOKABLE explicit QReflectiveCollection(QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
    virtual ~QReflectiveCollection();

    // Operations
    Q_INVOKABLE bool add(const QMofObject *object);
    Q_INVOKABLE bool addAll(const QReflectiveCollection *objects);
    Q_INVOKABLE void clear();
    Q_INVOKABLE bool remove(const QMofObject *object);
    Q_INVOKABLE qint32 size() const;
    virtual void registerMetaTypes() const;

protected:
    explicit QReflectiveCollection(QReflectiveCollectionPrivate &dd, QWrappedObject *parent = 0, QWrappedObject *wrapper = 0);
};

QT_END_NAMESPACE_QTMOF

QT_END_HEADER

#endif // QTMOF_QREFLECTIVECOLLECTION_H

