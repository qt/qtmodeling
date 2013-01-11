#include "qwrappedobjectpropertyeditor.h"

#include <QtWidgets/QLabel>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

#include <QtWrappedObjects/QWrappedObject>

#include "filterwidget.h"
#include "propertyeditoritemdelegate.h"
#include "wrappedobjectpropertymodel.h"
#include "wrappedobjectpropertyfiltermodel.h"

using QtWrappedObjects::QWrappedObject;

QWrappedObjectPropertyEditor::QWrappedObjectPropertyEditor(QWidget *parent) :
    QWidget(parent),
    _filter(new FilterWidget),
    _label(new QLabel),
    _treeView(new QTreeView),
    _proxyModel(new WrappedObjectPropertyFilterModel(this)),
    _propertyModel(0)
{
    _treeView->setMinimumSize(QSize(350, 0));
    _treeView->setEditTriggers(QAbstractItemView::AllEditTriggers);
    _treeView->setAlternatingRowColors(true);
    QPalette propertyPallete = _treeView->palette();
    propertyPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 242, 222));
    propertyPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 242, 222));
    propertyPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(255, 255, 191));
    propertyPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(255, 255, 191));
    _treeView->setPalette(propertyPallete);
    _treeView->setUniformRowHeights(true);
    _treeView->setItemDelegateForColumn(1, new PropertyEditorItemDelegate(_treeView));
    _treeView->setModel(_proxyModel);

    _proxyModel->setFilterCaseSensitivity(Qt::CaseInsensitive);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(2);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(_filter);
    layout->addWidget(_label);
    layout->addWidget(_treeView);

    connect(_filter, &FilterWidget::filterChanged,
            _proxyModel, static_cast<void (QSortFilterProxyModel::*)(const QString &)>(&QSortFilterProxyModel::setFilterRegExp));
    connect(_filter, &FilterWidget::filterChanged, [=](){
        _treeView->expandAll();
        _treeView->resizeColumnToContents(0);
        _treeView->resizeColumnToContents(1);
    });
}

void QWrappedObjectPropertyEditor::setModel(WrappedObjectPropertyModel *propertyModel)
{
    if (_propertyModel)
        disconnect(_propertyModel, 0, this, 0);
    _propertyModel = propertyModel;
    _proxyModel->setSourceModel(_propertyModel);
    if (propertyModel) {
        connect(propertyModel, &QAbstractItemModel::modelReset, [=]() {
            _label->setText(QString::fromLatin1("%1: %2").arg(_propertyModel->wrappedObject()->objectName()).arg(_propertyModel->wrappedObject()->metaObject()->className()));
            _treeView->expandAll();
            _treeView->resizeColumnToContents(0);
            _treeView->resizeColumnToContents(1);
        });
    }
}

WrappedObjectPropertyModel *QWrappedObjectPropertyEditor::model() const
{
    return _propertyModel;
}
