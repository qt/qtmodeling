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
#ifndef QWRAPPEDOBJECTMODEL_H
#define QWRAPPEDOBJECTMODEL_H

#include <QtWrappedObjectsWidgets/QtWrappedObjectsWidgetsGlobal>
#include <QtWrappedObjects/QtWrappedObjectsGlobal>

#include <QAbstractItemModel>

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTS
class QWrappedObject;
QT_END_NAMESPACE_QTWRAPPEDOBJECTS

using QtWrappedObjects::QWrappedObject;

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE_QTWRAPPEDOBJECTSWIDGETS

QT_MODULE(QtWrappedObjectsWidgets)

class Q_WRAPPEDOBJECTSWIDGETS_EXPORT QWrappedObjectModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit QWrappedObjectModel(QObject *parent = 0);

    QWrappedObject *wrappedObject() const;

    virtual QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
    virtual QModelIndex parent(const QModelIndex &child) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole);
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;

public Q_SLOTS:
    void setWrappedObject(QWrappedObject *wrappedObject);
    void updateIndex(const QModelIndex &index);

private:
    QWrappedObject *_wrappedObject;
};

QT_END_NAMESPACE_QTWRAPPEDOBJECTSWIDGETS

QT_END_HEADER

#endif // QWRAPPEDOBJECTMODEL_H
