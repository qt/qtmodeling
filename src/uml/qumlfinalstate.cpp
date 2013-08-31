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
#include "qumlfinalstate.h"

#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

/*!
    \class UmlFinalState

    \inmodule QtUml

    \brief A special kind of state signifying that the enclosing region is completed. If the enclosing region is directly contained in a state machine and all other regions in the state machine also are completed, then it means that the entire state machine is completed.
 */

QUmlFinalState::QUmlFinalState(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlFinalState::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlFinalState::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlFinalState::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlFinalState::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlFinalState::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlFinalState::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlFinalState::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlFinalState::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlFinalState::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlFinalState::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlFinalState::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlFinalState::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlFinalState::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlFinalState::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlFinalState::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlFinalState::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlFinalState::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}
// OWNED ATTRIBUTES [Vertex]

/*!
    The region that contains this vertex.
 */
QUmlRegion *QUmlFinalState::container() const
{
    return reinterpret_cast<QUmlRegion *>(_container);
}

/*!
    Specifies the transitions entering this vertex.
 */
const QSet<QUmlTransition *> QUmlFinalState::incoming() const
{
    QSet<QUmlTransition *> r;
    foreach (UmlTransition *element, UmlVertex::incoming())
        r.insert(reinterpret_cast<QUmlTransition *>(element));
    return r;
}

/*!
    Specifies the transitions departing from this vertex.
 */
const QSet<QUmlTransition *> QUmlFinalState::outgoing() const
{
    QSet<QUmlTransition *> r;
    foreach (UmlTransition *element, UmlVertex::outgoing())
        r.insert(reinterpret_cast<QUmlTransition *>(element));
    return r;
}

// OWNED ATTRIBUTES [State]

/*!
    The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate.
 */
const QSet<QUmlConnectionPointReference *> QUmlFinalState::connection() const
{
    return *(reinterpret_cast<const QSet<QUmlConnectionPointReference *> *>(&_connection));
}

/*!
    The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states.
 */
const QSet<QUmlPseudostate *> QUmlFinalState::connectionPoint() const
{
    return *(reinterpret_cast<const QSet<QUmlPseudostate *> *>(&_connectionPoint));
}

/*!
    A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred.
 */
const QSet<QUmlTrigger *> QUmlFinalState::deferrableTrigger() const
{
    return *(reinterpret_cast<const QSet<QUmlTrigger *> *>(&_deferrableTrigger));
}

/*!
    An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first.
 */
QUmlBehavior *QUmlFinalState::doActivity() const
{
    return reinterpret_cast<QUmlBehavior *>(_doActivity);
}

/*!
    An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state.
 */
QUmlBehavior *QUmlFinalState::entry() const
{
    return reinterpret_cast<QUmlBehavior *>(_entry);
}

/*!
    An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution.
 */
QUmlBehavior *QUmlFinalState::exit() const
{
    return reinterpret_cast<QUmlBehavior *>(_exit);
}

/*!
    A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region.
 */
bool QUmlFinalState::isComposite() const
{
    return UmlState::isComposite();
}

/*!
    A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions.
 */
bool QUmlFinalState::isOrthogonal() const
{
    return UmlState::isOrthogonal();
}

/*!
    A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine.
 */
bool QUmlFinalState::isSimple() const
{
    return UmlState::isSimple();
}

/*!
    A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine).
 */
bool QUmlFinalState::isSubmachineState() const
{
    return UmlState::isSubmachineState();
}

/*!
    The state of which this state is a redefinition.
 */
QUmlState *QUmlFinalState::redefinedState() const
{
    return reinterpret_cast<QUmlState *>(_redefinedState);
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlFinalState::redefinitionContext() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlState::redefinitionContext());
}

/*!
    The regions owned directly by the state.
 */
const QSet<QUmlRegion *> QUmlFinalState::region() const
{
    return *(reinterpret_cast<const QSet<QUmlRegion *> *>(&_region));
}

/*!
    Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions.
 */
QUmlConstraint *QUmlFinalState::stateInvariant() const
{
    return reinterpret_cast<QUmlConstraint *>(_stateInvariant);
}

/*!
    The state machine that is to be inserted in place of the (submachine) state.
 */
QUmlStateMachine *QUmlFinalState::submachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(_submachine);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlFinalState::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlFinalState::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlFinalState::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlFinalState::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlFinalState::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlFinalState::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlFinalState::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlFinalState::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlFinalState::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlFinalState::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]
// OPERATIONS [Vertex]
// OPERATIONS [State]

/*!
    The query containingStateMachine() returns the state machine that contains the state either directly or transitively.
 */
QUmlStateMachine *QUmlFinalState::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlState::containingStateMachine());
}

/*!
    The query isConsistentWith() specifies that a redefining state is consistent with a redefined state provided that the redefining state is an extension of the redefined state: A simple state can be redefined (extended) to become a composite state (by adding a region) and a composite state can be redefined (extended) by adding regions and by adding vertices, states, and transitions to inherited regions. All states may add or replace entry, exit, and 'doActivity' actions.
 */
bool QUmlFinalState::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlState::isConsistentWith(redefinee);
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a state are properly related to the redefinition contexts of the specified state to allow this element to redefine the other. The containing region of a redefining state must redefine the containing region of the redefined state.
 */
bool QUmlFinalState::isRedefinitionContextValid(QUmlState *redefined) const
{
    return UmlState::isRedefinitionContextValid(redefined);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlFinalState::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlFinalState::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlFinalState::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlFinalState::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlFinalState::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlFinalState::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlFinalState::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlFinalState::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlFinalState::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlFinalState::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlFinalState::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlFinalState::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlFinalState::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlFinalState::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}
// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlFinalState::setContainer(QUmlRegion *container)
{
    UmlVertex::setContainer(container);
}

// SLOTS FOR OWNED ATTRIBUTES [State]

void QUmlFinalState::addConnection(UmlConnectionPointReference *connection)
{
    UmlState::addConnection(connection);
}

void QUmlFinalState::removeConnection(UmlConnectionPointReference *connection)
{
    UmlState::removeConnection(connection);
}

void QUmlFinalState::addConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlState::addConnectionPoint(connectionPoint);
}

void QUmlFinalState::removeConnectionPoint(UmlPseudostate *connectionPoint)
{
    UmlState::removeConnectionPoint(connectionPoint);
}

void QUmlFinalState::addDeferrableTrigger(UmlTrigger *deferrableTrigger)
{
    UmlState::addDeferrableTrigger(deferrableTrigger);
}

void QUmlFinalState::removeDeferrableTrigger(UmlTrigger *deferrableTrigger)
{
    UmlState::removeDeferrableTrigger(deferrableTrigger);
}

void QUmlFinalState::setDoActivity(QUmlBehavior *doActivity)
{
    UmlState::setDoActivity(doActivity);
}

void QUmlFinalState::setEntry(QUmlBehavior *entry)
{
    UmlState::setEntry(entry);
}

void QUmlFinalState::setExit(QUmlBehavior *exit)
{
    UmlState::setExit(exit);
}

void QUmlFinalState::setRedefinedState(QUmlState *redefinedState)
{
    UmlState::setRedefinedState(redefinedState);
}

void QUmlFinalState::addRegion(UmlRegion *region)
{
    UmlState::addRegion(region);
}

void QUmlFinalState::removeRegion(UmlRegion *region)
{
    UmlState::removeRegion(region);
}

void QUmlFinalState::setStateInvariant(QUmlConstraint *stateInvariant)
{
    UmlState::setStateInvariant(stateInvariant);
}

void QUmlFinalState::setSubmachine(QUmlStateMachine *submachine)
{
    UmlState::setSubmachine(submachine);
}

QT_END_NAMESPACE

