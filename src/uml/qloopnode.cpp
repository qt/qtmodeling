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

#include "qloopnode.h"
#include "qloopnode_p.h"

#include <QtUml/QOutputPin>
#include <QtUml/QExecutableNode>
#include <QtUml/QInputPin>

QT_BEGIN_NAMESPACE_QTUML

QLoopNodePrivate::QLoopNodePrivate() :
    isTestedFirst(false),
    loopVariableInputs(new QList<QInputPin *>),
    decider(0),
    bodyOutputs(new QList<QOutputPin *>),
    loopVariables(new QList<QOutputPin *>),
    results(new QList<QOutputPin *>),
    setupParts(new QSet<QExecutableNode *>),
    bodyParts(new QSet<QExecutableNode *>),
    tests(new QSet<QExecutableNode *>)
{
}

QLoopNodePrivate::~QLoopNodePrivate()
{
    delete loopVariableInputs;
    delete bodyOutputs;
    delete loopVariables;
    delete results;
    delete setupParts;
    delete bodyParts;
    delete tests;
}

void QLoopNodePrivate::setTestedFirst(bool isTestedFirst)
{
    this->isTestedFirst = isTestedFirst;
}
  
void QLoopNodePrivate::addLoopVariableInput(const QInputPin *loopVariableInput) 
{   
    this->loopVariableInputs->append(const_cast<QInputPin *>(loopVariableInput));  
}
 
void QLoopNodePrivate::removeLoopVariableInput(const QInputPin *loopVariableInput) 
{    
    this->loopVariableInputs->removeAll(const_cast<QInputPin *>(loopVariableInput)); 
}
  
void QLoopNodePrivate::setDecider(const QOutputPin *decider) 
{  
    this->decider = const_cast<QOutputPin *>(decider);   
}
  
void QLoopNodePrivate::addBodyOutput(const QOutputPin *bodyOutput) 
{   
    this->bodyOutputs->append(const_cast<QOutputPin *>(bodyOutput));  
}
 
void QLoopNodePrivate::removeBodyOutput(const QOutputPin *bodyOutput) 
{    
    this->bodyOutputs->removeAll(const_cast<QOutputPin *>(bodyOutput)); 
}
  
void QLoopNodePrivate::addLoopVariable(const QOutputPin *loopVariable) 
{   
    this->loopVariables->append(const_cast<QOutputPin *>(loopVariable));  
}
 
void QLoopNodePrivate::removeLoopVariable(const QOutputPin *loopVariable) 
{    
    this->loopVariables->removeAll(const_cast<QOutputPin *>(loopVariable)); 
}
  
void QLoopNodePrivate::addResult(const QOutputPin *result) 
{   
    this->results->append(const_cast<QOutputPin *>(result));  
}
 
void QLoopNodePrivate::removeResult(const QOutputPin *result) 
{    
    this->results->removeAll(const_cast<QOutputPin *>(result)); 
}
  
void QLoopNodePrivate::addSetupPart(const QExecutableNode *setupPart) 
{   
    this->setupParts->insert(const_cast<QExecutableNode *>(setupPart));  
}
 
void QLoopNodePrivate::removeSetupPart(const QExecutableNode *setupPart) 
{    
    this->setupParts->remove(const_cast<QExecutableNode *>(setupPart)); 
}
  
void QLoopNodePrivate::addBodyPart(const QExecutableNode *bodyPart) 
{   
    this->bodyParts->insert(const_cast<QExecutableNode *>(bodyPart));  
}
 
void QLoopNodePrivate::removeBodyPart(const QExecutableNode *bodyPart) 
{    
    this->bodyParts->remove(const_cast<QExecutableNode *>(bodyPart)); 
}
  
void QLoopNodePrivate::addTest(const QExecutableNode *test) 
{   
    this->tests->insert(const_cast<QExecutableNode *>(test));  
}
 
void QLoopNodePrivate::removeTest(const QExecutableNode *test) 
{    
    this->tests->remove(const_cast<QExecutableNode *>(test)); 
}

/*!
    \class QLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */

QLoopNode::QLoopNode(QObject *parent)
    : QStructuredActivityNode(false, parent)
{
    d_umlptr = new QLoopNodePrivate;
}

QLoopNode::QLoopNode(bool createPimpl, QObject *parent)
    : QStructuredActivityNode(createPimpl, parent)
{
    if (createPimpl)
        d_umlptr = new QLoopNodePrivate;
}

QLoopNode::~QLoopNode()
{
}

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool QLoopNode::isTestedFirst() const
{
    Q_D(const QLoopNode);
    return d->isTestedFirst;
}

void QLoopNode::setTestedFirst(bool isTestedFirst)
{
    Q_D(QLoopNode);
    d->setTestedFirst(isTestedFirst);
}

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
const QList<QInputPin *> *QLoopNode::loopVariableInputs() const
{
    Q_D(const QLoopNode);
    return d->loopVariableInputs;
}

void QLoopNode::addLoopVariableInput(const QInputPin *loopVariableInput)
{
    Q_D(QLoopNode);
    d->addLoopVariableInput(const_cast<QInputPin *>(loopVariableInput));
}

void QLoopNode::removeLoopVariableInput(const QInputPin *loopVariableInput)
{
    Q_D(QLoopNode);
    d->removeLoopVariableInput(const_cast<QInputPin *>(loopVariableInput));
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QOutputPin *QLoopNode::decider() const
{
    Q_D(const QLoopNode);
    return d->decider;
}

void QLoopNode::setDecider(const QOutputPin *decider)
{
    Q_D(QLoopNode);
    d->setDecider(const_cast<QOutputPin *>(decider));
}

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
const QList<QOutputPin *> *QLoopNode::bodyOutputs() const
{
    Q_D(const QLoopNode);
    return d->bodyOutputs;
}

void QLoopNode::addBodyOutput(const QOutputPin *bodyOutput)
{
    Q_D(QLoopNode);
    d->addBodyOutput(const_cast<QOutputPin *>(bodyOutput));
}

void QLoopNode::removeBodyOutput(const QOutputPin *bodyOutput)
{
    Q_D(QLoopNode);
    d->removeBodyOutput(const_cast<QOutputPin *>(bodyOutput));
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
const QList<QOutputPin *> *QLoopNode::loopVariables() const
{
    Q_D(const QLoopNode);
    return d->loopVariables;
}

void QLoopNode::addLoopVariable(const QOutputPin *loopVariable)
{
    Q_D(QLoopNode);
    d->addLoopVariable(const_cast<QOutputPin *>(loopVariable));
}

void QLoopNode::removeLoopVariable(const QOutputPin *loopVariable)
{
    Q_D(QLoopNode);
    d->removeLoopVariable(const_cast<QOutputPin *>(loopVariable));
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
const QList<QOutputPin *> *QLoopNode::results() const
{
    Q_D(const QLoopNode);
    return d->results;
}

void QLoopNode::addResult(const QOutputPin *result)
{
    Q_D(QLoopNode);
    d->addResult(const_cast<QOutputPin *>(result));
}

void QLoopNode::removeResult(const QOutputPin *result)
{
    Q_D(QLoopNode);
    d->removeResult(const_cast<QOutputPin *>(result));
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
const QSet<QExecutableNode *> *QLoopNode::setupParts() const
{
    Q_D(const QLoopNode);
    return d->setupParts;
}

void QLoopNode::addSetupPart(const QExecutableNode *setupPart)
{
    Q_D(QLoopNode);
    d->addSetupPart(const_cast<QExecutableNode *>(setupPart));
}

void QLoopNode::removeSetupPart(const QExecutableNode *setupPart)
{
    Q_D(QLoopNode);
    d->removeSetupPart(const_cast<QExecutableNode *>(setupPart));
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
const QSet<QExecutableNode *> *QLoopNode::bodyParts() const
{
    Q_D(const QLoopNode);
    return d->bodyParts;
}

void QLoopNode::addBodyPart(const QExecutableNode *bodyPart)
{
    Q_D(QLoopNode);
    d->addBodyPart(const_cast<QExecutableNode *>(bodyPart));
}

void QLoopNode::removeBodyPart(const QExecutableNode *bodyPart)
{
    Q_D(QLoopNode);
    d->removeBodyPart(const_cast<QExecutableNode *>(bodyPart));
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
const QSet<QExecutableNode *> *QLoopNode::tests() const
{
    Q_D(const QLoopNode);
    return d->tests;
}

void QLoopNode::addTest(const QExecutableNode *test)
{
    Q_D(QLoopNode);
    d->addTest(const_cast<QExecutableNode *>(test));
}

void QLoopNode::removeTest(const QExecutableNode *test)
{
    Q_D(QLoopNode);
    d->removeTest(const_cast<QExecutableNode *>(test));
}

#include "moc_qloopnode.cpp"

QT_END_NAMESPACE_QTUML

