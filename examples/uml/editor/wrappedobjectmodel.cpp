#include "wrappedobjectmodel.h"

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>
using QtWrappedObjects::QWrappedObject;
using QtWrappedObjects::QMetaWrappedObject;
using QtWrappedObjects::QMetaPropertyInfo;

#include <QtCore/QDebug>

WrappedObjectModel::WrappedObjectModel(QObject *parent) :
    QAbstractItemModel(parent), _wrappedObject(0)
{
}

void WrappedObjectModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    if (wrappedObject && _wrappedObject != wrappedObject) {
        beginResetModel();
        _wrappedObject = wrappedObject;
        _rootItems.clear();
        refreshInternalData(_wrappedObject);
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

//    qDebug() << "INDEX. parent row:" << parent.row() << "row:" << row << "col:" << column << "no de filhos" << wrappedObject->children().size() << ". obtendo row =" << row;
//    return createIndex(row, column, static_cast<void *>(wrappedObject->children().at(row)));

    const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();

    QList<QWrappedObject *> visitedObjects;
    int elementCount = 0;
    for (int i = 0; i < propertyCount; ++i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        propertyWrappedObject->registerMetaTypes();
        QString typeName = metaProperty.typeName();
        QString aggregationRole = wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()), metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole).toString();

        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject))) {
            if (aggregationRole == QString::fromLatin1("composite")) {
                QWrappedObject *element = qTopLevelWrapper(qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject)));
                if (visitedObjects.contains(element))
                    continue;
                visitedObjects.append(element);
                if (elementCount == row)
                    return createIndex(row, column, static_cast<void *>(element));
                ++elementCount;
            }
        }
        else if (typeName.contains("QSet") && metaProperty.read(propertyWrappedObject).isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        if (elementCount == row)
                            return createIndex(row, column, static_cast<void *>(qTopLevelWrapper(element)));
                        ++elementCount;
                    }
                }
            }
        }
        else if (typeName.contains("QList") && metaProperty.read(propertyWrappedObject).isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        if (elementCount == row)
                            return createIndex(row, column, static_cast<void *>(qTopLevelWrapper(element)));
                        ++elementCount;
                    }
                }
            }
        }
    }
    return QModelIndex();
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

    const QMetaWrappedObject *grandParentMetaWrappedObject = grandParentWrappedObject->metaWrappedObject();
    int propertyCount = grandParentMetaWrappedObject->propertyCount();

    QList<QWrappedObject *> visitedObjects;
    int elementCount = 0;
    for (int i = 0; i < propertyCount; ++i) {
        QMetaPropertyInfo metaPropertyInfo = grandParentMetaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        propertyWrappedObject->registerMetaTypes();
        QString typeName = metaProperty.typeName();
        QString aggregationRole = wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()), metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole).toString();

        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject))) {
            if (aggregationRole == QString::fromLatin1("composite")) {
                QWrappedObject *element = qTopLevelWrapper(qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject)));
                if (visitedObjects.contains(element))
                    continue;
                visitedObjects.append(element);
                if (element == parentWrappedObject)
                    return createIndex(elementCount, 0, static_cast<void *>(parentWrappedObject));
                ++elementCount;
            }
        }
        else if (typeName.contains("QSet") && metaProperty.read(propertyWrappedObject).isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        if (qTopLevelWrapper(element) == parentWrappedObject)
                            return createIndex(elementCount, 0, static_cast<void *>(parentWrappedObject));
                        ++elementCount;
                    }
                }
            }
        }
        else if (typeName.contains("QList") && metaProperty.read(propertyWrappedObject).isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        if (qTopLevelWrapper(element) == parentWrappedObject)
                            return createIndex(elementCount, 0, static_cast<void *>(parentWrappedObject));
                        ++elementCount;
                    }
                }
            }
        }
    }
    return QModelIndex();
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

//    qDebug() << "ROWCOUNT de" << wrappedObject->objectName() << "=" << wrappedObject->children().size();
//    foreach (QObject *child, wrappedObject->children())
//        qDebug() << "Child" << child->objectName();
//    return wrappedObject->children().size();

    const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();

    QList<QWrappedObject *> visitedObjects;
    int elementCount = 0;
    for (int i = 0; i < propertyCount; ++i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        propertyWrappedObject->registerMetaTypes();
        QString typeName = metaProperty.typeName();
        QString aggregationRole = wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()), metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole).toString();

        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject))) {
            if (aggregationRole == QString::fromLatin1("composite")) {
                QWrappedObject *element = qTopLevelWrapper(qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject)));
                if (visitedObjects.contains(element))
                    continue;
                visitedObjects.append(element);
                ++elementCount;
            }
        }
        else if (typeName.contains("QSet") && metaProperty.read(propertyWrappedObject).isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        ++elementCount;
                    }
                }
            }
        }
        else if (typeName.contains("QList") && metaProperty.read(propertyWrappedObject).isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        ++elementCount;
                    }
                }
            }
        }
    }
    return elementCount;
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

void WrappedObjectModel::refreshInternalData(QWrappedObject *wrappedObject, WrappedObjectItem *rootItem)
{
    if (!wrappedObject)
        return;

    const QMetaWrappedObject *metaWrappedObject = wrappedObject->metaWrappedObject();
    if (!metaWrappedObject)
        return;

    WrappedObjectItem item;
    item.item = qTopLevelWrapper(wrappedObject);
    if (rootItem) {
        qDebug() << "Adicionando" << item.item->objectName() << "como filho de" << rootItem->item->objectName();
        rootItem->children.append(item);
    }
    else {
        qDebug() << "Adicionando" << item.item->objectName() << "como toplevel";
        _rootItems.append(item);
    }

    int propertyCount = metaWrappedObject->propertyCount();

    QList<QWrappedObject *> visitedObjects;
    for (int i = 0; i < propertyCount; ++i) {
        QMetaPropertyInfo metaPropertyInfo = metaWrappedObject->property(i);
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        QWrappedObject *propertyWrappedObject = metaPropertyInfo.propertyWrappedObject;
        propertyWrappedObject->registerMetaTypes();
        QString typeName = metaProperty.typeName();
        QString aggregationRole = wrappedObject->propertyData(QString::fromLatin1(metaPropertyInfo.propertyMetaObject->className()), metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole).toString();

        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject))) {
            if (aggregationRole == QString::fromLatin1("composite")) {
                QWrappedObject *element = qTopLevelWrapper(qvariant_cast<QWrappedObject *>(metaProperty.read(propertyWrappedObject)));
                if (visitedObjects.contains(element))
                    continue;
                visitedObjects.append(element);
                refreshInternalData(element, &item);
            }
        }
        else if (typeName.contains("QSet") && metaProperty.read(propertyWrappedObject).isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        refreshInternalData(element, &item);
                    }
                }
            }
        }
        else if (typeName.contains("QList") && metaProperty.read(propertyWrappedObject).isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(metaProperty.read(propertyWrappedObject).data()));
            if (aggregationRole == QString::fromLatin1("composite")) {
                foreach (QWrappedObject *element, elements) {
                    if (!visitedObjects.contains(qTopLevelWrapper(element))) {
                        visitedObjects.append(qTopLevelWrapper(element));
                        refreshInternalData(element, &item);
                    }
                }
            }
        }
    }
}
