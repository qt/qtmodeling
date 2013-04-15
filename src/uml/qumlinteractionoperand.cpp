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
#include "qumlinteractionoperand.h"
#include "qumlinteractionoperand_p.h"

#include <QtUml/QUmlInteractionConstraint>

#include <QtWrappedObjects/QtWrappedObjectsNamespace>

QT_BEGIN_NAMESPACE

QUmlInteractionOperandPrivate::QUmlInteractionOperandPrivate() :
    guard(0)
{
}

QUmlInteractionOperandPrivate::~QUmlInteractionOperandPrivate()
{
}

/*!
    \class QUmlInteractionOperand

    \inmodule QtUml

    \brief An interaction operand is contained in a combined fragment. An interaction operand represents one operand of the expression given by the enclosing combined fragment.
 */

QUmlInteractionOperand::QUmlInteractionOperand(QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(*new QUmlInteractionOperandPrivate, wrapper, parent),
    _wrappedUmlInteractionFragment(new QUmlInteractionFragment(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this))
{
    setPropertyData();
}

QUmlInteractionOperand::QUmlInteractionOperand(QUmlInteractionOperandPrivate &dd, QWrappedObject *wrapper, QWrappedObject *parent) :
    QWrappedObject(dd, wrapper, parent),
    _wrappedUmlInteractionFragment(new QUmlInteractionFragment(this)),
    _wrappedUmlNamespace(new QUmlNamespace(this))
{
    setPropertyData();
}

QUmlInteractionOperand::~QUmlInteractionOperand()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
QSet<QUmlElement *> QUmlInteractionOperand::ownedElements() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlInteractionOperand::owner() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
QSet<QUmlComment *> QUmlInteractionOperand::ownedComments() const
{
    return (qwrappedobject_cast<const QUmlElement *>(this))->ownedComments();
}

void QUmlInteractionOperand::addOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->addOwnedComment(ownedComment);
}

void QUmlInteractionOperand::removeOwnedComment(QUmlComment *ownedComment)
{
    (qwrappedobject_cast<QUmlElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QUmlInteractionOperand::name() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->name();
}

void QUmlInteractionOperand::setName(QString name)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlInteractionOperand::visibility() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->visibility();
}

void QUmlInteractionOperand::setVisibility(QtUml::VisibilityKind visibility)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlInteractionOperand::qualifiedName() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlInteractionOperand::nameExpression() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->nameExpression();
}

void QUmlInteractionOperand::setNameExpression(QUmlStringExpression *nameExpression)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlInteractionOperand::namespace_() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
QSet<QUmlDependency *> QUmlInteractionOperand::clientDependencies() const
{
    return (qwrappedobject_cast<const QUmlNamedElement *>(this))->clientDependencies();
}

void QUmlInteractionOperand::addClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->addClientDependency(clientDependency);
}

void QUmlInteractionOperand::removeClientDependency(QUmlDependency *clientDependency)
{
    (qwrappedobject_cast<QUmlNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlInteractionFragment
// ---------------------------------------------------------------

/*!
    The general ordering relationships contained in this fragment.
 */
QSet<QUmlGeneralOrdering *> QUmlInteractionOperand::generalOrderings() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->generalOrderings();
}

void QUmlInteractionOperand::addGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->addGeneralOrdering(generalOrdering);
}

void QUmlInteractionOperand::removeGeneralOrdering(QUmlGeneralOrdering *generalOrdering)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->removeGeneralOrdering(generalOrdering);
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlInteractionOperand::enclosingInteraction() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->enclosingInteraction();
}

void QUmlInteractionOperand::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->setEnclosingInteraction(enclosingInteraction);
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
QSet<QUmlLifeline *> QUmlInteractionOperand::covered() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->covered();
}

void QUmlInteractionOperand::addCovered(QUmlLifeline *covered)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->addCovered(covered);
}

void QUmlInteractionOperand::removeCovered(QUmlLifeline *covered)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->removeCovered(covered);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlInteractionOperand::enclosingOperand() const
{
    return (qwrappedobject_cast<const QUmlInteractionFragment *>(this))->enclosingOperand();
}

void QUmlInteractionOperand::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    (qwrappedobject_cast<QUmlInteractionFragment *>(this))->setEnclosingOperand(enclosingOperand);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QUmlNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
QSet<QUmlPackageImport *> QUmlInteractionOperand::packageImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->packageImports();
}

void QUmlInteractionOperand::addPackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addPackageImport(packageImport);
}

void QUmlInteractionOperand::removePackageImport(QUmlPackageImport *packageImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
QSet<QUmlNamedElement *> QUmlInteractionOperand::members() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
QSet<QUmlPackageableElement *> QUmlInteractionOperand::importedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
QSet<QUmlElementImport *> QUmlInteractionOperand::elementImports() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->elementImports();
}

void QUmlInteractionOperand::addElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addElementImport(elementImport);
}

void QUmlInteractionOperand::removeElementImport(QUmlElementImport *elementImport)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
QSet<QUmlConstraint *> QUmlInteractionOperand::ownedRules() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedRules();
}

void QUmlInteractionOperand::addOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->addOwnedRule(ownedRule);
}

void QUmlInteractionOperand::removeOwnedRule(QUmlConstraint *ownedRule)
{
    (qwrappedobject_cast<QUmlNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
QSet<QUmlNamedElement *> QUmlInteractionOperand::ownedMembers() const
{
    return (qwrappedobject_cast<const QUmlNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QUmlInteractionOperand
// ---------------------------------------------------------------

/*!
    The fragments of the operand.
 */
QList<QUmlInteractionFragment *> QUmlInteractionOperand::fragments() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionOperand);
    return d->fragments;
}

void QUmlInteractionOperand::addFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QUmlInteractionOperand);
    if (!d->fragments.contains(fragment)) {
        d->fragments.append(fragment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->addOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingOperand(this);
    }
}

void QUmlInteractionOperand::removeFragment(QUmlInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QUmlInteractionOperand);
    if (d->fragments.contains(fragment)) {
        d->fragments.removeAll(fragment);

        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlNamespacePrivate *>(d))->removeOwnedMember(qwrappedobject_cast<QUmlNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingOperand(0);
    }
}

/*!
    Constraint of the operand.
 */
QUmlInteractionConstraint *QUmlInteractionOperand::guard() const
{
    // This is a read-write association end

    Q_D(const QUmlInteractionOperand);
    return d->guard;
}

void QUmlInteractionOperand::setGuard(QUmlInteractionConstraint *guard)
{
    // This is a read-write association end

    Q_D(QUmlInteractionOperand);
    if (d->guard != guard) {
        // Adjust subsetted property(ies)
        (qwrappedobject_cast<QUmlElementPrivate *>(d))->removeOwnedElement(qwrappedobject_cast<QUmlElement *>(d->guard));

        d->guard = guard;

        // Adjust subsetted property(ies)
        if (guard) {
            (qwrappedobject_cast<QUmlElementPrivate *>(d))->addOwnedElement(qwrappedobject_cast<QUmlElement *>(guard));
        }
    }
}

void QUmlInteractionOperand::setPropertyData()
{
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("fragments")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("fragments")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("fragments")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("The fragments of the operand.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("fragments")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("fragments")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlNamespace::ownedMembers");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("fragments")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUmlInteractionFragment::enclosingOperand");

    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("guard")][QtWrappedObjects::AggregationRole] = QString::fromLatin1("composite");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("guard")][QtWrappedObjects::IsDerivedUnionRole] = false;
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("guard")][QtWrappedObjects::DocumentationRole] = QString::fromLatin1("Constraint of the operand.");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("guard")][QtWrappedObjects::RedefinedPropertiesRole] = QString::fromLatin1("");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("guard")][QtWrappedObjects::SubsettedPropertiesRole] = QString::fromLatin1("QUmlElement::ownedElements");
    QWrappedObject::propertyDataHash[QString::fromLatin1("QUmlInteractionOperand")][QString::fromLatin1("guard")][QtWrappedObjects::OppositeEndRole] = QString::fromLatin1("QUml");

    QWrappedObject::setPropertyData();
}

QT_END_NAMESPACE

#include "moc_qumlinteractionoperand.cpp"

