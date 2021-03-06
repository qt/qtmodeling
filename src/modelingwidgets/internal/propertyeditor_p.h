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
#ifndef PROPERTYEDITOR_H
#define PROPERTYEDITOR_H

#include "../qtmodelingwidgetsglobal.h"

#include <QtWidgets/QAbstractItemDelegate>

QT_BEGIN_NAMESPACE

QT_MODULE(QtWrappedObjectsWidgets)

class QModelingObject;

class Q_MODELINGWIDGETS_EXPORT PropertyEditor : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(int value READ value WRITE setValue USER true)

public:
    explicit PropertyEditor(QWidget *widget, QModelingObject *modelingObject, QMetaProperty *metaProperty, QWidget *parent = 0);

    int value() const;
    QWidget *widget() const;

public Q_SLOTS:
    void setValue(int value);

Q_SIGNALS:
    void commitData(QWidget *editor);
    void closeEditor(QWidget *editor, QAbstractItemDelegate::EndEditHint hint = QAbstractItemDelegate::NoHint);

private Q_SLOTS:
    void resetClicked();
    void currentIndexChanged();

private:
    QWidget *_widget;
    QModelingObject *_modelingObject;
    QMetaProperty *_metaProperty;
};

QT_END_NAMESPACE

#endif // PROPERTYEDITOR_H

