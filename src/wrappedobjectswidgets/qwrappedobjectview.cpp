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
#include "qwrappedobjectview.h"
#include "qwrappedobjectview_p.h"

#include <QtCore/QRegularExpression>

#include <QtWidgets/QMenu>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QMessageBox>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaWrappedObject>
#include <QtWrappedObjectsWidgets/QWrappedObjectModel>

QT_BEGIN_NAMESPACE

QWrappedObjectViewPrivate::QWrappedObjectViewPrivate() :
    treeView(new QTreeView)
{
}

void QWrappedObjectViewPrivate::populateContextMenu(QMenu &menu, QWrappedObject *element)
{
    Q_Q(QWrappedObjectView);

    const QMetaWrappedObject *metaWrappedObject = element->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();
    for (int i = 0; i < propertyCount; ++i) {
        QString propertyName = QString::fromLatin1(metaWrappedObject->property(i).metaProperty.name());
        QString propertyType = QString::fromLatin1(metaWrappedObject->property(i).metaProperty.typeName());
        QString modifiedPropertyName = QString(propertyName.left(1).toUpper()+propertyName.mid(1)).remove(QRegularExpression(QString::fromLatin1("s$"))).replace(QRegularExpression(QString::fromLatin1("ie$")), QString::fromLatin1("y")).replace(QRegularExpression(QString::fromLatin1("se$")), QString::fromLatin1("s")).replace(QRegularExpression(QString::fromLatin1("ice$")), QString::fromLatin1("ex")).replace(QRegularExpression(QString::fromLatin1("ce$")), QString::fromLatin1("x")).remove(QRegularExpression(QString::fromLatin1("_$")));
        QString methodSignature;
        QString actionText;
        if (propertyType.contains(QString::fromLatin1("QList")) || propertyType.contains(QString::fromLatin1("QSet")) || propertyType.endsWith(QString::fromLatin1("*"))) {
            if (propertyType.contains(QString::fromLatin1("QList")) || propertyType.contains(QString::fromLatin1("QSet"))) {
                propertyType = propertyType.remove(QString::fromLatin1("QList<")).remove(QString::fromLatin1("QSet<")).remove(QString::fromLatin1(">"));
                methodSignature = QString::fromLatin1("add%1(%2)").arg(modifiedPropertyName).arg(propertyType);
                actionText = QObject::tr("Add %1").arg(modifiedPropertyName);
            }
            else if (propertyType.endsWith(QString::fromLatin1("*"))) {
                methodSignature = QString::fromLatin1("set%1(%2)").arg(modifiedPropertyName).arg(propertyType);
                actionText = QObject::tr("Set %1").arg(modifiedPropertyName);
            }
            int metaMethodIndex;
            if ((metaMethodIndex = element->metaObject()->indexOfMethod(methodSignature.toLatin1())) != -1 && !visitedAddMethods.contains(actionText)) {
                QAction *action = new QAction(actionText, q);
                visitedAddMethods[actionText] = QPair<QObject *, QMetaMethod>(element, element->metaObject()->method(metaMethodIndex));
                action->setData(propertyType);
                QObject::connect(action, &QAction::triggered, q, &QWrappedObjectView::handleAddMethod);
                menu.addAction(action);
            }
        }
    }
    if (element->parent()) {
        menu.addSeparator();
        QAction *action = new QAction(QObject::tr("&Delete"), q);
        action->setIcon(QIcon::fromTheme(QString::fromLatin1("edit-delete")));
        QObject::connect(action, &QAction::triggered, q, &QWrappedObjectView::deleteObject);
        menu.addAction(action);
    }
}

QWrappedObjectView::QWrappedObjectView(QWidget *parent, Qt::WindowFlags f) :
    QWidget(*new QWrappedObjectViewPrivate, parent, f)
{
    Q_D(QWrappedObjectView);

    d->treeView->setEditTriggers(QAbstractItemView::AllEditTriggers);
    d->treeView->setAlternatingRowColors(true);
    QPalette modelPallete = d->treeView->palette();
    modelPallete.setColor(QPalette::Active, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Inactive, QPalette::Base, QColor(255, 255, 255));
    modelPallete.setColor(QPalette::Active, QPalette::AlternateBase, QColor(248, 247, 246));
    modelPallete.setColor(QPalette::Inactive, QPalette::AlternateBase, QColor(248, 247, 246));
    d->treeView->setPalette(modelPallete);
    d->treeView->setUniformRowHeights(true);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setSpacing(0);
    layout->setContentsMargins(0, 0, 0, 0);
    layout->addWidget(d->treeView);
}

void QWrappedObjectView::setModel(QAbstractItemModel *model)
{
    Q_D(QWrappedObjectView);

    if (d->treeView->model())
        disconnect(d->treeView->model(), 0, this, 0);
    if (d->treeView->selectionModel())
        disconnect(d->treeView->selectionModel(), 0, this, 0);
    d->treeView->setModel(model);
    if (model) {
        connect(model, &QAbstractItemModel::modelReset, [=]() {
            d->treeView->setCurrentIndex(model->index(0, 0));
            d->treeView->expandAll();
            d->treeView->resizeColumnToContents(0);
            d->treeView->resizeColumnToContents(1);
        });
        connect(model, &QAbstractItemModel::rowsInserted, [=](const QModelIndex &parent, int first){
                d->treeView->setCurrentIndex(model->index(first, 0, parent));
        });
        connect(d->treeView->selectionModel(), &QItemSelectionModel::selectionChanged, [=](const QItemSelection &selected){
                emit wrappedObjectChanged(qvariant_cast<QWrappedObject *>(selected.indexes().first().data(Qt::UserRole)));
        });
    }
}

void QWrappedObjectView::updateSelected()
{
    Q_D(QWrappedObjectView);

    (dynamic_cast<QWrappedObjectModel *>(d->treeView->model()))->updateIndex(d->treeView->selectionModel()->selectedIndexes().first());
}

void QWrappedObjectView::contextMenuEvent(QContextMenuEvent *event)
{
    Q_D(QWrappedObjectView);

    QMenu menu(this);
    QWrappedObject *element = qvariant_cast<QWrappedObject *>(d->treeView->currentIndex().data(Qt::UserRole));
    d->visitedAddMethods.clear();
    d->populateContextMenu(menu, element);
    menu.exec(event->globalPos());
}

void QWrappedObjectView::handleAddMethod()
{
    Q_D(QWrappedObjectView);

    QAction *action = qobject_cast<QAction *>(sender());
    if (action) {
        QObject *element = d->visitedAddMethods[action->text()].first;
        QMetaMethod metaMethod = d->visitedAddMethods[action->text()].second;
        QString elementType = action->data().toString();
        int type;
        if ((type = QMetaType::type(elementType.toLatin1())) != QMetaType::UnknownType) {
            const QMetaObject *metaObject = QMetaType::metaObjectForType(type);
            if (metaObject) {
                QObject *addedElement = metaObject->newInstance();
                if (addedElement) {
                    addedElement->setObjectName(QString::fromLatin1("Unamed %1").arg(elementType.remove(QString::fromLatin1("*"))));
                    metaMethod.invoke(element, ::Q_ARG(QObject *, addedElement));
                }
            }
        }
    }
    QWrappedObjectModel *wrappedObjectModel = dynamic_cast<QWrappedObjectModel *>(d->treeView->model());
    wrappedObjectModel->updateIndex(QModelIndex());
}

void QWrappedObjectView::deleteObject()
{
    Q_D(QWrappedObjectView);

    QWrappedObject *usedObject = qvariant_cast<QWrappedObject *>(d->treeView->selectionModel()->selection().indexes().first().data(Qt::UserRole));

    if (QMessageBox::question(this, tr("Delete element"), tr("Are you sure you want to delete '%1' element' ?").arg(qTopLevelWrapper(usedObject)->objectName())) == QMessageBox::Yes) {
        QWrappedObject *container = qvariant_cast<QWrappedObject *>(d->treeView->model()->index(0, 0, QModelIndex()).data(Qt::UserRole));
        removeObjectUse(container, usedObject);
        QWrappedObjectModel *wrappedObjectModel = dynamic_cast<QWrappedObjectModel *>(d->treeView->model());
        wrappedObjectModel->updateIndex(QModelIndex());
        d->treeView->setCurrentIndex(wrappedObjectModel->index(0, 0));
        emit wrappedObjectChanged(qvariant_cast<QWrappedObject *>(wrappedObjectModel->index(0, 0).data(Qt::UserRole)));
        d->treeView->expandAll();
        d->treeView->resizeColumnToContents(0);
        d->treeView->resizeColumnToContents(1);
        usedObject->deleteLater();
    }
}

void QWrappedObjectView::removeObjectUse(QWrappedObject *container, QWrappedObject *usedObject)
{
    const QMetaWrappedObject *metaWrappedObject = container->metaWrappedObject();
    int propertyCount = metaWrappedObject->propertyCount();
    for (int i = 0; i < propertyCount; ++i) {
        QMetaProperty metaProperty = metaWrappedObject->property(i).metaProperty;
        QWrappedObject *propertyWrappedObject = metaWrappedObject->property(i).propertyWrappedObject;
        QString propertyName = QString::fromLatin1(metaProperty.name());
        QString modifiedPropertyName = QString(propertyName.left(1).toUpper()+propertyName.mid(1)).remove(QRegularExpression(QString::fromLatin1("s$"))).replace(QRegularExpression(QString::fromLatin1("ie$")), QString::fromLatin1("y")).replace(QRegularExpression(QString::fromLatin1("se$")), QString::fromLatin1("s")).replace(QRegularExpression(QString::fromLatin1("ice$")), QString::fromLatin1("ex")).replace(QRegularExpression(QString::fromLatin1("ce$")), QString::fromLatin1("x")).remove(QRegularExpression(QString::fromLatin1("_$")));
        QString typeName = QString::fromLatin1(metaProperty.typeName());
        QVariant variant = metaProperty.read(propertyWrappedObject);
        QString methodSignature;
        int metaMethodIndex;
        if (typeName.endsWith('*') && qvariant_cast<QWrappedObject *>(variant)) {
            QWrappedObject *object = qvariant_cast<QWrappedObject *>(variant);
            if (object == usedObject) {
                methodSignature = QString::fromLatin1("set%1(%2)").arg(modifiedPropertyName).arg(typeName);
                if (!methodSignature.isEmpty() && (metaMethodIndex = container->metaObject()->indexOfMethod(methodSignature.toLatin1())) != -1) {
                    container->metaObject()->method(metaMethodIndex).invoke(container, ::Q_ARG(QObject *, 0));
                }
            }
            else if (QWrappedObject::propertyData(QString::fromLatin1(metaWrappedObject->property(i).propertyMetaObject->className()), metaWrappedObject->property(i).metaProperty, QtWrappedObjects::AggregationRole).toString() == QString::fromLatin1("composite"))
                removeObjectUse(object, usedObject);
        }
        else if (typeName.contains(QString::fromLatin1("QSet")) && variant.isValid()) {
            QSet<QWrappedObject *> elements = *(static_cast<QSet<QWrappedObject *> *>(variant.data()));
            if (elements.size() > 0) {
                foreach (QWrappedObject *object, elements) {
                    if (object == usedObject) {
                        typeName = typeName.remove(QString::fromLatin1("QSet<")).remove(QString::fromLatin1(">"));
                        methodSignature = QString::fromLatin1("remove%1(%2)").arg(modifiedPropertyName).arg(typeName);
                        if (!methodSignature.isEmpty() && (metaMethodIndex = container->metaObject()->indexOfMethod(methodSignature.toLatin1())) != -1) {
                            container->metaObject()->method(metaMethodIndex).invoke(container, ::Q_ARG(QObject *, usedObject));
                        }
                    }
                    else if (QWrappedObject::propertyData(QString::fromLatin1(metaWrappedObject->property(i).propertyMetaObject->className()), metaWrappedObject->property(i).metaProperty, QtWrappedObjects::AggregationRole).toString() == QString::fromLatin1("composite"))
                        removeObjectUse(object, usedObject);                }
            }
        }
        else if (typeName.contains(QString::fromLatin1("QList")) && variant.isValid()) {
            QList<QWrappedObject *> elements = *(static_cast<QList<QWrappedObject *> *>(variant.data()));
            if (elements.size() > 0) {
                foreach (QWrappedObject *object, elements) {
                    if (object == usedObject) {
                        typeName = typeName.remove(QString::fromLatin1("QList<")).remove(QString::fromLatin1(">"));
                        methodSignature = QString::fromLatin1("remove%1(%2)").arg(modifiedPropertyName).arg(typeName);
                        if (!methodSignature.isEmpty() && (metaMethodIndex = container->metaObject()->indexOfMethod(methodSignature.toLatin1())) != -1) {
                            container->metaObject()->method(metaMethodIndex).invoke(container, ::Q_ARG(QObject *, usedObject));
                        }
                    }
                    else if (QWrappedObject::propertyData(QString::fromLatin1(metaWrappedObject->property(i).propertyMetaObject->className()), metaWrappedObject->property(i).metaProperty, QtWrappedObjects::AggregationRole).toString() == QString::fromLatin1("composite"))
                        removeObjectUse(object, usedObject);
                }
            }
        }
    }
}

#include "moc_qwrappedobjectview.cpp"

QT_END_NAMESPACE
