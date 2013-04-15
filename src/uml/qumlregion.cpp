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
#include "qumlregion_p.h"

#include <QtUml/QUmlVertex>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlState>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlRegionPrivate::QUmlRegionPrivate() :
    extendedRegion(0),
    stateMachine(0),
    state(0)
{
}

QUmlRegionPrivate::~QUmlRegionPrivate()
{
}

/*!
    \class QUmlRegion

    \inmodule QtUml

    \brief A region is an orthogonal part of either a composite state or a state machine. It contains states and transitions.
 */

QUmlRegion::QUmlRegion(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlRegionPrivate, wrapper, parent),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this))
{
    setPropertyData();
}

QUmlRegion::QUmlRegion(QUmlRegionPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlRedefinableElement(new QUmlRedefinableElement(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this))
{
    setPropertyData();
}

QUmlRegion::~QUmlRegion()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlRegion::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlRegion::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlRegion::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlRegion::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlRegion::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlRegion::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlRegion::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlRegion::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlRegion::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlRegion::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlRegion::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlRegion::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlRegion::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlRegion::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlRegion::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlRegion::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false.
 */
bool QUmlRegion::isLeaf() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->isLeaf();
}

void QUmlRegion::setLeaf(bool isLeaf)
{
    (qwrappedobject_cast<QUmlRedefinableElement *>(this))->setLeaf(isLeaf);
}

void QUmlRegion::unsetLeaf()
{
    setLeaf(false);
    Q_D(QUmlRegion);
    d->modifiedResettableProperties.removeAll(QString::fromLatin1("isLeaf"));
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlRedefinableElement
// ---------------------------------------------------------------

/*!
    The redefinable element that is being redefined by this element.
 */
QSet<QUmlRedefinableElement *> QUmlRegion::redefinedElements() const
{
    return (qwrappedobject_cast<const QUmlRedefinableElement *>(this))->redefinedElements();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlRegion::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlRegion::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlRegion::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlRegion::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlRegion::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlRegion::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlRegion::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlRegion::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlRegion::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlRegion::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlRegion::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlRegion::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlRegion
// ---------------------------------------------------------------

/*!
    The region of which this region is an extension.
 */
QUmlRegion *QUmlRegion::extendedRegion() const
{
    // This is a read-write association end

    Q_D(const QUmlRegion);
    return d->extendedRegion;
}

void QUmlRegion::setExtendedRegion(QUmlRegion *extendedRegion)
{
    // This is a read-write association end

    Q_D(QUmlRegion);
    if (d->extendedRegion != extendedRegion) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->removeRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(d->extendedRegion));

        d->extendedRegion = extendedRegion;

        // Adjust subsetted property(ies)
        if (extendedRegion) {
            (qwrappedobject_cast<QUmlRedefinableElementPrivate *>(d))->addRedefinedElement(qwrappedobject_cast<QUmlRedefinableElement *>(extendedRegion));
        }
    }
}

/*!
    The set of transitions owned by the region.
 */
QSet<QUmlTransition *> QUmlRegion::transitions() const
{
    // This is a read-write association end

    Q_D(const QUmlRegion);
    return d->transitions;
}

void QUmlRegion::addTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    Q_D(QUmlRegion);
    if (!d->transitions.contains(transition)) {
        d->transitions.insert(transition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(transition));

        // Adjust opposite property
        transition->setContainer(this);
    }
}

void QUmlRegion::removeTransition(QUmlTransition *transition)
{
    // This is a read-write association end

    Q_D(QUmlRegion);
    if (d->transitions.contains(transition)) {
        d->transitions.remove(transition);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(transition));

        // Adjust opposite property
        transition->setContainer(0);
    }
}

/*!
    The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.
 */
QUmlStateMachine *QUmlRegion::stateMachine() const
{
    // This is a read-write association end

    Q_D(const QUmlRegion);
    return d->stateMachine;
}

void QUmlRegion::setStateMachine(QUmlStateMachine *stateMachine)
{
    // This is a read-write association end

    Q_D(QUmlRegion);
    if (d->stateMachine != stateMachine) {
        // Adjust opposite property
        if (d->stateMachine)
            d->stateMachine->removeRegion(this);

        d->stateMachine = stateMachine;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(stateMachine));

        // Adjust opposite property
        if (stateMachine)
            stateMachine->addRegion(this);
    }
}

/*!
    The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.
 */
QUmlState *QUmlRegion::state() const
{
    // This is a read-write association end

    Q_D(const QUmlRegion);
    return d->state;
}

void QUmlRegion::setState(QUmlState *state)
{
    // This is a read-write association end

    Q_D(QUmlRegion);
    if (d->state != state) {
        // Adjust opposite property
        if (d->state)
            d->state->removeRegion(this);

        d->state = state;

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamedElementPrivate *>(d))->setNamespace_(qwrappedobject_cast<QUmlNamespace *>(state));

        // Adjust opposite property
        if (state)
            state->addRegion(this);
    }
}

/*!
    References the classifier in which context this element may be redefined.
 */
QUmlClassifier *QUmlRegion::redefinitionContext() const
{
    // This is a read-only derived association end

    qWarning("QUmlRegion::redefinitionContext: to be implemented (this is a derived associationend)");

    return 0; // change here to your derived return
}

/*!
    The set of vertices that are owned by this region.
 */
QSet<QUmlVertex *> QUmlRegion::subvertices() const
{
    // This is a read-write association end

    Q_D(const QUmlRegion);
    return d->subvertices;
}

void QUmlRegion::addSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    Q_D(QUmlRegion);
    if (!d->subvertices.contains(subvertex)) {
        d->subvertices.insert(subvertex);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(subvertex));

        // Adjust opposite property
        subvertex->setContainer(this);
    }
}

void QUmlRegion::removeSubvertex(QUmlVertex *subvertex)
{
    // This is a read-write association end

    Q_D(QUmlRegion);
    if (d->subvertices.contains(subvertex)) {
        d->subvertices.remove(subvertex);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(subvertex));

        // Adjust opposite property
        subvertex->setContainer(0);
    }
}

/*!
    The operation belongsToPSM () checks if the region belongs to a protocol state machine
 */
bool QUmlRegion::belongsToPSM() const
{
    qWarning("QUmlRegion::belongsToPSM: operation to be implemented");

    return bool(); // change here to your derived return
}

/*!
    The operation containingStateMachine() returns the sate machine in which this Region is defined
 */
QUmlStateMachine *QUmlRegion::containingStateMachine() const
{
    qWarning("QUmlRegion::containingStateMachine: operation to be implemented");

    return 0; // change here to your derived return
}

/*!
    The query isConsistentWith() specifies that a redefining region is consistent with a redefined region provided that the redefining region is an extension of the redefined region, i.e. it adds vertices and transitions and it redefines states and transitions of the redefined region.
 */
bool QUmlRegion::isConsistentWith(const QUmlRedefinableElement *redefinee) const
{
    qWarning("QUmlRegion::isConsistentWith: operation to be implemented");
    Q_UNUSED(redefinee);

    return bool(); // change here to your derived return
}

/*!
    The query isRedefinitionContextValid() specifies whether the redefinition contexts of a region are properly related to the redefinition contexts of the specified region to allow this element to redefine the other. The containing statemachine/state of a redefining region must redefine the containing statemachine/state of the redefined region.
 */
bool QUmlRegion::isRedefinitionContextValid(const QUmlRegion *redefined) const
{
    qWarning("QUmlRegion::isRedefinitionContextValid: operation to be implemented");
    Q_UNUSED(redefined);

    return bool(); // change here to your derived return
}

void QUmlRegion::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("extendedRegion")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("extendedRegion")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("extendedRegion")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The region of which this region is an extension.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("extendedRegion")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("extendedRegion")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("extendedRegion")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("transitions")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("transitions")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("transitions")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of transitions owned by the region.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("transitions")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("transitions")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("transitions")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlTransition::container");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("stateMachine")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("stateMachine")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("stateMachine")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("stateMachine")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("stateMachine")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("stateMachine")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlStateMachine::region");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("state")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("state")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("state")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("state")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("state")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamedElement::namespace");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("state")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlState::region");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("none");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("References the classifier in which context this element may be redefined.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("QUmlRedefinableElement::redefinitionContexts");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("redefinitionContext")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("subvertices")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("subvertices")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("subvertices")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The set of vertices that are owned by this region.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("subvertices")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("subvertices")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlRegion")][QString::fromLatin1("subvertices")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlVertex::container");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlregion.cpp"

