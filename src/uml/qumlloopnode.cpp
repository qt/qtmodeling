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

#include "qumlloopnode.h"
#include "qumlloopnode_p.h"

#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlExecutableNode>
#include <QtUml/QUmlInputPin>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlLoopNodePrivate::QUmlLoopNodePrivate() :
    isTestedFirst(false),
    decider(0)
{
}

QUmlLoopNodePrivate::~QUmlLoopNodePrivate()
{
}

/*!
    \class QUmlLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */

QUmlLoopNode::QUmlLoopNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredActivityNode(*new QUmlLoopNodePrivate, wrapper, parent)
{
    setPropertyData();
}

QUmlLoopNode::QUmlLoopNode(QUmlLoopNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QUmlStructuredActivityNode(dd, wrapper, parent)
{
    setPropertyData();
}

QUmlLoopNode::~QUmlLoopNode()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlLoopNode
// ---------------------------------------------------------------

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool QUmlLoopNode::isTestedFirst() const
{
    // This is a read-write attribute

    Q_D(const QUmlLoopNode);
    return d->isTestedFirst;
}

void QUmlLoopNode::setTestedFirst(bool isTestedFirst)
{
    // This is a read-write attribute

    Q_D(QUmlLoopNode);
    if (d->isTestedFirst != isTestedFirst) {
        d->isTestedFirst = isTestedFirst;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isTestedFirst");
}

void QUmlLoopNode::unsetTestedFirst()
{
    setTestedFirst(false);
    Q_D(QUmlLoopNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isTestedFirst"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlLoopNode
// ---------------------------------------------------------------

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
QList<QUmlInputPin *> QUmlLoopNode::loopVariableInputs() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->loopVariableInputs;
}

void QUmlLoopNode::addLoopVariableInput(QUmlInputPin *loopVariableInput)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (!d->loopVariableInputs.contains(loopVariableInput)) {
        d->loopVariableInputs.append(loopVariableInput);
        qTopLevelWrapper(loopVariableInput)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredActivityNode *>(this))->addStructuredNodeInput(qwrappedobject_cast<QUmlInputPin *>(loopVariableInput));
    }
}

void QUmlLoopNode::removeLoopVariableInput(QUmlInputPin *loopVariableInput)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->loopVariableInputs.contains(loopVariableInput)) {
        d->loopVariableInputs.removeAll(loopVariableInput);
        qTopLevelWrapper(loopVariableInput)->setParent(0);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredActivityNode *>(this))->removeStructuredNodeInput(qwrappedobject_cast<QUmlInputPin *>(loopVariableInput));
    }
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QUmlOutputPin *QUmlLoopNode::decider() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->decider;
}

void QUmlLoopNode::setDecider(QUmlOutputPin *decider)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->decider != decider) {
        d->decider = decider;
    }
}

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
QList<QUmlOutputPin *> QUmlLoopNode::bodyOutputs() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->bodyOutputs;
}

void QUmlLoopNode::addBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (!d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.append(bodyOutput);
    }
}

void QUmlLoopNode::removeBodyOutput(QUmlOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.removeAll(bodyOutput);
    }
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
QList<QUmlOutputPin *> QUmlLoopNode::loopVariables() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->loopVariables;
}

void QUmlLoopNode::addLoopVariable(QUmlOutputPin *loopVariable)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (!d->loopVariables.contains(loopVariable)) {
        d->loopVariables.append(loopVariable);
    }
}

void QUmlLoopNode::removeLoopVariable(QUmlOutputPin *loopVariable)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->loopVariables.contains(loopVariable)) {
        d->loopVariables.removeAll(loopVariable);
    }
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
QList<QUmlOutputPin *> QUmlLoopNode::results() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->results;
}

void QUmlLoopNode::addResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (!d->results.contains(result)) {
        d->results.append(result);
        qTopLevelWrapper(result)->setParent(qTopLevelWrapper(this));

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredActivityNode *>(this))->addStructuredNodeOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

void QUmlLoopNode::removeResult(QUmlOutputPin *result)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->results.contains(result)) {
        d->results.removeAll(result);
        qTopLevelWrapper(result)->setParent(0);

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlStructuredActivityNode *>(this))->removeStructuredNodeOutput(qwrappedobject_cast<QUmlOutputPin *>(result));
    }
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
QSet<QUmlExecutableNode *> QUmlLoopNode::setupParts() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->setupParts;
}

void QUmlLoopNode::addSetupPart(QUmlExecutableNode *setupPart)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (!d->setupParts.contains(setupPart)) {
        d->setupParts.insert(setupPart);
    }
}

void QUmlLoopNode::removeSetupPart(QUmlExecutableNode *setupPart)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->setupParts.contains(setupPart)) {
        d->setupParts.remove(setupPart);
    }
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
QSet<QUmlExecutableNode *> QUmlLoopNode::bodyParts() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->bodyParts;
}

void QUmlLoopNode::addBodyPart(QUmlExecutableNode *bodyPart)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (!d->bodyParts.contains(bodyPart)) {
        d->bodyParts.insert(bodyPart);
    }
}

void QUmlLoopNode::removeBodyPart(QUmlExecutableNode *bodyPart)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->bodyParts.contains(bodyPart)) {
        d->bodyParts.remove(bodyPart);
    }
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
QSet<QUmlExecutableNode *> QUmlLoopNode::tests() const
{
    // This is a read-write association end

    Q_D(const QUmlLoopNode);
    return d->tests;
}

void QUmlLoopNode::addTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (!d->tests.contains(test)) {
        d->tests.insert(test);
    }
}

void QUmlLoopNode::removeTest(QUmlExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QUmlLoopNode);
    if (d->tests.contains(test)) {
        d->tests.remove(test);
    }
}

void QUmlLoopNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of values that are moved into the loop variable pins before the first iteration of the loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlStructuredActivityNode::structuredNodeInputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins that constitute the data flow output of the entire loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlStructuredActivityNode::structuredNodeOutputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of nodes and edges that initialize values or perform other setup computations for the loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QUmlStructuredActivityNode::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlloopnode.cpp"

