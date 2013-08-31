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
#include "qumltransition.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

/*!
    \class UmlTransition

    \inmodule QtUml

    \brief A transition is a directed relationship between a source vertex and a target vertex. It may be part of a compound transition, which takes the state machine from one state configuration to another, representing the complete response of the state machine to an occurrence of an event of a particular type.
 */

QUmlTransition::QUmlTransition(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlTransition::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlTransition::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlTransition::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlTransition::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlTransition::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlTransition::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlTransition::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlTransition::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlTransition::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlTransition::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlTransition::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}
// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlTransition::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlTransition::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlTransition::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlTransition::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlTransition::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlTransition::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [Transition]

/*!
    Designates the region that owns this transition.
 */
QUmlRegion *QUmlTransition::container() const
{
    return reinterpret_cast<QUmlRegion *>(_container);
}

/*!
    Specifies an optional behavior to be performed when the transition fires.
 */
QUmlBehavior *QUmlTransition::effect() const
{
    return reinterpret_cast<QUmlBehavior *>(_effect);
}

/*!
    A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed.
 */
QUmlConstraint *QUmlTransition::guard() const
{
    return reinterpret_cast<QUmlConstraint *>(_guard);
}

/*!
    Indicates the precise type of the transition.
 */
QtUml::TransitionKind QUmlTransition::kind() const
{
    return _kind;
}

/*!
    The transition that is redefined by this transition.
 */
QUmlTransition *QUmlTransition::redefinedTransition() const
{
    return reinterpret_cast<QUmlTransition *>(_redefinedTransition);
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlTransition::redefinitionContext() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlTransition::redefinitionContext());
}

/*!
    Designates the originating vertex (state or pseudostate) of the transition.
 */
QUmlVertex *QUmlTransition::source() const
{
    return reinterpret_cast<QUmlVertex *>(_source);
}

/*!
    Designates the target vertex that is reached when the transition is taken.
 */
QUmlVertex *QUmlTransition::target() const
{
    return reinterpret_cast<QUmlVertex *>(_target);
}

/*!
    Specifies the triggers that may fire the transition.
 */
const QSet<QUmlTrigger *> QUmlTransition::trigger() const
{
    return *(reinterpret_cast<const QSet<QUmlTrigger *> *>(&_trigger));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlTransition::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlTransition::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlTransition::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlTransition::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlTransition::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlTransition::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [RedefinableElement]

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of this RedefinableElement are properly related to the redefinition contexts of the specified RedefinableElement to allow this element to redefine the other. By default at least one of the redefinition contexts of this element must be a specialization of at least one of the redefinition contexts of the specified element.
 */
bool QUmlTransition::isRedefinitionContextValid(QUmlRedefinableElement *redefined) const
{
    return UmlRedefinableElement::isRedefinitionContextValid(redefined);
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlTransition::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlTransition::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlTransition::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlTransition::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [Transition]

/*!
    The query containingStateMachine() returns the state machine that contains the transition either directly or transitively.
 */
QUmlStateMachine *QUmlTransition::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlTransition::containingStateMachine());
}

/*!
    The query isConsistentWith() specifies that a redefining transition is consistent with a redefined transition provided that the redefining transition has the following relation to the redefined transition: A redefining transition redefines all properties of the corresponding redefined transition, except the source state and the trigger.
 */
bool QUmlTransition::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlTransition::isConsistentWith(redefinee);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTransition::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlTransition::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTransition::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlTransition::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlTransition::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlTransition::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlTransition::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlTransition::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlTransition::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlTransition::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlTransition::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlTransition::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlTransition::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlTransition::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [Transition]

void QUmlTransition::setContainer(QUmlRegion *container)
{
    UmlTransition::setContainer(container);
}

void QUmlTransition::setEffect(QUmlBehavior *effect)
{
    UmlTransition::setEffect(effect);
}

void QUmlTransition::setGuard(QUmlConstraint *guard)
{
    UmlTransition::setGuard(guard);
}

void QUmlTransition::setKind(QtUml::TransitionKind kind)
{
    UmlTransition::setKind(kind);
}

void QUmlTransition::setRedefinedTransition(QUmlTransition *redefinedTransition)
{
    UmlTransition::setRedefinedTransition(redefinedTransition);
}

void QUmlTransition::setSource(QUmlVertex *source)
{
    UmlTransition::setSource(source);
}

void QUmlTransition::setTarget(QUmlVertex *target)
{
    UmlTransition::setTarget(target);
}

void QUmlTransition::addTrigger(UmlTrigger *trigger)
{
    UmlTransition::addTrigger(trigger);
}

void QUmlTransition::removeTrigger(UmlTrigger *trigger)
{
    UmlTransition::removeTrigger(trigger);
}

QT_END_NAMESPACE

