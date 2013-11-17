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

#include <QtWidgets/QApplication>

#include "private/qquickrectangle_p.h"

RelationshipItem::RelationshipItem(QQuickItem *parent)
    : QQuickPaintedItem(parent),
      _source(0),
      _target(0),
      _relationshipType("association"),
      _sourceAggregation("none"),
      _targetAggregation("none")
{
    setAntialiasing(true);
}

void RelationshipItem::paint(QPainter *painter)
{
    if (!_source || !_target)
        return;

    qreal x1 = _source->x();  qreal y1 = _source->y();  qreal w1 = _source->width();  qreal h1 = _source->height();
    qreal x2 = _target->x();  qreal y2 = _target->y();  qreal w2 = _target->width();  qreal h2 = _target->height();

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
    QPolygonF arrow(QVector<QPointF>() << QPointF(-12, -8) << QPointF(0, 0) << QPointF(-12, 8));
    QTransform transform;
    transform.translate(p2.x()-x(), p2.y()-y());
    transform.rotate(-originalLine.angle());
    if (_relationshipType == "association") {
        painter->drawPolyline(transform.map(arrow));
        QFont font("Korolev");
        QFontMetrics metrics(font);
        painter->setFont(font);
        painter->drawText(p1.x()-x()+(p2.x()-x()-(p1.x()-x()))/2+10, p1.y()-y()+(p2.y()-y()-(p1.y()-y()))/2, _name);
        painter->drawText(p2.x()-x()+10, p2.y()-y()-10, _sourceMultiplicity);
        painter->drawText(p1.x()-x()+10, p1.y()-y()-10, _targetMultiplicity);
    }
    else if (_relationshipType == "generalization") {
        painter->setBrush(QBrush(Qt::white));
        painter->drawPolygon(transform.map(arrow));
    }

    if (_relationshipType == "association" && (_sourceAggregation == "composite" || _sourceAggregation == "shared")) {
        painter->setBrush(QBrush(_sourceAggregation == "composite" ? Qt::black:Qt::white));
        QPolygon diamond(QVector<QPoint>() << QPoint(0, 0) << QPoint(12, -8) << QPoint(24, 0) << QPoint(12, 8));
        QTransform transform;
        transform.translate(p1.x()-x(), p1.y()-y());
        transform.rotate(-originalLine.angle());
        painter->drawPolygon(transform.map(diamond));
    }
}

QString RelationshipItem::name() const
{
    return _name;
}

void RelationshipItem::setName(QString name)
{
    _name = name;
}

QQuickRectangle *RelationshipItem::source() const
{
    return _source;
}

void RelationshipItem::setSource(QQuickRectangle *source)
{
    if (source != _source) {
        if (_source) {
            disconnect(source, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
            disconnect(source, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
        }
        _source = source;
        if (!_target) {
            setX(_source->x());
            setY(_source->y());
        }
        else {
            updateCoordinates();
        }
        connect(source, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
        connect(source, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
    }
}

QQuickRectangle *RelationshipItem::target() const
{
    return _target;
}

void RelationshipItem::setTarget(QQuickRectangle *target)
{
    if (target != _target) {
        if (_target) {
            disconnect(target, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
            disconnect(target, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
        }
        _target = target;
        if (!_source) {
            setX(_target->x());
            setY(_target->y());
        }
        else {
            updateCoordinates();
        }
        connect(target, &QQuickRectangle::xChanged, this, &RelationshipItem::updateCoordinates);
        connect(target, &QQuickRectangle::yChanged, this, &RelationshipItem::updateCoordinates);
    }
}

QString RelationshipItem::relationshipType() const
{
    return _relationshipType;
}

void RelationshipItem::setRelationshipType(QString relationshipType)
{
    _relationshipType = relationshipType;
}

QString RelationshipItem::sourceAggregation() const
{
    return _sourceAggregation;
}

void RelationshipItem::setSourceAggregation(QString sourceAggregation)
{
    _sourceAggregation = sourceAggregation;
}

QString RelationshipItem::targetAggregation() const
{
    return _targetAggregation;
}

void RelationshipItem::setTargetAggregation(QString targetAggregation)
{
    _targetAggregation = targetAggregation;
}

QString RelationshipItem::sourceMultiplicity() const
{
    return _sourceMultiplicity;
}

void RelationshipItem::setSourceMultiplicity(QString sourceMultiplicity)
{
    _sourceMultiplicity = sourceMultiplicity;
}

QString RelationshipItem::targetMultiplicity() const
{
    return _targetMultiplicity;
}

void RelationshipItem::setTargetMultiplicity(QString targetMultiplicity)
{
    _targetMultiplicity = targetMultiplicity;
}

void RelationshipItem::updateCoordinates()
{
    QQuickRectangle *minRectX = _source->x() < _target->x() ? _source:_target;
    QQuickRectangle *minRectY = _source->y() < _target->y() ? _source:_target;
    QQuickRectangle *maxRectX = minRectX == _source ? _target:_source;
    QQuickRectangle *maxRectY = minRectY == _source ? _target:_source;
    setX(minRectX->x());
    setY(minRectY->y());
    setWidth(qMax(maxRectX->x() + maxRectX->width() - minRectX->x(), qMax(_source->width(), _target->width())));
    setHeight(qMax(maxRectY->y() + maxRectY->height() - minRectY->y(), qMax(_source->height(), _target->height())));
}

