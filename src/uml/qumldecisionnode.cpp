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
#include "qumldecisionnode.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlObjectFlow>

QT_BEGIN_NAMESPACE

/*!
    \class QUmlDecisionNode

    \inmodule QtUml

    \brief A decision node is a control node that chooses between outgoing flows.
 */

QUmlDecisionNode::QUmlDecisionNode() :
    _decisionInput(0),
    _decisionInputFlow(0)
{
    d_ptr->object.setProperty("decisionInput", QVariant::fromValue((QUmlBehavior *)(0)));
    d_ptr->object.setProperty("decisionInputFlow", QVariant::fromValue((QUmlObjectFlow *)(0)));
}

// OWNED ATTRIBUTES

/*!
    Provides input to guard specifications on edges outgoing from the decision node.
 */
QUmlBehavior *QUmlDecisionNode::decisionInput() const
{
    // This is a read-write association end

    return _decisionInput;
}

void QUmlDecisionNode::setDecisionInput(QUmlBehavior *decisionInput)
{
    // This is a read-write association end

    if (_decisionInput != decisionInput) {
        _decisionInput = decisionInput;
    }
}

/*!
    An additional edge incoming to the decision node that provides a decision input value.
 */
QUmlObjectFlow *QUmlDecisionNode::decisionInputFlow() const
{
    // This is a read-write association end

    return _decisionInputFlow;
}

void QUmlDecisionNode::setDecisionInputFlow(QUmlObjectFlow *decisionInputFlow)
{
    // This is a read-write association end

    if (_decisionInputFlow != decisionInputFlow) {
        _decisionInputFlow = decisionInputFlow;
    }
}

QT_END_NAMESPACE

