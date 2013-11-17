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
#include "relationshipitem.h"

#include <QtGui/QPainter>

#include "private/qquickrectangle_p.h"

RelationshipItem::RelationshipItem(QQuickItem *parent)
    : QQuickPaintedItem(parent),
      _end1(0),
      _end2(0)
{
    setAntialiasing(true);
}

void RelationshipItem::paint(QPainter *painter)
{
    if (!_end1 || !_end2)
        return;

    qreal x1 = _end1->x();  qreal y1 = _end1->y();  qreal w1 = _end1->width();  qreal h1 = _end1->height();
    qreal x2 = _end2->x();  qreal y2 = _end2->y();  qreal w2 = _end2->width();  qreal h2 = _end2->height();

    QLineF originalLine(x1 + w1/2, y1 + h1/2, x2 + w2/2, y2 + h2/2);
    QPointF p1, p2;

    if (originalLine.intersect(QLineF(x1     , y1     , x1 + w1, y1     ), &p1) == QLineF::BoundedIntersection) {} else
    if (originalLine.intersect(QLineF(x1     , y1 + h1, x1 + w1, y1 + h1), &p1) == QLineF::BoundedIntersection) {} else
    if (originalLine.intersect(QLineF(x1     , y1     , x1     , y1 + h1), &p1) == QLineF::BoundedIntersection) {} else
    if (originalLine.intersect(QLineF(x1 + w1, y1     , x1 + w1, y1 + h1), &p1) == QLineF::BoundedIntersection) {}

    if (originalLine.intersect(QLineF(x2     , y2     , x2 + w2, y2     ), &p2) == QLineF::BoundedIntersection) {} else
    if (originalLine.intersect(QLineF(x2     , y2 + h2, x2 + w2, y2 + h2), &p2) == QLineF::BoundedIntersection) {} else
    if (originalLine.intersect(QLineF(x2     , y2     , x2     , y2 + h2), &p2) == QLineF::BoundedIntersection) {} else
    if (originalLine.intersect(QLineF(x2 + w2, y2     , x2 + w2, y2 + h2), &p2) == QLineF::BoundedIntersection) {}

    painter->drawLine(p1.x()-x(), p1.y()-y(), p2.x()-x(), p2.y()-y());
    QPolygonF arrow(QVector<QPointF>() << QPointF(-10, -10) << QPointF(0, 0) << QPointF(-10, +10));
    QTransform transform;
    transform.translate(p2.x()-x(), p2.y()-y());
    transform.rotate(-originalLine.angle());
    painter->drawPolyline(transform.map(arrow));

    if (_end1Aggregation == "composite") {
        painter->setBrush(QBrush(Qt::black));
        QPolygon diamond(QVector<QPoint>() << QPoint(0, 0) << QPoint(10, -10) << QPoint(20, 0) << QPoint(10, 10));
        QTransform transform;
        transform.translate(p1.x()-x(), p1.y()-y());
        transform.rotate(-originalLine.angle());
        painter->drawPolygon(transform.map(diamond));
    }
}

QQuickRectangle *RelationshipItem::end1() const
{
    return _end1;
}

void RelationshipItem::setEnd1(QQuickRectangle *end1)
{
    if (end1 != _end1) {
        if (_end1) {
            disconnect(end1, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
            disconnect(end1, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
        }
        _end1 = end1;
        if (!_end2) {
            setX(_end1->x());
            setY(_end1->y());
        }
        else {
            updateCoordinates();
        }
        connect(end1, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
        connect(end1, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
    }
}

QQuickRectangle *RelationshipItem::end2() const
{
    return _end2;
}

void RelationshipItem::setEnd2(QQuickRectangle *end2)
{
    if (end2 != _end2) {
        if (_end2) {
            disconnect(end2, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
            disconnect(end2, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
        }
        _end2 = end2;
        if (!_end1) {
            setX(_end2->x());
            setY(_end2->y());
        }
        else {
            updateCoordinates();
        }
        connect(end2, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
        connect(end2, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
    }
}

QString RelationshipItem::end1Aggregation() const
{
    return _end1Aggregation;
}

void RelationshipItem::setEnd1Aggregation(QString end1Aggregation)
{
    _end1Aggregation = end1Aggregation;
}

QString RelationshipItem::end2Aggregation() const
{
    return _end2Aggregation;
}

void RelationshipItem::setEnd2Aggregation(QString end2Aggregation)
{
    _end2Aggregation = end2Aggregation;
}

void RelationshipItem::updateCoordinates()
{
    QQuickRectangle *minRectX = _end1->x() < _end2->x() ? _end1:_end2;
    QQuickRectangle *minRectY = _end1->y() < _end2->y() ? _end1:_end2;
    QQuickRectangle *maxRectX = minRectX == _end1 ? _end2:_end1;
    QQuickRectangle *maxRectY = minRectY == _end1 ? _end2:_end1;
    setX(minRectX->x());
    setY(minRectY->y());
    setWidth(qMax(maxRectX->x() + maxRectX->width() - minRectX->x(), qMax(_end1->width(), _end2->width())));
    setHeight(qMax(maxRectY->y() + maxRectY->height() - minRectY->y(), qMax(_end1->height(), _end2->height())));
}

