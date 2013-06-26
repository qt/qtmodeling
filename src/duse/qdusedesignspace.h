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
#ifndef QDUSEDESIGNSPACE_H
#define QDUSEDESIGNSPACE_H

#include <QtDuse/QtDuseGlobal>

// Base class includes
#include <QtWrappedObjects/QWrappedObject>

// Qt includes
#include <QtCore/QString>
#include <QtCore/QList>
#include <QtCore/QSet>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(QtDuse)

// Forward decls for function parameters
class QDuseDesignDimension;
class QDuseQualityMetric;

class QDuseDesignSpacePrivate;

class Q_DUSE_EXPORT QDuseDesignSpace : public QWrappedObject
{
    Q_OBJECT
    Q_CLASSINFO("MetaModelPrefix", "QDuse")

    Q_PROPERTY(QList<QDuseDesignDimension *> designDimensions READ designDimensions)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QSet<QDuseQualityMetric *> qualityMetrics READ qualityMetrics)

    Q_DISABLE_COPY(QDuseDesignSpace)
    Q_DECLARE_PRIVATE(QDuseDesignSpace)

public:
    Q_INVOKABLE explicit QDuseDesignSpace(QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
    virtual ~QDuseDesignSpace();

    // Attributes from QDuseDesignSpace
    Q_INVOKABLE QList<QDuseDesignDimension *> designDimensions() const;
    Q_INVOKABLE void addDesignDimension(QDuseDesignDimension *designDimension);
    Q_INVOKABLE void removeDesignDimension(QDuseDesignDimension *designDimension);
    Q_INVOKABLE QString name() const;
    Q_INVOKABLE void setName(QString name);
    Q_INVOKABLE QSet<QDuseQualityMetric *> qualityMetrics() const;
    Q_INVOKABLE void addQualityMetric(QDuseQualityMetric *qualityMetric);
    Q_INVOKABLE void removeQualityMetric(QDuseQualityMetric *qualityMetric);

    virtual void setQmlContextProperties(QQmlContext *qmlContext);

    virtual void setPropertyData();

protected:
    explicit QDuseDesignSpace(QDuseDesignSpacePrivate &dd, QWrappedObject *wrapper = 0, QWrappedObject *parent = 0);
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QDUSEDESIGNSPACE_H
