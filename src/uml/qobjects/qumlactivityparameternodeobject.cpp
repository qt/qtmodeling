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
#include "qumlactivityparameternodeobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlActivityParameterNode>
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
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlActivityParameterNodeObject::QUmlActivityParameterNodeObject(QUmlActivityParameterNode *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlActivityParameterNodeObject::~QUmlActivityParameterNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActivityParameterNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityParameterNodeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActivityParameterNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlActivityParameterNodeObject::name() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->name();
}

QObject *QUmlActivityParameterNodeObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlActivityParameterNodeObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->namespace_()->asQModelingObject();
}

QString QUmlActivityParameterNodeObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActivityParameterNodeObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActivityParameterNodeObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActivityParameterNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlActivityParameterNodeObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityParameterNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActivityParameterNodeObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlActivityParameterNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlActivityParameterNodeObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlActivityParameterNodeObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->inStates())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityParameterNodeObject::isControlType() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlActivityParameterNodeObject::ordering() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->ordering();
}

QObject *QUmlActivityParameterNodeObject::selection() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->selection())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->selection()->asQModelingObject();
}

QObject *QUmlActivityParameterNodeObject::upperBound() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->upperBound())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->upperBound()->asQModelingObject();
}

// OWNED ATTRIBUTES [ActivityParameterNode]

QObject *QUmlActivityParameterNodeObject::parameter() const
{
    if (!qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->parameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->parameter()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActivityParameterNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityParameterNodeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActivityParameterNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlActivityParameterNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActivityParameterNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActivityParameterNodeObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlActivityParameterNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActivityParameterNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityParameterNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityParameterNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityParameterNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityParameterNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityParameterNodeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityParameterNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityParameterNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityParameterNodeObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setName(name);
}

void QUmlActivityParameterNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActivityParameterNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActivityParameterNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActivityParameterNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActivityParameterNodeObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setLeaf(isLeaf);
}

void QUmlActivityParameterNodeObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlActivityParameterNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityParameterNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityParameterNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActivityParameterNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlActivityParameterNodeObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlActivityParameterNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActivityParameterNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActivityParameterNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActivityParameterNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActivityParameterNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActivityParameterNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActivityParameterNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlActivityParameterNodeObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActivityParameterNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActivityParameterNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActivityParameterNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActivityParameterNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlActivityParameterNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlActivityParameterNodeObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlActivityParameterNodeObject::addInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->addInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlActivityParameterNodeObject::removeInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->removeInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlActivityParameterNodeObject::setControlType(bool isControlType)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setControlType(isControlType);
}

void QUmlActivityParameterNodeObject::unsetControlType()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("controlType"));
}

void QUmlActivityParameterNodeObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setOrdering(ordering);
}

void QUmlActivityParameterNodeObject::unsetOrdering()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordering"));
}

void QUmlActivityParameterNodeObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
}

void QUmlActivityParameterNodeObject::setUpperBound(QObject *upperBound)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setUpperBound(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityParameterNode]

void QUmlActivityParameterNodeObject::setParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlActivityParameterNode *>(this)->setParameter(qmodelingelementproperty_cast<QUmlParameter *>(parameter));
}


void QUmlActivityParameterNodeObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlActivityParameterNode");
    d->groupProperties.insert(QStringLiteral("QUmlActivityParameterNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameter"))));
}

void QUmlActivityParameterNodeObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, PropertyClassRole, QStringLiteral("QUmlActivityParameterNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, DocumentationRole, QStringLiteral("The parameter the object node will be accepting or providing values for."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityParameterNode, parameter, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

