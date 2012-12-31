#include "wrappedobjectmodel.h"

WrappedObjectModel::WrappedObjectModel(QObject *parent) :
    QAbstractItemModel(parent), _metaWrappedObject(0)
{
}

void WrappedObjectModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    beginResetModel();
    _metaWrappedObject = wrappedObject->metaWrappedObject();
    endResetModel();
}

QModelIndex WrappedObjectModel::index(int row, int column, const QModelIndex &parent) const
{
}

QModelIndex WrappedObjectModel::parent(const QModelIndex &child) const
{
}

int WrappedObjectModel::rowCount(const QModelIndex &parent) const
{
}

int WrappedObjectModel::columnCount(const QModelIndex &parent) const
{
}

QVariant WrappedObjectModel::data(const QModelIndex &index, int role) const
{
}

bool WrappedObjectModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
}

QVariant WrappedObjectModel::headerData(int section, Qt::Orientation orientation, int role) const
{
}

Qt::ItemFlags WrappedObjectModel::flags(const QModelIndex &index) const
{
}
