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
#include "qumlactivitypartition.h"

#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

/*!
    \class UmlActivityPartition

    \inmodule QtUml

    \brief An activity partition is a kind of activity group for identifying actions that have some characteristic in common.
 */

QUmlActivityPartition::QUmlActivityPartition(QObject *parent) :
    QObject(parent)
{
}

// OWNED ATTRIBUTES [Element]

/*!
    The Comments owned by this element.
 */
const QSet<QUmlComment *> QUmlActivityPartition::ownedComment() const
{
    return *(reinterpret_cast<const QSet<QUmlComment *> *>(&_ownedComment));
}

/*!
    The Elements owned by this element.
 */
const QSet<QUmlElement *> QUmlActivityPartition::ownedElement() const
{
    return *(reinterpret_cast<const QSet<QUmlElement *> *>(&_ownedElement));
}

/*!
    The Element that owns this element.
 */
QUmlElement *QUmlActivityPartition::owner() const
{
    return reinterpret_cast<QUmlElement *>(_owner);
}

// OWNED ATTRIBUTES [NamedElement]

/*!
    Indicates the dependencies that reference the client.
 */
const QSet<QUmlDependency *> QUmlActivityPartition::clientDependency() const
{
    return *(reinterpret_cast<const QSet<QUmlDependency *> *>(&_clientDependency));
}

/*!
    The name of the NamedElement.
 */
QString QUmlActivityPartition::name() const
{
    return _name;
}

/*!
    The string expression used to define the name of this named element.
 */
QUmlStringExpression *QUmlActivityPartition::nameExpression() const
{
    return reinterpret_cast<QUmlStringExpression *>(_nameExpression);
}

/*!
    Specifies the namespace that owns the NamedElement.
 */
QUmlNamespace *QUmlActivityPartition::namespace_() const
{
    return reinterpret_cast<QUmlNamespace *>(_namespace_);
}

/*!
    A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself.
 */
QString QUmlActivityPartition::qualifiedName() const
{
    return UmlNamedElement::qualifiedName();
}

/*!
    Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility.
 */
QtUml::VisibilityKind QUmlActivityPartition::visibility() const
{
    return _visibility;
}

// OWNED ATTRIBUTES [ActivityGroup]

/*!
    Edges immediately contained in the group.
 */
const QSet<QUmlActivityEdge *> QUmlActivityPartition::containedEdge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_containedEdge));
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QUmlActivityNode *> QUmlActivityPartition::containedNode() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityNode *> *>(&_containedNode));
}

/*!
    Activity containing the group.
 */
QUmlActivity *QUmlActivityPartition::inActivity() const
{
    return reinterpret_cast<QUmlActivity *>(_inActivity);
}

/*!
    Groups immediately contained in the group.
 */
const QSet<QUmlActivityGroup *> QUmlActivityPartition::subgroup() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityGroup *> *>(&_subgroup));
}

/*!
    Group immediately containing the group.
 */
QUmlActivityGroup *QUmlActivityPartition::superGroup() const
{
    return reinterpret_cast<QUmlActivityGroup *>(_superGroup);
}

// OWNED ATTRIBUTES [ActivityPartition]

/*!
    Edges immediately contained in the group.
 */
const QSet<QUmlActivityEdge *> QUmlActivityPartition::edge() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityEdge *> *>(&_edge));
}

/*!
    Tells whether the partition groups other partitions along a dimension.
 */
bool QUmlActivityPartition::isDimension() const
{
    return _isDimension;
}

/*!
    Tells whether the partition represents an entity to which the partitioning structure does not apply.
 */
bool QUmlActivityPartition::isExternal() const
{
    return _isExternal;
}

/*!
    Nodes immediately contained in the group.
 */
const QSet<QUmlActivityNode *> QUmlActivityPartition::node() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityNode *> *>(&_node));
}

/*!
    An element constraining behaviors invoked by nodes in the partition.
 */
QUmlElement *QUmlActivityPartition::represents() const
{
    return reinterpret_cast<QUmlElement *>(_represents);
}

/*!
    Partitions immediately contained in the partition.
 */
const QSet<QUmlActivityPartition *> QUmlActivityPartition::subpartition() const
{
    return *(reinterpret_cast<const QSet<QUmlActivityPartition *> *>(&_subpartition));
}

/*!
    Partition immediately containing the partition.
 */
QUmlActivityPartition *QUmlActivityPartition::superPartition() const
{
    return reinterpret_cast<QUmlActivityPartition *>(_superPartition);
}

// OPERATIONS [Element]

/*!
    The query allOwnedElements() gives all of the direct and indirect owned elements of an element.
 */
QSet<QUmlElement *> QUmlActivityPartition::allOwnedElements() const
{
    QSet<QUmlElement *> r;
    foreach (UmlElement *element, UmlElement::allOwnedElements())
        r.insert(reinterpret_cast<QUmlElement *>(element));
    return r;
}

/*!
    The query mustBeOwned() indicates whether elements of this type must have an owner. Subclasses of Element that do not require an owner must override this operation.
 */
bool QUmlActivityPartition::mustBeOwned() const
{
    return UmlElement::mustBeOwned();
}

// OPERATIONS [NamedElement]

/*!
    The query allNamespaces() gives the sequence of namespaces in which the NamedElement is nested, working outwards.
 */
QList<QUmlNamespace *> QUmlActivityPartition::allNamespaces() const
{
    QList<QUmlNamespace *> r;
    foreach (UmlNamespace *element, UmlNamedElement::allNamespaces())
        r.append(reinterpret_cast<QUmlNamespace *>(element));
    return r;
}

/*!
    The query allOwningPackages() returns all the directly or indirectly owning packages.
 */
QSet<QUmlPackage *> QUmlActivityPartition::allOwningPackages() const
{
    QSet<QUmlPackage *> r;
    foreach (UmlPackage *element, UmlNamedElement::allOwningPackages())
        r.insert(reinterpret_cast<QUmlPackage *>(element));
    return r;
}

/*!
    The query isDistinguishableFrom() determines whether two NamedElements may logically co-exist within a Namespace. By default, two named elements are distinguishable if (a) they have unrelated types or (b) they have related types but different names.
 */
bool QUmlActivityPartition::isDistinguishableFrom(QUmlNamedElement *n, QUmlNamespace *ns) const
{
    return UmlNamedElement::isDistinguishableFrom(n, ns);
}

/*!
    The query separator() gives the string that is used to separate names when constructing a qualified name.
 */
QString QUmlActivityPartition::separator() const
{
    return UmlNamedElement::separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityPartition::addOwnedComment(UmlComment *ownedComment)
{
    UmlElement::addOwnedComment(ownedComment);
}

void QUmlActivityPartition::removeOwnedComment(UmlComment *ownedComment)
{
    UmlElement::removeOwnedComment(ownedComment);
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityPartition::addClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::addClientDependency(clientDependency);
}

void QUmlActivityPartition::removeClientDependency(UmlDependency *clientDependency)
{
    UmlNamedElement::removeClientDependency(clientDependency);
}

void QUmlActivityPartition::setName(QString name)
{
    UmlNamedElement::setName(name);
}

void QUmlActivityPartition::setNameExpression(QUmlStringExpression *nameExpression)
{
    UmlNamedElement::setNameExpression(nameExpression);
}

void QUmlActivityPartition::setVisibility(QtUml::VisibilityKind visibility)
{
    UmlNamedElement::setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlActivityPartition::setInActivity(QUmlActivity *inActivity)
{
    UmlActivityGroup::setInActivity(inActivity);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityPartition]

void QUmlActivityPartition::addEdge(UmlActivityEdge *edge)
{
    UmlActivityPartition::addEdge(edge);
}

void QUmlActivityPartition::removeEdge(UmlActivityEdge *edge)
{
    UmlActivityPartition::removeEdge(edge);
}

void QUmlActivityPartition::setDimension(bool isDimension)
{
    UmlActivityPartition::setDimension(isDimension);
}

void QUmlActivityPartition::setExternal(bool isExternal)
{
    UmlActivityPartition::setExternal(isExternal);
}

void QUmlActivityPartition::addNode(UmlActivityNode *node)
{
    UmlActivityPartition::addNode(node);
}

void QUmlActivityPartition::removeNode(UmlActivityNode *node)
{
    UmlActivityPartition::removeNode(node);
}

void QUmlActivityPartition::setRepresents(QUmlElement *represents)
{
    UmlActivityPartition::setRepresents(represents);
}

void QUmlActivityPartition::addSubpartition(UmlActivityPartition *subpartition)
{
    UmlActivityPartition::addSubpartition(subpartition);
}

void QUmlActivityPartition::removeSubpartition(UmlActivityPartition *subpartition)
{
    UmlActivityPartition::removeSubpartition(subpartition);
}

void QUmlActivityPartition::setSuperPartition(QUmlActivityPartition *superPartition)
{
    UmlActivityPartition::setSuperPartition(superPartition);
}

QT_END_NAMESPACE

