/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtWrappedObjectsWidgets module of the Qt Toolkit.
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
***************************************************************************/
#ifndef QWRAPPEDOBJECTPROPERTYMODEL_H
#define QWRAPPEDOBJECTPROPERTYMODEL_H

#include "qtwrappedobjectswidgetsglobal.h"

#include <QtCore/QAbstractItemModel>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtWrappedObjectsWidgets)

class QWrappedObject;

class QWrappedObjectPropertyModelPrivate;

class Q_WRAPPEDOBJECTSWIDGETS_EXPORT QWrappedObjectPropertyModel : public QAbstractItemModel
{
    Q_OBJECT

    Q_DISABLE_COPY(QWrappedObjectPropertyModel)
    Q_DECLARE_PRIVATE(QWrappedObjectPropertyModel)

public:
    explicit QWrappedObjectPropertyModel(QObject *parent = 0);

    virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    virtual QModelIndex parent(const QModelIndex &child) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    Qt::ItemFlags flags(const QModelIndex & index) const;

    QWrappedObject *wrappedObject() const;

public Q_SLOTS:
    void setWrappedObject(QWrappedObject *wrappedObject);
    void setWrappedObjectIndex(const QModelIndex &wrappedObjectIndex);

Q_SIGNALS:
    void indexChanged(const QModelIndex &wrappedObjectIndex);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QWRAPPEDOBJECTPROPERTYMODEL_H

