/****************************************************************************
**
** Copyright (C) 2013 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtUml module of the Qt Toolkit.
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
#ifndef RELATIONSHIPITEM_H
#define RELATIONSHIPITEM_H

#include <QtQuick/QQuickPaintedItem>

class QQuickRectangle;

class RelationshipItem : public QQuickPaintedItem
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QQuickRectangle * source READ source WRITE setSource)
    Q_PROPERTY(QQuickRectangle * target READ target WRITE setTarget)
    Q_PROPERTY(QString relationshipType READ relationshipType WRITE setRelationshipType)
    Q_PROPERTY(QString sourceAggregation READ sourceAggregation WRITE setSourceAggregation)
    Q_PROPERTY(QString targetAggregation READ targetAggregation WRITE setTargetAggregation)
    Q_PROPERTY(QString sourceMultiplicity READ sourceMultiplicity WRITE setSourceMultiplicity)
    Q_PROPERTY(QString targetMultiplicity READ targetMultiplicity WRITE setTargetMultiplicity)

public:
    RelationshipItem(QQuickItem *parent = 0);

    void paint(QPainter *painter);

    QString name() const;
    void setName(QString name);

    QQuickRectangle *source() const;
    void setSource(QQuickRectangle *source);

    QQuickRectangle *target() const;
    void setTarget(QQuickRectangle *target);

    QString relationshipType() const;
    void setRelationshipType(QString relationshipType);

    QString sourceAggregation() const;
    void setSourceAggregation(QString sourceAggregation);

    QString targetAggregation() const;
    void setTargetAggregation(QString targetAggregation);

    QString sourceMultiplicity() const;
    void setSourceMultiplicity(QString sourceMultiplicity);

    QString targetMultiplicity() const;
    void setTargetMultiplicity(QString targetMultiplicity);

private Q_SLOTS:
    void updateCoordinates();

private:
    QString _name;
    QQuickRectangle *_source;
    QQuickRectangle *_target;
    QString _relationshipType;
    QString _sourceAggregation;
    QString _targetAggregation;
    QString _sourceMultiplicity;
    QString _targetMultiplicity;
};

#endif // RELATIONSHIPITEM_H

