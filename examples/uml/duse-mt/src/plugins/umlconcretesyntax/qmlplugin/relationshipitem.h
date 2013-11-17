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

    Q_PROPERTY(QQuickRectangle * end1 READ end1 WRITE setEnd1)
    Q_PROPERTY(QQuickRectangle * end2 READ end2 WRITE setEnd2)
    Q_PROPERTY(QString end1Aggregation READ end1Aggregation WRITE setEnd1Aggregation)
    Q_PROPERTY(QString end2Aggregation READ end2Aggregation WRITE setEnd2Aggregation)

public:
    RelationshipItem(QQuickItem *parent = 0);

    void paint(QPainter *painter);

    QQuickRectangle *end1() const;
    void setEnd1(QQuickRectangle *end1);

    QQuickRectangle *end2() const;
    void setEnd2(QQuickRectangle *end2);

    QString end1Aggregation() const;
    void setEnd1Aggregation(QString end1Aggregation);

    QString end2Aggregation() const;
    void setEnd2Aggregation(QString end2Aggregation);

private Q_SLOTS:
    void updateCoordinates();

private:
    QQuickRectangle *_end1;
    QQuickRectangle *_end2;
    QString _end1Aggregation;
    QString _end2Aggregation;
};

#endif // RELATIONSHIPITEM_H

