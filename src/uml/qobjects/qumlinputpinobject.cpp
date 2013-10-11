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

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, DocumentationRole, QStringLiteral("Specifies the lower bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, DocumentationRole, QStringLiteral("The specification of the lower bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, DocumentationRole, QStringLiteral("Specifies the upper bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, DocumentationRole, QStringLiteral("The specification of the upper bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, OppositeEndRole, QStringLiteral(""));

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

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, DocumentationRole, QStringLiteral("Activity containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, OppositeEndRole, QStringLiteral("Activity-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, DocumentationRole, QStringLiteral("Groups containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, OppositeEndRole, QStringLiteral("ActivityGroup-containedNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, DocumentationRole, QStringLiteral("Interruptible regions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, OppositeEndRole, QStringLiteral("InterruptibleActivityRegion-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, DocumentationRole, QStringLiteral("Partitions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, OppositeEndRole, QStringLiteral("ActivityPartition-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, DocumentationRole, QStringLiteral("Structured activity node containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, OppositeEndRole, QStringLiteral("StructuredActivityNode-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, DocumentationRole, QStringLiteral("Edges that have the node as target."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, OppositeEndRole, QStringLiteral("ActivityEdge-target"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, DocumentationRole, QStringLiteral("Edges that have the node as source."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, OppositeEndRole, QStringLiteral("ActivityEdge-source"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, DocumentationRole, QStringLiteral("Inherited nodes replaced by this node in a specialization of the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, PropertyClassRole, QStringLiteral("QUmlTypedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.The type of the TypedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, DocumentationRole, QStringLiteral("The required states of the object available at this point in the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, DocumentationRole, QStringLiteral("Tells whether the type of the object node is to be treated as control."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, DocumentationRole, QStringLiteral("Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, DocumentationRole, QStringLiteral("Selects tokens for outgoing edges."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, DocumentationRole, QStringLiteral("The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, PropertyClassRole, QStringLiteral("QUmlPin"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, DocumentationRole, QStringLiteral("Tells whether the pins provide data to the actions, or just controls when it executes it."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

