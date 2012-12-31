#include "wrappedobjectpropertymodel.h"

#include <QtCore/QRegularExpression>
#include <QtCore/QSize>

#include <QtGui/QFontMetrics>
#include <QtGui/QBrush>

#include <QtWrappedObjects/QMetaPropertyInfo>

using QtWrappedObjects::QMetaPropertyInfo;

WrappedObjectPropertyModel::WrappedObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(parent), _metaWrappedObject(0)
{
}

void WrappedObjectPropertyModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    beginResetModel();
    _metaWrappedObject = wrappedObject->metaWrappedObject();
    endResetModel();
}

QModelIndex WrappedObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
    if (row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    return createIndex(row, column, (parent.isValid()) ? static_cast<void *>(&_metaWrappedObject->property(parent.row(), row)):0);
}

QModelIndex WrappedObjectPropertyModel::parent(const QModelIndex &child) const
{
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(child.internalPointer());
    if (!child.isValid() || !metaPropertyInfo)
        return QModelIndex();
    return createIndex(_metaWrappedObject->indexOfGroup(metaPropertyInfo->propertyMetaObject->className()), 0);
}

int WrappedObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid() && parent.column() != 0)
        return 0;
    return (parent.row() == -1) ? _metaWrappedObject->propertyGroupCount():
                                  (!parent.internalPointer()) ? _metaWrappedObject->propertyCount(parent.row()):0;
}

int WrappedObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
    return (parent.isValid() && parent.column() != 0) ? 0:2;
}

QVariant WrappedObjectPropertyModel::data(const QModelIndex &index, int role) const
{
    if (_metaWrappedObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return QVariant();
    switch (role) {
        case Qt::DisplayRole:
        case Qt::EditRole: {
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            switch (index.column()) {
                case 0: {
                    if (metaPropertyInfo) {
                        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
                        QString propertyName = QString(metaProperty.name()).remove(QRegularExpression("_$")).remove(QRegularExpression("^is"));
                        if (propertyName != propertyName.toUpper())
                            propertyName = propertyName.replace(0, 1, propertyName.left(1).toLower());
                        return propertyName + (!metaProperty.isWritable() ? " (RO)":"");
                    }
                    return _metaWrappedObject->property(index.row(), 0).propertyMetaObject->className();
                }
                case 1: {
                    if (index.parent().row() != -1 && metaPropertyInfo) {
                        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
                        QWrappedObject *propertyWrappedObject = metaPropertyInfo->propertyWrappedObject;
                        QString typeName = metaProperty.typeName();
                        QVariant variant = metaProperty.read(propertyWrappedObject);
                        if (metaProperty.type() == QVariant::String) {
                            if (QString::fromLatin1(metaProperty.name()) == "objectName")
                                propertyWrappedObject = qTopLevelWrapper(propertyWrappedObject);
                            return metaProperty.read(propertyWrappedObject);
                        }
                        else if (metaProperty.type() == QVariant::Bool) {
                            return variant;
                        }
                        else if (metaProperty.isEnumType())
                            return QString::fromLatin1(metaProperty.enumerator().valueToKey(variant.toInt())).toLower().remove(metaProperty.name());
                        else if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(variant)) {
                            QWrappedObject *objectElement = qvariant_cast<QWrappedObject *>(variant);
                            if (objectElement) {
                                QString returnedValue = qTopLevelWrapper(objectElement)->objectName();
                                if (!metaProperty.isStored())
                                    delete objectElement;
                                return returnedValue;
                            }
                            else
                                return QVariant();
                        }
                        else if (typeName.contains("QSet") && variant.isValid()) {
                            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(variant.data()));
                            QString str;
                            if (elements.size() > 0) {
                                str.append("[");
                                foreach (QWrappedObject *object, elements)
                                    if (qwrappedobject_cast<QWrappedObject *>(object))
                                        str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(", "));
                                str.chop(2);
                                str.append("]");
                            }
                            return !str.isEmpty() ? str:QVariant();
                        }
                        else if (typeName.contains("QList") && variant.isValid()) {
                            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(variant.data()));
                            QString str;
                            if (elements.size() > 0) {
                                str.append("[");
                                foreach (QWrappedObject *object, elements)
                                    str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(", "));
                                str.chop(2);
                                str.append("]");
                            }
                            return !str.isEmpty() ? str:QVariant();
                        }
                    }
                    return QVariant();
                }
                default:
                    Q_ASSERT(false);
            }
        }
        case Qt::SizeHintRole: {
            QFont font;
            QFontMetrics fontMetrics(font);
            return QSize(fontMetrics.width(data(index, Qt::DisplayRole).toString()) + 10, 22);
        }
        case Qt::FontRole: {
            QFont font;
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            if (metaPropertyInfo && index.column() == 0 && metaPropertyInfo->metaProperty.isResettable())
                font.setBold(metaPropertyInfo->wasChanged);
            return font;
        }
        case Qt::ToolTipRole: {
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            if (metaPropertyInfo)
                return QString::fromLatin1("type: %1").arg(metaPropertyInfo->metaProperty.typeName());
            else
                return "";
        }
    }
    return QVariant();
}

bool WrappedObjectPropertyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (_metaWrappedObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return false;
    switch (role) {
        case Qt::DisplayRole: {
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
            QWrappedObject *propertyWrappedObject = metaPropertyInfo->propertyWrappedObject;
            if (QString::fromLatin1(metaProperty.name()) == "objectName") {
                    propertyWrappedObject = qTopLevelWrapper(propertyWrappedObject);
                    propertyWrappedObject->setProperty("name", value);
            }
            if (metaProperty.read(propertyWrappedObject) != value) {
                metaPropertyInfo->wasChanged = true;
                metaProperty.write(propertyWrappedObject, value);
            }
            return true;
        }
    }
    return false;
}

QVariant WrappedObjectPropertyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return section == 0 ? "Property":"Value";
    return QAbstractItemModel::headerData(section, orientation, role);
}

Qt::ItemFlags WrappedObjectPropertyModel::flags(const QModelIndex &index) const
{
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
    if (metaPropertyInfo && metaPropertyInfo->metaProperty.isWritable() && index.column() == 1)
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
    return QAbstractItemModel::flags(index);
}
