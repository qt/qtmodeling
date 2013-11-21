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
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlObjectFlowObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlObjectFlowObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlObjectFlowObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlObjectFlowObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlObjectFlowObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlObjectFlowObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlObjectFlowObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlObjectFlowObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlObjectFlowObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlObjectFlowObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlObjectFlowObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlObjectFlowObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlObjectFlowObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlObjectFlowObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlObjectFlowObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlObjectFlowObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlObjectFlowObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityEdge]

void QUmlObjectFlowObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
    emit activityChanged(this->activity());
}

void QUmlObjectFlowObject::setGuard(QObject *guard)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setGuard(qmodelingelementproperty_cast<QUmlValueSpecification *>(guard));
    emit guardChanged(this->guard());
}

void QUmlObjectFlowObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlObjectFlowObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlObjectFlowObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlObjectFlowObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlObjectFlowObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
    emit inStructuredNodeChanged(this->inStructuredNode());
}

void QUmlObjectFlowObject::setInterrupts(QObject *interrupts)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setInterrupts(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(interrupts));
    emit interruptsChanged(this->interrupts());
}

void QUmlObjectFlowObject::addRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->addRedefinedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(redefinedEdge));
    emit redefinedEdgesChanged(this->redefinedEdges());
}

void QUmlObjectFlowObject::removeRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->removeRedefinedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(redefinedEdge));
    emit redefinedEdgesChanged(this->redefinedEdges());
}

void QUmlObjectFlowObject::setSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setSource(qmodelingelementproperty_cast<QUmlActivityNode *>(source));
    emit sourceChanged(this->source());
}

void QUmlObjectFlowObject::setTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setTarget(qmodelingelementproperty_cast<QUmlActivityNode *>(target));
    emit targetChanged(this->target());
}

void QUmlObjectFlowObject::setWeight(QObject *weight)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setWeight(qmodelingelementproperty_cast<QUmlValueSpecification *>(weight));
    emit weightChanged(this->weight());
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectFlow]

void QUmlObjectFlowObject::setMulticast(bool isMulticast)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setMulticast(isMulticast);
    emit isMulticastChanged(this->isMulticast());
}

void QUmlObjectFlowObject::unsetMulticast()
{
    Q_D(QModelingObject);
    setMulticast(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isMulticast"));
}

void QUmlObjectFlowObject::setMultireceive(bool isMultireceive)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setMultireceive(isMultireceive);
    emit isMultireceiveChanged(this->isMultireceive());
}

void QUmlObjectFlowObject::unsetMultireceive()
{
    Q_D(QModelingObject);
    setMultireceive(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isMultireceive"));
}

void QUmlObjectFlowObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
    emit selectionChanged(this->selection());
}

void QUmlObjectFlowObject::setTransformation(QObject *transformation)
{
    qmodelingelementproperty_cast<QUmlObjectFlow *>(this)->setTransformation(qmodelingelementproperty_cast<QUmlBehavior *>(transformation));
    emit transformationChanged(this->transformation());
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
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyTypeRole, QStringLiteral("QSet<QUmlComment *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyTypeRole, QStringLiteral("QUmlElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyTypeRole, QStringLiteral("QSet<QUmlDependency *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyTypeRole, QStringLiteral("QUmlStringExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyTypeRole, QStringLiteral("QUmlNamespace *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlRedefinableElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyTypeRole, QStringLiteral("QSet<QUmlClassifier *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, PropertyTypeRole, QStringLiteral("QUmlActivity *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, DocumentationRole, QStringLiteral("Activity containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, activity, OppositeEndRole, QStringLiteral("Activity-edge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, PropertyTypeRole, QStringLiteral("QUmlValueSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, DocumentationRole, QStringLiteral("Specification evaluated at runtime to determine if the edge can be traversed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, guard, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityGroup *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, DocumentationRole, QStringLiteral("Groups containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inGroups, OppositeEndRole, QStringLiteral("ActivityGroup-containedEdge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityPartition *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, DocumentationRole, QStringLiteral("Partitions containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, SubsettedPropertiesRole, QStringLiteral("ActivityEdge-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inPartitions, OppositeEndRole, QStringLiteral("ActivityPartition-edge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, PropertyTypeRole, QStringLiteral("QUmlStructuredActivityNode *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, DocumentationRole, QStringLiteral("Structured activity node containing the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, SubsettedPropertiesRole, QStringLiteral("ActivityEdge-inGroup Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, inStructuredNode, OppositeEndRole, QStringLiteral("StructuredActivityNode-edge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, PropertyTypeRole, QStringLiteral("QUmlInterruptibleActivityRegion *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, DocumentationRole, QStringLiteral("Region that the edge can interrupt."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, interrupts, OppositeEndRole, QStringLiteral("InterruptibleActivityRegion-interruptingEdge"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityEdge *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, DocumentationRole, QStringLiteral("Inherited edges replaced by this edge in a specialization of the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, redefinedEdges, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, PropertyTypeRole, QStringLiteral("QUmlActivityNode *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, DocumentationRole, QStringLiteral("Node from which tokens are taken when they traverse the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, source, OppositeEndRole, QStringLiteral("ActivityNode-outgoing"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, PropertyTypeRole, QStringLiteral("QUmlActivityNode *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, DocumentationRole, QStringLiteral("Node to which tokens are put when they traverse the edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, target, OppositeEndRole, QStringLiteral("ActivityNode-incoming"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, PropertyClassRole, QStringLiteral("QUmlActivityEdge"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, PropertyTypeRole, QStringLiteral("QUmlValueSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, DocumentationRole, QStringLiteral("The minimum number of tokens that must traverse the edge at the same time."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityEdge, weight, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, DocumentationRole, QStringLiteral("Tells whether the objects in the flow are passed by multicasting."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMulticast, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, DocumentationRole, QStringLiteral("Tells whether the objects in the flow are gathered from respondents to multicasting."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, isMultireceive, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, PropertyTypeRole, QStringLiteral("QUmlBehavior *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, DocumentationRole, QStringLiteral("Selects tokens from a source object node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, selection, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, PropertyClassRole, QStringLiteral("QUmlObjectFlow"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, PropertyTypeRole, QStringLiteral("QUmlBehavior *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, DocumentationRole, QStringLiteral("Changes or replaces data tokens flowing along edge."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectFlow, transformation, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

