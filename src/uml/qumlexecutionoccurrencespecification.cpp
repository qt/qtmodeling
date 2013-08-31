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
#include "qumlexecutionoccurrencespecification.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExecutionSpecification>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class UmlExecutionOccurrenceSpecification

    \inmodule QtUml

    \brief An execution occurrence specification represents moments in time at which actions or behaviors start or finish.
 */

QUmlExecutionOccurrenceSpecification::QUmlExecutionOccurrenceSpecification(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlExecutionOccurrenceSpecification::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlExecutionOccurrenceSpecification::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlExecutionOccurrenceSpecification::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlExecutionOccurrenceSpecification::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlExecutionOccurrenceSpecification::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlExecutionOccurrenceSpecification::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlExecutionOccurrenceSpecification::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlExecutionOccurrenceSpecification::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlExecutionOccurrenceSpecification::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [InteractionFragment]

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlExecutionOccurrenceSpecification::enclosingInteraction() const
{
    return reinterpret_cast<QUmlInteraction *>(_enclosingInteraction);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlExecutionOccurrenceSpecification::enclosingOperand() const
{
    return reinterpret_cast<QUmlInteractionOperand *>(_enclosingOperand);
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QUmlGeneralOrdering *> QUmlExecutionOccurrenceSpecification::generalOrdering() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_generalOrdering));
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

/*!
    References the Lifeline on which the OccurrenceSpecification appears.
 */
QUmlLifeline *QUmlExecutionOccurrenceSpecification::covered() const
{
    return reinterpret_cast<QUmlLifeline *>(_covered);
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification
 */
const QSet<QUmlGeneralOrdering *> QUmlExecutionOccurrenceSpecification::toAfter() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_toAfter));
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification
 */
const QSet<QUmlGeneralOrdering *> QUmlExecutionOccurrenceSpecification::toBefore() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_toBefore));
}

// OWNED ATTRIBUTES [ExecutionOccurrenceSpecification]

/*!
    References the execution specification describing the execution that is started or finished at this execution event.
 */
QUmlExecutionSpecification *QUmlExecutionOccurrenceSpecification::execution() const
{
    return reinterpret_cast<QUmlExecutionSpecification *>(_execution);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlExecutionOccurrenceSpecification::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlExecutionOccurrenceSpecification::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlExecutionOccurrenceSpecification::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlExecutionOccurrenceSpecification::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlExecutionOccurrenceSpecification::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlExecutionOccurrenceSpecification::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExecutionOccurrenceSpecification::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlExecutionOccurrenceSpecification::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExecutionOccurrenceSpecification::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlExecutionOccurrenceSpecification::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlExecutionOccurrenceSpecification::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlExecutionOccurrenceSpecification::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlExecutionOccurrenceSpecification::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlExecutionOccurrenceSpecification::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    UmlInteractionFragment::setEnclosingInteraction(enclosingInteraction);
}

void QUmlExecutionOccurrenceSpecification::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    UmlInteractionFragment::setEnclosingOperand(enclosingOperand);
}

void QUmlExecutionOccurrenceSpecification::addGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::addGeneralOrdering(generalOrdering);
}

void QUmlExecutionOccurrenceSpecification::removeGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::removeGeneralOrdering(generalOrdering);
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlExecutionOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    UmlOccurrenceSpecification::setCovered(covered);
}

void QUmlExecutionOccurrenceSpecification::addToAfter(UmlGeneralOrdering *toAfter)
{
    UmlOccurrenceSpecification::addToAfter(toAfter);
}

void QUmlExecutionOccurrenceSpecification::removeToAfter(UmlGeneralOrdering *toAfter)
{
    UmlOccurrenceSpecification::removeToAfter(toAfter);
}

void QUmlExecutionOccurrenceSpecification::addToBefore(UmlGeneralOrdering *toBefore)
{
    UmlOccurrenceSpecification::addToBefore(toBefore);
}

void QUmlExecutionOccurrenceSpecification::removeToBefore(UmlGeneralOrdering *toBefore)
{
    UmlOccurrenceSpecification::removeToBefore(toBefore);
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionOccurrenceSpecification]

void QUmlExecutionOccurrenceSpecification::setExecution(QUmlExecutionSpecification *execution)
{
    UmlExecutionOccurrenceSpecification::setExecution(execution);
}

QT_END_NAMESPACE

