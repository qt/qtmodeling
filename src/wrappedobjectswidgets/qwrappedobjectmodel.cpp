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
****************************************************************************/
#include "qwrappedobjectmodel.h"
#include "qwrappedobjectmodel_p.h"

#include <QtWrappedObjects/QWrappedObject>

QT_BEGIN_NAMESPACE

QWrappedObjectModelPrivate::QWrappedObjectModelPrivate()
    : wrappedObject(0)
{
}

QWrappedObjectModel::QWrappedObjectModel(QObject *parent) :
    QAbstractItemModel(*new QWrappedObjectModelPrivate, parent)
{
}

void QWrappedObjectModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    Q_D(QWrappedObjectModel);

    if (wrappedObject && d->wrappedObject != wrappedObject) {
        beginResetModel();
        d->wrappedObject = wrappedObject;
        endResetModel();
    }
}

QWrappedObject *QWrappedObjectModel::wrappedObject() const
{
    Q_D(const QWrappedObjectModel);

    return d->wrappedObject;
}

QModelIndex QWrappedObjectModel::index(int row, int column, const QModelIndex &parent) const
{
    Q_D(const QWrappedObjectModel);

    if (!d->wrappedObject || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();

    if (!parent.isValid())
        return createIndex(row, column, static_cast<void *>(qTopLevelWrapper(d->wrappedObject)));

    QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(parent.internalPointer());
    if (!wrappedObject)
        return QModelIndex();

    return createIndex(row, column, static_cast<void *>(wrappedObject->children().at(row)));
}

QModelIndex QWrappedObjectModel::parent(const QModelIndex &child) const
{
    Q_D(const QWrappedObjectModel);

    QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(child.internalPointer());
    if (!d->wrappedObject || !child.isValid() || !wrappedObject)
        return QModelIndex();

    QWrappedObject *parentWrappedObject = qTopLevelWrapper(dynamic_cast<QWrappedObject *>(wrappedObject->parent()));
    if (!parentWrappedObject)
        return QModelIndex();

    QWrappedObject *grandParentWrappedObject = qTopLevelWrapper(dynamic_cast<QWrappedObject *>(parentWrappedObject->parent()));
    if (!grandParentWrappedObject)
        return createIndex(0, 0, parentWrappedObject);

    return createIndex(grandParentWrappedObject->children().indexOf(parentWrappedObject), 0, static_cast<void *>(parentWrappedObject));
}

int QWrappedObjectModel::rowCount(const QModelIndex &parent) const
{
    Q_D(const QWrappedObjectModel);

    if (!d->wrappedObject || (parent.isValid() && parent.column() != 0))
        return 0;

    if (parent.row() == -1)
        return 1;

    QWrappedObject *wrappedObject = qTopLevelWrapper(static_cast<QWrappedObject *>(parent.internalPointer()));
    if (!wrappedObject)
        return 0;

    return wrappedObject->children().size();
}

int QWrappedObjectModel::columnCount(const QModelIndex &parent) const
{
    Q_D(const QWrappedObjectModel);

    return (!d->wrappedObject || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant QWrappedObjectModel::data(const QModelIndex &index, int role) const
{
    Q_D(const QWrappedObjectModel);

    if (!d->wrappedObject || index.column() < 0 || index.column() >= 2)
        return QVariant();
    switch (role) {
        case Qt::DisplayRole:
        case Qt::EditRole: {
            QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(index.internalPointer());
            return index.column() == 0 ? qTopLevelWrapper(wrappedObject)->objectName():QString::fromLatin1(qTopLevelWrapper(wrappedObject)->metaObject()->className());
        }
        case Qt::UserRole: {
            return qVariantFromValue(static_cast<QWrappedObject *>(index.internalPointer()));
        }
    }
    return QVariant();
}

bool QWrappedObjectModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    return QAbstractItemModel::setData(index, value, role);
}

QVariant QWrappedObjectModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return QString::fromLatin1(section == 0 ? "Object":"Class");
    return QVariant();
}

Qt::ItemFlags QWrappedObjectModel::flags(const QModelIndex &index) const
{
    return QAbstractItemModel::flags(index);
}

void QWrappedObjectModel::updateIndex(const QModelIndex &index)
{
    if (!index.isValid())
        emit layoutChanged();
    else
        emit dataChanged(index, index, QVector<int>() << Qt::DisplayRole);
}

#include "moc_qwrappedobjectmodel.cpp"

QT_END_NAMESPACE
