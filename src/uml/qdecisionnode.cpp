/****************************************************************************
**
** Copyright (C) 2012 Sandro S. Andrade <sandroandrade@kde.org>
** Contact: http://www.qt-project.org/
**
** This file is part of the QtUml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qdecisionnode.h"
#include "qdecisionnode_p.h"

#include <QtUml/QBehavior>
#include <QtUml/QObjectFlow>

QT_BEGIN_NAMESPACE_QTUML

QDecisionNodePrivate::QDecisionNodePrivate() :
    decisionInputFlow(0),
    decisionInput(0)
{
}

QDecisionNodePrivate::~QDecisionNodePrivate()
{
}
  
void QDecisionNodePrivate::setDecisionInputFlow(const QObjectFlow *decisionInputFlow) 
{  
    this->decisionInputFlow = const_cast<QObjectFlow *>(decisionInputFlow);   
}
  
void QDecisionNodePrivate::setDecisionInput(const QBehavior *decisionInput) 
{  
    this->decisionInput = const_cast<QBehavior *>(decisionInput);   
}

/*!
    \class QDecisionNode

    \inmodule QtUml

    \brief A decision node is a control node that chooses between outgoing flows.
 */

QDecisionNode::QDecisionNode(QObject *parent)
    : QObject(parent)
{
    d_umlptr = new QDecisionNodePrivate;
}

QDecisionNode::QDecisionNode(bool createPimpl, QObject *parent)
    : QObject(parent)
{
    if (createPimpl)
        d_umlptr = new QDecisionNodePrivate;
}

QDecisionNode::~QDecisionNode()
{
}

/*!
    An additional edge incoming to the decision node that provides a decision input value.
 */
QObjectFlow *QDecisionNode::decisionInputFlow() const
{
    Q_D(const QDecisionNode);
    return d->decisionInputFlow;
}

void QDecisionNode::setDecisionInputFlow(const QObjectFlow *decisionInputFlow)
{
    Q_D(QDecisionNode);
    d->setDecisionInputFlow(const_cast<QObjectFlow *>(decisionInputFlow));
}

/*!
    Provides input to guard specifications on edges outgoing from the decision node.
 */
QBehavior *QDecisionNode::decisionInput() const
{
    Q_D(const QDecisionNode);
    return d->decisionInput;
}

void QDecisionNode::setDecisionInput(const QBehavior *decisionInput)
{
    Q_D(QDecisionNode);
    d->setDecisionInput(const_cast<QBehavior *>(decisionInput));
}

#include "moc_qdecisionnode.cpp"

QT_END_NAMESPACE_QTUML

