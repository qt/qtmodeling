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
#ifndef QDUSEVARIATIONPOINTOBJECT_H
#define QDUSEVARIATIONPOINTOBJECT_H

#include <QtDuse/QtDuseGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtDuse)

class QDuseVariationPoint;
class QModelingObjectPrivate;
class Q_DUSE_EXPORT QDuseVariationPointObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QDuseVariationPointObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [VariationPoint]
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString rationale READ rationale WRITE setRationale NOTIFY rationaleChanged)
    Q_PROPERTY(QObject * preChangeValidationRule READ preChangeValidationRule WRITE setPreChangeValidationRule NOTIFY preChangeValidationRuleChanged)
    Q_PROPERTY(QList<QObject *> modelChanges READ modelChanges NOTIFY modelChangesChanged)
    Q_PROPERTY(QList<QObject *> addedElements READ addedElements NOTIFY addedElementsChanged)

public:
    Q_INVOKABLE explicit QDuseVariationPointObject(QDuseVariationPoint *modelingElement);

    // Owned attributes [VariationPoint]
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE QString rationale() const;
    Q_INVOKABLE QObject *preChangeValidationRule() const;
    Q_INVOKABLE const QList<QObject *> modelChanges() const;
    Q_INVOKABLE const QList<QObject *> addedElements() const;

public Q_SLOTS:

    // Slots for owned attributes [VariationPoint]
    void setName(QString name);
    void setRationale(QString rationale);
    void setPreChangeValidationRule(QObject *preChangeValidationRule = 0);
    void addModelChange(QObject *modelChange);
    void removeModelChange(QObject *modelChange);
    void addAddedElement(QObject *addedElement);
    void removeAddedElement(QObject *addedElement);

Q_SIGNALS:

    // Signals for owned attributes [VariationPoint]
    void nameChanged(QString name);
    void rationaleChanged(QString rationale);
    void preChangeValidationRuleChanged(QObject *preChangeValidationRule);
    void modelChangesChanged(QList<QObject *> modelChanges);
    void addedElementsChanged(QList<QObject *> addedElements);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QDUSEVARIATIONPOINTOBJECT_H

