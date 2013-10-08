/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtModelingWidgets module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "qmodelingobjectpropertymodel.h"
#include "qmodelingobjectpropertymodel_p.h"

#include <QtModeling/QModelingObject>

#include <QtGui/QFontMetrics>

#include <QtCore/QRegularExpression>

QT_BEGIN_NAMESPACE

QModelingObjectPropertyModelPrivate::QModelingObjectPropertyModelPrivate() :
    modelingObject(0), modelingMetaObject(0)
{
}

QModelingObjectPropertyModel::QModelingObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(*new QModelingObjectPropertyModelPrivate, parent)
{
}

void QModelingObjectPropertyModel::setModelingObject(QObject *modelingObject, QModelIndex index)
{
    Q_D(QModelingObjectPropertyModel);

    if (modelingObject && d->modelingMetaObject != modelingObject->metaObject()) {
        beginResetModel();
        d->modelingObject = modelingObject;
        d->modelingMetaObject = d->modelingObject->metaObject();
        d->modelingObjectIndex = index;
        endResetModel();
    }
}

QModelIndex QModelingObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    //return createIndex(row, column, (parent.isValid()) ? static_cast<void *>(&d->modelingMetaObject->property(parent.row(), row)):0);
}

QModelIndex QModelingObjectPropertyModel::parent(const QModelIndex &child) const
{
    Q_D(const QModelingObjectPropertyModel);

//    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(child.internalPointer());
//    if (!d->modelingMetaObject || !child.isValid() || !metaPropertyInfo)
//        return QModelIndex();
//    return createIndex(d->modelingMetaObject->indexOfGroup(metaPropertyInfo->propertyMetaObject->className()), 0);
}

int QModelingObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || (parent.isValid() && parent.column() != 0))
        return 0;
//    return (parent.row() == -1) ? d->modelingMetaObject->propertyGroupCount():
//                                  (!parent.internalPointer()) ? d->modelingMetaObject->propertyCount(parent.row()):0;
}

int QModelingObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
    Q_D(const QModelingObjectPropertyModel);

    return (!d->modelingMetaObject || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant QModelingObjectPropertyModel::data(const QModelIndex &index, int role) const
{
//    Q_D(const QModelingObjectPropertyModel);

//    if (!d->modelingMetaObject || d->modelingMetaObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
//        return QVariant();
//    switch (role) {
//        case Qt::DisplayRole:
//        case Qt::EditRole: {
//            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
//            switch (index.column()) {
//                case 0: {
//                    if (metaPropertyInfo) {
//                        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
//                        QString propertyName = QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$")));
//                        if (propertyName != propertyName.toUpper())
//                            propertyName = propertyName.replace(0, 1, propertyName.left(1).toLower());
//                        return propertyName.append(QString::fromLatin1(!metaProperty.isWritable() ? " (RO)":""));
//                    }
//                    return QString::fromLatin1(d->modelingMetaObject->property(index.row(), 0).propertyMetaObject->className());
//                }
//                case 1: {
//                    if (index.parent().row() != -1 && metaPropertyInfo) {
//                        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
//                        QObject *propertyModelingObject = metaPropertyInfo->propertyModelingObject;
//                        QString typeName = QString::fromLatin1(metaProperty.typeName());
//                        QVariant variant = metaProperty.read(propertyModelingObject);
//                        if (metaProperty.type() == QVariant::String) {
//                            if (QString::fromLatin1(metaProperty.name()) == QString::fromLatin1("objectName"))
//                                propertyModelingObject = propertyModelingObject;
//                            return metaProperty.read(propertyModelingObject);
//                        }
//                        else if (metaProperty.type() == QVariant::Bool) {
//                            return variant;
//                        }
//                        else if (metaProperty.isEnumType())
//                            return QString::fromLatin1(metaProperty.enumerator().valueToKey(variant.toInt())).toLower().remove(QString::fromLatin1(metaProperty.name()));
//                        else if (typeName.endsWith('*') && qvariant_cast<QObject *>(variant)) {
//                            QObject *objectElement = qvariant_cast<QObject *>(variant);
//                            if (objectElement) {
//                                QString returnedValue = objectElement->objectName();
//                                if (!metaProperty.isStored())
//                                    delete objectElement;
//                                return returnedValue;
//                            }
//                            else
//                                return QVariant();
//                        }
//                        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
//                            QSet<QObject *> elements = *(static_cast<QSet<QObject *> *>(variant.data()));
//                            QString str;
//                            if (elements.size() > 0) {
//                                str.append(QString::fromLatin1("["));
//                                foreach (QObject *object, elements)
//                                    if (object)
//                                        str.append((object)->objectName().append(QString::fromLatin1(", ")));
//                                str.chop(2);
//                                str.append(QString::fromLatin1("]"));
//                            }
//                            return !str.isEmpty() ? str:QVariant();
//                        }
//                        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
//                            QObjectList elements = *(static_cast<QObjectList *>(variant.data()));
//                            QString str;
//                            if (elements.size() > 0) {
//                                str.append(QString::fromLatin1("["));
//                                foreach (QObject *object, elements)
//                                    str.append((object)->objectName().append(QString::fromLatin1(", ")));
//                                str.chop(2);
//                                str.append(QString::fromLatin1("]"));
//                            }
//                            return !str.isEmpty() ? str:QVariant();
//                        }
//                    }
//                    return QVariant();
//                }
//                default:
//                    Q_ASSERT(false);
//            }
//        }
//        case Qt::SizeHintRole: {
//            QFont font;
//            QFontMetrics fontMetrics(font);
//            return QSize(fontMetrics.width(data(index, Qt::DisplayRole).toString()) + 10, 22);
//        }
//        case Qt::FontRole: {
//            QFont font;
//            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
//            if (metaPropertyInfo && index.column() == 0 && metaPropertyInfo->metaProperty.isResettable())
//                font.setBold(metaPropertyInfo->propertyModelingObject->isPropertyModified(metaPropertyInfo->metaProperty));
//            if (metaPropertyInfo && index.column() == 0)
//                font.setItalic(QModelingObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtModelingObjects::AggregationRole).toString() == QString::fromLatin1("composite"));
//            return font;
//        }
//        case Qt::ToolTipRole: {
//            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
//            if (metaPropertyInfo) {
//                QString toolTip = QModelingObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtModelingObjects::DocumentationRole).toString().remove(QRegularExpression(QString::fromLatin1(".$"))).append(QString::fromLatin1("."));
//                if (QModelingObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtModelingObjects::IsDerivedUnionRole).toBool())
//                    toolTip += QString::fromLatin1(" This is a derived union property.");
//                else if (!metaPropertyInfo->metaProperty.isStored())
//                    toolTip += QString::fromLatin1(" This is a derived property.");
//                int i = 50;
//                while (i < toolTip.length()) {
//                    toolTip = toolTip.replace(toolTip.lastIndexOf(QString::fromLatin1(" "), i), 1, QString::fromLatin1("\n"));
//                    i += 50;
//                }
//                if (!toolTip.isEmpty())
//                    toolTip += QString::fromLatin1("\n\n");
//                toolTip += QString::fromLatin1("Type: %1").arg(QString::fromLatin1(metaPropertyInfo->metaProperty.typeName()));
//                QVariant variant = QModelingObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtModelingObjects::AggregationRole);
//                if (variant.isValid() && variant.toString() != QString::fromLatin1("none"))
//                    toolTip += QString::fromLatin1("\nAggregation: %1").arg(variant.toString());
//                QString redefinedProperties = QModelingObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtModelingObjects::RedefinedPropertiesRole).toString();
//                if (!redefinedProperties.isEmpty())
//                    toolTip += QString::fromLatin1("\nRedefines: %1").arg(redefinedProperties);
//                QString subsettedProperties = QModelingObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtModelingObjects::SubsettedPropertiesRole).toString();
//                if (!subsettedProperties.isEmpty())
//                    toolTip += QString::fromLatin1("\nSubsets: %1").arg(subsettedProperties);
//                QString oppositeEnd = QModelingObject::propertyData(QString::fromLatin1(metaPropertyInfo->propertyMetaObject->className()), metaPropertyInfo->metaProperty, QtModelingObjects::OppositeEndRole).toString();
//                if (!oppositeEnd.isEmpty())
//                    toolTip += QString::fromLatin1("\nOpposite end: %1").arg(oppositeEnd);
//                return toolTip;
//            }
//            else {
//                return QString::fromLatin1("");
//            }
//        }
//        case Qt::UserRole: {
//            return qVariantFromValue(static_cast<QMetaPropertyInfo *>(index.internalPointer()));
//        }
//    }
//    return QVariant();
}

bool QModelingObjectPropertyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
//    Q_D(QModelingObjectPropertyModel);

//    if (!d->modelingMetaObject || d->modelingMetaObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
//        return false;
//    switch (role) {
//        case Qt::DisplayRole: {
//            QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
//            QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
//            QObject *propertyModelingObject = metaPropertyInfo->propertyModelingObject;
//            if (QString::fromLatin1(metaProperty.name()) == QString::fromLatin1("objectName")) {
//                    propertyModelingObject = propertyModelingObject;
//                    propertyModelingObject->setProperty("name", value);
//                    emit indexChanged(d->modelingObjectIndex);
//            }
//            if (QString::fromLatin1(metaProperty.name()) == QString::fromLatin1("name"))
//                emit indexChanged(d->modelingObjectIndex);
//            if (metaProperty.read(propertyModelingObject) != value)
//                metaProperty.write(propertyModelingObject, value);
//            if (QString::fromLatin1(metaProperty.typeName()).endsWith('*'))
//                emit indexChanged(QModelIndex());
//            return true;
//        }
//    }
//    return false;
}

QVariant QModelingObjectPropertyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return QString::fromLatin1(section == 0 ? "Property":"Value");
    return QVariant();
}

Qt::ItemFlags QModelingObjectPropertyModel::flags(const QModelIndex &index) const
{
//    QMetaPropertyInfo *metaPropertyInfo = static_cast<QMetaPropertyInfo *>(index.internalPointer());
//    if (metaPropertyInfo && metaPropertyInfo->metaProperty.isWritable() && index.column() == 1)
//        return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
//    return QAbstractItemModel::flags(index);
}

QObject *QModelingObjectPropertyModel::modelingObject() const
{
    Q_D(const QModelingObjectPropertyModel);

    return d->modelingObject;
}

#include "moc_qmodelingobjectpropertymodel.cpp"

QT_END_NAMESPACE

