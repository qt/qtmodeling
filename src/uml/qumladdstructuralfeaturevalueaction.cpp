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
#include "qumladdstructuralfeaturevalueaction.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

/*!
    \class UmlAddStructuralFeatureValueAction

    \inmodule QtUml

    \brief An add structural feature value action is a write structural feature action for adding values to a structural feature.
 */

QUmlAddStructuralFeatureValueAction::QUmlAddStructuralFeatureValueAction(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlAddStructuralFeatureValueAction::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlAddStructuralFeatureValueAction::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlAddStructuralFeatureValueAction::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlAddStructuralFeatureValueAction::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlAddStructuralFeatureValueAction::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlAddStructuralFeatureValueAction::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlAddStructuralFeatureValueAction::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlAddStructuralFeatureValueAction::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlAddStructuralFeatureValueAction::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlAddStructuralFeatureValueAction::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlAddStructuralFeatureValueAction::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlAddStructuralFeatureValueAction::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [ActivityNode]

/*!
    Activity containing the node.
 */
QUmlActivity *QUmlAddStructuralFeatureValueAction::activity() const
{
    return reinterpret_cast<QUmlActivity *>(_activity);
}

/*!
    Groups containing the node.
 */
const QSet<QUmlActivityGroup *> QUmlAddStructuralFeatureValueAction::inGroup() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityGroup *> *>(&_inGroup));
}

/*!
    Interruptible regions containing the node.
 */
const QSet<QUmlInterruptibleActivityRegion *> QUmlAddStructuralFeatureValueAction::inInterruptibleRegion() const
{
    return *(reinterpret_cast<const QSet<QUmlInterruptibleActivityRegion *> *>(&_inInterruptibleRegion));
}

/*!
    Partitions containing the node.
 */
const QSet<QUmlActivityPartition *> QUmlAddStructuralFeatureValueAction::inPartition() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityPartition *> *>(&_inPartition));
}

/*!
    Structured activity node containing the node.
 */
QUmlStructuredActivityNode *QUmlAddStructuralFeatureValueAction::inStructuredNode() const
{
    return reinterpret_cast<QUmlStructuredActivityNode *>(_inStructuredNode);
}

/*!
    Edges that have the node as target.
 */
const QSet<QUmlActivityEdge *> QUmlAddStructuralFeatureValueAction::incoming() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_incoming));
}

/*!
    Edges that have the node as source.
 */
const QSet<QUmlActivityEdge *> QUmlAddStructuralFeatureValueAction::outgoing() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_outgoing));
}

/*!
    Inherited nodes replaced by this node in a specialization of the activity.
 */
const QSet<QUmlActivityNode *> QUmlAddStructuralFeatureValueAction::redefinedNode() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityNode *> *>(&_redefinedNode));
}

// OWNED ATTRIBUTES [ExecutableNode]

/*!
    A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node.
 */
const QSet<QUmlExceptionHandler *> QUmlAddStructuralFeatureValueAction::handler() const
{
    return *(reinterpret_cast<const QSet<QUmlExceptionHandler *> *>(&_handler));
}

// OWNED ATTRIBUTES [Action]

/*!
    The classifier that owns the behavior of which this action is a part.
 */
QUmlClassifier *QUmlAddStructuralFeatureValueAction::context() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlAction::context());
}

/*!
    The ordered set of input pins connected to the Action. These are among the total set of inputs.
 */
const QList<QUmlInputPin *> QUmlAddStructuralFeatureValueAction::input() const
{
    return *(reinterpret_cast<const QList<QUmlInputPin *> *>(&_input));
}

/*!
    If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed.
 */
bool QUmlAddStructuralFeatureValueAction::isLocallyReentrant() const
{
    return _isLocallyReentrant;
}

/*!
    Constraint that must be satisfied when executed is completed.
 */
const QSet<QUmlConstraint *> QUmlAddStructuralFeatureValueAction::localPostcondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_localPostcondition));
}

/*!
    Constraint that must be satisfied when execution is started.
 */
const QSet<QUmlConstraint *> QUmlAddStructuralFeatureValueAction::localPrecondition() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_localPrecondition));
}

/*!
    The ordered set of output pins connected to the Action. The action places its results onto pins in this set.
 */
const QList<QUmlOutputPin *> QUmlAddStructuralFeatureValueAction::output() const
{
    return *(reinterpret_cast<const QList<QUmlOutputPin *> *>(&_output));
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

/*!
    Gives the input pin from which the object whose structural feature is to be read or written is obtained.
 */
QUmlInputPin *QUmlAddStructuralFeatureValueAction::object() const
{
    return reinterpret_cast<QUmlInputPin *>(_object);
}

/*!
    Structural feature to be read.
 */
QUmlStructuralFeature *QUmlAddStructuralFeatureValueAction::structuralFeature() const
{
    return reinterpret_cast<QUmlStructuralFeature *>(_structuralFeature);
}

// OWNED ATTRIBUTES [WriteStructuralFeatureAction]

/*!
    Gives the output pin on which the result is put.
 */
QUmlOutputPin *QUmlAddStructuralFeatureValueAction::result() const
{
    return reinterpret_cast<QUmlOutputPin *>(_result);
}

/*!
    Value to be added or removed from the structural feature.
 */
QUmlInputPin *QUmlAddStructuralFeatureValueAction::value() const
{
    return reinterpret_cast<QUmlInputPin *>(_value);
}

// OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

/*!
    Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features.
 */
QUmlInputPin *QUmlAddStructuralFeatureValueAction::insertAt() const
{
    return reinterpret_cast<QUmlInputPin *>(_insertAt);
}

/*!
    Specifies whether existing values of the structural feature of the object should be removed before adding the new value.
 */
bool QUmlAddStructuralFeatureValueAction::isReplaceAll() const
{
    return _isReplaceAll;
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlAddStructuralFeatureValueAction::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlAddStructuralFeatureValueAction::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlAddStructuralFeatureValueAction::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlAddStructuralFeatureValueAction::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlAddStructuralFeatureValueAction::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlAddStructuralFeatureValueAction::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [RedefinableElement]

/*!
    The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
 */
bool QUmlAddStructuralFeatureValueAction::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlRedefinableElement::isConsistentWith(redefinee);
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlAddStructuralFeatureValueAction::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAddStructuralFeatureValueAction::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlAddStructuralFeatureValueAction::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAddStructuralFeatureValueAction::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlAddStructuralFeatureValueAction::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlAddStructuralFeatureValueAction::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlAddStructuralFeatureValueAction::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlAddStructuralFeatureValueAction::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAddStructuralFeatureValueAction::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAddStructuralFeatureValueAction::setActivity(QUmlActivity *activity)
{
    UmlActivityNode::setActivity(activity);
}

void QUmlAddStructuralFeatureValueAction::addInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    UmlActivityNode::addInInterruptibleRegion(inInterruptibleRegion);
}

void QUmlAddStructuralFeatureValueAction::removeInInterruptibleRegion(UmlInterruptibleActivityRegion *inInterruptibleRegion)
{
    UmlActivityNode::removeInInterruptibleRegion(inInterruptibleRegion);
}

void QUmlAddStructuralFeatureValueAction::addInPartition(UmlActivityPartition *inPartition)
{
    UmlActivityNode::addInPartition(inPartition);
}

void QUmlAddStructuralFeatureValueAction::removeInPartition(UmlActivityPartition *inPartition)
{
    UmlActivityNode::removeInPartition(inPartition);
}

void QUmlAddStructuralFeatureValueAction::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    UmlActivityNode::setInStructuredNode(inStructuredNode);
}

void QUmlAddStructuralFeatureValueAction::addIncoming(UmlActivityEdge *incoming)
{
    UmlActivityNode::addIncoming(incoming);
}

void QUmlAddStructuralFeatureValueAction::removeIncoming(UmlActivityEdge *incoming)
{
    UmlActivityNode::removeIncoming(incoming);
}

void QUmlAddStructuralFeatureValueAction::addOutgoing(UmlActivityEdge *outgoing)
{
    UmlActivityNode::addOutgoing(outgoing);
}

void QUmlAddStructuralFeatureValueAction::removeOutgoing(UmlActivityEdge *outgoing)
{
    UmlActivityNode::removeOutgoing(outgoing);
}

void QUmlAddStructuralFeatureValueAction::addRedefinedNode(UmlActivityNode *redefinedNode)
{
    UmlActivityNode::addRedefinedNode(redefinedNode);
}

void QUmlAddStructuralFeatureValueAction::removeRedefinedNode(UmlActivityNode *redefinedNode)
{
    UmlActivityNode::removeRedefinedNode(redefinedNode);
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAddStructuralFeatureValueAction::addHandler(UmlExceptionHandler *handler)
{
    UmlExecutableNode::addHandler(handler);
}

void QUmlAddStructuralFeatureValueAction::removeHandler(UmlExceptionHandler *handler)
{
    UmlExecutableNode::removeHandler(handler);
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAddStructuralFeatureValueAction::setLocallyReentrant(bool isLocallyReentrant)
{
    UmlAction::setLocallyReentrant(isLocallyReentrant);
}

void QUmlAddStructuralFeatureValueAction::addLocalPostcondition(UmlConstraint *localPostcondition)
{
    UmlAction::addLocalPostcondition(localPostcondition);
}

void QUmlAddStructuralFeatureValueAction::removeLocalPostcondition(UmlConstraint *localPostcondition)
{
    UmlAction::removeLocalPostcondition(localPostcondition);
}

void QUmlAddStructuralFeatureValueAction::addLocalPrecondition(UmlConstraint *localPrecondition)
{
    UmlAction::addLocalPrecondition(localPrecondition);
}

void QUmlAddStructuralFeatureValueAction::removeLocalPrecondition(UmlConstraint *localPrecondition)
{
    UmlAction::removeLocalPrecondition(localPrecondition);
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlAddStructuralFeatureValueAction::setObject(QUmlInputPin *object)
{
    UmlStructuralFeatureAction::setObject(object);
}

void QUmlAddStructuralFeatureValueAction::setStructuralFeature(QUmlStructuralFeature *structuralFeature)
{
    UmlStructuralFeatureAction::setStructuralFeature(structuralFeature);
}

// SLOTS FOR OWNED ATTRIBUTES [WriteStructuralFeatureAction]

void QUmlAddStructuralFeatureValueAction::setResult(QUmlOutputPin *result)
{
    UmlWriteStructuralFeatureAction::setResult(result);
}

void QUmlAddStructuralFeatureValueAction::setValue(QUmlInputPin *value)
{
    UmlWriteStructuralFeatureAction::setValue(value);
}

// SLOTS FOR OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

void QUmlAddStructuralFeatureValueAction::setInsertAt(QUmlInputPin *insertAt)
{
    UmlAddStructuralFeatureValueAction::setInsertAt(insertAt);
}

void QUmlAddStructuralFeatureValueAction::setReplaceAll(bool isReplaceAll)
{
    UmlAddStructuralFeatureValueAction::setReplaceAll(isReplaceAll);
}

QT_END_NAMESPACE

