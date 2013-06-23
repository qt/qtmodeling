/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtWrappedObjectsWidgets module of the Qt Toolkit.
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
#include "qwrappedobjectmodel.h"
#include "qwrappedobjectmodel_p.h"

#include <QtGui/QFont>
#include <QtWidgets/QApplication>

#include <QtWrappedObjects/QWrappedObject>

QT_BEGIN_NAMESPACE

QWrappedObjectModelPrivate::QWrappedObjectModelPrivate()
{
}

QWrappedObjectModel::QWrappedObjectModel(QObject *parent) :
    QAbstractItemModel(*new QWrappedObjectModelPrivate, parent)
{
}

void QWrappedObjectModel::addWrappedObject(QWrappedObject *wrappedObject)
{
    Q_D(QWrappedObjectModel);

    if (wrappedObject && !d->wrappedObjects.contains(wrappedObject)) {
        beginResetModel();
        d->wrappedObjects.append(wrappedObject);
        endResetModel();
    }
}

QList<QWrappedObject *> QWrappedObjectModel::wrappedObjects() const
{
    Q_D(const QWrappedObjectModel);

    return d->wrappedObjects;
}

QModelIndex QWrappedObjectModel::index(int row, int column, const QModelIndex &parent) const
{
    Q_D(const QWrappedObjectModel);

    if (d->wrappedObjects.isEmpty() || row < 0 || column < 0 || column >= 2 || (parent.isValid() && parent.column() != 0))
        return QModelIndex();

    if (!parent.isValid())
        return createIndex(row, column, static_cast<void *>(qTopLevelWrapper(d->wrappedObjects.at(row))));

    QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(parent.internalPointer());
    if (!wrappedObject)
        return QModelIndex();

    return createIndex(row, column, static_cast<void *>(wrappedObject->children().at(row)));
}

QModelIndex QWrappedObjectModel::parent(const QModelIndex &child) const
{
    Q_D(const QWrappedObjectModel);

    QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(child.internalPointer());
    if (d->wrappedObjects.isEmpty() || !child.isValid() || !wrappedObject)
        return QModelIndex();

    QWrappedObject *parentWrappedObject = qTopLevelWrapper(dynamic_cast<QWrappedObject *>(wrappedObject->parent()));
    if (!parentWrappedObject)
        return QModelIndex();

    QWrappedObject *grandParentWrappedObject = qTopLevelWrapper(dynamic_cast<QWrappedObject *>(parentWrappedObject->parent()));
    if (!grandParentWrappedObject)
        return createIndex(0, 0, parentWrappedObject);

    return createIndex(grandParentWrappedObject->children().indexOf(parentWrappedObject), 0, static_cast<void *>(parentWrappedObject));
}

int QWrappedObjectModel::rowCount(const QModelIndex &parent) const
{
    Q_D(const QWrappedObjectModel);

    if (d->wrappedObjects.isEmpty() || (parent.isValid() && parent.column() != 0))
        return 0;

    if (parent.row() == -1)
        return d->wrappedObjects.count();

    QWrappedObject *wrappedObject = qTopLevelWrapper(static_cast<QWrappedObject *>(parent.internalPointer()));
    if (!wrappedObject)
        return 0;

    return wrappedObject->children().size();
}

int QWrappedObjectModel::columnCount(const QModelIndex &parent) const
{
    Q_D(const QWrappedObjectModel);

    return (d->wrappedObjects.isEmpty() || (parent.isValid() && parent.column() != 0)) ? 0:2;
}

QVariant QWrappedObjectModel::data(const QModelIndex &index, int role) const
{
    Q_D(const QWrappedObjectModel);

    if (d->wrappedObjects.isEmpty() || index.column() < 0 || index.column() >= 2)
        return QVariant();
    switch (role) {
        case Qt::DisplayRole:
        case Qt::EditRole: {
            QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(index.internalPointer());
            QString elementRole = QString::fromLatin1("");
            if (wrappedObject->role() == QWrappedObject::ImportedElementRole)
                elementRole = QString::fromLatin1(" (imported element)");
            else if (wrappedObject->role() == QWrappedObject::ImportedPackageRole)
                elementRole = QString::fromLatin1(" (imported package)");
            else if (wrappedObject->role() == QWrappedObject::AppliedProfileRole)
                elementRole = QString::fromLatin1(" (applied profile)");
            return index.column() == 0 ? qTopLevelWrapper(wrappedObject)->objectName()+elementRole:QString::fromLatin1(qTopLevelWrapper(wrappedObject)->metaObject()->className());
        }
        case Qt::FontRole: {
            QFont font = QApplication::font();
            QWrappedObject *wrappedObject = static_cast<QWrappedObject *>(index.internalPointer());
            if (index.parent().row() == -1 && wrappedObject->role() == QWrappedObject::ModelElementRole)
                font.setBold(true);
            return font;
        }
        case Qt::UserRole: {
            return qVariantFromValue(static_cast<QWrappedObject *>(index.internalPointer()));
        }
    }
    return QVariant();
}

bool QWrappedObjectModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    return QAbstractItemModel::setData(index, value, role);
}

QVariant QWrappedObjectModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if ((section == 0 || section == 1) && orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return QString::fromLatin1(section == 0 ? "Object":"Class");
    return QVariant();
}

Qt::ItemFlags QWrappedObjectModel::flags(const QModelIndex &index) const
{
    return QAbstractItemModel::flags(index);
}

void QWrappedObjectModel::updateIndex(const QModelIndex &index)
{
    if (!index.isValid())
        emit layoutChanged();
    else
        emit dataChanged(index, index, QVector<int>() << Qt::DisplayRole);
}

void QWrappedObjectModel::clear()
{
    Q_D(QWrappedObjectModel);

    foreach (QWrappedObject *object, d->wrappedObjects)
        delete object;
    d->wrappedObjects.clear();
}

#include "moc_qwrappedobjectmodel.cpp"

QT_END_NAMESPACE

