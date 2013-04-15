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
#include "qumlobjectnode.h"
#include "qumlobjectnode_p.h"

#include <QtUml/QUmlState>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlValueSpecification>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlObjectNodePrivate::QUmlObjectNodePrivate() :
    isControlType(false),
    ordering(QtUml::ObjectNodeOrderingFIFO),
    upperBound(0),
    selection(0)
{
}

QUmlObjectNodePrivate::~QUmlObjectNodePrivate()
{
}

/*!
    \class QUmlObjectNode

    \inmodule QtUml

    \brief An object node is an abstract activity node that is part of defining object flow in an activity.Object nodes have support for token selection, limitation on the number of tokens, specifying the state required for tokens, and carrying control values.
 */

QUmlObjectNode::QUmlObjectNode(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlObjectNodePrivate, wrapper, parent),
    _wrappedUmlActivityNode(new QUmlActivityNode(this)),
    _wrappedUmlTypedElement(new QUmlTypedElement(this))
{
    setPropertyData();
}

QUmlObjectNode::QUmlObjectNode(QUmlObjectNodePrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlActivityNode(new QUmlActivityNode(this)),
    _wrappedUmlTypedElement(new QUmlTypedElement(this))
{
    setPropertyData();
}

QUmlObjectNode::~QUmlObjectNode()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlObjectNode::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlObjectNode::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlObjectNode::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlObjectNode::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlObjectNode::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlObjectNode::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlObjectNode::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlObjectNode::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlObjectNode::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlObjectNode::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlObjectNode::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlObjectNode::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlObjectNode::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlObjectNode::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlObjectNode::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlObjectNode::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlObjectNode::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlObjectNode::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlObjectNode::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlObjectNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlObjectNode::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlObjectNode::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlActivityNode
// ---------------------------------------------------------------

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QSet<QUmlActivityNode *> QUmlObjectNode::redefinedNodes() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->redefinedNodes();
}

void QUmlObjectNode::addRedefinedNode(QUmlActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addRedefinedNode(redefinedNode);
}

void QUmlObjectNode::removeRedefinedNode(QUmlActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeRedefinedNode(redefinedNode);
}

/*!
    Edges that have the node as target.
 */
QSet<QUmlActivityEdge *> QUmlObjectNode::incomings() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->incomings();
}

void QUmlObjectNode::addIncoming(QUmlActivityEdge *incoming)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addIncoming(incoming);
}

void QUmlObjectNode::removeIncoming(QUmlActivityEdge *incoming)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeIncoming(incoming);
}

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlObjectNode::activity() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->activity();
}

void QUmlObjectNode::setActivity(QUmlActivity *activity)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->setActivity(activity);
}

/*!
    Groups containing the node.
 */
QSet<QUmlActivityGroup *> QUmlObjectNode::inGroup() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inGroup();
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlObjectNode::inStructuredNode() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inStructuredNode();
}

void QUmlObjectNode::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->setInStructuredNode(inStructuredNode);
}

/*!
    Partitions containing the node.
 */
QSet<QUmlActivityPartition *> QUmlObjectNode::inPartition() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inPartition();
}

void QUmlObjectNode::addInPartition(QUmlActivityPartition *inPartition)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addInPartition(inPartition);
}

void QUmlObjectNode::removeInPartition(QUmlActivityPartition *inPartition)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeInPartition(inPartition);
}

/*!
    Interruptible regions containing the node.
 */
QSet<QUmlInterruptibleActivityRegion *> QUmlObjectNode::inInterruptibleRegion() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inInterruptibleRegion();
}

void QUmlObjectNode::addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addInInterruptibleRegion(inInterruptibleRegion);
}

void QUmlObjectNode::removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeInInterruptibleRegion(inInterruptibleRegion);
}

/*!
    Edges that have the node as source.
 */
QSet<QUmlActivityEdge *> QUmlObjectNode::outgoings() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->outgoings();
}

void QUmlObjectNode::addOutgoing(QUmlActivityEdge *outgoing)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addOutgoing(outgoing);
}

void QUmlObjectNode::removeOutgoing(QUmlActivityEdge *outgoing)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeOutgoing(outgoing);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlObjectNode::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlObjectNode::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlObjectNode
// ---------------------------------------------------------------

/*!
    Tells whether the type of the object node is to be treated as control.
 */
bool QUmlObjectNode::isControlType() const
{
    // This is a read-write attribute

    Q_D(const QUmlObjectNode);
    return d->isControlType;
}

void QUmlObjectNode::setControlType(bool isControlType)
{
    // This is a read-write attribute

    Q_D(QUmlObjectNode);
    if (d->isControlType != isControlType) {
        d->isControlType = isControlType;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isControlType");
}

void QUmlObjectNode::unsetControlType()
{
    setControlType(false);
    Q_D(QUmlObjectNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isControlType"));
}

/*!
    Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.
 */
QtUml::ObjectNodeOrderingKind QUmlObjectNode::ordering() const
{
    // This is a read-write attribute

    Q_D(const QUmlObjectNode);
    return d->ordering;
}

void QUmlObjectNode::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    // This is a read-write attribute

    Q_D(QUmlObjectNode);
    if (d->ordering != ordering) {
        d->ordering = ordering;
    }
    d->modifiedResettableProperties << QString::fromLatin1("ordering");
}

void QUmlObjectNode::unsetOrdering()
{
    setOrdering(QtUml::ObjectNodeOrderingFIFO);
    Q_D(QUmlObjectNode);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("ordering"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlObjectNode
// ---------------------------------------------------------------

/*!
    The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.
 */
QUmlValueSpecification *QUmlObjectNode::upperBound() const
{
    // This is a read-write association end

    Q_D(const QUmlObjectNode);
    return d->upperBound;
}

void QUmlObjectNode::setUpperBound(QUmlValueSpecification *upperBound)
{
    // This is a read-write association end

    Q_D(QUmlObjectNode);
    if (d->upperBound != upperBound) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->upperBound));

        d->upperBound = upperBound;

        // Adjust subsetted property(ies)
        if (upperBound) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(upperBound));
        }
    }
}

/*!
    Selects tokens for outgoing edges.
 */
QUmlBehavior *QUmlObjectNode::selection() const
{
    // This is a read-write association end

    Q_D(const QUmlObjectNode);
    return d->selection;
}

void QUmlObjectNode::setSelection(QUmlBehavior *selection)
{
    // This is a read-write association end

    Q_D(QUmlObjectNode);
    if (d->selection != selection) {
        d->selection = selection;
    }
}

/*!
    The required states of the object available at this point in the activity.
 */
QSet<QUmlState *> QUmlObjectNode::inState() const
{
    // This is a read-write association end

    Q_D(const QUmlObjectNode);
    return d->inState;
}

void QUmlObjectNode::addInState(QUmlState *inState)
{
    // This is a read-write association end

    Q_D(QUmlObjectNode);
    if (!d->inState.contains(inState)) {
        d->inState.insert(inState);
    }
}

void QUmlObjectNode::removeInState(QUmlState *inState)
{
    // This is a read-write association end

    Q_D(QUmlObjectNode);
    if (d->inState.contains(inState)) {
        d->inState.remove(inState);
    }
}

void QUmlObjectNode::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("isControlType")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("isControlType")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("isControlType")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the type of the object node is to be treated as control.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("isControlType")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("isControlType")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("isControlType")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("ordering")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("ordering")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("ordering")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("ordering")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("ordering")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("ordering")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("upperBound")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("upperBound")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("upperBound")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("upperBound")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("upperBound")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("upperBound")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("selection")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("selection")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("selection")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Selects tokens for outgoing edges.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("selection")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("selection")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("selection")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("inState")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("inState")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("inState")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The required states of the object available at this point in the activity.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("inState")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("inState")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlObjectNode")][QString::fromLatin1("inState")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlobjectnode.cpp"

