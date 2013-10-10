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
#include "qumlinterruptibleactivityregionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInterruptibleActivityRegion>
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

QUmlInterruptibleActivityRegionObject::QUmlInterruptibleActivityRegionObject(QUmlInterruptibleActivityRegion *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlInterruptibleActivityRegionObject::~QUmlInterruptibleActivityRegionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInterruptibleActivityRegionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlInterruptibleActivityRegionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->name();
}

QObject *QUmlInterruptibleActivityRegionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlInterruptibleActivityRegionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->namespace_()->asQModelingObject();
}

QString QUmlInterruptibleActivityRegionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInterruptibleActivityRegionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->visibility();
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::containedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->containedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::containedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->containedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInterruptibleActivityRegionObject::inActivity() const
{
    if (!qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->inActivity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->inActivity()->asQModelingObject();
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::subgroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->subgroups())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInterruptibleActivityRegionObject::superGroup() const
{
    if (!qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->superGroup())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->superGroup()->asQModelingObject();
}

// OWNED ATTRIBUTES [InterruptibleActivityRegion]

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::interruptingEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->interruptingEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInterruptibleActivityRegionObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->nodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInterruptibleActivityRegionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInterruptibleActivityRegionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInterruptibleActivityRegionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInterruptibleActivityRegionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInterruptibleActivityRegionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInterruptibleActivityRegionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInterruptibleActivityRegionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterruptibleActivityRegionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInterruptibleActivityRegionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterruptibleActivityRegionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInterruptibleActivityRegionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInterruptibleActivityRegionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterruptibleActivityRegionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInterruptibleActivityRegionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setName(name);
}

void QUmlInterruptibleActivityRegionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInterruptibleActivityRegionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInterruptibleActivityRegionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setQualifiedName(qualifiedName);
}

void QUmlInterruptibleActivityRegionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlInterruptibleActivityRegionObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlInterruptibleActivityRegionObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlInterruptibleActivityRegionObject::addContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlInterruptibleActivityRegionObject::removeContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlInterruptibleActivityRegionObject::setInActivity(QObject *inActivity)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setInActivity(qmodelingelementproperty_cast<QUmlActivity *>(inActivity));
}

void QUmlInterruptibleActivityRegionObject::addSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlInterruptibleActivityRegionObject::removeSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlInterruptibleActivityRegionObject::setSuperGroup(QObject *superGroup)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->setSuperGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [InterruptibleActivityRegion]

void QUmlInterruptibleActivityRegionObject::addInterruptingEdge(QObject *interruptingEdge)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addInterruptingEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(interruptingEdge));
}

void QUmlInterruptibleActivityRegionObject::removeInterruptingEdge(QObject *interruptingEdge)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeInterruptingEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(interruptingEdge));
}

void QUmlInterruptibleActivityRegionObject::addNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->addNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlInterruptibleActivityRegionObject::removeNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(this)->removeNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}


void QUmlInterruptibleActivityRegionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInterruptibleActivityRegion");
    d->groupProperties.insert(QStringLiteral("QUmlInterruptibleActivityRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interruptingEdges"))));
    d->groupProperties.insert(QStringLiteral("QUmlInterruptibleActivityRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nodes"))));
}

void QUmlInterruptibleActivityRegionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, PropertyClassRole, QStringLiteral("QUmlInterruptibleActivityRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, DocumentationRole, QStringLiteral("The edges leaving the region that will abort other tokens flowing in the region."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, interruptingEdges, OppositeEndRole, QStringLiteral("ActivityEdge-interrupts"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, PropertyClassRole, QStringLiteral("QUmlInterruptibleActivityRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, DocumentationRole, QStringLiteral("Nodes immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, SubsettedPropertiesRole, QStringLiteral("ActivityGroup-containedNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterruptibleActivityRegion, nodes, OppositeEndRole, QStringLiteral("ActivityNode-inInterruptibleRegion"));

}

QT_END_NAMESPACE

