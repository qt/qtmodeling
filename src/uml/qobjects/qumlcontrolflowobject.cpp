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

QUmlControlFlowObject::~QUmlControlFlowObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlControlFlow *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
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
}

QT_END_NAMESPACE

