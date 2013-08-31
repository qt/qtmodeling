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
#include "qumlprotocoltransition.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

/*!
    \class UmlProtocolTransition

    \inmodule QtUml

    \brief A protocol transition specifies a legal transition for an operation. Transitions of protocol state machines have the following information: a pre condition (guard), on trigger, and a post condition. Every protocol transition is associated to zero or one operation (referred BehavioralFeature) that belongs to the context classifier of the protocol state machine.
 */

QUmlProtocolTransition::QUmlProtocolTransition(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlProtocolTransition::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlProtocolTransition::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlProtocolTransition::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlProtocolTransition::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlProtocolTransition::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlProtocolTransition::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlProtocolTransition::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlProtocolTransition::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlProtocolTransition::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlProtocolTransition::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlProtocolTransition::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}
// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlProtocolTransition::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlProtocolTransition::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlProtocolTransition::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlProtocolTransition::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlProtocolTransition::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlProtocolTransition::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [Transition]

/*!
    Designates the region that owns this transition.
 */
QUmlRegion *QUmlProtocolTransition::container() const
{
    return reinterpret_cast<QUmlRegion *>(_container);
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QUmlBehavior *QUmlProtocolTransition::effect() const
{
    return reinterpret_cast<QUmlBehavior *>(_effect);
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QUmlConstraint *QUmlProtocolTransition::guard() const
{
    return reinterpret_cast<QUmlConstraint *>(_guard);
}

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QUmlProtocolTransition::kind() const
{
    return _kind;
}

/*!
    The transition that is redefined by this transition.
 */
QUmlTransition *QUmlProtocolTransition::redefinedTransition() const
{
    return reinterpret_cast<QUmlTransition *>(_redefinedTransition);
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlProtocolTransition::redefinitionContext() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlTransition::redefinitionContext());
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QUmlVertex *QUmlProtocolTransition::source() const
{
    return reinterpret_cast<QUmlVertex *>(_source);
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QUmlVertex *QUmlProtocolTransition::target() const
{
    return reinterpret_cast<QUmlVertex *>(_target);
}

/*!
    Specifies the triggers that may fire the transition.
 */
const QSet<QUmlTrigger *> QUmlProtocolTransition::trigger() const
{
    return *(reinterpret_cast<const QSet<QUmlTrigger *> *>(&_trigger));
}

// OWNED ATTRIBUTES [ProtocolTransition]

/*!
    Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition.
 */
QUmlConstraint *QUmlProtocolTransition::postCondition() const
{
    return reinterpret_cast<QUmlConstraint *>(_postCondition);
}

/*!
    Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any.
 */
QUmlConstraint *QUmlProtocolTransition::preCondition() const
{
    return reinterpret_cast<QUmlConstraint *>(_preCondition);
}

/*!
    This association refers to the associated operation. It is derived from the operation of the call trigger when applicable.
 */
const QSet<QUmlOperation *> QUmlProtocolTransition::referred() const
{
    QSet<QUmlOperation *> r;
    foreach (UmlOperation *element, UmlProtocolTransition::referred())
        r.insert(reinterpret_cast<QUmlOperation *>(element));
    return r;
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlProtocolTransition::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlProtocolTransition::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlProtocolTransition::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlProtocolTransition::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlProtocolTransition::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlProtocolTransition::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [RedefinableElement]

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlProtocolTransition::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlProtocolTransition::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlProtocolTransition::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlProtocolTransition::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlProtocolTransition::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [Transition]

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QUmlStateMachine *QUmlProtocolTransition::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlTransition::containingStateMachine());
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QUmlProtocolTransition::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlTransition::isConsistentWith(redefinee);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolTransition::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlProtocolTransition::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProtocolTransition::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlProtocolTransition::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlProtocolTransition::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlProtocolTransition::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlProtocolTransition::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlProtocolTransition::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProtocolTransition::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlProtocolTransition::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlProtocolTransition::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlProtocolTransition::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlProtocolTransition::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlProtocolTransition::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [Transition]

void QUmlProtocolTransition::setContainer(QUmlRegion *container)
{
    UmlTransition::setContainer(container);
}

void QUmlProtocolTransition::setEffect(QUmlBehavior *effect)
{
    UmlTransition::setEffect(effect);
}

void QUmlProtocolTransition::setGuard(QUmlConstraint *guard)
{
    UmlTransition::setGuard(guard);
}

void QUmlProtocolTransition::setKind(QtUml::TransitionKind kind)
{
    UmlTransition::setKind(kind);
}

void QUmlProtocolTransition::setRedefinedTransition(QUmlTransition *redefinedTransition)
{
    UmlTransition::setRedefinedTransition(redefinedTransition);
}

void QUmlProtocolTransition::setSource(QUmlVertex *source)
{
    UmlTransition::setSource(source);
}

void QUmlProtocolTransition::setTarget(QUmlVertex *target)
{
    UmlTransition::setTarget(target);
}

void QUmlProtocolTransition::addTrigger(UmlTrigger *trigger)
{
    UmlTransition::addTrigger(trigger);
}

void QUmlProtocolTransition::removeTrigger(UmlTrigger *trigger)
{
    UmlTransition::removeTrigger(trigger);
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolTransition]

void QUmlProtocolTransition::setPostCondition(QUmlConstraint *postCondition)
{
    UmlProtocolTransition::setPostCondition(postCondition);
}

void QUmlProtocolTransition::setPreCondition(QUmlConstraint *preCondition)
{
    UmlProtocolTransition::setPreCondition(preCondition);
}

QT_END_NAMESPACE

