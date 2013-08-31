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
#include "qumlcontinuation.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
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
    \class UmlContinuation

    \inmodule QtUml

    \brief A continuation is a syntactic way to define continuations of different branches of an alternative combined fragment. Continuations is intuitively similar to labels representing intermediate points in a flow of control.
 */

QUmlContinuation::QUmlContinuation(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlContinuation::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlContinuation::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlContinuation::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlContinuation::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlContinuation::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlContinuation::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlContinuation::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlContinuation::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlContinuation::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [InteractionFragment]

/*!
    References the Lifelines that the InteractionFragment involves.
 */
const QSet<QUmlLifeline *> QUmlContinuation::covered() const
{
    return *(reinterpret_cast<const QSet<QUmlLifeline *> *>(&_covered));
}

/*!
    The Interaction enclosing this InteractionFragment.
 */
QUmlInteraction *QUmlContinuation::enclosingInteraction() const
{
    return reinterpret_cast<QUmlInteraction *>(_enclosingInteraction);
}

/*!
    The operand enclosing this InteractionFragment (they may nest recursively)
 */
QUmlInteractionOperand *QUmlContinuation::enclosingOperand() const
{
    return reinterpret_cast<QUmlInteractionOperand *>(_enclosingOperand);
}

/*!
    The general ordering relationships contained in this fragment.
 */
const QSet<QUmlGeneralOrdering *> QUmlContinuation::generalOrdering() const
{
    return *(reinterpret_cast<const QSet<QUmlGeneralOrdering *> *>(&_generalOrdering));
}

// OWNED ATTRIBUTES [Continuation]

/*!
    True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning.
 */
bool QUmlContinuation::setting() const
{
    return _setting;
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlContinuation::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlContinuation::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlContinuation::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlContinuation::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlContinuation::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlContinuation::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlContinuation::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlContinuation::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlContinuation::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlContinuation::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlContinuation::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlContinuation::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlContinuation::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlContinuation::addCovered(UmlLifeline *covered)
{
    UmlInteractionFragment::addCovered(covered);
}

void QUmlContinuation::removeCovered(UmlLifeline *covered)
{
    UmlInteractionFragment::removeCovered(covered);
}

void QUmlContinuation::setEnclosingInteraction(QUmlInteraction *enclosingInteraction)
{
    UmlInteractionFragment::setEnclosingInteraction(enclosingInteraction);
}

void QUmlContinuation::setEnclosingOperand(QUmlInteractionOperand *enclosingOperand)
{
    UmlInteractionFragment::setEnclosingOperand(enclosingOperand);
}

void QUmlContinuation::addGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::addGeneralOrdering(generalOrdering);
}

void QUmlContinuation::removeGeneralOrdering(UmlGeneralOrdering *generalOrdering)
{
    UmlInteractionFragment::removeGeneralOrdering(generalOrdering);
}

// SLOTS FOR OWNED ATTRIBUTES [Continuation]

void QUmlContinuation::setSetting(bool setting)
{
    UmlContinuation::setSetting(setting);
}

QT_END_NAMESPACE

