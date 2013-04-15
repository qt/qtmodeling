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
#include "qumlpin.h"
#include "qumlpin_p.h"

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlPinPrivate::QUmlPinPrivate() :
    isControl(false)
{
}

QUmlPinPrivate::~QUmlPinPrivate()
{
}

/*!
    \class QUmlPin

    \inmodule QtUml

    \brief A pin is a typed element and multiplicity element that provides values to actions and accept result values from them.A pin is an object node for inputs and outputs to actions.
 */

QUmlPin::QUmlPin(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlPinPrivate, wrapper, parent),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlObjectNode(new QUmlObjectNode(this))
{
    setPropertyData();
}

QUmlPin::QUmlPin(QUmlPinPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlMultiplicityElement(new QUmlMultiplicityElement(this)),
    _wrappedUmlObjectNode(new QUmlObjectNode(this))
{
    setPropertyData();
}

QUmlPin::~QUmlPin()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlPin::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlPin::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlPin::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlPin::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlPin::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    Specifies the upper bound of the multiplicity interval.
 */
qint32 QUmlPin::upper() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upper();
}

void QUmlPin::setUpper(qint32 upper)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpper(upper);
}

void QUmlPin::unsetUpper()
{
    setUpper(1);
    Q_D(QUmlPin);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("upper"));
}

/*!
    For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique.
 */
bool QUmlPin::isUnique() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isUnique();
}

void QUmlPin::setUnique(bool isUnique)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUnique(isUnique);
}

void QUmlPin::unsetUnique()
{
    setUnique(true);
    Q_D(QUmlPin);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isUnique"));
}

/*!
    For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered.
 */
bool QUmlPin::isOrdered() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->isOrdered();
}

void QUmlPin::setOrdered(bool isOrdered)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setOrdered(isOrdered);
}

void QUmlPin::unsetOrdered()
{
    setOrdered(false);
    Q_D(QUmlPin);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isOrdered"));
}

/*!
    Specifies the lower bound of the multiplicity interval.
 */
qint32 QUmlPin::lower() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lower();
}

void QUmlPin::setLower(qint32 lower)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLower(lower);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlMultiplicityElement
// ---------------------------------------------------------------

/*!
    The specification of the upper bound for this multiplicity.
 */
QUmlValueSpecification *QUmlPin::upperValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->upperValue();
}

void QUmlPin::setUpperValue(QUmlValueSpecification *upperValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setUpperValue(upperValue);
}

/*!
    The specification of the lower bound for this multiplicity.
 */
QUmlValueSpecification *QUmlPin::lowerValue() const
{
    return (qwrappedobject_cast<const QUmlMultiplicityElement *>(this))->lowerValue();
}

void QUmlPin::setLowerValue(QUmlValueSpecification *lowerValue)
{
    (qwrappedobject_cast<QUmlMultiplicityElement *>(this))->setLowerValue(lowerValue);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlPin::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlPin::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlPin::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlPin::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlPin::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlPin::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlPin::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlPin::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlPin::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlPin::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlPin::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlPin::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlPin::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlPin::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlPin);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlPin::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

/*!
    References the contexts that this element may be redefined from.
 */
QSet<QUmlClassifier *> QUmlPin::redefinitionContexts() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinitionContexts();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlActivityNode
// ---------------------------------------------------------------

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
QSet<QUmlActivityNode *> QUmlPin::redefinedNodes() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->redefinedNodes();
}

void QUmlPin::addRedefinedNode(QUmlActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addRedefinedNode(redefinedNode);
}

void QUmlPin::removeRedefinedNode(QUmlActivityNode *redefinedNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeRedefinedNode(redefinedNode);
}

/*!
    Edges that have the node as target.
 */
QSet<QUmlActivityEdge *> QUmlPin::incomings() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->incomings();
}

void QUmlPin::addIncoming(QUmlActivityEdge *incoming)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addIncoming(incoming);
}

void QUmlPin::removeIncoming(QUmlActivityEdge *incoming)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeIncoming(incoming);
}

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlPin::activity() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->activity();
}

void QUmlPin::setActivity(QUmlActivity *activity)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->setActivity(activity);
}

/*!
    Groups containing the node.
 */
QSet<QUmlActivityGroup *> QUmlPin::inGroup() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inGroup();
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlPin::inStructuredNode() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inStructuredNode();
}

void QUmlPin::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->setInStructuredNode(inStructuredNode);
}

/*!
    Partitions containing the node.
 */
QSet<QUmlActivityPartition *> QUmlPin::inPartition() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inPartition();
}

void QUmlPin::addInPartition(QUmlActivityPartition *inPartition)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addInPartition(inPartition);
}

void QUmlPin::removeInPartition(QUmlActivityPartition *inPartition)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeInPartition(inPartition);
}

/*!
    Interruptible regions containing the node.
 */
QSet<QUmlInterruptibleActivityRegion *> QUmlPin::inInterruptibleRegion() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->inInterruptibleRegion();
}

void QUmlPin::addInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addInInterruptibleRegion(inInterruptibleRegion);
}

void QUmlPin::removeInInterruptibleRegion(QUmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeInInterruptibleRegion(inInterruptibleRegion);
}

/*!
    Edges that have the node as source.
 */
QSet<QUmlActivityEdge *> QUmlPin::outgoings() const
{
    return (qwrappedobject_cast<const QUmlActivityNode *>(this))->outgoings();
}

void QUmlPin::addOutgoing(QUmlActivityEdge *outgoing)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->addOutgoing(outgoing);
}

void QUmlPin::removeOutgoing(QUmlActivityEdge *outgoing)
{
    (qwrappedobject_cast<QUmlActivityNode *>(this))->removeOutgoing(outgoing);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlTypedElement
// ---------------------------------------------------------------

/*!
    This information is derived from the return result for this Operation.The type of the TypedElement.
 */
QUmlType *QUmlPin::type() const
{
    return (qwrappedobject_cast<const QUmlTypedElement *>(this))->type();
}

void QUmlPin::setType(QUmlType *type)
{
    (qwrappedobject_cast<QUmlTypedElement *>(this))->setType(type);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlObjectNode
// ---------------------------------------------------------------

/*!
    Tells whether the type of the object node is to be treated as control.
 */
bool QUmlPin::isControlType() const
{
    return (qwrappedobject_cast<const QUmlObjectNode *>(this))->isControlType();
}

void QUmlPin::setControlType(bool isControlType)
{
    (qwrappedobject_cast<QUmlObjectNode *>(this))->setControlType(isControlType);
}

void QUmlPin::unsetControlType()
{
    setControlType(false);
    Q_D(QUmlPin);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isControlType"));
}

/*!
    Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node.
 */
QtUml::ObjectNodeOrderingKind QUmlPin::ordering() const
{
    return (qwrappedobject_cast<const QUmlObjectNode *>(this))->ordering();
}

void QUmlPin::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    (qwrappedobject_cast<QUmlObjectNode *>(this))->setOrdering(ordering);
}

void QUmlPin::unsetOrdering()
{
    setOrdering(QtUml::ObjectNodeOrderingFIFO);
    Q_D(QUmlPin);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("ordering"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlObjectNode
// ---------------------------------------------------------------

/*!
    The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached.
 */
QUmlValueSpecification *QUmlPin::upperBound() const
{
    return (qwrappedobject_cast<const QUmlObjectNode *>(this))->upperBound();
}

void QUmlPin::setUpperBound(QUmlValueSpecification *upperBound)
{
    (qwrappedobject_cast<QUmlObjectNode *>(this))->setUpperBound(upperBound);
}

/*!
    Selects tokens for outgoing edges.
 */
QUmlBehavior *QUmlPin::selection() const
{
    return (qwrappedobject_cast<const QUmlObjectNode *>(this))->selection();
}

void QUmlPin::setSelection(QUmlBehavior *selection)
{
    (qwrappedobject_cast<QUmlObjectNode *>(this))->setSelection(selection);
}

/*!
    The required states of the object available at this point in the activity.
 */
QSet<QUmlState *> QUmlPin::inState() const
{
    return (qwrappedobject_cast<const QUmlObjectNode *>(this))->inState();
}

void QUmlPin::addInState(QUmlState *inState)
{
    (qwrappedobject_cast<QUmlObjectNode *>(this))->addInState(inState);
}

void QUmlPin::removeInState(QUmlState *inState)
{
    (qwrappedobject_cast<QUmlObjectNode *>(this))->removeInState(inState);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM QUmlPin
// ---------------------------------------------------------------

/*!
    Tells whether the pins provide data to the actions, or just controls when it executes it.
 */
bool QUmlPin::isControl() const
{
    // This is a read-write attribute

    Q_D(const QUmlPin);
    return d->isControl;
}

void QUmlPin::setControl(bool isControl)
{
    // This is a read-write attribute

    Q_D(QUmlPin);
    if (d->isControl != isControl) {
        d->isControl = isControl;
    }
    d->modifiedResettableProperties << QString::fromLatin1("isControl");
}

void QUmlPin::unsetControl()
{
    setControl(false);
    Q_D(QUmlPin);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isControl"));
}

void QUmlPin::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPin")][QString::fromLatin1("isControl")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPin")][QString::fromLatin1("isControl")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPin")][QString::fromLatin1("isControl")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Tells whether the pins provide data to the actions, or just controls when it executes it.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPin")][QString::fromLatin1("isControl")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPin")][QString::fromLatin1("isControl")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlPin")][QString::fromLatin1("isControl")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlpin.cpp"

