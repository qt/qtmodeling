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
#ifndef PROPERTYEDITOR_H
#define PROPERTYEDITOR_H

#include <QtWrappedObjectsWidgets/QtWrappedObjectsWidgetsGlobal>
#include <QtWidgets/QAbstractItemDelegate>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

class QMetaPropertyInfo;

QT_MODULE(QtWrappedObjectsWidgets)

class Q_WRAPPEDOBJECTSWIDGETS_EXPORT PropertyEditor : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(int value READ value WRITE setValue USER true)

public:
    explicit PropertyEditor(QWidget *widget, QMetaPropertyInfo *metaPropertyInfo, QWidget *parent = 0);

    int value() const;

public Q_SLOTS:
    void setValue(int value);

Q_SIGNALS:
    void commitData(QWidget *editor);
    void closeEditor(QWidget *editor, QAbstractItemDelegate::EndEditHint hint = QAbstractItemDelegate::NoHint);

private Q_SLOTS:
    void resetClicked();

private:
    QWidget *_widget;
    QMetaPropertyInfo *_metaPropertyInfo;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // PROPERTYEDITOR_H
