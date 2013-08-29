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
#include "qumlactivityedge.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlActivityEdge::QUmlActivityEdge(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlActivity *QUmlActivityEdge::activity() const
{
    return reinterpret_cast<QUmlActivity *>(_activity);
}

void QUmlActivityEdge::setActivity(QUmlActivity *activity)
{
    UmlActivityEdge::setActivity(activity);
}

QUmlValueSpecification *QUmlActivityEdge::guard() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_guard);
}

void QUmlActivityEdge::setGuard(QUmlValueSpecification *guard)
{
    UmlActivityEdge::setGuard(guard);
}

const QSet<QUmlActivityGroup *> QUmlActivityEdge::inGroup() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityGroup *> *>(&_inGroup));
}

const QSet<QUmlActivityPartition *> QUmlActivityEdge::inPartition() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityPartition *> *>(&_inPartition));
}

void QUmlActivityEdge::addInPartition(UmlActivityPartition *inPartition)
{
    UmlActivityEdge::addInPartition(inPartition);
}

void QUmlActivityEdge::removeInPartition(UmlActivityPartition *inPartition)
{
    UmlActivityEdge::removeInPartition(inPartition);
}

QUmlStructuredActivityNode *QUmlActivityEdge::inStructuredNode() const
{
    return reinterpret_cast<QUmlStructuredActivityNode *>(_inStructuredNode);
}

void QUmlActivityEdge::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    UmlActivityEdge::setInStructuredNode(inStructuredNode);
}

QUmlInterruptibleActivityRegion *QUmlActivityEdge::interrupts() const
{
    return reinterpret_cast<QUmlInterruptibleActivityRegion *>(_interrupts);
}

void QUmlActivityEdge::setInterrupts(QUmlInterruptibleActivityRegion *interrupts)
{
    UmlActivityEdge::setInterrupts(interrupts);
}

const QSet<QUmlActivityEdge *> QUmlActivityEdge::redefinedEdge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_redefinedEdge));
}

void QUmlActivityEdge::addRedefinedEdge(UmlActivityEdge *redefinedEdge)
{
    UmlActivityEdge::addRedefinedEdge(redefinedEdge);
}

void QUmlActivityEdge::removeRedefinedEdge(UmlActivityEdge *redefinedEdge)
{
    UmlActivityEdge::removeRedefinedEdge(redefinedEdge);
}

QUmlActivityNode *QUmlActivityEdge::source() const
{
    return reinterpret_cast<QUmlActivityNode *>(_source);
}

void QUmlActivityEdge::setSource(QUmlActivityNode *source)
{
    UmlActivityEdge::setSource(source);
}

QUmlActivityNode *QUmlActivityEdge::target() const
{
    return reinterpret_cast<QUmlActivityNode *>(_target);
}

void QUmlActivityEdge::setTarget(QUmlActivityNode *target)
{
    UmlActivityEdge::setTarget(target);
}

QUmlValueSpecification *QUmlActivityEdge::weight() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_weight);
}

void QUmlActivityEdge::setWeight(QUmlValueSpecification *weight)
{
    UmlActivityEdge::setWeight(weight);
}

QT_END_NAMESPACE

