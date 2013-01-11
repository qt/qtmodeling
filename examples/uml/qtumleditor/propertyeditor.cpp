#include "propertyeditor.h"

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCheckBox>

#include <QtWrappedObjects/QMetaPropertyInfo>
#include <QtWrappedObjects/QWrappedObject>

PropertyEditor::PropertyEditor(QWidget *widget, QMetaPropertyInfo *metaPropertyInfo, QWidget *parent) :
    QWidget(parent), _widget(widget), _metaPropertyInfo(metaPropertyInfo)
{
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setMargin(0);
    layout->setSpacing(0);
    layout->addWidget(_widget);
    if (widget && _metaPropertyInfo->metaProperty.isResettable()) {
        QToolButton *toolButton = new QToolButton;
        toolButton->setIcon(QPixmap(":/icons/resetproperty.png"));
        toolButton->setMaximumSize(22, 22);
        toolButton->setEnabled(_metaPropertyInfo->propertyWrappedObject->isPropertyModified(_metaPropertyInfo->metaProperty));
        connect(toolButton, &QToolButton::clicked, this, &PropertyEditor::resetClicked);
        layout->addWidget(toolButton);
    }
    setLayout(layout);
    if (QComboBox *comboBox = qobject_cast<QComboBox *>(_widget))
        connect(comboBox, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), [=](){ emit commitData(this); });
    if (QCheckBox *checkBox = qobject_cast<QCheckBox *>(_widget))
        connect(checkBox, &QCheckBox::stateChanged, [=](){ emit commitData(this); });
}

int PropertyEditor::value() const
{
    if (QComboBox *comboBox = qobject_cast<QComboBox *>(_widget))
        return comboBox->currentIndex();
    if (QCheckBox *checkBox = qobject_cast<QCheckBox *>(_widget))
        return checkBox->isChecked() ? 1:0;
    return -1;
}

void PropertyEditor::setValue(int value)
{
    if (QComboBox *comboBox = qobject_cast<QComboBox *>(_widget)) {
        if (comboBox->currentIndex() != value) {
            comboBox->setCurrentIndex(value);
            emit commitData(this);
        }
    }
    if (QCheckBox *checkBox = qobject_cast<QCheckBox *>(_widget)) {
        if (checkBox->isChecked() != (value == 0 ? false:true)) {
            checkBox->setChecked(value == 0 ? false:true);
            emit commitData(this);
        }
    }
}

void PropertyEditor::resetClicked()
{
    _metaPropertyInfo->metaProperty.reset(_metaPropertyInfo->propertyWrappedObject);
    emit closeEditor(this);
}
