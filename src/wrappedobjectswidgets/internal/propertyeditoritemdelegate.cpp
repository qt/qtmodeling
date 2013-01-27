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
#include "propertyeditoritemdelegate_p.h"

#include <QtWidgets/QLineEdit>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QApplication>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>

#include "propertyeditor_p.h"

QT_BEGIN_NAMESPACE

PropertyEditorItemDelegate::PropertyEditorItemDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{
}

QWidget *PropertyEditorItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (QMetaPropertyInfo *metaPropertyInfo = qvariant_cast<QMetaPropertyInfo *>(index.data(Qt::UserRole))) {
        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;

        if (metaProperty.type() == QVariant::Bool || metaProperty.isEnumType()) {
            QWidget *widget = 0;
            if (metaProperty.type() == QVariant::Bool) {
                widget = new QCheckBox;
            }
            else if (metaProperty.isEnumType()) {
                QComboBox *comboBox = new QComboBox(parent);
                QMetaEnum metaEnum = metaProperty.enumerator();
                int keyCount = metaEnum.keyCount();
                for (int j = 0; j < keyCount; ++j)
                    comboBox->addItem(QString::fromLatin1((metaEnum.key(j))).toLower().remove(QString::fromLatin1((metaProperty.name()))));
                comboBox->setMaximumHeight(22);
                widget = comboBox;
            }
            PropertyEditor *propertyEditor = new PropertyEditor(widget, metaPropertyInfo, parent);
            connect(propertyEditor, &PropertyEditor::commitData, this, &PropertyEditorItemDelegate::commitData);
            connect(propertyEditor, &PropertyEditor::closeEditor, this, &PropertyEditorItemDelegate::closeEditor);
            return propertyEditor;
        }
        else if (metaProperty.type() == QVariant::String)
            return QStyledItemDelegate::createEditor(parent, option, index);
        else return 0;
    }
    return QStyledItemDelegate::createEditor(parent, option, index);
}

void PropertyEditorItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if (QMetaPropertyInfo *metaPropertyInfo = qvariant_cast<QMetaPropertyInfo *>(index.data(Qt::UserRole))) {
        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
        PropertyEditor *propertyEditor = qobject_cast<PropertyEditor *>(editor);
        if (metaProperty.type() == QVariant::Bool)
            propertyEditor->setValue(metaProperty.read(metaPropertyInfo->propertyWrappedObject).toBool() == true ? 1:0);
        else if (metaProperty.isEnumType())
            propertyEditor->setValue(metaProperty.read(metaPropertyInfo->propertyWrappedObject).toInt());
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
    if (QMetaPropertyInfo *metaPropertyInfo = qvariant_cast<QMetaPropertyInfo *>(index.data(Qt::UserRole))) {
        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;
        if (metaProperty.type() == QVariant::Bool || metaProperty.isEnumType()) {
            PropertyEditor *propertyEditor = qobject_cast<PropertyEditor *>(editor);
            model->setData(index, propertyEditor->value(), Qt::DisplayRole);
        }
        else if (metaProperty.type() == QVariant::String) {
            QLineEdit *lineEdit = qobject_cast<QLineEdit *>(editor);
            model->setData(index, lineEdit->text(), Qt::DisplayRole);
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

#include "moc_propertyeditoritemdelegate_p.cpp"

QT_END_NAMESPACE
