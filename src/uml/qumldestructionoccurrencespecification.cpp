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
#include "qumldestructionoccurrencespecification.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class UmlDestructionOccurrenceSpecification

    \inmodule QtUml

    \brief A destruction event models the destruction of an object.
 */

QUmlDestructionOccurrenceSpecification::QUmlDestructionOccurrenceSpecification(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlDestructionOccurrenceSpecification::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlDestructionOccurrenceSpecification::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlDestructionOccurrenceSpecification::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlDestructionOccurrenceSpecification::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlDestructionOccurrenceSpecification::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlDestructionOccurrenceSpecification::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlDestructionOccurrenceSpecification::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlDestructionOccurrenceSpecification::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlDestructionOccurrenceSpecification::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [InteractionFragment]

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlDestructionOccurrenceSpecification::enclosingInteraction() const
{
    return reinterpret_cast<QUmlInteraction *>(_enclosingInteraction);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlDestructionOccurrenceSpecification::enclosingOperand() const
{
    return reinterpret_cast<QUmlInteractionOperand *>(_enclosingOperand);
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QUmlGeneralOrdering *> QUmlDestructionOccurrenceSpecification::generalOrdering() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_generalOrdering));
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

/*!
    References the Lifeline on which the OccurrenceSpecification appears.
 */
QUmlLifeline *QUmlDestructionOccurrenceSpecification::covered() const
{
    return reinterpret_cast<QUmlLifeline *>(_covered);
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification
 */
const QSet<QUmlGeneralOrdering *> QUmlDestructionOccurrenceSpecification::toAfter() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_toAfter));
}

/*!
    References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification
 */
const QSet<QUmlGeneralOrdering *> QUmlDestructionOccurrenceSpecification::toBefore() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_toBefore));
}

// OWNED ATTRIBUTES [MessageEnd]

/*!
    References a Message.
 */
QUmlMessage *QUmlDestructionOccurrenceSpecification::message() const
{
    return reinterpret_cast<QUmlMessage *>(_message);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlDestructionOccurrenceSpecification::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlDestructionOccurrenceSpecification::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlDestructionOccurrenceSpecification::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlDestructionOccurrenceSpecification::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlDestructionOccurrenceSpecification::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlDestructionOccurrenceSpecification::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDestructionOccurrenceSpecification::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlDestructionOccurrenceSpecification::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDestructionOccurrenceSpecification::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlDestructionOccurrenceSpecification::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlDestructionOccurrenceSpecification::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlDestructionOccurrenceSpecification::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlDestructionOccurrenceSpecification::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlDestructionOccurrenceSpecification::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    UmlInteractionFragment::setEnclosingInteraction(enclosingInteraction);
}

void QUmlDestructionOccurrenceSpecification::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    UmlInteractionFragment::setEnclosingOperand(enclosingOperand);
}

void QUmlDestructionOccurrenceSpecification::addGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::addGeneralOrdering(generalOrdering);
}

void QUmlDestructionOccurrenceSpecification::removeGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::removeGeneralOrdering(generalOrdering);
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlDestructionOccurrenceSpecification::setCovered(QUmlLifeline *covered)
{
    UmlOccurrenceSpecification::setCovered(covered);
}

void QUmlDestructionOccurrenceSpecification::addToAfter(UmlGeneralOrdering *toAfter)
{
    UmlOccurrenceSpecification::addToAfter(toAfter);
}

void QUmlDestructionOccurrenceSpecification::removeToAfter(UmlGeneralOrdering *toAfter)
{
    UmlOccurrenceSpecification::removeToAfter(toAfter);
}

void QUmlDestructionOccurrenceSpecification::addToBefore(UmlGeneralOrdering *toBefore)
{
    UmlOccurrenceSpecification::addToBefore(toBefore);
}

void QUmlDestructionOccurrenceSpecification::removeToBefore(UmlGeneralOrdering *toBefore)
{
    UmlOccurrenceSpecification::removeToBefore(toBefore);
}

// SLOTS FOR OWNED ATTRIBUTES [MessageEnd]

void QUmlDestructionOccurrenceSpecification::setMessage(QUmlMessage *message)
{
    UmlMessageEnd::setMessage(message);
}

QT_END_NAMESPACE

