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
#include "qumlregion.h"

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
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

/*!
    \class UmlRegion

    \inmodule QtUml

    \brief A region is an orthogonal part of either a composite state or a state machine. It contains states and transitions.
 */

QUmlRegion::QUmlRegion(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlRegion::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlRegion::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlRegion::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlRegion::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlRegion::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlRegion::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlRegion::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlRegion::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlRegion::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [RedefinableElement]

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlRegion::isLeaf() const
{
    return _isLeaf;
}

/*!
    The redefinable element that is being redefined by this element.
 */
const QSet<QUmlRedefinableElement *> QUmlRegion::redefinedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlRedefinableElement *> *>(&_redefinedElement));
}
// OWNED ATTRIBUTES [Namespace]

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QUmlElementImport *> QUmlRegion::elementImport() const
{
    return *(reinterpret_cast<const QSet<QUmlElementImport *> *>(&_elementImport));
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QUmlPackageableElement *> QUmlRegion::importedMember() const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importedMember())
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QUmlNamedElement *> QUmlRegion::member() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_member));
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QUmlNamedElement *> QUmlRegion::ownedMember() const
{
    return *(reinterpret_cast<const QSet<QUmlNamedElement *> *>(&_ownedMember));
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QUmlConstraint *> QUmlRegion::ownedRule() const
{
    return *(reinterpret_cast<const QSet<QUmlConstraint *> *>(&_ownedRule));
}

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QUmlPackageImport *> QUmlRegion::packageImport() const
{
    return *(reinterpret_cast<const QSet<QUmlPackageImport *> *>(&_packageImport));
}

// OWNED ATTRIBUTES [Region]

/*!
    The region of which this region is an extension.
 */
QUmlRegion *QUmlRegion::extendedRegion() const
{
    return reinterpret_cast<QUmlRegion *>(_extendedRegion);
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlRegion::redefinitionContext() const
{
    return reinterpret_cast<QUmlClassifier *>(UmlRegion::redefinitionContext());
}

/*!
    The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.
 */
QUmlState *QUmlRegion::state() const
{
    return reinterpret_cast<QUmlState *>(_state);
}

/*!
    The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.
 */
QUmlStateMachine *QUmlRegion::stateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(_stateMachine);
}

/*!
    The set of vertices that are owned by this region.
 */
const QSet<QUmlVertex *> QUmlRegion::subvertex() const
{
    return *(reinterpret_cast<const QSet<QUmlVertex *> *>(&_subvertex));
}

/*!
    The set of transitions owned by the region.
 */
const QSet<QUmlTransition *> QUmlRegion::transition() const
{
    return *(reinterpret_cast<const QSet<QUmlTransition *> *>(&_transition));
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlRegion::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlRegion::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlRegion::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlRegion::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlRegion::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlRegion::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [RedefinableElement]
// OPERATIONS [Namespace]

/*!
    The query excludeCollisions() excludes from a set of PackageableElements any that would not be distinguishable from each other in this namespace.
 */
QSet<QUmlPackageableElement *> QUmlRegion::excludeCollisions(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::excludeCollisions(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The query getNamesOfMember() gives a set of all of the names that a member would have in a Namespace. In general a member can have multiple names in a Namespace if it is imported more than once with different aliases. The query takes account of importing. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.The query getNamesOfMember() takes importing into account. It gives back the set of names that an element would have in an importing namespace, either because it is owned, or if not owned then imported individually, or if not individually then from a package.
 */
QSet<QString> QUmlRegion::getNamesOfMember(QUmlNamedElement *element) const
{
    return UmlNamespace::getNamesOfMember(element);
}

/*!
    The query importMembers() defines which of a set of PackageableElements are actually imported into the namespace. This excludes hidden ones, i.e., those which have names that conflict with names of owned members, and also excludes elements which would have the same name when imported.
 */
QSet<QUmlPackageableElement *> QUmlRegion::importMembers(QSet<QUmlPackageableElement *> imps) const
{
    QSet<QUmlPackageableElement *> r;
    foreach (UmlPackageableElement *element, UmlNamespace::importMembers(*(reinterpret_cast<QSet<UmlPackageableElement *> *>(&imps))))
        r.insert(reinterpret_cast<QUmlPackageableElement *>(element));
    return r;
}

/*!
    The Boolean query membersAreDistinguishable() determines whether all of the namespace's members are distinguishable within it.
 */
bool QUmlRegion::membersAreDistinguishable() const
{
    return UmlNamespace::membersAreDistinguishable();
}

// OPERATIONS [Region]

/*!
    The operation belongsToPSM () checks if the region belongs to a protocol state machine
 */
bool QUmlRegion::belongsToPSM() const
{
    return UmlRegion::belongsToPSM();
}

/*!
    The operation containingStateMachine() returns the sate machine in which this Region is defined
 */
QUmlStateMachine *QUmlRegion::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlRegion::containingStateMachine());
}

/*!
    The query isConsistentWith() specifies that a redefining region is consistent with a redefined region provided that the redefining region is an extension of the redefined region, i.e. it adds vertices and transitions and it redefines states and transitions of the redefined region.
 */
bool QUmlRegion::isConsistentWith(QUmlRedefinableElement *redefinee) const
{
    return UmlRegion::isConsistentWith(redefinee);
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a region are properly related to the redefinition contexts of the specified region to allow this element to redefine the other. The containing statemachine/state of a redefining region must redefine the containing statemachine/state of the redefined region.
 */
bool QUmlRegion::isRedefinitionContextValid(QUmlRegion *redefined) const
{
    return UmlRegion::isRedefinitionContextValid(redefined);
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRegion::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlRegion::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRegion::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlRegion::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlRegion::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlRegion::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlRegion::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRegion::setLeaf(bool isLeaf)
{
    UmlRedefinableElement::setLeaf(isLeaf);
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlRegion::addElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::addElementImport(elementImport);
}

void QUmlRegion::removeElementImport(UmlElementImport *elementImport)
{
    UmlNamespace::removeElementImport(elementImport);
}

void QUmlRegion::addOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::addOwnedRule(ownedRule);
}

void QUmlRegion::removeOwnedRule(UmlConstraint *ownedRule)
{
    UmlNamespace::removeOwnedRule(ownedRule);
}

void QUmlRegion::addPackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::addPackageImport(packageImport);
}

void QUmlRegion::removePackageImport(UmlPackageImport *packageImport)
{
    UmlNamespace::removePackageImport(packageImport);
}

// SLOTS FOR OWNED ATTRIBUTES [Region]

void QUmlRegion::setExtendedRegion(QUmlRegion *extendedRegion)
{
    UmlRegion::setExtendedRegion(extendedRegion);
}

void QUmlRegion::setState(QUmlState *state)
{
    UmlRegion::setState(state);
}

void QUmlRegion::setStateMachine(QUmlStateMachine *stateMachine)
{
    UmlRegion::setStateMachine(stateMachine);
}

void QUmlRegion::addSubvertex(UmlVertex *subvertex)
{
    UmlRegion::addSubvertex(subvertex);
}

void QUmlRegion::removeSubvertex(UmlVertex *subvertex)
{
    UmlRegion::removeSubvertex(subvertex);
}

void QUmlRegion::addTransition(UmlTransition *transition)
{
    UmlRegion::addTransition(transition);
}

void QUmlRegion::removeTransition(UmlTransition *transition)
{
    UmlRegion::removeTransition(transition);
}

QT_END_NAMESPACE

