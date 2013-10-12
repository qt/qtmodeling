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
#include "propertyeditoritemdelegate_p.h"

#include <QtWidgets/QLineEdit>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTreeView>

#include <QtModeling/QModelingObject>

#include <QtModelingWidgets/QModelingObjectModel>
#include <QtModelingWidgets/QModelingObjectPropertyModel>
#include <QtModelingWidgets/QModelingObjectPropertyEditor>

#include "propertyeditor_p.h"

QT_BEGIN_NAMESPACE

PropertyEditorItemDelegate::PropertyEditorItemDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{
}

QWidget *PropertyEditorItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (QMetaProperty *metaProperty = qvariant_cast<QMetaProperty *>(index.data(Qt::UserRole))) {
        if (metaProperty->type() == QVariant::Bool || metaProperty->isEnumType() || QString::fromLatin1(metaProperty->typeName()).endsWith('*')) {
            QWidget *widget = 0;
            QTreeView *view = qobject_cast<QTreeView *>(this->parent());
            QModelingObjectPropertyEditor *editor = qobject_cast<QModelingObjectPropertyEditor *>(view->parent());
            QModelingObject *modelingObject = editor->model()->modelingObject();
            if (metaProperty->type() == QVariant::Bool) {
                widget = new QCheckBox;
            }
            else if (metaProperty->isEnumType()) {
                QComboBox *comboBox = new QComboBox(parent);
                QMetaEnum metaEnum = metaProperty->enumerator();
                int keyCount = metaEnum.keyCount();
                for (int j = 0; j < keyCount; ++j)
                    comboBox->addItem(QString::fromLatin1(metaProperty->enumerator().valueToKey(j)).remove(QString::fromLatin1(metaProperty->typeName()).split(':').last()).toLower());
                comboBox->setMaximumHeight(22);
                widget = comboBox;
            }
            else if (QString::fromLatin1(metaProperty->typeName()).endsWith('*')) {
                QModelingObject *rootObject = modelingObject;
                while (rootObject->parent())
                    rootObject = dynamic_cast<QModelingObject *>(rootObject->parent());
                if (rootObject->property("role").value<QtModeling::ModelingObjectRole>() != QtModeling::ModelElementRole)
                    return 0;
                QComboBox *comboBox = new QComboBox(parent);
                QModelingObjectPropertyModel *propertyModel = editor->model();
                QModelingObjectModel *modelingObjectModel = qobject_cast<QModelingObjectModel *>((qobject_cast<QObject *>(propertyModel))->parent());
                foreach (QModelingObject *modelingObject, modelingObjectModel->modelingObjects()) {
                    if (modelingObject->property("role").value<QtModeling::ModelingObjectRole>() != QtModeling::AppliedProfileRole) {
                        QString typeName = QString::fromLatin1(metaProperty->typeName());
                        typeName.chop(1);
                        populateTypeCombo(comboBox, modelingObject, typeName);
                    }
                }
                comboBox->setMaximumHeight(22);
                widget = comboBox;
            }
            PropertyEditor *propertyEditor = new PropertyEditor(widget, modelingObject, metaProperty, parent);
            connect(propertyEditor, &PropertyEditor::commitData, this, &PropertyEditorItemDelegate::commitData);
            connect(propertyEditor, &PropertyEditor::closeEditor, this, &PropertyEditorItemDelegate::closeEditor);
            return propertyEditor;
        }
        else if (metaProperty->type() == QVariant::String)
            return QStyledItemDelegate::createEditor(parent, option, index);
        else return 0;
    }
    return QStyledItemDelegate::createEditor(parent, option, index);
}

void PropertyEditorItemDelegate::populateTypeCombo(QComboBox *comboBox, QModelingObject *modelingObject, QString className) const
{
    const QMetaObject *metaObject = modelingObject->metaObject();
    while (metaObject) {
        if (QString::fromLatin1(metaObject->className()) == className) {
            int numberOfItens = comboBox->count();
            int i;
            for (i = 0; i < numberOfItens; ++i)
                if (comboBox->itemText(i) == modelingObject->objectName())
                    break;
            if (i != numberOfItens)
                break;
            comboBox->addItem(modelingObject->objectName(), QVariant::fromValue(modelingObject));
            break;
        }
        metaObject = metaObject->superClass();
    }
    foreach (QObject *object, modelingObject->children()) {
        QModelingObject *childModelingObject = qobject_cast<QModelingObject *>(object);
        populateTypeCombo(comboBox, childModelingObject, className);
    }
}

void PropertyEditorItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if (QMetaProperty *metaProperty = qvariant_cast<QMetaProperty *>(index.data(Qt::UserRole))) {
        PropertyEditor *propertyEditor = qobject_cast<PropertyEditor *>(editor);
        QTreeView *view = qobject_cast<QTreeView *>(this->parent());
        QModelingObjectPropertyEditor *editor = qobject_cast<QModelingObjectPropertyEditor *>(view->parent());
        QModelingObject *modelingObject = editor->model()->modelingObject();
        if (metaProperty->type() == QVariant::Bool)
            propertyEditor->setValue(metaProperty->read(modelingObject).toBool() == true ? 1:0);
        else if (metaProperty->isEnumType())
            propertyEditor->setValue(metaProperty->read(modelingObject).toInt());
        else if (QString::fromLatin1(metaProperty->typeName()).endsWith('*')) {
            QComboBox *comboBox = qobject_cast<QComboBox *>(propertyEditor->widget());
            QObject *propertyValue = metaProperty->read(modelingObject).value<QObject *>();
            if (comboBox && propertyValue) {
                int numberOfItens = comboBox->count();
                for (int i = 0; i < numberOfItens; ++i) {
                    if (comboBox->itemText(i) == propertyValue->objectName()) {
                        comboBox->setCurrentIndex(i);
                        break;
                    }
                }
            }
        }
        else
            QStyledItemDelegate::setEditorData(editor, index);
    }
    else
        QStyledItemDelegate::setEditorData(editor, index);
}

void PropertyEditorItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (index.column() == 1 && index.isValid()) {
        QVariant variant = index.data(Qt::DisplayRole);
        if (variant.isValid() && variant.type() == QVariant::Bool) {
            bool checked = variant.toBool();
            QStyleOptionButton opt;
            opt.state = QStyle::State_Enabled;
            opt.state |= (checked) ? QStyle::State_On:QStyle::State_Off;
            opt.direction = QApplication::layoutDirection();
            opt.rect = option.rect;
            QApplication::style()->drawControl(QStyle::CE_CheckBox, &opt, painter);
        }
        else
            QStyledItemDelegate::paint(painter, option, index);
    }
    else
        QStyledItemDelegate::paint(painter, option, index);
}

void PropertyEditorItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (QMetaProperty *metaProperty = qvariant_cast<QMetaProperty *>(index.data(Qt::UserRole))) {
        if (metaProperty->type() == QVariant::Bool || metaProperty->isEnumType()) {
            PropertyEditor *propertyEditor = qobject_cast<PropertyEditor *>(editor);
            model->setData(index, propertyEditor->value(), Qt::DisplayRole);
        }
        else if (metaProperty->type() == QVariant::String) {
            QLineEdit *lineEdit = qobject_cast<QLineEdit *>(editor);
            model->setData(index, lineEdit->text(), Qt::DisplayRole);
        }
        else if (QString::fromLatin1(metaProperty->typeName()).endsWith('*')) {
            PropertyEditor *propertyEditor = qobject_cast<PropertyEditor *>(editor);
            QComboBox *comboBox = qobject_cast<QComboBox *>(propertyEditor->widget());
            model->setData(index, comboBox->itemData(comboBox->currentIndex(), Qt::UserRole), Qt::DisplayRole);
        }
        else
            QStyledItemDelegate::setModelData(editor, model, index);
    }
    else
        QStyledItemDelegate::setModelData(editor, model, index);
}

bool PropertyEditorItemDelegate::eventFilter(QObject *object, QEvent *event)
{
    if (event->type() == QEvent::FocusOut)
        return false;
    else
        return QStyledItemDelegate::eventFilter(object, event);
}

//#include "moc_propertyeditoritemdelegate_p.cpp"

QT_END_NAMESPACE
