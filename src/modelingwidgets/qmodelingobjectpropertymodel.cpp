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

#include <QtCore/QMetaProperty>
#include <QtCore/QRegularExpression>

#include <QtCore/QDebug>

QT_BEGIN_NAMESPACE

QModelingObjectPropertyModelPrivate::QModelingObjectPropertyModelPrivate() :
    qObject(0), modelingMetaObject(0)
{
}

QModelingObjectPropertyModel::QModelingObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(*new QModelingObjectPropertyModelPrivate, parent)
{
}

void QModelingObjectPropertyModel::setModelingObject(QModelingElement *modelingObject, QModelIndex index)
{
    Q_D(QModelingObjectPropertyModel);

    QObject *qObject = modelingObject->asQObject();
    if (qObject && d->modelingMetaObject != qObject->metaObject()) {
        beginResetModel();
        d->qObject = qObject;
        d->modelingMetaObject = d->qObject->metaObject();
        d->modelingObjectIndex = index;
        int propertyCount = d->modelingMetaObject->propertyCount();
        QModelingElement *modelingObject = qModelingObject(qObject);
        qDeleteAll(d->propertiesForGroup);
        d->propertyGroups.clear();
        QString currentGroup;
        for (int i = 0; i < propertyCount; ++i) {
            QString group = modelingObject->propertyGroups().at(modelingObject->propertyGroupIndex(d->modelingMetaObject->property(i)));
            if (group != currentGroup) {
                d->propertyGroups << group;
                currentGroup = group;
            }
            d->propertiesForGroup.insert(currentGroup, new QString(QString::fromLatin1(d->modelingMetaObject->property(i).name())));
        }
        endResetModel();
        QMetaProperty *mp = new QMetaProperty;
        *mp = qObject->metaObject()->property(0);
        qDebug() << mp->name();
    }
}

QModelIndex QModelingObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
//    qDebug() << "::index";
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    if (parent.isValid()) {
//        qDebug() << "Criando index (" << row << "," << column << ", parent:" << parent;
//        qDebug() << "Grupo da propriedade:" << d->propertyGroups.at(parent.row());
//        qDebug() << "Propriedade:" << *d->propertiesForGroup.values(d->propertyGroups.at(parent.row())).at(row);
//        qDebug() << "Criando index (" << static_cast<void *>(d->propertiesForGroup.values(d->propertyGroups.at(parent.row()))[row]);
        return createIndex(row, column, static_cast<void *>(d->propertiesForGroup.values(d->propertyGroups.at(parent.row()))[row]));
    }
    else
        return createIndex(row, column);
}

QModelIndex QModelingObjectPropertyModel::parent(const QModelIndex &child) const
{
//    qDebug() << "::parent";
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || !child.isValid())
        return QModelIndex();

    QString *property = static_cast<QString *>(child.internalPointer());
    if (!property)
        return QModelIndex();

//    qDebug() << "Procurando pai de" << *property;
    int groupIndex = propertyGroupIndex(property);
    if (groupIndex == -1)
        return QModelIndex();

    QMetaProperty metaProperty = d->modelingMetaObject->property(d->modelingMetaObject->indexOfProperty(
                                                                     d->propertiesForGroup.values(d->propertyGroups.at(groupIndex)).at(child.row())->toLatin1())
                                                                 );
    return createIndex(qModelingObject(d->qObject)->propertyGroupIndex(metaProperty), 0);
}

int QModelingObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
//    qDebug() << "::rowCount";
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || (parent.isValid() && parent.column() != 0))
        return 0;
//    qDebug() << "rowCount(" << (static_cast<QString *>(parent.internalPointer()) ?  *(static_cast<QString *>(parent.internalPointer())):"unnamed") << "). Retornando: " << ((parent.row() == -1) ? d->propertyGroups.count():
//                                                                                    (!parent.internalPointer()) ? d->propertiesForGroup.values(d->propertyGroups.at(parent.row())).count():0);
    return (parent.row() == -1) ? d->propertyGroups.count():
                                  (!parent.internalPointer()) ? d->propertiesForGroup.values(d->propertyGroups.at(parent.row())).count():0;
}

int QModelingObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
//    qDebug() << "::columnCount";
    Q_D(const QModelingObjectPropertyModel);

//    qDebug() << "columnCount(" << parent << "). Retornando:" << ((!d->modelingMetaObject || (parent.isValid() && parent.column() != 0)) ? 0:2);
    return (!d->modelingMetaObject || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant QModelingObjectPropertyModel::data(const QModelIndex &index, int role) const
{
//    qDebug() << "::data (" << index << "," << role << ")";
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || d->modelingMetaObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return QVariant();
    switch (role) {
        case Qt::DisplayRole:
        case Qt::EditRole: {
            QString *property = static_cast<QString *>(index.internalPointer());
            if (!property)
                return index.column() == 0 ? d->propertyGroups.at(index.row()):"";

            int groupIndex = propertyGroupIndex(property);
            if (groupIndex == -1)
                return QModelIndex();

            QMetaProperty metaProperty = d->modelingMetaObject->property(d->modelingMetaObject->indexOfProperty(
                                                                             d->propertiesForGroup.values(d->propertyGroups.at(groupIndex)).at(index.row())->toLatin1())
                                                                         );
            switch (index.column()) {
                case 0: {
                    if (metaProperty.isValid()) {
                        QString propertyName = QString::fromLatin1(metaProperty.name()).remove(QRegularExpression(QString::fromLatin1("_$")));
                        if (propertyName != propertyName.toUpper())
                            propertyName = propertyName.replace(0, 1, propertyName.left(1).toLower());
                        return propertyName.append(QString::fromLatin1(!metaProperty.isWritable() ? " (RO)":""));
                    }
                    return d->propertyGroups.at(index.row());
                }
                case 1: {
                    if (index.parent().row() != -1 && metaProperty.isValid()) {
                        QString typeName = QString::fromLatin1(metaProperty.typeName());
                        QVariant variant = metaProperty.read(d->qObject);
                        if (metaProperty.type() == QVariant::String) {
                            return metaProperty.read(d->qObject);
                        }
                        else if (metaProperty.type() == QVariant::Bool) {
                            return variant;
                        }
                        else if (metaProperty.isEnumType())
                            return QString::fromLatin1(metaProperty.enumerator().valueToKey(variant.toInt())).toLower().remove(QString::fromLatin1(metaProperty.name()));
                        else if (typeName.endsWith('*') && qvariant_cast<QObject *>(variant)) {
                            QObject *objectElement = qvariant_cast<QObject *>(variant);
                            if (objectElement) {
                                QString returnedValue = objectElement->objectName();
                                if (!metaProperty.isStored())
                                    delete objectElement;
                                return returnedValue;
                            }
                            else
                                return QVariant();
                        }
                        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
                            QSet<QObject *> elements = *(static_cast<QSet<QObject *> *>(variant.data()));
                            QString str;
                            if (elements.size() > 0) {
                                str.append(QString::fromLatin1("["));
                                foreach (QObject *object, elements)
                                    if (object)
                                        str.append((object)->objectName().append(QString::fromLatin1(", ")));
                                str.chop(2);
                                str.append(QString::fromLatin1("]"));
                            }
                            return !str.isEmpty() ? str:QVariant();
                        }
                        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
                            QObjectList elements = *(static_cast<QObjectList *>(variant.data()));
                            QString str;
                            if (elements.size() > 0) {
                                str.append(QString::fromLatin1("["));
                                foreach (QObject *object, elements)
                                    str.append((object)->objectName().append(QString::fromLatin1(", ")));
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
            QString *property = static_cast<QString *>(index.internalPointer());
            if (!property)
                return QVariant();

            int groupIndex = propertyGroupIndex(property);
            if (groupIndex == -1)
                return QModelIndex();

            QMetaProperty metaProperty = d->modelingMetaObject->property(d->modelingMetaObject->indexOfProperty(
                                                                             d->propertiesForGroup.values(d->propertyGroups.at(groupIndex)).at(index.row())->toLatin1())
                                                                         );
            if (metaProperty.isValid() && index.column() == 0 && metaProperty.isResettable())
                font.setBold(qModelingObject(d->qObject)->isPropertyModified(metaProperty));
            if (metaProperty.isValid() && index.column() == 0)
                font.setItalic(QModelingElement::propertyData(QString::fromLatin1(d->modelingMetaObject->className()), metaProperty, QtModeling::AggregationRole).toString() == QString::fromLatin1("composite"));
            return font;
        }
        case Qt::ToolTipRole: {
            QString *property = static_cast<QString *>(index.internalPointer());
            if (!property)
                return QVariant();

            int groupIndex = propertyGroupIndex(property);
            if (groupIndex == -1)
                return QModelIndex();

            QMetaProperty metaProperty = d->modelingMetaObject->property(d->modelingMetaObject->indexOfProperty(
                                                                             d->propertiesForGroup.values(d->propertyGroups.at(groupIndex)).at(index.row())->toLatin1())
                                                                         );
            if (metaProperty.isValid()) {
                QString toolTip = QModelingElement::propertyData(QString::fromLatin1(d->modelingMetaObject->className()), metaProperty, QtModeling::DocumentationRole).toString().remove(QRegularExpression(QString::fromLatin1(".$"))).append(QString::fromLatin1("."));
                if (QModelingElement::propertyData(QString::fromLatin1(d->modelingMetaObject->className()), metaProperty, QtModeling::IsDerivedUnionRole).toBool())
                    toolTip += QString::fromLatin1(" This is a derived union property.");
                else if (!metaProperty.isStored())
                    toolTip += QString::fromLatin1(" This is a derived property.");
                int i = 50;
                while (i < toolTip.length()) {
                    toolTip = toolTip.replace(toolTip.lastIndexOf(QString::fromLatin1(" "), i), 1, QString::fromLatin1("\n"));
                    i += 50;
                }
                if (!toolTip.isEmpty())
                    toolTip += QString::fromLatin1("\n\n");
                toolTip += QString::fromLatin1("Type: %1").arg(QString::fromLatin1(metaProperty.typeName()));
                QVariant variant = QModelingElement::propertyData(QString::fromLatin1(d->modelingMetaObject->className()), metaProperty, QtModeling::AggregationRole);
                if (variant.isValid() && variant.toString() != QString::fromLatin1("none"))
                    toolTip += QString::fromLatin1("\nAggregation: %1").arg(variant.toString());
                QString redefinedProperties = QModelingElement::propertyData(QString::fromLatin1(d->modelingMetaObject->className()), metaProperty, QtModeling::RedefinedPropertiesRole).toString();
                if (!redefinedProperties.isEmpty())
                    toolTip += QString::fromLatin1("\nRedefines: %1").arg(redefinedProperties);
                QString subsettedProperties = QModelingElement::propertyData(QString::fromLatin1(d->modelingMetaObject->className()), metaProperty, QtModeling::SubsettedPropertiesRole).toString();
                if (!subsettedProperties.isEmpty())
                    toolTip += QString::fromLatin1("\nSubsets: %1").arg(subsettedProperties);
                QString oppositeEnd = QModelingElement::propertyData(QString::fromLatin1(d->modelingMetaObject->className()), metaProperty, QtModeling::OppositeEndRole).toString();
                if (!oppositeEnd.isEmpty())
                    toolTip += QString::fromLatin1("\nOpposite end: %1").arg(oppositeEnd);
                return toolTip;
            }
            else {
                return QString::fromLatin1("");
            }
        }
        case Qt::UserRole: {
            return qVariantFromValue(static_cast<QMetaProperty *>(index.internalPointer()));
        }
    }
    return QVariant();
}

bool QModelingObjectPropertyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
//    qDebug() << "::setData";
    Q_D(QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || d->modelingMetaObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return false;
    switch (role) {
        case Qt::DisplayRole: {
            QMetaProperty *metaProperty = static_cast<QMetaProperty *>(index.internalPointer());
            if (QString::fromLatin1(metaProperty->name()) == QStringLiteral("objectName")) {
                    d->qObject->setProperty("name", value);
                    emit indexChanged(d->modelingObjectIndex);
            }
            if (QString::fromLatin1(metaProperty->name()) == QStringLiteral("name"))
                emit indexChanged(d->modelingObjectIndex);
            if (metaProperty->read(d->qObject) != value)
                metaProperty->write(d->qObject, value);
            if (QString::fromLatin1(metaProperty->typeName()).endsWith('*'))
                emit indexChanged(QModelIndex());
            return true;
        }
    }
    return false;
}

QVariant QModelingObjectPropertyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
//    qDebug() << "::headerData";
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return QString::fromLatin1(section == 0 ? "Property":"Value");
    return QVariant();
}

Qt::ItemFlags QModelingObjectPropertyModel::flags(const QModelIndex &index) const
{
//    qDebug() << "::flags";
    Q_D(const QModelingObjectPropertyModel);

    QString *property = static_cast<QString *>(index.internalPointer());
    if (!property)
        return QAbstractItemModel::flags(index);

    int groupIndex = propertyGroupIndex(property);
    if (groupIndex == -1)
        return QAbstractItemModel::flags(index);

    QMetaProperty metaProperty = d->modelingMetaObject->property(d->modelingMetaObject->indexOfProperty(
                                                                     d->propertiesForGroup.values(d->propertyGroups.at(groupIndex)).at(index.row())->toLatin1())
                                                                 );
    if (metaProperty.isValid() && metaProperty.isWritable() && index.column() == 1)
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
    return QAbstractItemModel::flags(index);
}

QObject *QModelingObjectPropertyModel::modelingObject() const
{
    Q_D(const QModelingObjectPropertyModel);

    return d->qObject;
}

int QModelingObjectPropertyModel::propertyGroupIndex(QString *property) const
{
    Q_D(const QModelingObjectPropertyModel);

    int groupIndex = 0;
    foreach (QString group, d->propertyGroups) {
        if (d->propertiesForGroup.values(group).contains(property))
            return groupIndex;
        ++groupIndex;
    }
    return -1;
}

#include "moc_qmodelingobjectpropertymodel.cpp"

QT_END_NAMESPACE

