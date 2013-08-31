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
#include "qumlactionexecutionspecification.h"

#include <QtUml/QUmlAction>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class UmlActionExecutionSpecification

    \inmodule QtUml

    \brief An action execution specification is a kind of execution specification representing the execution of an action.
 */

QUmlActionExecutionSpecification::QUmlActionExecutionSpecification(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlActionExecutionSpecification::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlActionExecutionSpecification::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlActionExecutionSpecification::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlActionExecutionSpecification::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlActionExecutionSpecification::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlActionExecutionSpecification::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlActionExecutionSpecification::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlActionExecutionSpecification::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlActionExecutionSpecification::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [InteractionFragment]

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QUmlLifeline *> QUmlActionExecutionSpecification::covered() const
{
    return *(reinterpret_cast<const QSet<QUmlLifeline *> *>(&_covered));
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlActionExecutionSpecification::enclosingInteraction() const
{
    return reinterpret_cast<QUmlInteraction *>(_enclosingInteraction);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlActionExecutionSpecification::enclosingOperand() const
{
    return reinterpret_cast<QUmlInteractionOperand *>(_enclosingOperand);
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QUmlGeneralOrdering *> QUmlActionExecutionSpecification::generalOrdering() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_generalOrdering));
}

// OWNED ATTRIBUTES [ExecutionSpecification]

/*!
    References the OccurrenceSpecification that designates the finish of the Action or Behavior.
 */
QUmlOccurrenceSpecification *QUmlActionExecutionSpecification::finish() const
{
    return reinterpret_cast<QUmlOccurrenceSpecification *>(_finish);
}

/*!
    References the OccurrenceSpecification that designates the start of the Action or Behavior
 */
QUmlOccurrenceSpecification *QUmlActionExecutionSpecification::start() const
{
    return reinterpret_cast<QUmlOccurrenceSpecification *>(_start);
}

// OWNED ATTRIBUTES [ActionExecutionSpecification]

/*!
    Action whose execution is occurring.
 */
QUmlAction *QUmlActionExecutionSpecification::action() const
{
    return reinterpret_cast<QUmlAction *>(_action);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlActionExecutionSpecification::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlActionExecutionSpecification::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlActionExecutionSpecification::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlActionExecutionSpecification::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlActionExecutionSpecification::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlActionExecutionSpecification::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActionExecutionSpecification::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlActionExecutionSpecification::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActionExecutionSpecification::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlActionExecutionSpecification::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlActionExecutionSpecification::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlActionExecutionSpecification::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlActionExecutionSpecification::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlActionExecutionSpecification::addCovered(UmlLifeline *covered)
{
    UmlInteractionFragment::addCovered(covered);
}

void QUmlActionExecutionSpecification::removeCovered(UmlLifeline *covered)
{
    UmlInteractionFragment::removeCovered(covered);
}

void QUmlActionExecutionSpecification::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    UmlInteractionFragment::setEnclosingInteraction(enclosingInteraction);
}

void QUmlActionExecutionSpecification::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    UmlInteractionFragment::setEnclosingOperand(enclosingOperand);
}

void QUmlActionExecutionSpecification::addGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::addGeneralOrdering(generalOrdering);
}

void QUmlActionExecutionSpecification::removeGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::removeGeneralOrdering(generalOrdering);
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionSpecification]

void QUmlActionExecutionSpecification::setFinish(QUmlOccurrenceSpecification *finish)
{
    UmlExecutionSpecification::setFinish(finish);
}

void QUmlActionExecutionSpecification::setStart(QUmlOccurrenceSpecification *start)
{
    UmlExecutionSpecification::setStart(start);
}

// SLOTS FOR OWNED ATTRIBUTES [ActionExecutionSpecification]

void QUmlActionExecutionSpecification::setAction(QUmlAction *action)
{
    UmlActionExecutionSpecification::setAction(action);
}

QT_END_NAMESPACE

