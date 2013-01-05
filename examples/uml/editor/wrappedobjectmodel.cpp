#include "wrappedobjectmodel.h"

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>
using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QMetaWrappedObject;
using QtWrappedObjects::QMetaPropertyInfo;

WrappedObjectModel::WrappedObjectModel(QObject *parent) :
    QAbstractItemModel(parent), _wrappedObject(0)
{
}

void WrappedObjectModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    if (wrappedObject && _wrappedObject != wrappedObject) {
        beginResetModel();
        _wrappedObject = wrappedObject;
        endResetModel();
    }
}

QModelIndex WrappedObjectModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!_wrappedObject || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();

    if (!parent.isValid())
        return createIndex(row, column, static_cast<void *>(qTopLevelWrapper(_wrappedObject)));

    QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(parent.internalPointer());
    if (!wrappedObject)
        return QModelIndex();

    return createIndex(row, column, static_cast<void *>(wrappedObject->children().at(row)));
}

QModelIndex WrappedObjectModel::parent(const QModelIndex &child) const
{
    QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(child.internalPointer());
    if (!_wrappedObject || !child.isValid() || !wrappedObject)
        return QModelIndex();

    QWrappedObject *parentWrappedObject = qTopLevelWrapper(dynamic_cast<QWrappedObject *>(wrappedObject->parent()));
    if (!parentWrappedObject)
        return QModelIndex();

    QWrappedObject *grandParentWrappedObject = qTopLevelWrapper(dynamic_cast<QWrappedObject *>(parentWrappedObject->parent()));
    if (!grandParentWrappedObject)
        return createIndex(0, 0, parentWrappedObject);

    return createIndex(grandParentWrappedObject->children().indexOf(parentWrappedObject), 0, static_cast<void *>(parentWrappedObject));
}

int WrappedObjectModel::rowCount(const QModelIndex &parent) const
{
    if (!_wrappedObject || (parent.isValid() && parent.column() != 0))
        return 0;

    if (parent.row() == -1)
        return 1;

    QWrappedObject *wrappedObject = qTopLevelWrapper(static_cast<QWrappedObject *>(parent.internalPointer()));
    if (!wrappedObject)
        return 0;

    return wrappedObject->children().size();
}

int WrappedObjectModel::columnCount(const QModelIndex &parent) const
{
    return (!_wrappedObject || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant WrappedObjectModel::data(const QModelIndex &index, int role) const
{
    if (!_wrappedObject || index.column() < 0 || index.column() >= 2)
        return QVariant();
    switch (role) {
        case Qt::DisplayRole:
        case Qt::EditRole: {
            QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(index.internalPointer());
            return index.column() == 0 ? qTopLevelWrapper(wrappedObject)->objectName():QString::fromLatin1(qTopLevelWrapper(wrappedObject)->metaObject()->className());
        }
    }
    return QVariant();
}

bool WrappedObjectModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    return QAbstractItemModel::setData(index, value, role);
}

QVariant WrappedObjectModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return section == 0 ? "Object":"Class";
    return QVariant();
}

Qt::ItemFlags WrappedObjectModel::flags(const QModelIndex &index) const
{
    return QAbstractItemModel::flags(index);
}

void WrappedObjectModel::updateIndex(const QModelIndex &index)
{
    if (!index.isValid())
        emit layoutChanged();
    else
        emit dataChanged(index, index, QVector<int>() << Qt::DisplayRole);
}
