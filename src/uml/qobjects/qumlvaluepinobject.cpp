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
#include "qumlvaluepinobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlValuePin>
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

QUmlValuePinObject::QUmlValuePinObject(QUmlValuePin *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlValuePinObject::~QUmlValuePinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlValuePin *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlValuePinObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlValuePinObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlValuePinObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isOrdered();
}

bool QUmlValuePinObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isUnique();
}

int QUmlValuePinObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->lower();
}

QObject *QUmlValuePinObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->lowerValue()->asQModelingObject();
}

int QUmlValuePinObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->upper();
}

QObject *QUmlValuePinObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlValuePinObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlValuePinObject::name() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->name();
}

QObject *QUmlValuePinObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlValuePinObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->namespace_()->asQModelingObject();
}

QString QUmlValuePinObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlValuePinObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlValuePinObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlValuePinObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlValuePinObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlValuePinObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlValuePinObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlValuePinObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlValuePinObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlValuePinObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->inStates())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlValuePinObject::isControlType() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlValuePinObject::ordering() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->ordering();
}

QObject *QUmlValuePinObject::selection() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->selection())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->selection()->asQModelingObject();
}

QObject *QUmlValuePinObject::upperBound() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->upperBound())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->upperBound()->asQModelingObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlValuePinObject::isControl() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isControl();
}

// OWNED ATTRIBUTES [ValuePin]

QObject *QUmlValuePinObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlValuePin *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValuePin *>(this)->value()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlValuePinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlValuePinObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlValuePinObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlValuePinObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->includesCardinality(C);
}

bool QUmlValuePinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlValuePinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->is(lowerbound, upperbound);
}

bool QUmlValuePinObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isMultivalued();
}

int QUmlValuePinObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->lowerBound();
}

//int QUmlValuePinObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlValuePinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlValuePinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlValuePin *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlValuePinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlValuePinObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlValuePinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlValuePinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlValuePin *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlValuePinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValuePinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValuePinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValuePinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValuePinObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlValuePinObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setOrdered(isOrdered);
}

void QUmlValuePinObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlValuePinObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setUnique(isUnique);
}

void QUmlValuePinObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlValuePinObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setLower(lower);
}

void QUmlValuePinObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlValuePinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlValuePinObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setUpper(upper);
}

void QUmlValuePinObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlValuePinObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlValuePinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValuePinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValuePinObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setName(name);
}

void QUmlValuePinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlValuePinObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlValuePinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setQualifiedName(qualifiedName);
}

void QUmlValuePinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlValuePinObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setLeaf(isLeaf);
}

void QUmlValuePinObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlValuePinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValuePinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValuePinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlValuePinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlValuePinObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlValuePinObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValuePinObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValuePinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValuePinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValuePinObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValuePinObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValuePinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlValuePinObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValuePinObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValuePinObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValuePinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValuePinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlValuePinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlValuePinObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlValuePinObject::addInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->addInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlValuePinObject::removeInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->removeInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlValuePinObject::setControlType(bool isControlType)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setControlType(isControlType);
}

void QUmlValuePinObject::unsetControlType()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("controlType"));
}

void QUmlValuePinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setOrdering(ordering);
}

void QUmlValuePinObject::unsetOrdering()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordering"));
}

void QUmlValuePinObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
}

void QUmlValuePinObject::setUpperBound(QObject *upperBound)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setUpperBound(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlValuePinObject::setControl(bool isControl)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setControl(isControl);
}

void QUmlValuePinObject::unsetControl()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("control"));
}

// SLOTS FOR OWNED ATTRIBUTES [ValuePin]

void QUmlValuePinObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlValuePin *>(this)->setValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(value));
}


void QUmlValuePinObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlValuePin");
    d->groupProperties.insert(QStringLiteral("QUmlValuePin"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QUmlValuePinObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, PropertyClassRole, QStringLiteral("QUmlValuePin"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, DocumentationRole, QStringLiteral("Value that the pin will provide."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValuePin, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

