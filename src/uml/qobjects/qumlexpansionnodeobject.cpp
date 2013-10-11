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
#include "qumlexpansionnodeobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlExpansionNode>
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
#include <QtUml/QUmlExpansionRegion>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlExpansionNodeObject::QUmlExpansionNodeObject(QUmlExpansionNode *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlExpansionNodeObject::~QUmlExpansionNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExpansionNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExpansionNodeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExpansionNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlExpansionNodeObject::name() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->name();
}

QObject *QUmlExpansionNodeObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlExpansionNodeObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->namespace_()->asQModelingObject();
}

QString QUmlExpansionNodeObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExpansionNodeObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExpansionNodeObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExpansionNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlExpansionNodeObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlExpansionNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExpansionNodeObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlExpansionNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlExpansionNodeObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlExpansionNodeObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->inStates())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpansionNodeObject::isControlType() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlExpansionNodeObject::ordering() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->ordering();
}

QObject *QUmlExpansionNodeObject::selection() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->selection())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->selection()->asQModelingObject();
}

QObject *QUmlExpansionNodeObject::upperBound() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->upperBound())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->upperBound()->asQModelingObject();
}

// OWNED ATTRIBUTES [ExpansionNode]

QObject *QUmlExpansionNodeObject::regionAsInput() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->regionAsInput())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->regionAsInput()->asQModelingObject();
}

QObject *QUmlExpansionNodeObject::regionAsOutput() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->regionAsOutput())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->regionAsOutput()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExpansionNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpansionNodeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExpansionNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExpansionNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpansionNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExpansionNodeObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlExpansionNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExpansionNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExpansionNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionNodeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExpansionNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionNodeObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setName(name);
}

void QUmlExpansionNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExpansionNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExpansionNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlExpansionNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExpansionNodeObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setLeaf(isLeaf);
}

void QUmlExpansionNodeObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlExpansionNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExpansionNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlExpansionNodeObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlExpansionNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlExpansionNodeObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlExpansionNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlExpansionNodeObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlExpansionNodeObject::addInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->addInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlExpansionNodeObject::removeInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->removeInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlExpansionNodeObject::setControlType(bool isControlType)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setControlType(isControlType);
}

void QUmlExpansionNodeObject::unsetControlType()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("controlType"));
}

void QUmlExpansionNodeObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setOrdering(ordering);
}

void QUmlExpansionNodeObject::unsetOrdering()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordering"));
}

void QUmlExpansionNodeObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
}

void QUmlExpansionNodeObject::setUpperBound(QObject *upperBound)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setUpperBound(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [ExpansionNode]

void QUmlExpansionNodeObject::setRegionAsInput(QObject *regionAsInput)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setRegionAsInput(qmodelingelementproperty_cast<QUmlExpansionRegion *>(regionAsInput));
}

void QUmlExpansionNodeObject::setRegionAsOutput(QObject *regionAsOutput)
{
    qmodelingelementproperty_cast<QUmlExpansionNode *>(this)->setRegionAsOutput(qmodelingelementproperty_cast<QUmlExpansionRegion *>(regionAsOutput));
}


void QUmlExpansionNodeObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlActivityNode");
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inGroups"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inInterruptibleRegions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inPartitions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStructuredNode"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedNodes"))));

    d->propertyGroups << QStringLiteral("QUmlTypedElement");
    d->groupProperties.insert(QStringLiteral("QUmlTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QUmlObjectNode");
    d->groupProperties.insert(QStringLiteral("QUmlObjectNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStates"))));
    d->groupProperties.insert(QStringLiteral("QUmlObjectNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isControlType"))));
    d->groupProperties.insert(QStringLiteral("QUmlObjectNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ordering"))));
    d->groupProperties.insert(QStringLiteral("QUmlObjectNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("selection"))));
    d->groupProperties.insert(QStringLiteral("QUmlObjectNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upperBound"))));

    d->propertyGroups << QStringLiteral("QUmlExpansionNode");
    d->groupProperties.insert(QStringLiteral("QUmlExpansionNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("regionAsInput"))));
    d->groupProperties.insert(QStringLiteral("QUmlExpansionNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("regionAsOutput"))));
}

void QUmlExpansionNodeObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, PropertyClassRole, QStringLiteral("QUmlExpansionNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, DocumentationRole, QStringLiteral("The expansion region for which the node is an input."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsInput, OppositeEndRole, QStringLiteral("ExpansionRegion-inputElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, PropertyClassRole, QStringLiteral("QUmlExpansionNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, DocumentationRole, QStringLiteral("The expansion region for which the node is an output."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionNode, regionAsOutput, OppositeEndRole, QStringLiteral("ExpansionRegion-outputElement"));

}

QT_END_NAMESPACE

