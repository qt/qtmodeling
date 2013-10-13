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
#include "qumlcontrolflowobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlControlFlow>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlControlFlowObject::QUmlControlFlowObject(QUmlControlFlow *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlControlFlowObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlControlFlowObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlControlFlowObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlControlFlowObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlControlFlowObject::name() const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->name();
}

QObject *QUmlControlFlowObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlControlFlowObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->namespace_()->asQModelingObject();
}

QString QUmlControlFlowObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlControlFlowObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlControlFlowObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->isLeaf();
}

const QSet<QObject *> QUmlControlFlowObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlControlFlowObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityEdge]

QObject *QUmlControlFlowObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->activity()->asQModelingObject();
}

QObject *QUmlControlFlowObject::guard() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->guard())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->guard()->asQModelingObject();
}

const QSet<QObject *> QUmlControlFlowObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlControlFlowObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlControlFlowObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->inStructuredNode()->asQModelingObject();
}

QObject *QUmlControlFlowObject::interrupts() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->interrupts())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->interrupts()->asQModelingObject();
}

const QSet<QObject *> QUmlControlFlowObject::redefinedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->redefinedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlControlFlowObject::source() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->source())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->source()->asQModelingObject();
}

QObject *QUmlControlFlowObject::target() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->target())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->target()->asQModelingObject();
}

QObject *QUmlControlFlowObject::weight() const
{
    if (!qmodelingelementproperty_cast<QUmlControlFlow *>(this)->weight())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->weight()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlControlFlowObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlControlFlowObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlControlFlowObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlControlFlowObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlControlFlow *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlControlFlowObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlControlFlowObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlControlFlowObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlControlFlowObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlControlFlow *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlControlFlowObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlControlFlowObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlControlFlowObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlControlFlowObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlControlFlowObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlControlFlowObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlControlFlowObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlControlFlowObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setName(name);
}

void QUmlControlFlowObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlControlFlowObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlControlFlowObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setQualifiedName(qualifiedName);
}

void QUmlControlFlowObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlControlFlowObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setLeaf(isLeaf);
}

void QUmlControlFlowObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlControlFlowObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlControlFlowObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlControlFlowObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlControlFlowObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityEdge]

void QUmlControlFlowObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlControlFlowObject::setGuard(QObject *guard)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setGuard(qmodelingelementproperty_cast<QUmlValueSpecification *>(guard));
}

void QUmlControlFlowObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlControlFlowObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlControlFlowObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlControlFlowObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlControlFlowObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlControlFlowObject::setInterrupts(QObject *interrupts)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setInterrupts(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(interrupts));
}

void QUmlControlFlowObject::addRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->addRedefinedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlControlFlowObject::removeRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->removeRedefinedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlControlFlowObject::setSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setSource(qmodelingelementproperty_cast<QUmlActivityNode *>(source));
}

void QUmlControlFlowObject::setTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setTarget(qmodelingelementproperty_cast<QUmlActivityNode *>(target));
}

void QUmlControlFlowObject::setWeight(QObject *weight)
{
    qmodelingelementproperty_cast<QUmlControlFlow *>(this)->setWeight(qmodelingelementproperty_cast<QUmlValueSpecification *>(weight));
}


void QUmlControlFlowObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlActivityEdge");
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("guard"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inGroups"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inPartitions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStructuredNode"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interrupts"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedEdges"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("source"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("target"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityEdge"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("weight"))));

    d->propertyGroups << QStringLiteral("QUmlControlFlow");
}

void QUmlControlFlowObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, DocumentationRole, QStringLiteral("Activity containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, OppositeEndRole, QStringLiteral("Activity-edge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, DocumentationRole, QStringLiteral("Specification evaluated at runtime to determine if the edge can be traversed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, DocumentationRole, QStringLiteral("Groups containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, OppositeEndRole, QStringLiteral("ActivityGroup-containedEdge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, DocumentationRole, QStringLiteral("Partitions containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, SubsettedPropertiesRole, QStringLiteral("ActivityEdge-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, OppositeEndRole, QStringLiteral("ActivityPartition-edge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, DocumentationRole, QStringLiteral("Structured activity node containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, SubsettedPropertiesRole, QStringLiteral("ActivityEdge-inGroup Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, OppositeEndRole, QStringLiteral("StructuredActivityNode-edge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, DocumentationRole, QStringLiteral("Region that the edge can interrupt."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, OppositeEndRole, QStringLiteral("InterruptibleActivityRegion-interruptingEdge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, DocumentationRole, QStringLiteral("Inherited edges replaced by this edge in a specialization of the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, DocumentationRole, QStringLiteral("Node from which tokens are taken when they traverse the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, OppositeEndRole, QStringLiteral("ActivityNode-outgoing"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, DocumentationRole, QStringLiteral("Node to which tokens are put when they traverse the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, OppositeEndRole, QStringLiteral("ActivityNode-incoming"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, DocumentationRole, QStringLiteral("The minimum number of tokens that must traverse the edge at the same time."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

