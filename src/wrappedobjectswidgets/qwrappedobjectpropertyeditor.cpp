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
#include "qwrappedobjectpropertyeditor.h"
#include "qwrappedobjectpropertyeditor_p.h"
#include "qwrappedobjectpropertymodel.h"
#include "qwrappedobjectpropertyfiltermodel.h"
#include "internal/filterwidget_p.h"
#include "internal/propertyeditoritemdelegate_p.h"

#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

QWrappedObjectPropertyEditorPrivate::QWrappedObjectPropertyEditorPrivate() :
    label(new QLabel),
    treeView(new QTreeView),
    filter(new FilterWidget),
    proxyModel(new QWrappedObjectPropertyFilterModel(q_func())),
    propertyModel(0)
{
}

QWrappedObjectPropertyEditor::QWrappedObjectPropertyEditor(QWidget *parent, Qt::WindowFlags f) :
    QWidget(*new QWrappedObjectPropertyEditorPrivate, parent, f)
{
    Q_D(QWrappedObjectPropertyEditor);

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
    connect(d->filter, &FilterWidget::filterChanged, [=](){
        d->treeView->expandAll();
        d->treeView->resizeColumnToContents(0);
        d->treeView->resizeColumnToContents(1);
    });
}

void QWrappedObjectPropertyEditor::setModel(QWrappedObjectPropertyModel *propertyModel)
{
    Q_D(QWrappedObjectPropertyEditor);

    if (d->propertyModel)
        disconnect(d->propertyModel, 0, this, 0);
    d->propertyModel = propertyModel;
    d->proxyModel->setSourceModel(d->propertyModel);
    if (propertyModel) {
        connect(propertyModel, &QAbstractItemModel::modelReset, [=]() {
            d->label->setText(QString::fromLatin1("%1: %2").arg(d->propertyModel->wrappedObject()->objectName()).arg(QString::fromLatin1(d->propertyModel->wrappedObject()->metaObject()->className())));
            d->treeView->expandAll();
            d->treeView->resizeColumnToContents(0);
            d->treeView->resizeColumnToContents(1);
        });
    }
}

QWrappedObjectPropertyModel *QWrappedObjectPropertyEditor::model() const
{
    Q_D(const QWrappedObjectPropertyEditor);

    return d->propertyModel;
}

#include "moc_qwrappedobjectpropertyeditor.cpp"

QT_END_NAMESPACE

