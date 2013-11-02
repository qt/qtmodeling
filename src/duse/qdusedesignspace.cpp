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
#include "qdusedesignspace.h"

#include "private/qdusedesignspaceobject_p.h"

#include <QtDuse/QDuseDesignDimension>
#include <QtDuse/QDuseQualityMetric>

QT_BEGIN_NAMESPACE

/*!
    \class QDuseDesignSpace

    \inmodule QtDuse

    \brief A design space entails the design dimensions (degrees of freedom) and quality metrics for a particular application domain.
 */
QDuseDesignSpace::QDuseDesignSpace(bool createQModelingObject)
{
    if (createQModelingObject)
        _qModelingObject = qobject_cast<QModelingObject *>(new QDuseDesignSpaceObject(this));
}

QModelingElement *QDuseDesignSpace::clone() const
{
    QDuseDesignSpace *c = new QDuseDesignSpace;
    c->setName(name());
    foreach (QDuseDesignDimension *element, designDimensions())
        c->addDesignDimension(dynamic_cast<QDuseDesignDimension *>(element->clone()));
    foreach (QDuseQualityMetric *element, qualityMetrics())
        c->addQualityMetric(dynamic_cast<QDuseQualityMetric *>(element->clone()));
    return c;
}

// OWNED ATTRIBUTES

/*!
    The design space's name.
 */
QString QDuseDesignSpace::name() const
{
    // This is a read-write property

    return _name;
}

void QDuseDesignSpace::setName(QString name)
{
    // This is a read-write property

    if (_name != name) {
        _name = name;
    }
}

/*!
    The design dimensions (degrees of freedom) of the design space.
 */
const QList<QDuseDesignDimension *> QDuseDesignSpace::designDimensions() const
{
    // This is a read-write property

    return _designDimensions;
}

void QDuseDesignSpace::addDesignDimension(QDuseDesignDimension *designDimension)
{
    // This is a read-write property

    if (!_designDimensions.contains(designDimension)) {
        _designDimensions.append(designDimension);
        if (designDimension && designDimension->asQModelingObject() && this->asQModelingObject())
            QObject::connect(designDimension->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeDesignDimension(QObject *)));
        designDimension->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

void QDuseDesignSpace::removeDesignDimension(QDuseDesignDimension *designDimension)
{
    // This is a read-write property

    if (_designDimensions.contains(designDimension)) {
        _designDimensions.removeAll(designDimension);
        if (designDimension->asQModelingObject())
            designDimension->asQModelingObject()->setParent(0);
    }
}

/*!
    The quality metrics defined for the design space.
 */
const QSet<QDuseQualityMetric *> QDuseDesignSpace::qualityMetrics() const
{
    // This is a read-write property

    return _qualityMetrics;
}

void QDuseDesignSpace::addQualityMetric(QDuseQualityMetric *qualityMetric)
{
    // This is a read-write property

    if (!_qualityMetrics.contains(qualityMetric)) {
        _qualityMetrics.insert(qualityMetric);
        if (qualityMetric && qualityMetric->asQModelingObject() && this->asQModelingObject())
            QObject::connect(qualityMetric->asQModelingObject(), SIGNAL(destroyed(QObject*)), this->asQModelingObject(), SLOT(removeQualityMetric(QObject *)));
        qualityMetric->asQModelingObject()->setParent(this->asQModelingObject());
    }
}

void QDuseDesignSpace::removeQualityMetric(QDuseQualityMetric *qualityMetric)
{
    // This is a read-write property

    if (_qualityMetrics.contains(qualityMetric)) {
        _qualityMetrics.remove(qualityMetric);
        if (qualityMetric->asQModelingObject())
            qualityMetric->asQModelingObject()->setParent(0);
    }
}

QT_END_NAMESPACE

