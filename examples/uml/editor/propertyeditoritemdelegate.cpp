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
    if (index.data(Qt::UserRole).canConvert<QMetaPropertyInfo>()) {
        QMetaPropertyInfo metaPropertyInfo = index.data(Qt::UserRole).value<QMetaPropertyInfo>();
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;

        if (metaProperty.type() == QVariant::Bool) {
            PropertyEditor *propertyEditor = new PropertyEditor(new QCheckBox, metaProperty.isResettable(), parent);
            connect(propertyEditor, SIGNAL(intValueChanged(int)), SLOT(editorChanged()));
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
            connect(propertyEditor, SIGNAL(intValueChanged(int)), SLOT(editorChanged()));
            return propertyEditor;
        }
        if (metaProperty.type() == QVariant::String) {
            QLineEdit *lineEdit = new QLineEdit;
            lineEdit->setMaximumHeight(22);
            PropertyEditor *propertyEditor = new PropertyEditor(lineEdit, metaProperty.isResettable(), parent);
            connect(propertyEditor, SIGNAL(stringValueChanged(QString)), SLOT(editorChanged()));
            return propertyEditor;
        }
        return QStyledItemDelegate::createEditor(parent, option, index);
    }
    return QStyledItemDelegate::createEditor(parent, option, index);
}

void PropertyEditorItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if (index.data(Qt::UserRole).canConvert<QMetaPropertyInfo>()) {
        QMetaPropertyInfo metaPropertyInfo = index.data(Qt::UserRole).value<QMetaPropertyInfo>();
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        PropertyEditor *propertyEditor = qobject_cast<PropertyEditor *>(editor);
        if (metaProperty.type() == QVariant::Bool)
            propertyEditor->setIntValue(metaProperty.read(metaPropertyInfo.propertyWrappedObject).toBool() == true ? 1:0);
        else if (metaProperty.isEnumType())
            propertyEditor->setIntValue(metaProperty.read(metaPropertyInfo.propertyWrappedObject).toInt());
        else if (metaProperty.type() == QVariant::String)
            propertyEditor->setStringValue(metaProperty.read(metaPropertyInfo.propertyWrappedObject).toString());
        else
            QStyledItemDelegate::setEditorData(editor, index);
    }
    else
        QStyledItemDelegate::setEditorData(editor, index);
}

void PropertyEditorItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (index.data(Qt::UserRole).canConvert<QMetaPropertyInfo>()) {
        QMetaPropertyInfo metaPropertyInfo = index.data(Qt::UserRole).value<QMetaPropertyInfo>();
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        if (metaProperty.type() == QVariant::Bool) {
            QStyleOptionButton opt;
            opt.state = QStyle::State_Enabled;
            if (metaProperty.read(metaPropertyInfo.propertyWrappedObject).toBool())
                opt.state |= QStyle::State_On;
            else
            opt.state |= QStyle::State_Off;
            opt.direction = QApplication::layoutDirection();
            opt.rect = option.rect;
            QApplication::style()->drawControl(QStyle::CE_CheckBox,&opt,painter);
        }
        else QStyledItemDelegate::paint(painter, option, index);
    }
    else
        QStyledItemDelegate::paint(painter, option, index);
}

void PropertyEditorItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (index.data(Qt::UserRole).canConvert<QMetaPropertyInfo>()) {
        QMetaPropertyInfo metaPropertyInfo = index.data(Qt::UserRole).value<QMetaPropertyInfo>();
        QMetaProperty metaProperty = metaPropertyInfo.metaProperty;
        PropertyEditor *propertyEditor = qobject_cast<PropertyEditor *>(editor);
        if (metaProperty.type() == QVariant::Bool)
            metaProperty.write(metaPropertyInfo.propertyWrappedObject, propertyEditor->intValue() == 1 ? true:false);
        else if (metaProperty.isEnumType()) {
            metaProperty.write(metaPropertyInfo.propertyWrappedObject, propertyEditor->intValue());
            QString enumKey = metaProperty.enumerator().valueToKey(propertyEditor->intValue());
            model->setData(index, enumKey.toLower().remove(metaProperty.name()), Qt::DisplayRole);
        }
        else if (metaProperty.type() == QVariant::String) {
            metaProperty.write(metaPropertyInfo.propertyWrappedObject, propertyEditor->stringValue());
            model->setData(index, propertyEditor->stringValue(), Qt::DisplayRole);
        }
        else
            QStyledItemDelegate::setModelData(editor, model, index);
    }
    else
        QStyledItemDelegate::setModelData(editor, model, index);
}

void PropertyEditorItemDelegate::editorChanged()
{
    QWidget *editor = qobject_cast<QWidget *>(sender());
    if (editor)
        emit commitData(editor);
}
