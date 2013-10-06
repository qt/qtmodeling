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

QUmlActivityParameterNodeObject::QUmlActivityParameterNodeObject(QUmlActivityParameterNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlActivityParameterNodeObject::~QUmlActivityParameterNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActivityParameterNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityParameterNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActivityParameterNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlActivityParameterNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->name();
}

QObject *QUmlActivityParameterNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlActivityParameterNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->namespace_()->asQObject();
}

QString QUmlActivityParameterNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActivityParameterNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActivityParameterNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActivityParameterNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlActivityParameterNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlActivityParameterNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActivityParameterNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlActivityParameterNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActivityParameterNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlActivityParameterNodeObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlActivityParameterNodeObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->inStates())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityParameterNodeObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlActivityParameterNodeObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->ordering();
}

QObject *QUmlActivityParameterNodeObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->selection()->asQObject();
}

QObject *QUmlActivityParameterNodeObject::upperBound() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->upperBound())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->upperBound()->asQObject();
}

// OWNED ATTRIBUTES [ActivityParameterNode]

QObject *QUmlActivityParameterNodeObject::parameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->parameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->parameter()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActivityParameterNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityParameterNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActivityParameterNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActivityParameterNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActivityParameterNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActivityParameterNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlActivityParameterNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActivityParameterNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActivityParameterNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityParameterNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActivityParameterNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityParameterNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActivityParameterNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActivityParameterNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityParameterNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActivityParameterNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setName(name);
}

void QUmlActivityParameterNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActivityParameterNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActivityParameterNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActivityParameterNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActivityParameterNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setLeaf(isLeaf);
}

void QUmlActivityParameterNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlActivityParameterNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityParameterNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActivityParameterNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActivityParameterNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlActivityParameterNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlActivityParameterNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActivityParameterNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActivityParameterNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActivityParameterNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActivityParameterNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActivityParameterNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActivityParameterNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlActivityParameterNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActivityParameterNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActivityParameterNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActivityParameterNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActivityParameterNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlActivityParameterNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlActivityParameterNodeObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlActivityParameterNodeObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlActivityParameterNodeObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlActivityParameterNodeObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setControlType(isControlType);
}

void QUmlActivityParameterNodeObject::unsetControlType()
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("controlType"));
}

void QUmlActivityParameterNodeObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setOrdering(ordering);
}

void QUmlActivityParameterNodeObject::unsetOrdering()
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordering"));
}

void QUmlActivityParameterNodeObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlActivityParameterNodeObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityParameterNode]

void QUmlActivityParameterNodeObject::setParameter(QObject *parameter)
{
    qmodelingobjectproperty_cast<QUmlActivityParameterNode *>(this)->setParameter(qmodelingobjectproperty_cast<QUmlParameter *>(parameter));
}

QT_END_NAMESPACE

