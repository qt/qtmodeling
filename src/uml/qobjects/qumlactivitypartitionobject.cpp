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
#include "private/qmodelingobject_p.h"

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

QUmlActivityPartitionObject::QUmlActivityPartitionObject(QUmlActivityPartition *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActivityPartitionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityPartitionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityPartitionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActivityPartitionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlActivityPartitionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->name();
}

QObject *QUmlActivityPartitionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlActivityPartitionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->namespace_()->asQModelingObject();
}

QString QUmlActivityPartitionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActivityPartitionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->visibility();
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlActivityPartitionObject::containedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->containedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityPartitionObject::containedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->containedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityPartitionObject::inActivity() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->inActivity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->inActivity()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityPartitionObject::subgroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->subgroups())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityPartitionObject::superGroup() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->superGroup())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->superGroup()->asQModelingObject();
}

// OWNED ATTRIBUTES [ActivityPartition]

const QSet<QObject *> QUmlActivityPartitionObject::edges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->edges())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityPartitionObject::isDimension() const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->isDimension();
}

bool QUmlActivityPartitionObject::isExternal() const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->isExternal();
}

const QSet<QObject *> QUmlActivityPartitionObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->nodes())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityPartitionObject::represents() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->represents())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->represents()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityPartitionObject::subpartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->subpartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityPartitionObject::superPartition() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->superPartition())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->superPartition()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActivityPartitionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityPartitionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActivityPartitionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlActivityPartitionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityPartitionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActivityPartitionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityPartitionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityPartitionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityPartitionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityPartitionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityPartitionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityPartitionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityPartitionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityPartitionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setName(name);
}

void QUmlActivityPartitionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActivityPartitionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActivityPartitionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActivityPartitionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlActivityPartitionObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlActivityPartitionObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlActivityPartitionObject::addContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlActivityPartitionObject::removeContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlActivityPartitionObject::setInActivity(QObject *inActivity)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setInActivity(qmodelingelementproperty_cast<QUmlActivity *>(inActivity));
}

void QUmlActivityPartitionObject::addSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlActivityPartitionObject::removeSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlActivityPartitionObject::setSuperGroup(QObject *superGroup)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setSuperGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityPartition]

void QUmlActivityPartitionObject::addEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityPartitionObject::removeEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlActivityPartitionObject::setDimension(bool isDimension)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setDimension(isDimension);
}

void QUmlActivityPartitionObject::unsetDimension()
{
    Q_D(QModelingObject);
    setDimension(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("dimension"));
}

void QUmlActivityPartitionObject::setExternal(bool isExternal)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setExternal(isExternal);
}

void QUmlActivityPartitionObject::unsetExternal()
{
    Q_D(QModelingObject);
    setExternal(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("external"));
}

void QUmlActivityPartitionObject::addNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityPartitionObject::removeNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlActivityPartitionObject::setRepresents(QObject *represents)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setRepresents(qmodelingelementproperty_cast<QUmlElement *>(represents));
}

void QUmlActivityPartitionObject::addSubpartition(QObject *subpartition)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->addSubpartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(subpartition));
}

void QUmlActivityPartitionObject::removeSubpartition(QObject *subpartition)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->removeSubpartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(subpartition));
}

void QUmlActivityPartitionObject::setSuperPartition(QObject *superPartition)
{
    qmodelingelementproperty_cast<QUmlActivityPartition *>(this)->setSuperPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(superPartition));
}


void QUmlActivityPartitionObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlActivityGroup");
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedEdges"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedNodes"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inActivity"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subgroups"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superGroup"))));

    d->propertyGroups << QStringLiteral("QUmlActivityPartition");
    d->groupProperties.insert(QStringLiteral("QUmlActivityPartition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("edges"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityPartition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDimension"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityPartition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isExternal"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityPartition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nodes"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityPartition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("represents"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityPartition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subpartitions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityPartition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superPartition"))));
}

void QUmlActivityPartitionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, DocumentationRole, QStringLiteral("Edges immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, OppositeEndRole, QStringLiteral("ActivityEdge-inGroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, DocumentationRole, QStringLiteral("Nodes immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, OppositeEndRole, QStringLiteral("ActivityNode-inGroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, DocumentationRole, QStringLiteral("Activity containing the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, OppositeEndRole, QStringLiteral("Activity-group"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, DocumentationRole, QStringLiteral("Groups immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, OppositeEndRole, QStringLiteral("ActivityGroup-superGroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, DocumentationRole, QStringLiteral("Group immediately containing the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, OppositeEndRole, QStringLiteral("ActivityGroup-subgroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, PropertyClassRole, QStringLiteral("QUmlActivityPartition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, DocumentationRole, QStringLiteral("Edges immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, SubsettedPropertiesRole, QStringLiteral("ActivityGroup-containedEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, edges, OppositeEndRole, QStringLiteral("ActivityEdge-inPartition"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, PropertyClassRole, QStringLiteral("QUmlActivityPartition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, DocumentationRole, QStringLiteral("Tells whether the partition groups other partitions along a dimension."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isDimension, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, PropertyClassRole, QStringLiteral("QUmlActivityPartition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, DocumentationRole, QStringLiteral("Tells whether the partition represents an entity to which the partitioning structure does not apply."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, isExternal, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, PropertyClassRole, QStringLiteral("QUmlActivityPartition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, DocumentationRole, QStringLiteral("Nodes immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, SubsettedPropertiesRole, QStringLiteral("ActivityGroup-containedNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, nodes, OppositeEndRole, QStringLiteral("ActivityNode-inPartition"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, PropertyClassRole, QStringLiteral("QUmlActivityPartition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, DocumentationRole, QStringLiteral("An element constraining behaviors invoked by nodes in the partition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, represents, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, PropertyClassRole, QStringLiteral("QUmlActivityPartition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, DocumentationRole, QStringLiteral("Partitions immediately contained in the partition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, SubsettedPropertiesRole, QStringLiteral("ActivityGroup-subgroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, subpartitions, OppositeEndRole, QStringLiteral("ActivityPartition-superPartition"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, PropertyClassRole, QStringLiteral("QUmlActivityPartition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, DocumentationRole, QStringLiteral("Partition immediately containing the partition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, SubsettedPropertiesRole, QStringLiteral("ActivityGroup-superGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityPartition, superPartition, OppositeEndRole, QStringLiteral("ActivityPartition-subpartition"));

}

QT_END_NAMESPACE

