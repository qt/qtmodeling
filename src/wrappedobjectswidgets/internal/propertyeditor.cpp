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
#include "propertyeditor_p.h"

#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCheckBox>

#include <QtWrappedObjects/QMetaPropertyInfo>
#include <QtWrappedObjects/QWrappedObject>

QT_BEGIN_NAMESPACE

PropertyEditor::PropertyEditor(QWidget *widget, QMetaPropertyInfo *metaPropertyInfo, QWidget *parent) :
    QWidget(parent), _widget(widget), _metaPropertyInfo(metaPropertyInfo)
{
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setMargin(0);
    layout->setSpacing(0);
    layout->addWidget(_widget);
    if (widget && _metaPropertyInfo->metaProperty.isResettable()) {
        QToolButton *toolButton = new QToolButton;
        toolButton->setIcon(QPixmap(QString::fromLatin1(":/icons/resetproperty.png")));
        toolButton->setMaximumSize(22, 22);
        toolButton->setEnabled(_metaPropertyInfo->propertyWrappedObject->isPropertyModified(_metaPropertyInfo->metaProperty));
        connect(toolButton, &QToolButton::clicked, this, &PropertyEditor::resetClicked);
        layout->addWidget(toolButton);
    }
    setLayout(layout);

    if (QComboBox *comboBox = qobject_cast<QComboBox *>(_widget))
        connect(comboBox, static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged), this, &PropertyEditor::currentIndexChanged);
    if (QCheckBox *checkBox = qobject_cast<QCheckBox *>(_widget))
        connect(checkBox, &QCheckBox::stateChanged, this, &PropertyEditor::currentIndexChanged);
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

void PropertyEditor::currentIndexChanged()
{
    emit commitData(this);
}

#include "moc_propertyeditor_p.cpp"

QT_END_NAMESPACE
