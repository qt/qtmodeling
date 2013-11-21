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
#ifndef QDUSEQUALITYMETRICOBJECT_H
#define QDUSEQUALITYMETRICOBJECT_H

#include <QtDuse/QtDuseGlobal>

#include <QtModeling/QModelingObject>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtDuse)

class QDuseQualityMetric;
class QModelingObjectPrivate;
class Q_DUSE_EXPORT QDuseQualityMetricObject : public QModelingObject
{
    Q_OBJECT
    Q_DISABLE_COPY(QDuseQualityMetricObject)
    Q_DECLARE_PRIVATE(QModelingObject)

    // Properties [QualityMetric]
    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(double value READ value WRITE setValue NOTIFY valueChanged)
    Q_PROPERTY(QObject * expression READ expression WRITE setExpression NOTIFY expressionChanged)

public:
    Q_INVOKABLE explicit QDuseQualityMetricObject(QDuseQualityMetric *modelingElement);

    // Owned attributes [QualityMetric]
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE double value() const;
    Q_INVOKABLE QObject *expression() const;

public Q_SLOTS:

    // Slots for owned attributes [QualityMetric]
    void setName(QString name);
    void setValue(double value);
    void setExpression(QObject *expression = 0);

Q_SIGNALS:

    // Signals for owned attributes [QualityMetric]
    void nameChanged(QString name);
    void valueChanged(double value);
    void expressionChanged(QObject *expression);

protected:
    virtual void setGroupProperties();
    virtual void setPropertyData();
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QDUSEQUALITYMETRICOBJECT_H

