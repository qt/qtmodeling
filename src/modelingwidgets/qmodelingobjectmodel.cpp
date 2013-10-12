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
#include "qmodelingobjectmodel.h"
#include "qmodelingobjectmodel_p.h"

#include <QtGui/QFont>
#include <QtWidgets/QApplication>

#include <QtModeling/QModelingObject>
#include <QtModeling/QtModelingNamespace>

QT_BEGIN_NAMESPACE

QModelingObjectModelPrivate::QModelingObjectModelPrivate()
{
}

QModelingObjectModel::QModelingObjectModel(QObject *parent) :
    QAbstractItemModel(*new QModelingObjectModelPrivate, parent)
{
}

void QModelingObjectModel::addModelingObject(QModelingObject *modelingObject)
{
    Q_D(QModelingObjectModel);

    if (modelingObject && !d->modelingObjects.contains(modelingObject)) {
        beginResetModel();
        d->modelingObjects.append(modelingObject);
        endResetModel();
    }
}

QList<QModelingObject *> QModelingObjectModel::modelingObjects() const
{
    Q_D(const QModelingObjectModel);

    return d->modelingObjects;
}

QModelIndex QModelingObjectModel::index(int row, int column, const QModelIndex &parent) const
{
    Q_D(const QModelingObjectModel);

    if (d->modelingObjects.isEmpty() || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();

    if (!parent.isValid())
        return createIndex(row, column, static_cast<void *>(d->modelingObjects.at(row)));

    QModelingObject *modelingObject = static_cast<QModelingObject *>(parent.internalPointer());
    if (!modelingObject)
        return QModelIndex();

    return createIndex(row, column, static_cast<void *>(modelingObject->children().at(row)));
}

QModelIndex QModelingObjectModel::parent(const QModelIndex &child) const
{
    Q_D(const QModelingObjectModel);

    QModelingObject *modelingObject = static_cast<QModelingObject *>(child.internalPointer());
    if (d->modelingObjects.isEmpty() || !child.isValid() || !modelingObject)
        return QModelIndex();

    QModelingObject *parentModelingObject = dynamic_cast<QModelingObject *>(modelingObject->parent());
    if (!parentModelingObject)
        return QModelIndex();

    QModelingObject *grandParentModelingObject = dynamic_cast<QModelingObject *>(parentModelingObject->parent());
    if (!grandParentModelingObject)
        return createIndex(0, 0, parentModelingObject);

    return createIndex(grandParentModelingObject->children().indexOf(parentModelingObject), 0, static_cast<void *>(parentModelingObject));
}

int QModelingObjectModel::rowCount(const QModelIndex &parent) const
{
    Q_D(const QModelingObjectModel);

    if (d->modelingObjects.isEmpty() || (parent.isValid() && parent.column() != 0))
        return 0;

    if (parent.row() == -1)
        return d->modelingObjects.count();

    QModelingObject *modelingObject = static_cast<QModelingObject *>(parent.internalPointer());
    if (!modelingObject)
        return 0;

    return modelingObject->children().size();
}

int QModelingObjectModel::columnCount(const QModelIndex &parent) const
{
    Q_D(const QModelingObjectModel);

    return (d->modelingObjects.isEmpty() || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant QModelingObjectModel::data(const QModelIndex &index, int role) const
{
    Q_D(const QModelingObjectModel);

    if (d->modelingObjects.isEmpty() || index.column() < 0 || index.column() >= 2)
        return QVariant();
    switch (role) {
        case Qt::DisplayRole:
        case Qt::EditRole: {
            QModelingObject *modelingObject = static_cast<QModelingObject *>(index.internalPointer());
            QString elementRole = QStringLiteral("");
            if (modelingObject->property("role").value<QtModeling::ModelingObjectRole>() == QtModeling::ImportedElementRole)
                elementRole = QStringLiteral(" (imported element)");
            else if (modelingObject->property("role").value<QtModeling::ModelingObjectRole>() == QtModeling::ImportedPackageRole)
                elementRole = QStringLiteral(" (imported package)");
            else if (modelingObject->property("role").value<QtModeling::ModelingObjectRole>() == QtModeling::AppliedProfileRole)
                elementRole = QStringLiteral(" (applied profile)");
            return index.column() == 0 ? modelingObject->objectName() + elementRole:QString::fromLatin1(modelingObject->metaObject()->className());
        }
        case Qt::FontRole: {
            QFont font = QApplication::font();
            QModelingObject *modelingObject = static_cast<QModelingObject *>(index.internalPointer());
            if (index.parent().row() == -1 && modelingObject->property("role").value<QtModeling::ModelingObjectRole>() == QtModeling::ModelElementRole)
                font.setBold(true);
            return font;
        }
        case Qt::UserRole: {
            return qVariantFromValue(static_cast<QModelingObject *>(index.internalPointer()));
        }
    }
    return QVariant();
}

bool QModelingObjectModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    return QAbstractItemModel::setData(index, value, role);
}

QVariant QModelingObjectModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return QString::fromLatin1(section == 0 ? "Object":"Class");
    return QVariant();
}

Qt::ItemFlags QModelingObjectModel::flags(const QModelIndex &index) const
{
    return QAbstractItemModel::flags(index);
}

void QModelingObjectModel::updateIndex(const QModelIndex &index)
{
    if (!index.isValid()) {
        beginResetModel();
        emit layoutChanged();
        endResetModel();
    }
    else
        emit dataChanged(index, index, QVector<int>() << Qt::DisplayRole);
}

void QModelingObjectModel::clear()
{
    Q_D(QModelingObjectModel);

    qDeleteAll(d->modelingObjects);
    d->modelingObjects.clear();
}

//#include "moc_qmodelingobjectmodel.cpp"

QT_END_NAMESPACE

