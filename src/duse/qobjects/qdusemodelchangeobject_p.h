/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtDuse module of the Qt Toolkit.
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
#ifndef QDUSEMODELCHANGEOBJECT_H
#define QDUSEMODELCHANGEOBJECT_H

#include <QtDuse/QtDuseGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_NAMESPACE

QT_MODULE(QtDuse)

class QDuseModelChange;
class QModelingObjectPrivate;
class Q_DUSE_EXPORT QDuseModelChangeObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QDuseModelChangeObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [ModelChange]
    Q_PROPERTY(QObject * targetSelectionRule READ targetSelectionRule WRITE setTargetSelectionRule NOTIFY targetSelectionRuleChanged)
    Q_PROPERTY(QObject * valueSelectionRule READ valueSelectionRule WRITE setValueSelectionRule NOTIFY valueSelectionRuleChanged)
    Q_PROPERTY(QObject * targetProperty READ targetProperty WRITE setTargetProperty NOTIFY targetPropertyChanged)

public:
    Q_INVOKABLE explicit QDuseModelChangeObject(QDuseModelChange *modelingElement);

    // Owned attributes [ModelChange]
    Q_INVOKABLE QObject *targetSelectionRule() const;
    Q_INVOKABLE QObject *valueSelectionRule() const;
    Q_INVOKABLE QObject *targetProperty() const;

public Q_SLOTS:

    // Slots for owned attributes [ModelChange]
    void setTargetSelectionRule(QObject *targetSelectionRule = 0);
    void setValueSelectionRule(QObject *valueSelectionRule = 0);
    void setTargetProperty(QObject *targetProperty = 0);

Q_SIGNALS:

    // Signals for owned attributes [ModelChange]
    void targetSelectionRuleChanged(QObject *targetSelectionRule);
    void valueSelectionRuleChanged(QObject *valueSelectionRule);
    void targetPropertyChanged(QObject *targetProperty);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

#endif // QDUSEMODELCHANGEOBJECT_H

