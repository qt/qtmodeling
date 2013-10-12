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
#include "qmodelingobjectpropertyeditor.h"
#include "qmodelingobjectpropertyeditor_p.h"
#include "qmodelingobjectpropertymodel.h"
#include "qmodelingobjectpropertyfiltermodel.h"
#include "internal/filterwidget_p.h"
#include "internal/propertyeditoritemdelegate_p.h"

#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

QModelingObjectPropertyEditorPrivate::QModelingObjectPropertyEditorPrivate() :
    label(new QLabel),
    treeView(new QTreeView),
    filter(new FilterWidget),
    proxyModel(new QModelingObjectPropertyFilterModel(q_func())),
    propertyModel(0)
{
}

QModelingObjectPropertyEditor::QModelingObjectPropertyEditor(QWidget *parent, Qt::WindowFlags f) :
    QWidget(*new QModelingObjectPropertyEditorPrivate, parent, f)
{
    Q_D(QModelingObjectPropertyEditor);

    d->treeView->setMinimumSize(QSize(350, 0));
    d->treeView->setEditTriggers(QAbstractItemView::AllEditTriggers);
    d->treeView->setAlternatingRowColors(true);
    QPalette propertyPallete = d->treeView->palette();
    propertyPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 242, 222));
    propertyPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 242, 222));
    propertyPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(255, 255, 191));
    propertyPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(255, 255, 191));
    d->treeView->setPalette(propertyPallete);
    d->treeView->setUniformRowHeights(true);
    d->treeView->setItemDelegateForColumn(1, new PropertyEditorItemDelegate(d->treeView));
    d->treeView->setModel(d->proxyModel);

    d->proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(2);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(d->filter);
    layout->addWidget(d->label);
    layout->addWidget(d->treeView);

    connect(d->filter, &FilterWidget::filterChanged,
            d->proxyModel, static_cast<void (QSortFilterProxyModel::*)(const QString &)>(&QSortFilterProxyModel::setFilterRegExp));
    connect(d->filter, &FilterWidget::filterChanged, this, &QModelingObjectPropertyEditor::filterChanged);
}

void QModelingObjectPropertyEditor::setModel(QModelingObjectPropertyModel *propertyModel)
{
    Q_D(QModelingObjectPropertyEditor);

    if (d->propertyModel)
        disconnect(d->propertyModel, 0, this, 0);
    d->propertyModel = propertyModel;
    d->proxyModel->setSourceModel(d->propertyModel);
    if (propertyModel) {
        connect(propertyModel, &QAbstractItemModel::modelReset, this, &QModelingObjectPropertyEditor::modelReset);
    }
}

QModelingObjectPropertyModel *QModelingObjectPropertyEditor::model() const
{
    Q_D(const QModelingObjectPropertyEditor);

    return d->propertyModel;
}

void QModelingObjectPropertyEditor::filterChanged()
{
    Q_D(QModelingObjectPropertyEditor);

    d->treeView->expandAll();
    d->treeView->resizeColumnToContents(0);
    d->treeView->resizeColumnToContents(1);
}

void QModelingObjectPropertyEditor::modelReset()
{
    Q_D(QModelingObjectPropertyEditor);

    d->label->setText(QString::fromLatin1("%1: %2").arg(d->propertyModel->modelingObject()->objectName()).arg(QString::fromLatin1(d->propertyModel->modelingObject()->metaObject()->className())));
    d->treeView->expandAll();
    d->treeView->resizeColumnToContents(0);
    d->treeView->resizeColumnToContents(1);
}

//#include "moc_qmodelingobjectpropertyeditor.cpp"

QT_END_NAMESPACE

