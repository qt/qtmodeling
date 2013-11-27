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
#include <QtModeling/QModelingElement>

#include <QtGui/QFontMetrics>

#include <QtCore/QRegularExpression>

#include <QtWidgets/QApplication>

QT_BEGIN_NAMESPACE

/*!
    \class QModelingObjectPropertyModel

    \inmodule QtModelingWidgets

    \brief The QModelingObjectPropertyModel class provides a Qt model for
    handling QtModeling element's properties.
*/

QModelingObjectPropertyModelPrivate::QModelingObjectPropertyModelPrivate() :
    modelingObject(0), modelingMetaObject(0)
{
}

/*!
    Creates a new QModelingObjectPropertyModel with the given \a parent.
*/
QModelingObjectPropertyModel::QModelingObjectPropertyModel(QObject *parent) :
    QAbstractItemModel(*new QModelingObjectPropertyModelPrivate, parent)
{
}

/*!
    Destroys the QModelingObjectPropertyModel;
*/
QModelingObjectPropertyModel::~QModelingObjectPropertyModel()
{
}

/*!
    Adjusts \a modelingObject as the element whose properties should be handled by this QModelingObjectPropertyModel.
    \a index represents the index \a modelingObject plays in the corresponding QModelingObjectModel.
*/
void QModelingObjectPropertyModel::setModelingObject(QModelingObject *modelingObject, QModelIndex index)
{
    Q_D(QModelingObjectPropertyModel);

    if (modelingObject && d->modelingObject != modelingObject) {
        beginResetModel();
        d->modelingObject = modelingObject;
        d->modelingMetaObject = modelingObject->metaObject();
        d->groupProperties = &modelingObject->groupProperties();
        d->propertyGroups = &modelingObject->propertyGroups();
        d->modelingObjectIndex = index;
        endResetModel();
    }
}

/*!
    Returns the QModelIndex which corresponds to the \a parent's child at position \a row, \a column.
*/
QModelIndex QModelingObjectPropertyModel::index(int row, int column, const QModelIndex &parent) const
{
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();
    if (parent.isValid()) // Is property index
        return createIndex(row, column, static_cast<void *>(d->groupProperties->values(d->propertyGroups->at(parent.row()))[row]));
    else // Is property group index
        return createIndex(row, column);
}

/*!
    Returns the QModelIndex of the parent of index identified by \a child.
*/
QModelIndex QModelingObjectPropertyModel::parent(const QModelIndex &child) const
{
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || !child.isValid())
        return QModelIndex();

    QMetaProperty *metaProperty = static_cast<QMetaProperty *>(child.internalPointer());
    if (!metaProperty)
        return QModelIndex();

    return createIndex(d->modelingObject->propertyGroupIndex(*metaProperty), 0);
}

/*!
    Returns the number of index rows having \a parent as parent.
*/
int QModelingObjectPropertyModel::rowCount(const QModelIndex &parent) const
{
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || (parent.isValid() && parent.column() != 0))
        return 0;
    return (parent.row() == -1) ? d->propertyGroups->count():
                                  (!parent.internalPointer()) ? d->groupProperties->values(d->propertyGroups->at(parent.row())).count():0;
}

/*!
    Returns the number of index columns having \a parent as parent.
*/
int QModelingObjectPropertyModel::columnCount(const QModelIndex &parent) const
{
    Q_D(const QModelingObjectPropertyModel);

    return (!d->modelingMetaObject || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

/*!
    Returns the data \a index contains in role \a role.
*/
QVariant QModelingObjectPropertyModel::data(const QModelIndex &index, int role) const
{
    Q_D(const QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || d->modelingMetaObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return QVariant();

    QMetaProperty *metaProperty = static_cast<QMetaProperty *>(index.internalPointer());
    switch (role) {
        case Qt::DisplayRole:
        case Qt::EditRole: {
            if (!metaProperty)
                return index.column() == 0 ? d->propertyGroups->at(index.row()):QStringLiteral("");

            switch (index.column()) {
                case 0: {
                    if (metaProperty->isValid()) {
                        QString propertyName = QString::fromLatin1(metaProperty->name()).remove(QRegularExpression(QStringLiteral("_$")));
                        return propertyName.append(QString::fromLatin1(!metaProperty->isWritable() ? " (RO)":""));
                    }
                    else
                        return d->propertyGroups->at(index.row());
                }
                case 1: {
                    if (index.parent().row() != -1 && metaProperty->isValid()) {
                        QString typeName = QString::fromLatin1(metaProperty->typeName());
                        QVariant variant = metaProperty->read(d->modelingObject);
                        int methodIndex = d->modelingMetaObject->indexOfMethod(QStringLiteral("%1()").arg(QString::fromLatin1(metaProperty->name())).toLatin1());
                        if (methodIndex != -1) {
                            if (QString::fromLatin1(d->modelingMetaObject->method(methodIndex).tag()) == QStringLiteral("Q_TODO")) {
                                return QStringLiteral("<to be implemented>");
                            }
                        }
                        if (metaProperty->isEnumType())
                            return QString::fromLatin1(metaProperty->enumerator().valueToKey(variant.toInt())).remove(QString::fromLatin1(metaProperty->typeName()).split(':').last()).toLower();
                        else if (metaProperty->type() == QVariant::Bool || metaProperty->type() == QVariant::String || metaProperty->type() == QVariant::Int) {
                            return variant;
                        }
                        else if (typeName.endsWith('*') && qvariant_cast<QModelingObject *>(variant)) {
                            QModelingObject *modelingObject = qvariant_cast<QModelingObject *>(variant);
                            if (modelingObject) {
                                QString returnedValue = modelingObject->objectName();
                                if (!metaProperty->isStored())
                                    delete modelingObject;
                                return returnedValue;
                            }
                            else
                                return QVariant();
                        }
                        else if (typeName.contains(QStringLiteral("QSet")) && typeName.contains('*') && variant.isValid()) {
                            QSet<QModelingObject *> elements = *(static_cast<QSet<QModelingObject *> *>(variant.data()));
                            QString str;
                            str.append('[');
                            if (elements.size() > 0) {
                                foreach (QModelingObject *modelingObject, elements)
                                    if (modelingObject)
                                        str.append(modelingObject->objectName().append(QStringLiteral(", ")));
                                str.chop(2);
                            }
                            str.append(']');
                            return !str.isEmpty() ? str:QVariant();
                        }
                        else if (typeName.contains(QStringLiteral("QList")) && typeName.contains('*') && variant.isValid()) {
                            QList<QModelingObject *> elements = *(static_cast<QList<QModelingObject *> *>(variant.data()));
                            QString str;
                            str.append('[');
                            if (elements.size() > 0) {
                                foreach (QModelingObject *modelingObject, elements)
                                    str.append(modelingObject->objectName().append(QStringLiteral(", ")));
                                str.chop(2);
                            }
                            str.append(']');
                            return !str.isEmpty() ? str:QVariant();
                        }
                        else if (typeName.contains(QStringLiteral("QSet")) && typeName.contains(QStringLiteral("QString")) && variant.isValid()) {
                            QSet<QString> elements = *(static_cast<QSet<QString> *>(variant.data()));
                            QString str;
                            str.append('[');
                            if (elements.size() > 0) {
                                foreach (QString string, elements)
                                        str.append(string.append(QStringLiteral(", ")));
                                str.chop(2);
                            }
                            str.append(']');
                            return !str.isEmpty() ? str:QVariant();
                        }
                        else if (typeName.contains(QStringLiteral("QList")) && typeName.contains(QStringLiteral("QString")) && variant.isValid()) {
                            QList<QString> elements = *(static_cast<QList<QString> *>(variant.data()));
                            QString str;
                            str.append('[');
                            if (elements.size() > 0) {
                                foreach (QString string, elements)
                                    str.append(string.append(QStringLiteral(", ")));
                                str.chop(2);
                            }
                            str.append(']');
                            return !str.isEmpty() ? str:QVariant();
                        }
                    }
                    if (QString::fromLatin1(metaProperty->typeName()).endsWith('*'))
                        return QStringLiteral("undefined");
                    else
                        return QVariant();
                }
                default:
                    Q_ASSERT(false);
            }
        }
        case Qt::SizeHintRole: {
            QFont font = QApplication::font();
            QFontMetrics fontMetrics(font);
            return QSize(fontMetrics.width(data(index, Qt::DisplayRole).toString()) + 10, fontMetrics.height() + 8);
        }
        case Qt::FontRole: {
            QFont font = QApplication::font();
            if (!metaProperty) {
                font.setBold(true);
                return font;
            }
            int methodIndex = d->modelingMetaObject->indexOfMethod(QStringLiteral("%1()").arg(QString::fromLatin1(metaProperty->name())).toLatin1());
            if (methodIndex != -1) {
                if (QString::fromLatin1(d->modelingMetaObject->method(methodIndex).tag()) == QStringLiteral("Q_TODO")) {
                    font.setItalic(true);
                }
            }
            if (QString::fromLatin1(metaProperty->typeName()).endsWith('*') && !qvariant_cast<QModelingObject *>(metaProperty->read(d->modelingObject))) {
                font.setItalic(true);
            }
            if (metaProperty->isValid() && index.column() == 0 && metaProperty->isResettable())
                font.setBold(d->modelingObject->isPropertyModified(*metaProperty));
            if (metaProperty->isValid() && index.column() == 0)
                font.setItalic(QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                             *metaProperty,
                                                             QtModeling::AggregationRole).toString() == QStringLiteral("composite"));
            return font;
        }
        case Qt::ToolTipRole: {
            if (metaProperty && metaProperty->isValid()) {
                QString toolTip = QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                                *metaProperty,
                                                                QtModeling::DocumentationRole).toString().remove(QRegularExpression(QStringLiteral(".$"))).append('.');
                if (toolTip == QStringLiteral("."))
                    toolTip = QStringLiteral("");

                if (QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                  *metaProperty,
                                                  QtModeling::IsDerivedUnionRole).toBool())
                    toolTip += QStringLiteral(" This is a derived union property.");
                else if (!metaProperty->isStored())
                    toolTip += QStringLiteral(" This is a derived property.");

                int i = 50;
                while (i < toolTip.length()) {
                    toolTip = toolTip.replace(toolTip.lastIndexOf(QStringLiteral(" "), i), 1, QStringLiteral("\n"));
                    i += 50;
                }
                if (!toolTip.isEmpty())
                    toolTip += QStringLiteral("\n\n");

                toolTip += QStringLiteral("Type: %1").arg(
                    QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                  *metaProperty,
                                                  QtModeling::PropertyTypeRole).toString()
                                                         );
                QVariant variant = QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                                 *metaProperty,
                                                                 QtModeling::AggregationRole);
                if (variant.isValid() && variant.toString() != QStringLiteral("none"))
                    toolTip += QStringLiteral("\nAggregation: %1").arg(variant.toString());

                QString redefinedProperties = QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                                            *metaProperty,
                                                                            QtModeling::RedefinedPropertiesRole).toString();
                if (!redefinedProperties.isEmpty())
                    toolTip += QStringLiteral("\nRedefines: %1").arg(redefinedProperties);
                QString subsettedProperties = QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                                            *metaProperty,
                                                                            QtModeling::SubsettedPropertiesRole).toString();

                if (!subsettedProperties.isEmpty())
                    toolTip += QStringLiteral("\nSubsets: %1").arg(subsettedProperties);
                QString oppositeEnd = QModelingObject::propertyData(d->propertyGroups->at(d->modelingObject->propertyGroupIndex(*metaProperty)),
                                                                    *metaProperty,
                                                                    QtModeling::OppositeEndRole).toString();
                if (!oppositeEnd.isEmpty())
                    toolTip += QStringLiteral("\nOpposite end: %1").arg(oppositeEnd);

                return toolTip;
            }
            else {
                return QStringLiteral("");
            }
        }
        case Qt::UserRole: {
            return QVariant::fromValue(static_cast<QMetaProperty *>(index.internalPointer()));
        }
    }
    return QVariant();
}

/*!
    Ajusts the \a index's data corresponding to role \a role to \a value.
*/
bool QModelingObjectPropertyModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    Q_D(QModelingObjectPropertyModel);

    if (!d->modelingMetaObject || d->modelingMetaObject->propertyCount() == 0 || index.column() < 0 || index.column() >= 2)
        return false;
    QMetaProperty *metaProperty = static_cast<QMetaProperty *>(index.internalPointer());
    switch (role) {
        case Qt::DisplayRole: {
            if (QString::fromLatin1(metaProperty->name()) == QStringLiteral("objectName")) {
                    d->modelingObject->setProperty("name", value);
                    emit indexChanged(d->modelingObjectIndex);
            }
            if (QString::fromLatin1(metaProperty->name()) == QStringLiteral("name"))
                emit indexChanged(d->modelingObjectIndex);
            if (metaProperty->read(d->modelingObject) != value)
                metaProperty->write(d->modelingObject, value);
            if (QString::fromLatin1(metaProperty->typeName()).endsWith('*'))
                emit indexChanged(QModelIndex());
            return true;
        }
    }
    return false;
}

/*!
    Returns the header data for section \a section and orientation \a orientation corresponding to role \a role.
*/
QVariant QModelingObjectPropertyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return QString::fromLatin1(section == 0 ? "Property":"Value");
    return QVariant();
}

/*!
    Returns the flags of item corresponding to \a index.
*/
Qt::ItemFlags QModelingObjectPropertyModel::flags(const QModelIndex &index) const
{
    QMetaProperty *metaProperty = static_cast<QMetaProperty *>(index.internalPointer());
    if (metaProperty && metaProperty->isValid() && metaProperty->isWritable() && index.column() == 1)
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
    else
        return QAbstractItemModel::flags(index);
}

/*!
    Returns the QModelingObject whose properties are being handled by this QModelingObjectPropertyModel.
*/
QModelingObject *QModelingObjectPropertyModel::modelingObject() const
{
    Q_D(const QModelingObjectPropertyModel);

    return d->modelingObject;
}

/*!
    \fn void QModelingObjectPropertyModel::indexChanged(const QModelIndex &modelingObjectIndex)

    This signal is emitted whenever the property represented by \a modelingObjectIndex has been changed.
*/

QT_END_NAMESPACE

