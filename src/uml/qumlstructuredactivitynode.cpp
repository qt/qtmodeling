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
#include "qumlstructuredactivitynode.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlStructuredActivityNode::QUmlStructuredActivityNode(QObject *parent) :
    QObject(parent)
{
}

// Owned attributes

QUmlActivity *QUmlStructuredActivityNode::activity() const
{
    return reinterpret_cast<QUmlActivity *>(_activity);
}

void QUmlStructuredActivityNode::setActivity(QUmlActivity *activity)
{
    UmlStructuredActivityNode::setActivity(activity);
}

const QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::edge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_edge));
}

void QUmlStructuredActivityNode::addEdge(UmlActivityEdge *edge)
{
    UmlStructuredActivityNode::addEdge(edge);
}

void QUmlStructuredActivityNode::removeEdge(UmlActivityEdge *edge)
{
    UmlStructuredActivityNode::removeEdge(edge);
}

bool QUmlStructuredActivityNode::mustIsolate() const
{
    return _mustIsolate;
}

void QUmlStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    UmlStructuredActivityNode::setMustIsolate(mustIsolate);
}

const QSet<QUmlActivityNode *> QUmlStructuredActivityNode::node() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityNode *> *>(&_node));
}

void QUmlStructuredActivityNode::addNode(UmlActivityNode *node)
{
    UmlStructuredActivityNode::addNode(node);
}

void QUmlStructuredActivityNode::removeNode(UmlActivityNode *node)
{
    UmlStructuredActivityNode::removeNode(node);
}

const QSet<QUmlInputPin *> QUmlStructuredActivityNode::structuredNodeInput() const
{
    return *(reinterpret_cast<const QSet<QUmlInputPin *> *>(&_structuredNodeInput));
}

void QUmlStructuredActivityNode::addStructuredNodeInput(UmlInputPin *structuredNodeInput)
{
    UmlStructuredActivityNode::addStructuredNodeInput(structuredNodeInput);
}

void QUmlStructuredActivityNode::removeStructuredNodeInput(UmlInputPin *structuredNodeInput)
{
    UmlStructuredActivityNode::removeStructuredNodeInput(structuredNodeInput);
}

const QSet<QUmlOutputPin *> QUmlStructuredActivityNode::structuredNodeOutput() const
{
    return *(reinterpret_cast<const QSet<QUmlOutputPin *> *>(&_structuredNodeOutput));
}

void QUmlStructuredActivityNode::addStructuredNodeOutput(UmlOutputPin *structuredNodeOutput)
{
    UmlStructuredActivityNode::addStructuredNodeOutput(structuredNodeOutput);
}

void QUmlStructuredActivityNode::removeStructuredNodeOutput(UmlOutputPin *structuredNodeOutput)
{
    UmlStructuredActivityNode::removeStructuredNodeOutput(structuredNodeOutput);
}

const QSet<QUmlVariable *> QUmlStructuredActivityNode::variable() const
{
    return *(reinterpret_cast<const QSet<QUmlVariable *> *>(&_variable));
}

void QUmlStructuredActivityNode::addVariable(UmlVariable *variable)
{
    UmlStructuredActivityNode::addVariable(variable);
}

void QUmlStructuredActivityNode::removeVariable(UmlVariable *variable)
{
    UmlStructuredActivityNode::removeVariable(variable);
}

QT_END_NAMESPACE

