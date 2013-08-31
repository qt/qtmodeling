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
#include "qumlobjectflow.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

/*!
    \class UmlObjectFlow

    \inmodule QtUml

    \brief An object flow is an activity edge that can have objects or data passing along it.Object flows have support for multicast/receive, token selection from object nodes, and transformation of tokens.
 */

QUmlObjectFlow::QUmlObjectFlow(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlObjectFlow::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlObjectFlow::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlObjectFlow::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlObjectFlow::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlObjectFlow::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlObjectFlow::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlObjectFlow::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlObjectFlow::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlObjectFlow::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlObjectFlow::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlObjectFlow::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}

/*!
    References the contexts that this element may be redefined from.
 */
const QSet<QUmlClassifier *> QUmlObjectFlow::redefinitionContext() const
{
    return *(reinterpret_cast<const QSet<QUmlClassifier *> *>(&_redefinitionContext));
}

// OWNED ATTRIBUTES [ActivityEdge]

/*!
    Activity containing the edge.
 */
QUmlActivity *QUmlObjectFlow::activity() const
{
    return reinterpret_cast<QUmlActivity *>(_activity);
}

/*!
    Specification evaluated at runtime to determine if the edge can be traversed.
 */
QUmlValueSpecification *QUmlObjectFlow::guard() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_guard);
}

/*!
    Groups containing the edge.
 */
const QSet<QUmlActivityGroup *> QUmlObjectFlow::inGroup() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityGroup *> *>(&_inGroup));
}

/*!
    Partitions containing the edge.
 */
const QSet<QUmlActivityPartition *> QUmlObjectFlow::inPartition() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityPartition *> *>(&_inPartition));
}

/*!
    Structured activity node containing the edge.
 */
QUmlStructuredActivityNode *QUmlObjectFlow::inStructuredNode() const
{
    return reinterpret_cast<QUmlStructuredActivityNode *>(_inStructuredNode);
}

/*!
    Region that the edge can interrupt.
 */
QUmlInterruptibleActivityRegion *QUmlObjectFlow::interrupts() const
{
    return reinterpret_cast<QUmlInterruptibleActivityRegion *>(_interrupts);
}

/*!
    Inherited edges replaced by this edge in a specialization of the activity.
 */
const QSet<QUmlActivityEdge *> QUmlObjectFlow::redefinedEdge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_redefinedEdge));
}

/*!
    Node from which tokens are taken when they traverse the edge.
 */
QUmlActivityNode *QUmlObjectFlow::source() const
{
    return reinterpret_cast<QUmlActivityNode *>(_source);
}

/*!
    Node to which tokens are put when they traverse the edge.
 */
QUmlActivityNode *QUmlObjectFlow::target() const
{
    return reinterpret_cast<QUmlActivityNode *>(_target);
}

/*!
    The minimum number of tokens that must traverse the edge at the same time.
 */
QUmlValueSpecification *QUmlObjectFlow::weight() const
{
    return reinterpret_cast<QUmlValueSpecification *>(_weight);
}

// OWNED ATTRIBUTES [ObjectFlow]

/*!
    Tells whether the objects in the flow are passed by multicasting.
 */
bool QUmlObjectFlow::isMulticast() const
{
    return _isMulticast;
}

/*!
    Tells whether the objects in the flow are gathered from respondents to multicasting.
 */
bool QUmlObjectFlow::isMultireceive() const
{
    return _isMultireceive;
}

/*!
    Selects tokens from a source object node.
 */
QUmlBehavior *QUmlObjectFlow::selection() const
{
    return reinterpret_cast<QUmlBehavior *>(_selection);
}

/*!
    Changes or replaces data tokens flowing along edge.
 */
QUmlBehavior *QUmlObjectFlow::transformation() const
{
    return reinterpret_cast<QUmlBehavior *>(_transformation);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlObjectFlow::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlObjectFlow::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlObjectFlow::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlObjectFlow::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlObjectFlow::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlObjectFlow::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [RedefinableElement]

/*!
    The query isConsistentWith() specifies, for any two RedefinableElements in a context in which redefinition is possible, whether redefinition would be logically consistent. By default, this is false; this operation must be overridden for subclasses of RedefinableElement to define the consistency conditions.
 */
bool QUmlObjectFlow::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlRedefinableElement::isConsistentWith(redefinee);
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlObjectFlow::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlObjectFlow::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlObjectFlow::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlObjectFlow::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlObjectFlow::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlObjectFlow::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlObjectFlow::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlObjectFlow::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlObjectFlow::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityEdge]

void QUmlObjectFlow::setActivity(QUmlActivity *activity)
{
    UmlActivityEdge::setActivity(activity);
}

void QUmlObjectFlow::setGuard(QUmlValueSpecification *guard)
{
    UmlActivityEdge::setGuard(guard);
}

void QUmlObjectFlow::addInPartition(UmlActivityPartition *inPartition)
{
    UmlActivityEdge::addInPartition(inPartition);
}

void QUmlObjectFlow::removeInPartition(UmlActivityPartition *inPartition)
{
    UmlActivityEdge::removeInPartition(inPartition);
}

void QUmlObjectFlow::setInStructuredNode(QUmlStructuredActivityNode *inStructuredNode)
{
    UmlActivityEdge::setInStructuredNode(inStructuredNode);
}

void QUmlObjectFlow::setInterrupts(QUmlInterruptibleActivityRegion *interrupts)
{
    UmlActivityEdge::setInterrupts(interrupts);
}

void QUmlObjectFlow::addRedefinedEdge(UmlActivityEdge *redefinedEdge)
{
    UmlActivityEdge::addRedefinedEdge(redefinedEdge);
}

void QUmlObjectFlow::removeRedefinedEdge(UmlActivityEdge *redefinedEdge)
{
    UmlActivityEdge::removeRedefinedEdge(redefinedEdge);
}

void QUmlObjectFlow::setSource(QUmlActivityNode *source)
{
    UmlActivityEdge::setSource(source);
}

void QUmlObjectFlow::setTarget(QUmlActivityNode *target)
{
    UmlActivityEdge::setTarget(target);
}

void QUmlObjectFlow::setWeight(QUmlValueSpecification *weight)
{
    UmlActivityEdge::setWeight(weight);
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectFlow]

void QUmlObjectFlow::setMulticast(bool isMulticast)
{
    UmlObjectFlow::setMulticast(isMulticast);
}

void QUmlObjectFlow::setMultireceive(bool isMultireceive)
{
    UmlObjectFlow::setMultireceive(isMultireceive);
}

void QUmlObjectFlow::setSelection(QUmlBehavior *selection)
{
    UmlObjectFlow::setSelection(selection);
}

void QUmlObjectFlow::setTransformation(QUmlBehavior *transformation)
{
    UmlObjectFlow::setTransformation(transformation);
}

QT_END_NAMESPACE

