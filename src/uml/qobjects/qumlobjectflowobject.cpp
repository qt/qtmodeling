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
#include "qumlobjectflowobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlObjectFlow>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
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

QUmlObjectFlowObject::QUmlObjectFlowObject(QUmlObjectFlow *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlObjectFlowObject::~QUmlObjectFlowObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlObjectFlowObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlObjectFlowObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlObjectFlowObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlObjectFlowObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlObjectFlowObject::name() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->name();
}

QObject *QUmlObjectFlowObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlObjectFlowObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->namespace_()->asQModelingObject();
}

QString QUmlObjectFlowObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlObjectFlowObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlObjectFlowObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->isLeaf();
}

const QSet<QObject *> QUmlObjectFlowObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlObjectFlowObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityEdge]

QObject *QUmlObjectFlowObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->activity()->asQModelingObject();
}

QObject *QUmlObjectFlowObject::guard() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->guard())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->guard()->asQModelingObject();
}

const QSet<QObject *> QUmlObjectFlowObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlObjectFlowObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlObjectFlowObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->inStructuredNode()->asQModelingObject();
}

QObject *QUmlObjectFlowObject::interrupts() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->interrupts())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->interrupts()->asQModelingObject();
}

const QSet<QObject *> QUmlObjectFlowObject::redefinedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->redefinedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlObjectFlowObject::source() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->source())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->source()->asQModelingObject();
}

QObject *QUmlObjectFlowObject::target() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->target())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->target()->asQModelingObject();
}

QObject *QUmlObjectFlowObject::weight() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->weight())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->weight()->asQModelingObject();
}

// OWNED ATTRIBUTES [ObjectFlow]

bool QUmlObjectFlowObject::isMulticast() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->isMulticast();
}

bool QUmlObjectFlowObject::isMultireceive() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->isMultireceive();
}

QObject *QUmlObjectFlowObject::selection() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->selection())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->selection()->asQModelingObject();
}

QObject *QUmlObjectFlowObject::transformation() const
{
    if (!qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->transformation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->transformation()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlObjectFlowObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlObjectFlowObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlObjectFlowObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlObjectFlowObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlObjectFlowObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlObjectFlowObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlObjectFlowObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlObjectFlowObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlObjectFlowObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlObjectFlowObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlObjectFlowObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlObjectFlowObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlObjectFlowObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlObjectFlowObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlObjectFlowObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlObjectFlowObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setName(name);
}

void QUmlObjectFlowObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlObjectFlowObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlObjectFlowObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setQualifiedName(qualifiedName);
}

void QUmlObjectFlowObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlObjectFlowObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setLeaf(isLeaf);
}

void QUmlObjectFlowObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlObjectFlowObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlObjectFlowObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlObjectFlowObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlObjectFlowObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityEdge]

void QUmlObjectFlowObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlObjectFlowObject::setGuard(QObject *guard)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setGuard(qmodelingelementproperty_cast<QUmlValueSpecification *>(guard));
}

void QUmlObjectFlowObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlObjectFlowObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlObjectFlowObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlObjectFlowObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlObjectFlowObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlObjectFlowObject::setInterrupts(QObject *interrupts)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setInterrupts(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(interrupts));
}

void QUmlObjectFlowObject::addRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addRedefinedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlObjectFlowObject::removeRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeRedefinedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlObjectFlowObject::setSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setSource(qmodelingelementproperty_cast<QUmlActivityNode *>(source));
}

void QUmlObjectFlowObject::setTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setTarget(qmodelingelementproperty_cast<QUmlActivityNode *>(target));
}

void QUmlObjectFlowObject::setWeight(QObject *weight)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setWeight(qmodelingelementproperty_cast<QUmlValueSpecification *>(weight));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectFlow]

void QUmlObjectFlowObject::setMulticast(bool isMulticast)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setMulticast(isMulticast);
}

void QUmlObjectFlowObject::unsetMulticast()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("multicast"));
}

void QUmlObjectFlowObject::setMultireceive(bool isMultireceive)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setMultireceive(isMultireceive);
}

void QUmlObjectFlowObject::unsetMultireceive()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("multireceive"));
}

void QUmlObjectFlowObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
}

void QUmlObjectFlowObject::setTransformation(QObject *transformation)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setTransformation(qmodelingelementproperty_cast<QUmlBehavior *>(transformation));
}


void QUmlObjectFlowObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlObjectFlow");
    d->groupProperties.insert(QStringLiteral("QUmlObjectFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isMulticast"))));
    d->groupProperties.insert(QStringLiteral("QUmlObjectFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isMultireceive"))));
    d->groupProperties.insert(QStringLiteral("QUmlObjectFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("selection"))));
    d->groupProperties.insert(QStringLiteral("QUmlObjectFlow"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("transformation"))));
}

void QUmlObjectFlowObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, DocumentationRole, QStringLiteral("Tells whether the objects in the flow are passed by multicasting."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, DocumentationRole, QStringLiteral("Tells whether the objects in the flow are gathered from respondents to multicasting."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, DocumentationRole, QStringLiteral("Selects tokens from a source object node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, DocumentationRole, QStringLiteral("Changes or replaces data tokens flowing along edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

