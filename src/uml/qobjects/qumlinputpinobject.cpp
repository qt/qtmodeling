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
#include "qumlinputpinobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInputPin>
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

QUmlInputPinObject::QUmlInputPinObject(QUmlInputPin *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlInputPinObject::~QUmlInputPinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInputPin *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInputPinObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInputPinObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlInputPinObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isOrdered();
}

bool QUmlInputPinObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isUnique();
}

int QUmlInputPinObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->lower();
}

QObject *QUmlInputPinObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->lowerValue()->asQModelingObject();
}

int QUmlInputPinObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->upper();
}

QObject *QUmlInputPinObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInputPinObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlInputPinObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->name();
}

QObject *QUmlInputPinObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlInputPinObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->namespace_()->asQModelingObject();
}

QString QUmlInputPinObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInputPinObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlInputPinObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlInputPinObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlInputPinObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlInputPinObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInputPinObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlInputPinObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlInputPinObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlInputPinObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->inStates())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInputPinObject::isControlType() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlInputPinObject::ordering() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->ordering();
}

QObject *QUmlInputPinObject::selection() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->selection())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->selection()->asQModelingObject();
}

QObject *QUmlInputPinObject::upperBound() const
{
    if (!qmodelingelementproperty_cast<QUmlInputPin *>(this)->upperBound())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInputPin *>(this)->upperBound()->asQModelingObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlInputPinObject::isControl() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isControl();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInputPinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInputPinObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlInputPinObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlInputPinObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->includesCardinality(C);
}

bool QUmlInputPinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlInputPinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->is(lowerbound, upperbound);
}

bool QUmlInputPinObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isMultivalued();
}

int QUmlInputPinObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->lowerBound();
}

//int QUmlInputPinObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInputPinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInputPinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInputPin *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInputPinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInputPinObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlInputPinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlInputPinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlInputPin *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInputPinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInputPinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInputPinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInputPinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInputPinObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlInputPinObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setOrdered(isOrdered);
}

void QUmlInputPinObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlInputPinObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setUnique(isUnique);
}

void QUmlInputPinObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlInputPinObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setLower(lower);
}

void QUmlInputPinObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlInputPinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlInputPinObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setUpper(upper);
}

void QUmlInputPinObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlInputPinObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInputPinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInputPinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInputPinObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setName(name);
}

void QUmlInputPinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInputPinObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInputPinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setQualifiedName(qualifiedName);
}

void QUmlInputPinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlInputPinObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setLeaf(isLeaf);
}

void QUmlInputPinObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlInputPinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInputPinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInputPinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlInputPinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlInputPinObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlInputPinObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlInputPinObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlInputPinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlInputPinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlInputPinObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlInputPinObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlInputPinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlInputPinObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlInputPinObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlInputPinObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlInputPinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlInputPinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlInputPinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlInputPinObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlInputPinObject::addInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->addInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlInputPinObject::removeInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->removeInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlInputPinObject::setControlType(bool isControlType)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setControlType(isControlType);
}

void QUmlInputPinObject::unsetControlType()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("controlType"));
}

void QUmlInputPinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setOrdering(ordering);
}

void QUmlInputPinObject::unsetOrdering()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordering"));
}

void QUmlInputPinObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
}

void QUmlInputPinObject::setUpperBound(QObject *upperBound)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setUpperBound(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlInputPinObject::setControl(bool isControl)
{
    qmodelingelementproperty_cast<QUmlInputPin *>(this)->setControl(isControl);
}

void QUmlInputPinObject::unsetControl()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("control"));
}


void QUmlInputPinObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInputPin");
}

void QUmlInputPinObject::setPropertyData()
{
}

QT_END_NAMESPACE

