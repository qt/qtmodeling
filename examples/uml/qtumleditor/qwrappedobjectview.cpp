#include "qwrappedobjectview.h"

#include <QtCore/QRegularExpression>

#include <QtWidgets/QMenu>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

#include <QtGui/QContextMenuEvent>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>

#include "wrappedobjectmodel.h"

using QtWrappedObjects::QMetaWrappedObject;

QWrappedObjectView::QWrappedObjectView(QWidget *parent) :
    QWidget(parent),
    _treeView(new QTreeView)
{
    _treeView->setEditTriggers(QAbstractItemView::AllEditTriggers);
    _treeView->setAlternatingRowColors(true);
    QPalette modelPallete = _treeView->palette();
    modelPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(248, 247, 246));
    modelPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(248, 247, 246));
    _treeView->setPalette(modelPallete);
    _treeView->setUniformRowHeights(true);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(0);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(_treeView);
}

void QWrappedObjectView::setModel(QAbstractItemModel *model)
{
    if (_treeView->model())
        disconnect(_treeView->model(), 0, this, 0);
    if (_treeView->selectionModel())
        disconnect(_treeView->selectionModel(), 0, this, 0);
    _treeView->setModel(model);
    if (model) {
        connect(model, &QAbstractItemModel::modelReset, [=]() {
            _treeView->setCurrentIndex(model->index(0, 0));
            _treeView->expandAll();
            _treeView->resizeColumnToContents(0);
            _treeView->resizeColumnToContents(1);
        });
        connect(model, &QAbstractItemModel::rowsInserted, [=](const QModelIndex &parent, int first){
            _treeView->setCurrentIndex(model->index(first, 0, parent));
        });
        connect(_treeView->selectionModel(), &QItemSelectionModel::selectionChanged, [=](const QItemSelection &selected){
            emit wrappedObjectChanged(qvariant_cast<QWrappedObject *>(selected.indexes().first().data(Qt::UserRole)));
        });
    }
}

void QWrappedObjectView::updateSelected()
{
    (dynamic_cast<WrappedObjectModel *>(_treeView->model()))->updateIndex(_treeView->selectionModel()->selectedIndexes().first());
}

void QWrappedObjectView::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu menu(this);
    QWrappedObject *element = qvariant_cast<QWrappedObject *>(_treeView->currentIndex().data(Qt::UserRole));
    _visitedAddMethods.clear();
    populateContextMenu(menu, element);
    menu.exec(event->globalPos());
}

void QWrappedObjectView::handleAddMethod()
{
    QAction *action = qobject_cast<QAction *>(sender());
    if (action) {
        QObject *element = _visitedAddMethods[action->text()].first;
        QMetaMethod metaMethod = _visitedAddMethods[action->text()].second;
        QString elementType = action->data().toString();
        int type;
        if ((type = QMetaType::type(elementType.toLatin1())) != QMetaType::UnknownType) {
            const QMetaObject *metaObject = QMetaType::metaObjectForType(type);
            if (metaObject) {
                QObject *addedElement = metaObject->newInstance();
                if (addedElement) {
                    addedElement->setObjectName(QString("Unamed %1").arg(elementType.remove("*")));
                    metaMethod.invoke(element, ::Q_ARG(QObject *, addedElement));
                }
            }
        }
    }
    WrappedObjectModel *wrappedObjectModel = dynamic_cast<WrappedObjectModel *>(_treeView->model());
    wrappedObjectModel->updateIndex(QModelIndex());
}

void QWrappedObjectView::populateContextMenu(QMenu &menu, QtWrappedObjects::QWrappedObject *element)
{
    const QMetaWrappedObject *metaWrappedObject = element->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();
    for (int i = 0; i < propertyCount; ++i) {
        QString propertyName = metaWrappedObject->property(i).metaProperty.name();
        QString propertyType = metaWrappedObject->property(i).metaProperty.typeName();
        QString modifiedPropertyName = QString(propertyName.left(1).toUpper()+propertyName.mid(1)).remove(QRegularExpression("s$")).replace(QRegularExpression("ie$"), "y").replace(QRegularExpression("se$"), "s").replace(QRegularExpression("ice$"), "ex").replace(QRegularExpression("ce$"), "x").remove(QRegularExpression("_$"));
        QString methodSignature;
        QString actionText;
        if (propertyType.contains("QList") || propertyType.contains("QSet") || propertyType.endsWith("*")) {
            if (propertyType.contains("QList") || propertyType.contains("QSet")) {
                propertyType = propertyType.remove("QList<").remove("QSet<").remove(">");
                methodSignature = QString("add%1(%2)").arg(modifiedPropertyName).arg(propertyType);
                actionText = tr("Add %1").arg(modifiedPropertyName);
            }
            else if (propertyType.endsWith("*")) {
                methodSignature = QString("set%1(%2)").arg(modifiedPropertyName).arg(propertyType);
                actionText = tr("Set %1").arg(modifiedPropertyName);
            }
            int metaMethodIndex;
            if ((metaMethodIndex = element->metaObject()->indexOfMethod(methodSignature.toLatin1())) != -1 and !_visitedAddMethods.contains(actionText)) {
                QAction *action = new QAction(actionText, this);
                _visitedAddMethods[actionText] = QPair<QObject *, QMetaMethod>(element, element->metaObject()->method(metaMethodIndex));
                action->setData(propertyType);
                connect(action, &QAction::triggered, this, &QWrappedObjectView::handleAddMethod);
                menu.addAction(action);
            }
        }
    }
}
