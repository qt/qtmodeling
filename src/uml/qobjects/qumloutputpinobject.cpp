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
#include "qumloutputpinobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlOutputPin>
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
#include <QtUml/QUmlMultiplicityElement>
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

QUmlOutputPinObject::QUmlOutputPinObject(QUmlOutputPin *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlOutputPinObject::~QUmlOutputPinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlOutputPin *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOutputPinObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOutputPinObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlOutputPinObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isOrdered();
}

bool QUmlOutputPinObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isUnique();
}

int QUmlOutputPinObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->lower();
}

QObject *QUmlOutputPinObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->lowerValue()->asQModelingObject();
}

int QUmlOutputPinObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->upper();
}

QObject *QUmlOutputPinObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOutputPinObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlOutputPinObject::name() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->name();
}

QObject *QUmlOutputPinObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlOutputPinObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->namespace_()->asQModelingObject();
}

QString QUmlOutputPinObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOutputPinObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOutputPinObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOutputPinObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlOutputPinObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlOutputPinObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOutputPinObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlOutputPinObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlOutputPinObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlOutputPinObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->inStates())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOutputPinObject::isControlType() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlOutputPinObject::ordering() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->ordering();
}

QObject *QUmlOutputPinObject::selection() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->selection())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->selection()->asQModelingObject();
}

QObject *QUmlOutputPinObject::upperBound() const
{
    if (!qmodelingelementproperty_cast<QUmlOutputPin *>(this)->upperBound())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->upperBound()->asQModelingObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlOutputPinObject::isControl() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isControl();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOutputPinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOutputPinObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlOutputPinObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlOutputPinObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->includesCardinality(C);
}

bool QUmlOutputPinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlOutputPinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->is(lowerbound, upperbound);
}

bool QUmlOutputPinObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isMultivalued();
}

int QUmlOutputPinObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->lowerBound();
}

//int QUmlOutputPinObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOutputPinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlOutputPinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlOutputPin *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOutputPinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOutputPinObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlOutputPinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlOutputPinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlOutputPin *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOutputPinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOutputPinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOutputPinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOutputPinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOutputPinObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlOutputPinObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setOrdered(isOrdered);
}

void QUmlOutputPinObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlOutputPinObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setUnique(isUnique);
}

void QUmlOutputPinObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlOutputPinObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setLower(lower);
}

void QUmlOutputPinObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlOutputPinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlOutputPinObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setUpper(upper);
}

void QUmlOutputPinObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlOutputPinObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOutputPinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOutputPinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOutputPinObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setName(name);
}

void QUmlOutputPinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOutputPinObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOutputPinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOutputPinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOutputPinObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setLeaf(isLeaf);
}

void QUmlOutputPinObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlOutputPinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOutputPinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOutputPinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOutputPinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlOutputPinObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlOutputPinObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOutputPinObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOutputPinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOutputPinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOutputPinObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOutputPinObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOutputPinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlOutputPinObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOutputPinObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOutputPinObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOutputPinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOutputPinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlOutputPinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlOutputPinObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlOutputPinObject::addInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->addInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlOutputPinObject::removeInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->removeInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlOutputPinObject::setControlType(bool isControlType)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setControlType(isControlType);
}

void QUmlOutputPinObject::unsetControlType()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("controlType"));
}

void QUmlOutputPinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setOrdering(ordering);
}

void QUmlOutputPinObject::unsetOrdering()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordering"));
}

void QUmlOutputPinObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
}

void QUmlOutputPinObject::setUpperBound(QObject *upperBound)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setUpperBound(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlOutputPinObject::setControl(bool isControl)
{
    qmodelingelementproperty_cast<QUmlOutputPin *>(this)->setControl(isControl);
}

void QUmlOutputPinObject::unsetControl()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("control"));
}


void QUmlOutputPinObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlMultiplicityElement");
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lowerValue"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upperValue"))));

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

    d->propertyGroups << QStringLiteral("QUmlPin");
    d->groupProperties.insert(QStringLiteral("QUmlPin"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isControl"))));

    d->propertyGroups << QStringLiteral("QUmlOutputPin");
}

void QUmlOutputPinObject::setPropertyData()
{
}

QT_END_NAMESPACE

