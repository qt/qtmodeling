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
#include "qumlactivitypartitionobject_p.h"

#include <QtUml/QUmlActivityPartition>
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

QUmlActivityPartitionObject::QUmlActivityPartitionObject(QUmlActivityPartition *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlActivityPartitionObject::~QUmlActivityPartitionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActivityPartitionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityPartitionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityPartitionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActivityPartitionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlActivityPartitionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->name();
}

QObject *QUmlActivityPartitionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->nameExpression()->asQObject();
}

QObject *QUmlActivityPartitionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->namespace_()->asQObject();
}

QString QUmlActivityPartitionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActivityPartitionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->visibility();
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlActivityPartitionObject::containedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->containedEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityPartitionObject::containedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->containedNode())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityPartitionObject::inActivity() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->inActivity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->inActivity()->asQObject();
}

const QSet<QObject *> QUmlActivityPartitionObject::subgroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->subgroup())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityPartitionObject::superGroup() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->superGroup())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->superGroup()->asQObject();
}

// OWNED ATTRIBUTES [ActivityPartition]

const QSet<QObject *> QUmlActivityPartitionObject::edge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->edge())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityPartitionObject::isDimension() const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->isDimension();
}

bool QUmlActivityPartitionObject::isExternal() const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->isExternal();
}

const QSet<QObject *> QUmlActivityPartitionObject::node() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->node())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityPartitionObject::represents() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->represents())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->represents()->asQObject();
}

const QSet<QObject *> QUmlActivityPartitionObject::subpartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->subpartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityPartitionObject::superPartition() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->superPartition())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->superPartition()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActivityPartitionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityPartitionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActivityPartitionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActivityPartitionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityPartitionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActivityPartitionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityPartitionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityPartitionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityPartitionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityPartitionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityPartitionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityPartitionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityPartitionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityPartitionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setName(name);
}

void QUmlActivityPartitionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActivityPartitionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActivityPartitionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActivityPartitionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlActivityPartitionObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlActivityPartitionObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlActivityPartitionObject::addContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlActivityPartitionObject::removeContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlActivityPartitionObject::setInActivity(QObject *inActivity)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setInActivity(qmodelingobjectproperty_cast<QUmlActivity *>(inActivity));
}

void QUmlActivityPartitionObject::addSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlActivityPartitionObject::removeSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlActivityPartitionObject::setSuperGroup(QObject *superGroup)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setSuperGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityPartition]

void QUmlActivityPartitionObject::addEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityPartitionObject::removeEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityPartitionObject::setDimension(bool isDimension)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setDimension(isDimension);
}

void QUmlActivityPartitionObject::unsetDimension()
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("dimension"));
}

void QUmlActivityPartitionObject::setExternal(bool isExternal)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setExternal(isExternal);
}

void QUmlActivityPartitionObject::unsetExternal()
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("external"));
}

void QUmlActivityPartitionObject::addNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityPartitionObject::removeNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityPartitionObject::setRepresents(QObject *represents)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setRepresents(qmodelingobjectproperty_cast<QUmlElement *>(represents));
}

void QUmlActivityPartitionObject::addSubpartition(QObject *subpartition)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->addSubpartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(subpartition));
}

void QUmlActivityPartitionObject::removeSubpartition(QObject *subpartition)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->removeSubpartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(subpartition));
}

void QUmlActivityPartitionObject::setSuperPartition(QObject *superPartition)
{
    qmodelingobjectproperty_cast<QUmlActivityPartition *>(this)->setSuperPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(superPartition));
}

QT_END_NAMESPACE

