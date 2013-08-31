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
#include "qumlconnectionpointreference.h"

#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>

QT_BEGIN_NAMESPACE

/*!
    \class UmlConnectionPointReference

    \inmodule QtUml

    \brief A connection point reference represents a usage (as part of a submachine state) of an entry/exit point defined in the statemachine reference by the submachine state.
 */

QUmlConnectionPointReference::QUmlConnectionPointReference(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlConnectionPointReference::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlConnectionPointReference::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlConnectionPointReference::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlConnectionPointReference::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlConnectionPointReference::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlConnectionPointReference::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlConnectionPointReference::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlConnectionPointReference::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlConnectionPointReference::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [Vertex]

/*!
    The region that contains this vertex.
 */
QUmlRegion *QUmlConnectionPointReference::container() const
{
    return reinterpret_cast<QUmlRegion *>(_container);
}

/*!
    Specifies the transitions entering this vertex.
 */
const QSet<QUmlTransition *> QUmlConnectionPointReference::incoming() const
{
    QSet<QUmlTransition *> r;
    foreach (UmlTransition *element, UmlVertex::incoming())
        r.insert(reinterpret_cast<QUmlTransition *>(element));
    return r;
}

/*!
    Specifies the transitions departing from this vertex.
 */
const QSet<QUmlTransition *> QUmlConnectionPointReference::outgoing() const
{
    QSet<QUmlTransition *> r;
    foreach (UmlTransition *element, UmlVertex::outgoing())
        r.insert(reinterpret_cast<QUmlTransition *>(element));
    return r;
}

// OWNED ATTRIBUTES [ConnectionPointReference]

/*!
    The entryPoint kind pseudo states corresponding to this connection point.
 */
const QSet<QUmlPseudostate *> QUmlConnectionPointReference::entry() const
{
    return *(reinterpret_cast<const QSet<QUmlPseudostate *> *>(&_entry));
}

/*!
    The exitPoints kind pseudo states corresponding to this connection point.
 */
const QSet<QUmlPseudostate *> QUmlConnectionPointReference::exit() const
{
    return *(reinterpret_cast<const QSet<QUmlPseudostate *> *>(&_exit));
}

/*!
    The State in which the connection point refreshens are defined.
 */
QUmlState *QUmlConnectionPointReference::state() const
{
    return reinterpret_cast<QUmlState *>(_state);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlConnectionPointReference::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlConnectionPointReference::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlConnectionPointReference::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlConnectionPointReference::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlConnectionPointReference::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlConnectionPointReference::separator() const
{
    return UmlNamedElement::separator();
}

// OPERATIONS [Vertex]

/*!
    The operation containingStateMachine() returns the state machine in which this Vertex is defined
 */
QUmlStateMachine *QUmlConnectionPointReference::containingStateMachine() const
{
    return reinterpret_cast<QUmlStateMachine *>(UmlVertex::containingStateMachine());
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConnectionPointReference::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlConnectionPointReference::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConnectionPointReference::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlConnectionPointReference::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlConnectionPointReference::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlConnectionPointReference::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlConnectionPointReference::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlConnectionPointReference::setContainer(QUmlRegion *container)
{
    UmlVertex::setContainer(container);
}

// SLOTS FOR OWNED ATTRIBUTES [ConnectionPointReference]

void QUmlConnectionPointReference::addEntry(UmlPseudostate *entry)
{
    UmlConnectionPointReference::addEntry(entry);
}

void QUmlConnectionPointReference::removeEntry(UmlPseudostate *entry)
{
    UmlConnectionPointReference::removeEntry(entry);
}

void QUmlConnectionPointReference::addExit(UmlPseudostate *exit)
{
    UmlConnectionPointReference::addExit(exit);
}

void QUmlConnectionPointReference::removeExit(UmlPseudostate *exit)
{
    UmlConnectionPointReference::removeExit(exit);
}

void QUmlConnectionPointReference::setState(QUmlState *state)
{
    UmlConnectionPointReference::setState(state);
}

QT_END_NAMESPACE

