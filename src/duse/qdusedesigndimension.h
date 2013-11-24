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
#ifndef QDUSEDESIGNDIMENSION_H
#define QDUSEDESIGNDIMENSION_H

#include <QtDuse/QtDuseGlobal>

#include <QtModeling/QModelingElement>

QT_BEGIN_NAMESPACE

QT_MODULE(QtDuse)

class QDuseDesignDimensionInstance;
class QDuseVariationPoint;
class QUmlOpaqueExpression;

class Q_DUSE_EXPORT QDuseDesignDimension : public QModelingElement
{
public:
    explicit QDuseDesignDimension(bool createQModelingObject = true);

    virtual QModelingElement *clone() const;

    // Owned attributes
    QString name() const;
    void setName(QString name);
    QUmlOpaqueExpression *instanceSelectionRule() const;
    void setInstanceSelectionRule(QUmlOpaqueExpression *instanceSelectionRule);
    const QSet<QDuseDesignDimension *> requiredPreviousEvaluations() const;
    void addRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation);
    void removeRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation);
    const QList<QDuseVariationPoint *> variationPoints() const;
    void addVariationPoint(QDuseVariationPoint *variationPoint);
    void removeVariationPoint(QDuseVariationPoint *variationPoint);
    const QSet<QDuseDesignDimensionInstance *> designDimensionInstances() const;
    void addDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance);
    void removeDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance);
    bool enabled() const;
    void setEnabled(bool enabled);

protected:
    QString _name;
    QUmlOpaqueExpression *_instanceSelectionRule;
    QSet<QDuseDesignDimension *> _requiredPreviousEvaluations;
    QList<QDuseVariationPoint *> _variationPoints;
    QSet<QDuseDesignDimensionInstance *> _designDimensionInstances;
    bool _enabled;
};

QT_END_NAMESPACE

Q_DECLARE_METATYPE(QT_PREPEND_NAMESPACE(QDuseDesignDimension) *)

#endif // QDUSEDESIGNDIMENSION_H

