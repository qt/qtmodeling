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

#include "qpin.h"
#include "qpin_p.h"

QT_BEGIN_NAMESPACE_QTUML

QPinPrivate::QPinPrivate() :
    isControl(false)
{
}

QPinPrivate::~QPinPrivate()
{
}

/*!
    \class QPin

    \inmodule QtUml

    \brief A pin is a typed element and multiplicity element that provides values to actions and accept result values from them.A pin is an object node for inputs and outputs to actions.
 */

QPin::QPin(QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(*new QPinPrivate, parent, wrapper),
    _wrappedMultiplicityElement(new QMultiplicityElement(this, this)),
    _wrappedObjectNode(new QObjectNode(this, this))
{
}

QPin::QPin(QPinPrivate &dd, QWrappedObject *parent, QWrappedObject *wrapper) :
    QWrappedObject(dd, parent, wrapper),
    _wrappedMultiplicityElement(new QMultiplicityElement(this, this)),
    _wrappedObjectNode(new QObjectNode(this, this))
{
}

QPin::~QPin()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QPin::ownedElements() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QPin::owner() const
{
    return (qwrappedobject_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QPin::ownedComments() const
{
    return (qwrappedobject_cast<const QElement *>(this))->ownedComments();
}

void QPin::addOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QPin::removeOwnedComment(QComment *ownedComment)
{
    (qwrappedobject_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QPin::upper() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->upper();
}

void QPin::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUpper(upper);
}

void QPin::unsetUpper()
{
    setUpper(1);
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QPin::isUnique() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->isUnique();
}

void QPin::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUnique(isUnique);
}

void QPin::unsetUnique()
{
    setUnique(true);
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QPin::isOrdered() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->isOrdered();
}

void QPin::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QPin::unsetOrdered()
{
    setOrdered(false);
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QPin::lower() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->lower();
}

void QPin::setLower(qint32 lower)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QValueSpecification *QPin::upperValue() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->upperValue();
}

void QPin::setUpperValue(QValueSpecification *upperValue)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QValueSpecification *QPin::lowerValue() const
{
    return (qwrappedobject_cast<const QMultiplicityElement *>(this))->lowerValue();
}

void QPin::setLowerValue(QValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QPin::name() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->name();
}

void QPin::setName(QString name)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QPin::visibility() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->visibility();
}

void QPin::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QPin::qualifiedName() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QPin::nameExpression() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->nameExpression();
}

void QPin::setNameExpression(QStringExpression *nameExpression)
{
    (qwrappedobject_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QPin::namespace_() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QPin::clientDependencies() const
{
    return (qwrappedobject_cast<const QNamedElement *>(this))->clientDependencies();
}

void QPin::addClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QPin::removeClientDependency(QDependency *clientDependency)
{
    (qwrappedobject_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QPin::isLeaf() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->isLeaf();
}

void QPin::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QPin::unsetLeaf()
{
    setLeaf(false);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QRedefinableElement *> *QPin::redefinedElements() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QClassifier *> *QPin::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QActivityNode
// ---------------------------------------------------------------

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
const QSet<QActivityNode *> *QPin::redefinedNodes() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->redefinedNodes();
}

void QPin::addRedefinedNode(QActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QActivityNode *>(this))->addRedefinedNode(redefinedNode);
}

void QPin::removeRedefinedNode(QActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QActivityNode *>(this))->removeRedefinedNode(redefinedNode);
}

/*!
    Edges that have the node as target.
 */
const QSet<QActivityEdge *> *QPin::incomings() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->incomings();
}

void QPin::addIncoming(QActivityEdge *incoming)
{
    (qwrappedobject_cast<QActivityNode *>(this))->addIncoming(incoming);
}

void QPin::removeIncoming(QActivityEdge *incoming)
{
    (qwrappedobject_cast<QActivityNode *>(this))->removeIncoming(incoming);
}

/*!
    Activity containing the node.
 */
QActivity *QPin::activity() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->activity();
}

void QPin::setActivity(QActivity *activity)
{
    (qwrappedobject_cast<QActivityNode *>(this))->setActivity(activity);
}

/*!
    Groups containing the node.
 */
const QSet<QActivityGroup *> *QPin::inGroup() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->inGroup();
}

/*!
    Structured activity node containing the node.
 */
QStructuredActivityNode *QPin::inStructuredNode() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->inStructuredNode();
}

void QPin::setInStructuredNode(QStructuredActivityNode *inStructuredNode)
{
    (qwrappedobject_cast<QActivityNode *>(this))->setInStructuredNode(inStructuredNode);
}

/*!
    Partitions containing the node.
 */
const QSet<QActivityPartition *> *QPin::inPartition() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->inPartition();
}

void QPin::addInPartition(QActivityPartition *inPartition)
{
    (qwrappedobject_cast<QActivityNode *>(this))->addInPartition(inPartition);
}

void QPin::removeInPartition(QActivityPartition *inPartition)
{
    (qwrappedobject_cast<QActivityNode *>(this))->removeInPartition(inPartition);
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QInterruptibleActivityRegion *> *QPin::inInterruptibleRegion() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->inInterruptibleRegion();
}

void QPin::addInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QActivityNode *>(this))->addInInterruptibleRegion(inInterruptibleRegion);
}

void QPin::removeInInterruptibleRegion(QInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QActivityNode *>(this))->removeInInterruptibleRegion(inInterruptibleRegion);
}

/*!
    Edges that have the node as source.
 */
const QSet<QActivityEdge *> *QPin::outgoings() const
{
    return (qwrappedobject_cast<const QActivityNode *>(this))->outgoings();
}

void QPin::addOutgoing(QActivityEdge *outgoing)
{
    (qwrappedobject_cast<QActivityNode *>(this))->addOutgoing(outgoing);
}

void QPin::removeOutgoing(QActivityEdge *outgoing)
{
    (qwrappedobject_cast<QActivityNode *>(this))->removeOutgoing(outgoing);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QType *QPin::type() const
{
    return (qwrappedobject_cast<const QTypedElement *>(this))->type();
}

void QPin::setType(QType *type)
{
    (qwrappedobject_cast<QTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QObjectNode
// ---------------------------------------------------------------

/*!
    Tells whether the type of the object node is to be treated as control.
 */
bool QPin::isControlType() const
{
    return (qwrappedobject_cast<const QObjectNode *>(this))->isControlType();
}

void QPin::setControlType(bool isControlType)
{
    (qwrappedobject_cast<QObjectNode *>(this))->setControlType(isControlType);
}

void QPin::unsetControlType()
{
    setControlType(false);
}

/*!
    Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.
 */
QtUml::ObjectNodeOrderingKind QPin::ordering() const
{
    return (qwrappedobject_cast<const QObjectNode *>(this))->ordering();
}

void QPin::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    (qwrappedobject_cast<QObjectNode *>(this))->setOrdering(ordering);
}

void QPin::unsetOrdering()
{
    setOrdering(QtUml::ObjectNodeOrderingFIFO);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QObjectNode
// ---------------------------------------------------------------

/*!
    The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.
 */
QValueSpecification *QPin::upperBound() const
{
    return (qwrappedobject_cast<const QObjectNode *>(this))->upperBound();
}

void QPin::setUpperBound(QValueSpecification *upperBound)
{
    (qwrappedobject_cast<QObjectNode *>(this))->setUpperBound(upperBound);
}

/*!
    Selects tokens for outgoing edges.
 */
QBehavior *QPin::selection() const
{
    return (qwrappedobject_cast<const QObjectNode *>(this))->selection();
}

void QPin::setSelection(QBehavior *selection)
{
    (qwrappedobject_cast<QObjectNode *>(this))->setSelection(selection);
}

/*!
    The required states of the object available at this point in the activity.
 */
const QSet<QState *> *QPin::inState() const
{
    return (qwrappedobject_cast<const QObjectNode *>(this))->inState();
}

void QPin::addInState(QState *inState)
{
    (qwrappedobject_cast<QObjectNode *>(this))->addInState(inState);
}

void QPin::removeInState(QState *inState)
{
    (qwrappedobject_cast<QObjectNode *>(this))->removeInState(inState);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QPin
// ---------------------------------------------------------------

/*!
    Tells whether the pins provide data to the actions, or just controls when it executes it.
 */
bool QPin::isControl() const
{
    // This is a read-write attribute

    Q_D(const QPin);
    return d->isControl;
}

void QPin::setControl(bool isControl)
{
    // This is a read-write attribute

    Q_D(QPin);
    if (d->isControl != isControl) {
        d->isControl = isControl;
    }
}

void QPin::unsetControl()
{
    setControl(false);
}

void QPin::registerMetaTypes() const
{
    qRegisterMetaType<QT_PREPEND_NAMESPACE_QTUML(QPin) *>("QT_PREPEND_NAMESPACE_QTUML(QPin) *");
    qRegisterMetaType<const QSet<QT_PREPEND_NAMESPACE_QTUML(QPin) *> *>("const QSet<QT_PREPEND_NAMESPACE_QTUML(QPin) *> *");
    qRegisterMetaType<const QList<QT_PREPEND_NAMESPACE_QTUML(QPin) *> *>("const QList<QT_PREPEND_NAMESPACE_QTUML(QPin) *> *");
    qRegisterMetaType<QPin *>("QPin *");
    qRegisterMetaType<const QSet<QPin *> *>("const QSet<QPin *> *");
    qRegisterMetaType<const QList<QPin *> *>("const QList<QPin *> *");

    QWrappedObject::registerMetaTypes();

    foreach (QWrappedObject *wrappedObject, wrappedObjects())
        wrappedObject->registerMetaTypes();
}

#include "moc_qpin.cpp"

QT_END_NAMESPACE_QTUML

