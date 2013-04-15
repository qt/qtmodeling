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
#include "qumlstructuredactivitynode_p.h"

#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlVariable>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityNode>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlStructuredActivityNodePrivate::QUmlStructuredActivityNodePrivate() :
    mustIsolate(false),
    activity(0)
{
}

QUmlStructuredActivityNodePrivate::~QUmlStructuredActivityNodePrivate()
{
}

/*!
    \class QUmlStructuredActivityNode

    \inmodule QtUml

    \brief A structured activity node is an executable activity node that may have an expansion into subordinate nodes as an activity group. The subordinate nodes must belong to only one structured activity node, although they may be nested.Because of the concurrent nature of the execution of actions within and across activities, it can be difficult to guarantee the consistent access and modification of object memory. In order to avoid race conditions or other concurrency-related problems, it is sometimes necessary to isolate the effects of a group of actions from the effects of actions outside the group. This may be indicated by setting the mustIsolate attribute to true on a structured activity node. If a structured activity node is "isolated," then any object used by an action within the node cannot be accessed by any action outside the node until the structured activity node as a whole completes. Any concurrent actions that would result in accessing such objects are required to have their execution deferred until the completion of the node.
 */

QUmlStructuredActivityNode::QUmlStructuredActivityNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlStructuredActivityNodePrivate, wrapper, parent),
    _wrappedUmlAction(new QUmlAction(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlActivityGroup(new QUmlActivityGroup(this))
{
    setPropertyData();
}

QUmlStructuredActivityNode::QUmlStructuredActivityNode(QUmlStructuredActivityNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlAction(new QUmlAction(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this)),
    _wrappedUmlActivityGroup(new QUmlActivityGroup(this))
{
    setPropertyData();
}

QUmlStructuredActivityNode::~QUmlStructuredActivityNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlStructuredActivityNode::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlStructuredActivityNode::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlStructuredActivityNode::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlStructuredActivityNode::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlStructuredActivityNode::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlStructuredActivityNode::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlStructuredActivityNode::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlStructuredActivityNode::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlStructuredActivityNode::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlStructuredActivityNode::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlStructuredActivityNode::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlStructuredActivityNode::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlStructuredActivityNode::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlStructuredActivityNode::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlStructuredActivityNode::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlStructuredActivityNode::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlStructuredActivityNode::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlStructuredActivityNode::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlStructuredActivityNode::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlStructuredActivityNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlStructuredActivityNode::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlStructuredActivityNode::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlActivityNode
// ---------------------------------------------------------------

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QSet<QUmlActivityNode *> QUmlStructuredActivityNode::redefinedNodes() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->redefinedNodes();
}

void QUmlStructuredActivityNode::addRedefinedNode(QUmlActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addRedefinedNode(redefinedNode);
}

void QUmlStructuredActivityNode::removeRedefinedNode(QUmlActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeRedefinedNode(redefinedNode);
}

/*!
    Edges that have the node as target.
 */
QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::incomings() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->incomings();
}

void QUmlStructuredActivityNode::addIncoming(QUmlActivityEdge *incoming)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addIncoming(incoming);
}

void QUmlStructuredActivityNode::removeIncoming(QUmlActivityEdge *incoming)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeIncoming(incoming);
}

/*!
    Groups containing the node.
 */
QSet<QUmlActivityGroup *> QUmlStructuredActivityNode::inGroup() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inGroup();
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlStructuredActivityNode::inStructuredNode() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inStructuredNode();
}

void QUmlStructuredActivityNode::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->setInStructuredNode(inStructuredNode);
}

/*!
    Partitions containing the node.
 */
QSet<QUmlActivityPartition *> QUmlStructuredActivityNode::inPartition() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inPartition();
}

void QUmlStructuredActivityNode::addInPartition(QUmlActivityPartition *inPartition)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addInPartition(inPartition);
}

void QUmlStructuredActivityNode::removeInPartition(QUmlActivityPartition *inPartition)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeInPartition(inPartition);
}

/*!
    Interruptible regions containing the node.
 */
QSet<QUmlInterruptibleActivityRegion *> QUmlStructuredActivityNode::inInterruptibleRegion() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inInterruptibleRegion();
}

void QUmlStructuredActivityNode::addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addInInterruptibleRegion(inInterruptibleRegion);
}

void QUmlStructuredActivityNode::removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeInInterruptibleRegion(inInterruptibleRegion);
}

/*!
    Edges that have the node as source.
 */
QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::outgoings() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->outgoings();
}

void QUmlStructuredActivityNode::addOutgoing(QUmlActivityEdge *outgoing)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addOutgoing(outgoing);
}

void QUmlStructuredActivityNode::removeOutgoing(QUmlActivityEdge *outgoing)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeOutgoing(outgoing);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlExecutableNode
// ---------------------------------------------------------------

/*!
    A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.
 */
QSet<QUmlExceptionHandler *> QUmlStructuredActivityNode::handlers() const
{
    return (qwrappedobject_cast<const QUmlExecutableNode *>(this))->handlers();
}

void QUmlStructuredActivityNode::addHandler(QUmlExceptionHandler *handler)
{
    (qwrappedobject_cast<QUmlExecutableNode *>(this))->addHandler(handler);
}

void QUmlStructuredActivityNode::removeHandler(QUmlExceptionHandler *handler)
{
    (qwrappedobject_cast<QUmlExecutableNode *>(this))->removeHandler(handler);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlAction
// ---------------------------------------------------------------

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool QUmlStructuredActivityNode::isLocallyReentrant() const
{
    return (qwrappedobject_cast<const QUmlAction *>(this))->isLocallyReentrant();
}

void QUmlStructuredActivityNode::setLocallyReentrant(bool isLocallyReentrant)
{
    (qwrappedobject_cast<QUmlAction *>(this))->setLocallyReentrant(isLocallyReentrant);
}

void QUmlStructuredActivityNode::unsetLocallyReentrant()
{
    setLocallyReentrant(false);
    Q_D(QUmlStructuredActivityNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLocallyReentrant"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlAction
// ---------------------------------------------------------------

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QUmlClassifier *QUmlStructuredActivityNode::context() const
{
    return (qwrappedobject_cast<const QUmlAction *>(this))->context();
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
QSet<QUmlConstraint *> QUmlStructuredActivityNode::localPostconditions() const
{
    return (qwrappedobject_cast<const QUmlAction *>(this))->localPostconditions();
}

void QUmlStructuredActivityNode::addLocalPostcondition(QUmlConstraint *localPostcondition)
{
    (qwrappedobject_cast<QUmlAction *>(this))->addLocalPostcondition(localPostcondition);
}

void QUmlStructuredActivityNode::removeLocalPostcondition(QUmlConstraint *localPostcondition)
{
    (qwrappedobject_cast<QUmlAction *>(this))->removeLocalPostcondition(localPostcondition);
}

/*!
    Constraint that must be satisfied when execution is started.
 */
QSet<QUmlConstraint *> QUmlStructuredActivityNode::localPreconditions() const
{
    return (qwrappedobject_cast<const QUmlAction *>(this))->localPreconditions();
}

void QUmlStructuredActivityNode::addLocalPrecondition(QUmlConstraint *localPrecondition)
{
    (qwrappedobject_cast<QUmlAction *>(this))->addLocalPrecondition(localPrecondition);
}

void QUmlStructuredActivityNode::removeLocalPrecondition(QUmlConstraint *localPrecondition)
{
    (qwrappedobject_cast<QUmlAction *>(this))->removeLocalPrecondition(localPrecondition);
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
QList<QUmlInputPin *> QUmlStructuredActivityNode::inputs() const
{
    return (qwrappedobject_cast<const QUmlAction *>(this))->inputs();
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
QList<QUmlOutputPin *> QUmlStructuredActivityNode::outputs() const
{
    return (qwrappedobject_cast<const QUmlAction *>(this))->outputs();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlStructuredActivityNode::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlStructuredActivityNode::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlStructuredActivityNode::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlStructuredActivityNode::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlStructuredActivityNode::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlStructuredActivityNode::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlStructuredActivityNode::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlStructuredActivityNode::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlStructuredActivityNode::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlStructuredActivityNode::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlStructuredActivityNode::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlStructuredActivityNode::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlActivityGroup
// ---------------------------------------------------------------

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlStructuredActivityNode::containedNodes() const
{
    return (qwrappedobject_cast<const QUmlActivityGroup *>(this))->containedNodes();
}

/*!
    Groups immediately contained in the group.
 */
QSet<QUmlActivityGroup *> QUmlStructuredActivityNode::subgroups() const
{
    return (qwrappedobject_cast<const QUmlActivityGroup *>(this))->subgroups();
}

/*!
    Edges immediately contained in the group.
 */
QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::containedEdges() const
{
    return (qwrappedobject_cast<const QUmlActivityGroup *>(this))->containedEdges();
}

/*!
    Group immediately containing the group.
 */
QUmlActivityGroup *QUmlStructuredActivityNode::superGroup() const
{
    return (qwrappedobject_cast<const QUmlActivityGroup *>(this))->superGroup();
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlStructuredActivityNode
// ---------------------------------------------------------------

/*!
    If true, then the actions in the node execute in isolation from actions outside the node.
 */
bool QUmlStructuredActivityNode::mustIsolate() const
{
    // This is a read-write attribute

    Q_D(const QUmlStructuredActivityNode);
    return d->mustIsolate;
}

void QUmlStructuredActivityNode::setMustIsolate(bool mustIsolate)
{
    // This is a read-write attribute

    Q_D(QUmlStructuredActivityNode);
    if (d->mustIsolate != mustIsolate) {
        d->mustIsolate = mustIsolate;
    }
    d->modifiedResettableProperties << QString::fromLatin1("mustIsolate");
}

void QUmlStructuredActivityNode::unsetMustIsolate()
{
    setMustIsolate(false);
    Q_D(QUmlStructuredActivityNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("mustIsolate"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlStructuredActivityNode
// ---------------------------------------------------------------

QSet<QUmlInputPin *> QUmlStructuredActivityNode::structuredNodeInputs() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredActivityNode);
    return d->structuredNodeInputs;
}

void QUmlStructuredActivityNode::addStructuredNodeInput(QUmlInputPin *structuredNodeInput)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (!d->structuredNodeInputs.contains(structuredNodeInput)) {
        d->structuredNodeInputs.insert(structuredNodeInput);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addInput(qwrappedobject_cast<QUmlInputPin *>(structuredNodeInput));
    }
}

void QUmlStructuredActivityNode::removeStructuredNodeInput(QUmlInputPin *structuredNodeInput)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (d->structuredNodeInputs.contains(structuredNodeInput)) {
        d->structuredNodeInputs.remove(structuredNodeInput);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeInput(qwrappedobject_cast<QUmlInputPin *>(structuredNodeInput));
    }
}

/*!
    Nodes immediately contained in the group.
 */
QSet<QUmlActivityNode *> QUmlStructuredActivityNode::nodes() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredActivityNode);
    return d->nodes;
}

void QUmlStructuredActivityNode::addNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (!d->nodes.contains(node)) {
        d->nodes.insert(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->addContainedNode(qwrappedobject_cast<QUmlActivityNode *>(node));
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(node));

        // Adjust opposite property
        node->setInStructuredNode(this);
    }
}

void QUmlStructuredActivityNode::removeNode(QUmlActivityNode *node)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (d->nodes.contains(node)) {
        d->nodes.remove(node);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->removeContainedNode(qwrappedobject_cast<QUmlActivityNode *>(node));
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(node));

        // Adjust opposite property
        node->setInStructuredNode(0);
    }
}

QSet<QUmlOutputPin *> QUmlStructuredActivityNode::structuredNodeOutputs() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredActivityNode);
    return d->structuredNodeOutputs;
}

void QUmlStructuredActivityNode::addStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (!d->structuredNodeOutputs.contains(structuredNodeOutput)) {
        d->structuredNodeOutputs.insert(structuredNodeOutput);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->addOutput(qwrappedobject_cast<QUmlOutputPin *>(structuredNodeOutput));
    }
}

void QUmlStructuredActivityNode::removeStructuredNodeOutput(QUmlOutputPin *structuredNodeOutput)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (d->structuredNodeOutputs.contains(structuredNodeOutput)) {
        d->structuredNodeOutputs.remove(structuredNodeOutput);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActionPrivate *>(d))->removeOutput(qwrappedobject_cast<QUmlOutputPin *>(structuredNodeOutput));
    }
}

/*!
    Edges immediately contained in the structured node.
 */
QSet<QUmlActivityEdge *> QUmlStructuredActivityNode::edges() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredActivityNode);
    return d->edges;
}

void QUmlStructuredActivityNode::addEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (!d->edges.contains(edge)) {
        d->edges.insert(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->addContainedEdge(qwrappedobject_cast<QUmlActivityEdge *>(edge));
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(edge));

        // Adjust opposite property
        edge->setInStructuredNode(this);
    }
}

void QUmlStructuredActivityNode::removeEdge(QUmlActivityEdge *edge)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (d->edges.contains(edge)) {
        d->edges.remove(edge);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlActivityGroupPrivate *>(d))->removeContainedEdge(qwrappedobject_cast<QUmlActivityEdge *>(edge));
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(edge));

        // Adjust opposite property
        edge->setInStructuredNode(0);
    }
}

/*!
    A variable defined in the scope of the structured activity node. It has no value and may not be accessed
 */
QSet<QUmlVariable *> QUmlStructuredActivityNode::variables() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredActivityNode);
    return d->variables;
}

void QUmlStructuredActivityNode::addVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (!d->variables.contains(variable)) {
        d->variables.insert(variable);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(variable));

        // Adjust opposite property
        variable->setScope(this);
    }
}

void QUmlStructuredActivityNode::removeVariable(QUmlVariable *variable)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (d->variables.contains(variable)) {
        d->variables.remove(variable);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(variable));

        // Adjust opposite property
        variable->setScope(0);
    }
}

/*!
    Activity immediately containing the node.
 */
QUmlActivity *QUmlStructuredActivityNode::activity() const
{
    // This is a read-write association end

    Q_D(const QUmlStructuredActivityNode);
    return d->activity;
}

void QUmlStructuredActivityNode::setActivity(QUmlActivity *activity)
{
    // This is a read-write association end

    Q_D(QUmlStructuredActivityNode);
    if (d->activity != activity) {
        // Adjust opposite property
        if (d->activity)
            d->activity->removeStructuredNode(this);

        d->activity = activity;

        // Adjust redefined property(ies)
        (qwrappedobject_cast<QUmlActivityGroup *>(this))->setInActivity(qwrappedobject_cast<QUmlActivity *>(activity));
        (qwrappedobject_cast<QUmlActivityNode *>(this))->setActivity(qwrappedobject_cast<QUmlActivity *>(activity));

        // Adjust opposite property
        if (activity)
            activity->addStructuredNode(this);
    }
}

void QUmlStructuredActivityNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("mustIsolate")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("mustIsolate")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("mustIsolate")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("If true, then the actions in the node execute in isolation from actions outside the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("mustIsolate")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("mustIsolate")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("mustIsolate")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeInputs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeInputs")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeInputs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeInputs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeInputs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::inputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeInputs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("nodes")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("nodes")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("nodes")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Nodes immediately contained in the group.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("nodes")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("nodes")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::containedNodes QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("nodes")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityNode::inStructuredNode");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeOutputs")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeOutputs")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeOutputs")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeOutputs")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeOutputs")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlAction::outputs");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("structuredNodeOutputs")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("edges")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("edges")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("edges")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Edges immediately contained in the structured node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("edges")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("edges")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::containedEdges QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("edges")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivityEdge::inStructuredNode");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("variables")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("variables")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("variables")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("A variable defined in the scope of the structured activity node. It has no value and may not be accessed");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("variables")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("variables")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("variables")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlVariable::scope");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Activity immediately containing the node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlActivityGroup::inActivity QUmlActivityNode::activity");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlStructuredActivityNode")][QString::fromLatin1("activity")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlActivity::structuredNode");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlstructuredactivitynode.cpp"

