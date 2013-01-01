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

#include <QtWrappedObjects/QtWrappedObjectsEnumerations>

QT_BEGIN_NAMESPACE_QTUML

QLoopNodePrivate::QLoopNodePrivate() :
    isTestedFirst(false),
    decider(0)
{
}

QLoopNodePrivate::~QLoopNodePrivate()
{
    qDeleteAll(loopVariableInputs);
    qDeleteAll(results);
}

/*!
    \class QLoopNode

    \inmodule QtUml

    \brief A loop node is a structured activity node that represents a loop with setup, test, and body sections.
 */

QLoopNode::QLoopNode(QWrappedObject *parent, QWrappedObject *wrapper) :
    QStructuredActivityNode(*new QLoopNodePrivate, parent, wrapper)
{
    setPropertyData();
}

QLoopNode::QLoopNode(QLoopNodePrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QStructuredActivityNode(dd, parent, wrapper)
{
    setPropertyData();
}

QLoopNode::~QLoopNode()
{
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QLoopNode
// ---------------------------------------------------------------

/*!
    If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.
 */
bool QLoopNode::isTestedFirst() const
{
    // This is a read-write attribute

    Q_D(const QLoopNode);
    return d->isTestedFirst;
}

void QLoopNode::setTestedFirst(bool isTestedFirst)
{
    // This is a read-write attribute

    Q_D(QLoopNode);
    if (d->isTestedFirst != isTestedFirst) {
        d->isTestedFirst = isTestedFirst;
    }
}

void QLoopNode::unsetTestedFirst()
{
    setTestedFirst(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QLoopNode
// ---------------------------------------------------------------

/*!
    A list of values that are moved into the loop variable pins before the first iteration of the loop.
 */
QList<QInputPin *> QLoopNode::loopVariableInputs() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->loopVariableInputs;
}

void QLoopNode::addLoopVariableInput(QInputPin *loopVariableInput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->loopVariableInputs.contains(loopVariableInput)) {
        d->loopVariableInputs.append(loopVariableInput);
        qTopLevelWrapper(loopVariableInput)->setParent(qTopLevelWrapper(this));
    }
}

void QLoopNode::removeLoopVariableInput(QInputPin *loopVariableInput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->loopVariableInputs.contains(loopVariableInput)) {
        d->loopVariableInputs.removeAll(loopVariableInput);
        qTopLevelWrapper(loopVariableInput)->setParent(0);
    }
}

/*!
    An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.
 */
QOutputPin *QLoopNode::decider() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->decider;
}

void QLoopNode::setDecider(QOutputPin *decider)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->decider != decider) {
        d->decider = decider;
    }
}

/*!
    A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.
 */
QList<QOutputPin *> QLoopNode::bodyOutputs() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->bodyOutputs;
}

void QLoopNode::addBodyOutput(QOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.append(bodyOutput);
    }
}

void QLoopNode::removeBodyOutput(QOutputPin *bodyOutput)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->bodyOutputs.contains(bodyOutput)) {
        d->bodyOutputs.removeAll(bodyOutput);
    }
}

/*!
    A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.
 */
QList<QOutputPin *> QLoopNode::loopVariables() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->loopVariables;
}

void QLoopNode::addLoopVariable(QOutputPin *loopVariable)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->loopVariables.contains(loopVariable)) {
        d->loopVariables.append(loopVariable);
    }
}

void QLoopNode::removeLoopVariable(QOutputPin *loopVariable)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->loopVariables.contains(loopVariable)) {
        d->loopVariables.removeAll(loopVariable);
    }
}

/*!
    A list of output pins that constitute the data flow output of the entire loop.
 */
QList<QOutputPin *> QLoopNode::results() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->results;
}

void QLoopNode::addResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->results.contains(result)) {
        d->results.append(result);
        qTopLevelWrapper(result)->setParent(qTopLevelWrapper(this));
    }
}

void QLoopNode::removeResult(QOutputPin *result)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->results.contains(result)) {
        d->results.removeAll(result);
        qTopLevelWrapper(result)->setParent(0);
    }
}

/*!
    The set of nodes and edges that initialize values or perform other setup computations for the loop.
 */
QSet<QExecutableNode *> QLoopNode::setupParts() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->setupParts;
}

void QLoopNode::addSetupPart(QExecutableNode *setupPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->setupParts.contains(setupPart)) {
        d->setupParts.insert(setupPart);
    }
}

void QLoopNode::removeSetupPart(QExecutableNode *setupPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->setupParts.contains(setupPart)) {
        d->setupParts.remove(setupPart);
    }
}

/*!
    The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.
 */
QSet<QExecutableNode *> QLoopNode::bodyParts() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->bodyParts;
}

void QLoopNode::addBodyPart(QExecutableNode *bodyPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->bodyParts.contains(bodyPart)) {
        d->bodyParts.insert(bodyPart);
    }
}

void QLoopNode::removeBodyPart(QExecutableNode *bodyPart)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->bodyParts.contains(bodyPart)) {
        d->bodyParts.remove(bodyPart);
    }
}

/*!
    The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.
 */
QSet<QExecutableNode *> QLoopNode::tests() const
{
    // This is a read-write association end

    Q_D(const QLoopNode);
    return d->tests;
}

void QLoopNode::addTest(QExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (!d->tests.contains(test)) {
        d->tests.insert(test);
    }
}

void QLoopNode::removeTest(QExecutableNode *test)
{
    // This is a read-write association end

    Q_D(QLoopNode);
    if (d->tests.contains(test)) {
        d->tests.remove(test);
    }
}

void QLoopNode::registerMetaTypes() const
{
    qRegisterMetaType<QOutputPin *>("QOutputPin *");
    qRegisterMetaType<QSet<QOutputPin *>>("QSet<QOutputPin *>");
    qRegisterMetaType<QList<QOutputPin *>>("QList<QOutputPin *>");

    qRegisterMetaType<QExecutableNode *>("QExecutableNode *");
    qRegisterMetaType<QSet<QExecutableNode *>>("QSet<QExecutableNode *>");
    qRegisterMetaType<QList<QExecutableNode *>>("QList<QExecutableNode *>");

    qRegisterMetaType<QInputPin *>("QInputPin *");
    qRegisterMetaType<QSet<QInputPin *>>("QSet<QInputPin *>");
    qRegisterMetaType<QList<QInputPin *>>("QList<QInputPin *>");

    QStructuredActivityNode::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

void QLoopNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("isTestedFirst")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of values that are moved into the loop variable pins before the first iteration of the loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QStructuredActivityNode::structuredNodeInput");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariableInputs")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("decider")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyOutputs")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("loopVariables")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A list of output pins that constitute the data flow output of the entire loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QStructuredActivityNode::structuredNodeOutput");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("results")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of nodes and edges that initialize values or perform other setup computations for the loop.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("setupParts")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("bodyParts")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QLoopNode")][QString::fromLatin1("tests")][QtWrappedObjects::QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");

    QStructuredActivityNode::setPropertyData();
}

#include "moc_qloopnode.cpp"

QT_END_NAMESPACE_QTUML

