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

// Base class includes
#include <QtWrappedObjects/QWrappedObject>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtDuse)

// Forward decls for function parameters
class QDuseDesignDimension;
class QDuseVariationPoint;
class QDuseDesignDimensionInstance;

class QDuseDesignDimensionPrivate;

class Q_DUSE_EXPORT QDuseDesignDimension : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QDuse")

    Q_PROPERTY(QString instanceSelectionRule READ instanceSelectionRule WRITE setInstanceSelectionRule)
    Q_PROPERTY(QSet<QDuseVariationPoint *> variationPoints READ variationPoints)
    Q_PROPERTY(QSet<QDuseDesignDimensionInstance *> designDimensionInstances READ designDimensionInstances)
    Q_PROPERTY(QSet<QDuseDesignDimension *> requiredPreviousEvaluations READ requiredPreviousEvaluations)
    Q_PROPERTY(QString name READ name WRITE setName)

    Q_DISABLE_COPY(QDuseDesignDimension)
    Q_DECLARE_PRIVATE(QDuseDesignDimension)

public:
    Q_INVOKABLE explicit QDuseDesignDimension(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QDuseDesignDimension();

    // Attributes from QDuseDesignDimension
    Q_INVOKABLE QString instanceSelectionRule() const;
    Q_INVOKABLE void setInstanceSelectionRule(QString instanceSelectionRule);
    Q_INVOKABLE QSet<QDuseVariationPoint *> variationPoints() const;
    Q_INVOKABLE void addVariationPoint(QDuseVariationPoint *variationPoint);
    Q_INVOKABLE void removeVariationPoint(QDuseVariationPoint *variationPoint);
    Q_INVOKABLE QSet<QDuseDesignDimensionInstance *> designDimensionInstances() const;
    Q_INVOKABLE void addDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance);
    Q_INVOKABLE void removeDesignDimensionInstance(QDuseDesignDimensionInstance *designDimensionInstance);
    Q_INVOKABLE QSet<QDuseDesignDimension *> requiredPreviousEvaluations() const;
    Q_INVOKABLE void addRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation);
    Q_INVOKABLE void removeRequiredPreviousEvaluation(QDuseDesignDimension *requiredPreviousEvaluation);
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);

    virtual void setPropertyData();

protected:
    explicit QDuseDesignDimension(QDuseDesignDimensionPrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QDUSEDESIGNDIMENSION_H

