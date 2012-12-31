#include "propertyeditoritemdelegate.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>

#include <QtGui/QPainter>

#include <QtWrappedObjects/QWrappedObject>
#include <QtWrappedObjects/QMetaPropertyInfo>

#include <QtCore/QDebug>

#include "propertyeditor.h"

using namespace QtWrappedObjects;

PropertyEditorItemDelegate::PropertyEditorItemDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{
}

PropertyEditorItemDelegate::~PropertyEditorItemDelegate()
{
}

QWidget *PropertyEditorItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (index.data(Qt::UserRole).canConvert<QMetaPropertyInfo *>()) {
        QMetaPropertyInfo *metaPropertyInfo = qvariant_cast<QMetaPropertyInfo *>(index.data(Qt::UserRole));
        QMetaProperty metaProperty = metaPropertyInfo->metaProperty;

        if (metaProperty.type() == QVariant::Bool) {
            PropertyEditor *propertyEditor = new PropertyEditor(new QCheckBox, metaProperty.isResettable(), parent);
            connect(propertyEditor, &PropertyEditor::valueChanged, this, &PropertyEditorItemDelegate::editorChanged);
            connect(propertyEditor, &PropertyEditor::resetRequired, [=](){ metaProperty.reset(metaPropertyInfo->propertyWrappedObject); propertyEditor->setValue(metaProperty.read(metaPropertyInfo->propertyWrappedObject).toInt()); });
            return propertyEditor;
        }
        if (metaProperty.isEnumType()) {
            QComboBox *comboBox = new QComboBox(parent);
            QMetaEnum metaEnum = metaProperty.enumerator();
            int keyCount = metaEnum.keyCount();
            for (int j = 0; j < keyCount; ++j)
                comboBox->addItem(QString(metaEnum.key(j)).toLower().remove(QString(metaProperty.name())));
            comboBox->setMaximumHeight(22);
            PropertyEditor *propertyEditor = new PropertyEditor(comboBox, metaProperty.isResettable(), parent);
            connect(propertyEditor, &PropertyEditor::valueChanged, this, &PropertyEditorItemDelegate::editorChanged);
            connect(propertyEditor, &PropertyEditor::resetRequired, [=](){ metaProperty.reset(metaPropertyInfo->propertyWrappedObject); propertyEditor->setValue(metaProperty.read(metaPropertyInfo->propertyWrappedObject).toInt()); });
            return propertyEditor;
        }
        return QStyledItemDelegate::createEditor(parent, option, index);
    }
    return QStyledItemDelegate::createEditor(parent, option, index);
}

void PropertyEditorItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if (index.data(Qt::UserRole).canConvert<QMetaPropertyInfo *>()) {
        QMetaPropertyInfo *metaPropertyInfo = qvariant_cast<QMetaPropertyInfo *>(index.data(Qt::UserRole));
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
        else QStyledItemDelegate::paint(painter, option, index);
    }
    else
        QStyledItemDelegate::paint(painter, option, index);
}

void PropertyEditorItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (index.data(Qt::UserRole).canConvert<QMetaPropertyInfo *>()) {
        QMetaPropertyInfo *metaPropertyInfo = qvariant_cast<QMetaPropertyInfo *>(index.data(Qt::UserRole));
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

void PropertyEditorItemDelegate::editorChanged()
{
    QWidget *editor = qobject_cast<QWidget *>(sender());
    if (editor)
        emit commitData(editor);
}
