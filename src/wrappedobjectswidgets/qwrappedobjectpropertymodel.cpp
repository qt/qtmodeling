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
#include "qwrappedobjectpropertymodel.h"

#include <QtCore/QRegularExpression>

#include <QtGui/QFontMetrics>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>

using QtWrappedObjects::QMetaPropertyInfo;

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTSWIDGETS

QWrappedObjectPropertyModel::QWrappedObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(parent), _metaWrappedObject(0)
{
}

void QWrappedObjectPropertyModel::setWrappedObject(QWrappedObject *wrappedObject)
{
    if (wrappedObject && _metaWrappedObject != wrappedObject->metaWrappedObject()) {
        beginResetModel();
        _wrappedObject = wrappedObject;
        _metaWrappedObject = _wrappedObject->metaWrappedObject();
        _wrappedObjectIndex = QModelIndex();
        endResetModel();
    }
}

void QWrappedObjectPropertyModel::setWrappedObjectIndex(const QModelIndex &wrappedObjectIndex)
{
    QWrappedObject *wrappedObject = qvariant_cast<QWrappedObject *>(wrappedObjectIndex.data(Qt::UserRole));
    setWrappedObject(wrappedObject);
    _wrappedObjectIndex = wrappedObjectIndex;
}

QModelIndex QWrappedObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
    if (!_metaWrappedObject || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    return createIndex(row, column, (parent.isValid()) ? static_cast<void *>(&_metaWrappedObject->property(parent.row(), row)):0);
}

QModelIndex QWrappedObjectPropertyModel::parent(const QModelIndex &child) const
{
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(child.internalPointer());
    if (!_metaWrappedObject || !child.isValid() || !metaPropertyInfo)
        return QModelIndex();
    return createIndex(_metaWrappedObject->indexOfGroup(metaPropertyInfo->propertyMetaObject->className()), 0);
}

int QWrappedObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
    if (!_metaWrappedObject || (parent.isValid() && parent.column() != 0))
        return 0;
    return (parent.row() == -1) ? _metaWrappedObject->propertyGroupCount():
                                  (!parent.internalPointer()) ? _metaWrappedObject->propertyCount(parent.row()):0;
}

int QWrappedObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
    return (!_metaWrappedObject || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant QWrappedObjectPropertyModel::data(const QModelIndex &index, int role) const
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
                        QString propertyName = QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$"))).remove(QRegularExpression(QString::fromLatin1("^is")));
                        if (propertyName != propertyName.toUpper())
                            propertyName = propertyName.replace(0, 1, propertyName.left(1).toLower());
                        return propertyName.append(QString::fromLatin1(!metaProperty.isWritable() ? " (RO)":""));
                    }
                    return QString::fromLatin1(_metaWrappedObject->property(index.row(), 0).propertyMetaObject->className());
                }
                case 1: {
                    if (index.parent().row() != -1 && metaPropertyInfo) {
                        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
                        QWrappedObject *propertyWrappedObject = metaPropertyInfo->propertyWrappedObject;
                        QString typeName = QString::fromLatin1(metaProperty.typeName());
                        QVariant variant = metaProperty.read(propertyWrappedObject);
                        if (metaProperty.type() == QVariant::String) {
                            if (QString::fromLatin1(metaProperty.name()) == QString::fromLatin1("objectName"))
                                propertyWrappedObject = qTopLevelWrapper(propertyWrappedObject);
                            return metaProperty.read(propertyWrappedObject);
                        }
                        else if (metaProperty.type() == QVariant::Bool) {
                            return variant;
                        }
                        else if (metaProperty.isEnumType())
                            return QString::fromLatin1(metaProperty.enumerator().valueToKey(variant.toInt())).toLower().remove(QString::fromLatin1(metaProperty.name()));
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
                        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
                            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(variant.data()));
                            QString str;
                            if (elements.size() > 0) {
                                str.append(QString::fromLatin1("["));
                                foreach (QWrappedObject *object, elements)
                                    if (qwrappedobject_cast<QWrappedObject *>(object))
                                        str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(QString::fromLatin1(", ")));
                                str.chop(2);
                                str.append(QString::fromLatin1("]"));
                            }
                            return !str.isEmpty() ? str:QVariant();
                        }
                        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
                            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(variant.data()));
                            QString str;
                            if (elements.size() > 0) {
                                str.append(QString::fromLatin1("["));
                                foreach (QWrappedObject *object, elements)
                                    str.append((qwrappedobject_cast<QWrappedObject *>(object))->objectName().append(QString::fromLatin1(", ")));
                                str.chop(2);
                                str.append(QString::fromLatin1("]"));
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
                font.setItalic(QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole).toString() == QString::fromLatin1("composite"));
            return font;
        }
        case Qt::ToolTipRole: {
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            if (metaPropertyInfo) {
                QString toolTip = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::DocumentationRole).toString().remove(QRegularExpression(QString::fromLatin1(".$"))).append(QString::fromLatin1("."));
                if (QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole).toBool())
                    toolTip += QString::fromLatin1(" This is a derived union property.");
                else if (!metaPropertyInfo->metaProperty.isStored())
                    toolTip += QString::fromLatin1(" This is a derived property.");
                int i = 50;
                while (i < toolTip.length()) {
                    toolTip = toolTip.replace(toolTip.lastIndexOf(QString::fromLatin1(" "), i), 1, QString::fromLatin1("\n"));
                    i += 50;
                }
                if (!toolTip.isEmpty())
                    toolTip += QString::fromLatin1("\n\n");
                toolTip += QString::fromLatin1("Type: %1").arg(QString::fromLatin1(metaPropertyInfo->metaProperty.typeName()));
                QVariant variant = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::AggregationRole);
                if (variant.isValid() && variant.toString() != QString::fromLatin1("none"))
                    toolTip += QString::fromLatin1("\nAggregation: %1").arg(variant.toString());
                QString redefinedProperties = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole).toString();
                if (!redefinedProperties.isEmpty())
                    toolTip += QString::fromLatin1("\nRedefines: %1").arg(redefinedProperties);
                QString subsettedProperties = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole).toString();
                if (!subsettedProperties.isEmpty())
                    toolTip += QString::fromLatin1("\nSubsets: %1").arg(subsettedProperties);
                QString oppositeEnd = QWrappedObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtWrappedObjects::QtWrappedObjects::OppositeEndRole).toString();
                if (!oppositeEnd.isEmpty())
                    toolTip += QString::fromLatin1("\nOpposite end: %1").arg(oppositeEnd);
                return toolTip;
            }
            else {
                return QString::fromLatin1("");
            }
        }
        case Qt::UserRole: {
            return qVariantFromValue(static_cast<QMetaPropertyInfo *>(index.internalPointer()));
        }
    }
    return QVariant();
}

bool QWrappedObjectPropertyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (!_metaWrappedObject || _metaWrappedObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return false;
    switch (role) {
        case Qt::DisplayRole: {
            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
            QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
            QWrappedObject *propertyWrappedObject = metaPropertyInfo->propertyWrappedObject;
            if (QString::fromLatin1(metaProperty.name()) == QString::fromLatin1("objectName")) {
                    propertyWrappedObject = qTopLevelWrapper(propertyWrappedObject);
                    propertyWrappedObject->setProperty("name", value);
                    emit indexChanged(_wrappedObjectIndex);
            }
            if (QString::fromLatin1(metaProperty.name()) == QString::fromLatin1("name"))
                emit indexChanged(_wrappedObjectIndex);
            if (metaProperty.read(propertyWrappedObject) != value)
                metaProperty.write(propertyWrappedObject, value);
            return true;
        }
    }
    return false;
}

QVariant QWrappedObjectPropertyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return QString::fromLatin1(section == 0 ? "Property":"Value");
    return QVariant();
}

Qt::ItemFlags QWrappedObjectPropertyModel::flags(const QModelIndex &index) const
{
    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
    if (metaPropertyInfo && metaPropertyInfo->metaProperty.isWritable() && index.column() == 1)
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
    return QAbstractItemModel::flags(index);
}

QWrappedObject *QWrappedObjectPropertyModel::wrappedObject() const
{
    return _wrappedObject;
}

#include "moc_qwrappedobjectpropertymodel.cpp"

QT_END_NAMESPACE_QTWRAPPEDOBJECTSWIDGETS

