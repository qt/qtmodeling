#include "wrappedobjectpropertymodel.h"

#include <QtCore/QRegularExpression>

#include <QtGui/QFontMetrics>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>

using QtWrappedObjects::QMetaPropertyInfo;

WrappedObjectPropertyModel::WrappedObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(parent), _metaWrappedObject(0)
{
}

void WrappedObjectPropertyModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    if (wrappedObject && _metaWrappedObject != wrappedObject->metaWrappedObject()) {
        beginResetModel();
        _wrappedObject = wrappedObject;
        _metaWrappedObject = _wrappedObject->metaWrappedObject();
        _wrappedObjectIndex = QModelIndex();
        endResetModel();
    }
}

void WrappedObjectPropertyModel::setWrappedObjectIndex(const QModelIndex &wrappedObjectIndex)
{
    QWrappedObject *wrappedObject = qvariant_cast<QWrappedObject *>(wrappedObjectIndex.data(Qt::UserRole));
    setWrappedObject(wrappedObject);
    _wrappedObjectIndex = wrappedObjectIndex;
}

QModelIndex WrappedObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!_metaWrappedObject || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    return createIndex(row, column, (parent.isValid()) ? static_cast<void *>(&_metaWrappedObject->property(parent.row(), row)):0);
}

QModelIndex WrappedObjectPropertyModel::parent(const QModelIndex &child) const
{
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(child.internalPointer());
    if (!_metaWrappedObject || !child.isValid() || !metaPropertyInfo)
        return QModelIndex();
    return createIndex(_metaWrappedObject->indexOfGroup(metaPropertyInfo->propertyMetaObject->className()), 0);
}

int WrappedObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
    if (!_metaWrappedObject || (parent.isValid() && parent.column() != 0))
        return 0;
    return (parent.row() == -1) ? _metaWrappedObject->propertyGroupCount():
                                  (!parent.internalPointer()) ? _metaWrappedObject->propertyCount(parent.row()):0;
}

int WrappedObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
    return (!_metaWrappedObject || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant WrappedObjectPropertyModel::data(const QModelIndex &index, int role) const
{
    if (!_metaWrappedObject || _metaWrappedObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
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
                font.setBold(metaPropertyInfo->propertyWrappedObject->isPropertyModified(metaPropertyInfo->metaProperty));
            if (metaPropertyInfo && index.column() == 0)
                font.setItalic(QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole).toString() == "composite");
            return font;
        }
        case Qt::ToolTipRole: {
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            if (metaPropertyInfo) {
                QString toolTip = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::DocumentationRole).toString().remove(QRegularExpression(".$")).append(".");
                if (QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole).toBool())
                    toolTip += QString::fromLatin1(" This is a derived union property.");
                else if (!metaPropertyInfo->metaProperty.isStored())
                    toolTip += QString::fromLatin1(" This is a derived property.");
                int i = 50;
                while (i < toolTip.length()) {
                    toolTip = toolTip.replace(toolTip.lastIndexOf(" ", i), 1, "\n");
                    i += 50;
                }
                if (!toolTip.isEmpty())
                    toolTip += "\n\n";
                toolTip += QString("Type: %1").arg(metaPropertyInfo->metaProperty.typeName());
                QVariant variant = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole);
                if (variant.isValid() && variant.toString() != "none")
                    toolTip += QString("\nAggregation: %1").arg(variant.toString());
                QString redefinedProperties = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole).toString();
                if (!redefinedProperties.isEmpty())
                    toolTip += QString("\nRedefines: %1").arg(redefinedProperties);
                QString subsettedProperties = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole).toString();
                if (!subsettedProperties.isEmpty())
                    toolTip += QString("\nSubsets: %1").arg(subsettedProperties);
                QString oppositeEnd = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::OppositeEndRole).toString();
                if (!oppositeEnd.isEmpty())
                    toolTip += QString("\nOpposite end: %1").arg(oppositeEnd);
                return toolTip;
            }
            else {
                return "";
            }
        }
        case Qt::UserRole: {
            return qVariantFromValue(static_cast<QMetaPropertyInfo *>(index.internalPointer()));
        }
    }
    return QVariant();
}

bool WrappedObjectPropertyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!_metaWrappedObject || _metaWrappedObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return false;
    switch (role) {
        case Qt::DisplayRole: {
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
            QWrappedObject *propertyWrappedObject = metaPropertyInfo->propertyWrappedObject;
            if (QString::fromLatin1(metaProperty.name()) == "objectName") {
                    propertyWrappedObject = qTopLevelWrapper(propertyWrappedObject);
                    propertyWrappedObject->setProperty("name", value);
                    emit indexChanged(_wrappedObjectIndex);
            }
            if (QString::fromLatin1(metaProperty.name()) == "name")
                emit indexChanged(_wrappedObjectIndex);
            if (metaProperty.read(propertyWrappedObject) != value)
                metaProperty.write(propertyWrappedObject, value);
            return true;
        }
    }
    return false;
}

QVariant WrappedObjectPropertyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return section == 0 ? "Property":"Value";
    return QVariant();
}

Qt::ItemFlags WrappedObjectPropertyModel::flags(const QModelIndex &index) const
{
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
    if (metaPropertyInfo && metaPropertyInfo->metaProperty.isWritable() && index.column() == 1)
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
    return QAbstractItemModel::flags(index);
}

QWrappedObject *WrappedObjectPropertyModel::wrappedObject() const
{
    return _wrappedObject;
}
