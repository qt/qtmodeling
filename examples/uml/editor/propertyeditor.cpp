#include "propertyeditor.h"

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCheckBox>

PropertyEditor::PropertyEditor(QWidget *widget, bool resettable, QWidget *parent) :
    QWidget(parent), _widget(widget)
{
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setMargin(0);
    layout->setSpacing(0);
    layout->addWidget(_widget);
    if (widget && resettable) {
        QToolButton *toolButton = new QToolButton;
        toolButton->setIcon(QPixmap(":/icons/resetproperty.png"));
        toolButton->setMaximumSize(22, 22);
        layout->addWidget(toolButton);
    }
    setLayout(layout);
    if (QComboBox *comboBox = qobject_cast<QComboBox *>(_widget))
        connect(comboBox, SIGNAL(currentIndexChanged(int)), SIGNAL(intValueChanged(int)));
    if (QCheckBox *checkBox = qobject_cast<QCheckBox *>(_widget))
        connect(checkBox, SIGNAL(stateChanged(int)), SIGNAL(intValueChanged(int)));
}

int PropertyEditor::intValue() const
{
    if (QComboBox *comboBox = qobject_cast<QComboBox *>(_widget))
        return comboBox->currentIndex();
    if (QCheckBox *checkBox = qobject_cast<QCheckBox *>(_widget))
        return checkBox->isChecked() ? 1:0;
    return -1;
}

void PropertyEditor::setIntValue(int value)
{
    if (QComboBox *comboBox = qobject_cast<QComboBox *>(_widget)) {
        if (comboBox->currentIndex() != value) {
            comboBox->setCurrentIndex(value);
            emit intValueChanged(value);
        }
    }
    if (QCheckBox *checkBox = qobject_cast<QCheckBox *>(_widget)) {
        if (checkBox->isChecked() != (value == 0 ? false:true)) {
            checkBox->setChecked(value == 0 ? false:true);
            emit intValueChanged(value);
        }
    }
}
