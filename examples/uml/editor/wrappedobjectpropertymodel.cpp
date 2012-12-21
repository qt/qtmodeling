#include "wrappedobjectpropertymodel.h"

#include <QtWrappedObjects/QMetaPropertyInfo>
#include <QtCore/QDebug>

using QtWrappedObjects::QMetaPropertyInfo;

WrappedObjectPropertyModel::WrappedObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(parent), _metaWrappedObject(0)
{
}

void WrappedObjectPropertyModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    _metaWrappedObject = wrappedObject->metaWrappedObject();
}

QModelIndex WrappedObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
    qDebug() << "INDEX";
    qDebug() << "row: " << row;
    qDebug() << "column: " << column;
    qDebug() << "parent is valid ? " << parent.isValid();
    qDebug() << "parent row: " << parent.row();
    qDebug() << "parent column: " << parent.column();
    if (row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    return createIndex(row, column, (parent.row() != -1) ? static_cast<void *>(&_metaWrappedObject->property(parent.row(), row)):0);
}

QModelIndex WrappedObjectPropertyModel::parent(const QModelIndex &child) const
{
    qDebug() << "PARENT";
    qDebug() << "child is valid ? " << child.isValid();
    qDebug() << "child row: " << child.row();
    qDebug() << "child column: " << child.column();
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(child.internalPointer());
    if (!child.isValid() || !metaPropertyInfo)
        return QModelIndex();
    return createIndex(_metaWrappedObject->indexOfGroup(metaPropertyInfo->propertyMetaObject->className()), 0);
}

int WrappedObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
    qDebug() << "ROWCOUNT";
    qDebug() << "parent is valid ? " << parent.isValid();
    qDebug() << "parent row: " << parent.row();
    qDebug() << "parent column: " << parent.column();
    if (parent.isValid() && parent.column() != 0)
        return 0;
    qDebug() << "ROWCOUNT retornando " << ((parent.row() == -1) ? _metaWrappedObject->propertyGroupCount():_metaWrappedObject->propertyCount(parent.row()));
    return (parent.row() == -1) ? _metaWrappedObject->propertyGroupCount():_metaWrappedObject->propertyCount(parent.row());
}

int WrappedObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
    qDebug() << "COLUMNCOUNT";
    qDebug() << "parent is valid ? " << parent.isValid();
    qDebug() << "parent row: " << parent.row();
    qDebug() << "parent column: " << parent.column();
    return (parent.isValid() && parent.column() != 0) ? 0:2;
}

QVariant WrappedObjectPropertyModel::data(const QModelIndex &index, int role) const
{
    qDebug() << "DATA";
    qDebug() << "index is valid ? " << index.isValid();
    qDebug() << "index row: " << index.row();
    qDebug() << "index column: " << index.column();
    if (_metaWrappedObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return QVariant();
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
    if (role == Qt::DisplayRole || role == Qt::EditRole) {
        switch (index.column()) {
            case 0: return (metaPropertyInfo) ? metaPropertyInfo->propertyMetaObject->className():_metaWrappedObject->property(index.row(), 0).propertyMetaObject->className();
            case 1: return (index.parent().row() != -1) ? metaPropertyInfo->metaProperty.read(metaPropertyInfo->propertyWrappedObject):QVariant();
            default:  Q_ASSERT(false);
        }
    }
    return QVariant();
}
