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

#include "qinteractionoperand.h"
#include "qinteractionoperand_p.h"

#include <QtUml/QInteractionConstraint>

QT_BEGIN_NAMESPACE_QTUML

QInteractionOperandPrivate::QInteractionOperandPrivate() :
    fragments(new QList<QInteractionFragment *>),
    guard(0)
{
}

QInteractionOperandPrivate::~QInteractionOperandPrivate()
{
    delete fragments;
}

/*!
    \class QInteractionOperand

    \inmodule QtUml

    \brief An interaction operand is contained in a combined fragment. An interaction operand represents one operand of the expression given by the enclosing combined fragment.
 */

QInteractionOperand::QInteractionOperand(QObject *parent) :
    QObject(*new QInteractionOperandPrivate, parent),
    _wrappedInteractionFragment(new QInteractionFragment(this)),
    _wrappedNamespace(new QNamespace(this))
{
    qRegisterMetaType<QInteractionOperand *>("QInteractionOperand *");
    qRegisterMetaType<const QSet<QInteractionOperand *> *>("const QSet<QInteractionOperand *> *");
    qRegisterMetaType<const QList<QInteractionOperand *> *>("const QList<QInteractionOperand *> *");
}

QInteractionOperand::QInteractionOperand(QInteractionOperandPrivate &dd, QObject *parent) :
    QObject(dd, parent),
    _wrappedInteractionFragment(new QInteractionFragment(this)),
    _wrappedNamespace(new QNamespace(this))
{
    qRegisterMetaType<QInteractionOperand *>("QInteractionOperand *");
    qRegisterMetaType<const QSet<QInteractionOperand *> *>("const QSet<QInteractionOperand *> *");
    qRegisterMetaType<const QList<QInteractionOperand *> *>("const QList<QInteractionOperand *> *");
}

QInteractionOperand::~QInteractionOperand()
{
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QElement
// ---------------------------------------------------------------

/*!
    The Elements owned by this element.
 */
const QSet<QElement *> *QInteractionOperand::ownedElements() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedElements();
}

/*!
    The Element that owns this element.
 */
QElement *QInteractionOperand::owner() const
{
    return (qtuml_object_cast<const QElement *>(this))->owner();
}

/*!
    The Comments owned by this element.
 */
const QSet<QComment *> *QInteractionOperand::ownedComments() const
{
    return (qtuml_object_cast<const QElement *>(this))->ownedComments();
}

void QInteractionOperand::addOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->addOwnedComment(ownedComment);
}

void QInteractionOperand::removeOwnedComment(QComment *ownedComment)
{
    (qtuml_object_cast<QElement *>(this))->removeOwnedComment(ownedComment);
}

// ---------------------------------------------------------------
// ATTRIBUTES FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The name of the NamedElement.
 */
QString QInteractionOperand::name() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->name();
}

void QInteractionOperand::setName(QString name)
{
    (qtuml_object_cast<QNamedElement *>(this))->setName(name);
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QInteractionOperand::visibility() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->visibility();
}

void QInteractionOperand::setVisibility(QtUml::VisibilityKind visibility)
{
    (qtuml_object_cast<QNamedElement *>(this))->setVisibility(visibility);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QInteractionOperand::qualifiedName() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->qualifiedName();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamedElement
// ---------------------------------------------------------------

/*!
    The string expression used to define the name of this named element.
 */
QStringExpression *QInteractionOperand::nameExpression() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->nameExpression();
}

void QInteractionOperand::setNameExpression(QStringExpression *nameExpression)
{
    (qtuml_object_cast<QNamedElement *>(this))->setNameExpression(nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QNamespace *QInteractionOperand::namespace_() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->namespace_();
}

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QDependency *> *QInteractionOperand::clientDependencies() const
{
    return (qtuml_object_cast<const QNamedElement *>(this))->clientDependencies();
}

void QInteractionOperand::addClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->addClientDependency(clientDependency);
}

void QInteractionOperand::removeClientDependency(QDependency *clientDependency)
{
    (qtuml_object_cast<QNamedElement *>(this))->removeClientDependency(clientDependency);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QInteractionFragment
// ---------------------------------------------------------------

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QGeneralOrdering *> *QInteractionOperand::generalOrderings() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->generalOrderings();
}

void QInteractionOperand::addGeneralOrdering(QGeneralOrdering *generalOrdering)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->addGeneralOrdering(generalOrdering);
}

void QInteractionOperand::removeGeneralOrdering(QGeneralOrdering *generalOrdering)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->removeGeneralOrdering(generalOrdering);
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QInteraction *QInteractionOperand::enclosingInteraction() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->enclosingInteraction();
}

void QInteractionOperand::setEnclosingInteraction(QInteraction *enclosingInteraction)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->setEnclosingInteraction(enclosingInteraction);
}

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QLifeline *> *QInteractionOperand::covered() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->covered();
}

void QInteractionOperand::addCovered(QLifeline *covered)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->addCovered(covered);
}

void QInteractionOperand::removeCovered(QLifeline *covered)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->removeCovered(covered);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QInteractionOperand *QInteractionOperand::enclosingOperand() const
{
    return (qtuml_object_cast<const QInteractionFragment *>(this))->enclosingOperand();
}

void QInteractionOperand::setEnclosingOperand(QInteractionOperand *enclosingOperand)
{
    (qtuml_object_cast<QInteractionFragment *>(this))->setEnclosingOperand(enclosingOperand);
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM AGGREGATED QNamespace
// ---------------------------------------------------------------

/*!
    References the PackageImports owned by the Namespace.
 */
const QSet<QPackageImport *> *QInteractionOperand::packageImports() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->packageImports();
}

void QInteractionOperand::addPackageImport(QPackageImport *packageImport)
{
    (qtuml_object_cast<QNamespace *>(this))->addPackageImport(packageImport);
}

void QInteractionOperand::removePackageImport(QPackageImport *packageImport)
{
    (qtuml_object_cast<QNamespace *>(this))->removePackageImport(packageImport);
}

/*!
    A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
 */
const QSet<QNamedElement *> *QInteractionOperand::members() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->members();
}

/*!
    References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports.
 */
const QSet<QPackageableElement *> *QInteractionOperand::importedMembers() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->importedMembers();
}

/*!
    References the ElementImports owned by the Namespace.
 */
const QSet<QElementImport *> *QInteractionOperand::elementImports() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->elementImports();
}

void QInteractionOperand::addElementImport(QElementImport *elementImport)
{
    (qtuml_object_cast<QNamespace *>(this))->addElementImport(elementImport);
}

void QInteractionOperand::removeElementImport(QElementImport *elementImport)
{
    (qtuml_object_cast<QNamespace *>(this))->removeElementImport(elementImport);
}

/*!
    Specifies a set of Constraints owned by this Namespace.
 */
const QSet<QConstraint *> *QInteractionOperand::ownedRules() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->ownedRules();
}

void QInteractionOperand::addOwnedRule(QConstraint *ownedRule)
{
    (qtuml_object_cast<QNamespace *>(this))->addOwnedRule(ownedRule);
}

void QInteractionOperand::removeOwnedRule(QConstraint *ownedRule)
{
    (qtuml_object_cast<QNamespace *>(this))->removeOwnedRule(ownedRule);
}

/*!
    A collection of NamedElements owned by the Namespace.
 */
const QSet<QNamedElement *> *QInteractionOperand::ownedMembers() const
{
    return (qtuml_object_cast<const QNamespace *>(this))->ownedMembers();
}

// ---------------------------------------------------------------
// ASSOCIATION ENDS FROM QInteractionOperand
// ---------------------------------------------------------------

/*!
    The fragments of the operand.
 */
const QList<QInteractionFragment *> *QInteractionOperand::fragments() const
{
    // This is a read-write association end

    Q_D(const QInteractionOperand);
    return d->fragments;
}

void QInteractionOperand::addFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QInteractionOperand);
    if (!d->fragments->contains(fragment)) {
        d->fragments->append(fragment);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->addOwnedMember(qtuml_object_cast<QNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingOperand(this);
    }
}

void QInteractionOperand::removeFragment(QInteractionFragment *fragment)
{
    // This is a read-write association end

    Q_D(QInteractionOperand);
    if (d->fragments->contains(fragment)) {
        d->fragments->removeAll(fragment);

        // Adjust subsetted property(ies)
        (qtuml_object_cast<QNamespacePrivate *>(d))->removeOwnedMember(qtuml_object_cast<QNamedElement *>(fragment));

        // Adjust opposite property
        fragment->setEnclosingOperand(0);
    }
}

/*!
    Constraint of the operand.
 */
QInteractionConstraint *QInteractionOperand::guard() const
{
    // This is a read-write association end

    Q_D(const QInteractionOperand);
    return d->guard;
}

void QInteractionOperand::setGuard(QInteractionConstraint *guard)
{
    // This is a read-write association end

    Q_D(QInteractionOperand);
    if (d->guard != guard) {
        // Adjust subsetted property(ies)
        (qtuml_object_cast<QElementPrivate *>(d))->removeOwnedElement(qtuml_object_cast<QElement *>(d->guard));

        d->guard = guard;

        // Adjust subsetted property(ies)
        if (guard) {
            (qtuml_object_cast<QElementPrivate *>(d))->addOwnedElement(qtuml_object_cast<QElement *>(guard));
        }
    }
}

#include "moc_qinteractionoperand.cpp"

QT_END_NAMESPACE_QTUML

