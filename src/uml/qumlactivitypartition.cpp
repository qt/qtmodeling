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
#include "qumlactivitypartition.h"

#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlElement>

QT_BEGIN_NAMESPACE

QUmlActivityPartition::QUmlActivityPartition(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

const QSet<QUmlActivityEdge *> QUmlActivityPartition::edge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_edge));
}

void QUmlActivityPartition::addEdge(UmlActivityEdge *edge)
{
    UmlActivityPartition::addEdge(edge);
}

void QUmlActivityPartition::removeEdge(UmlActivityEdge *edge)
{
    UmlActivityPartition::removeEdge(edge);
}

bool QUmlActivityPartition::isDimension() const
{
    return _isDimension;
}

void QUmlActivityPartition::setDimension(bool isDimension)
{
    UmlActivityPartition::setDimension(isDimension);
}

bool QUmlActivityPartition::isExternal() const
{
    return _isExternal;
}

void QUmlActivityPartition::setExternal(bool isExternal)
{
    UmlActivityPartition::setExternal(isExternal);
}

const QSet<QUmlActivityNode *> QUmlActivityPartition::node() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityNode *> *>(&_node));
}

void QUmlActivityPartition::addNode(UmlActivityNode *node)
{
    UmlActivityPartition::addNode(node);
}

void QUmlActivityPartition::removeNode(UmlActivityNode *node)
{
    UmlActivityPartition::removeNode(node);
}

QUmlElement *QUmlActivityPartition::represents() const
{
    return reinterpret_cast<QUmlElement *>(_represents);
}

void QUmlActivityPartition::setRepresents(QUmlElement *represents)
{
    UmlActivityPartition::setRepresents(represents);
}

const QSet<QUmlActivityPartition *> QUmlActivityPartition::subpartition() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityPartition *> *>(&_subpartition));
}

void QUmlActivityPartition::addSubpartition(UmlActivityPartition *subpartition)
{
    UmlActivityPartition::addSubpartition(subpartition);
}

void QUmlActivityPartition::removeSubpartition(UmlActivityPartition *subpartition)
{
    UmlActivityPartition::removeSubpartition(subpartition);
}

QUmlActivityPartition *QUmlActivityPartition::superPartition() const
{
    return reinterpret_cast<QUmlActivityPartition *>(_superPartition);
}

void QUmlActivityPartition::setSuperPartition(QUmlActivityPartition *superPartition)
{
    UmlActivityPartition::setSuperPartition(superPartition);
}

QT_END_NAMESPACE

