#include "wrappedobjectpropertymodel.h"

#include <QtWrappedObjects/QMetaPropertyInfo>

using QtWrappedObjects::QMetaPropertyInfo;

WrappedObjectPropertyModel::WrappedObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(parent)
{
}

void WrappedObjectPropertyModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    _metaWrappedObject = wrappedObject->metaWrappedObject();
}

QModelIndex WrappedObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
    if (_metaWrappedObject->propertyCount() == 0 || !parent.isValid() || row >= rowCount(parent) ||
        row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    return createIndex(row, column);
}

QModelIndex WrappedObjectPropertyModel::parent(const QModelIndex &child) const
{
    if (!child.isValid())
        return QModelIndex();
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(child.internalPointer());
    return createIndex(_metaWrappedObject->indexOfGroup(metaPropertyInfo->propertyMetaObject->className()), 0, child.internalPointer());
}

int WrappedObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid() || (parent.isValid() && parent.column() != 0))
        return 0;
    return _metaWrappedObject->propertyCount(parent.row());
}

int WrappedObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid() || (parent.isValid() && parent.column() != 0))
        return 0;
    return 2;
}

QVariant WrappedObjectPropertyModel::data(const QModelIndex &index, int role) const
{
    if (_metaWrappedObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return QVariant();
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        switch (index.column()) {
            case 0: return metaPropertyInfo->metaProperty.name();
            case 1: return metaPropertyInfo->metaProperty.read(metaPropertyInfo->propertyWrappedObject);
            default:  Q_ASSERT(false);
        }
    }
    return QVariant();
}
