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
#include "qumlactioninputpinobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlActionInputPin>
#include <QtUml/QUmlAction>
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

QUmlActionInputPinObject::QUmlActionInputPinObject(QUmlActionInputPin *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlActionInputPinObject::~QUmlActionInputPinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActionInputPinObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActionInputPinObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlActionInputPinObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isOrdered();
}

bool QUmlActionInputPinObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isUnique();
}

int QUmlActionInputPinObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->lower();
}

QObject *QUmlActionInputPinObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->lowerValue()->asQModelingObject();
}

int QUmlActionInputPinObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->upper();
}

QObject *QUmlActionInputPinObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActionInputPinObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlActionInputPinObject::name() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->name();
}

QObject *QUmlActionInputPinObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlActionInputPinObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->namespace_()->asQModelingObject();
}

QString QUmlActionInputPinObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActionInputPinObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActionInputPinObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActionInputPinObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlActionInputPinObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlActionInputPinObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlActionInputPinObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlActionInputPinObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlActionInputPinObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlActionInputPinObject::inStates() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->inStates())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActionInputPinObject::isControlType() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlActionInputPinObject::ordering() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->ordering();
}

QObject *QUmlActionInputPinObject::selection() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->selection())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->selection()->asQModelingObject();
}

QObject *QUmlActionInputPinObject::upperBound() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->upperBound())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->upperBound()->asQModelingObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlActionInputPinObject::isControl() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isControl();
}

// OWNED ATTRIBUTES [ActionInputPin]

QObject *QUmlActionInputPinObject::fromAction() const
{
    if (!qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->fromAction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->fromAction()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActionInputPinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActionInputPinObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlActionInputPinObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlActionInputPinObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->includesCardinality(C);
}

bool QUmlActionInputPinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlActionInputPinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->is(lowerbound, upperbound);
}

bool QUmlActionInputPinObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isMultivalued();
}

int QUmlActionInputPinObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->lowerBound();
}

//int QUmlActionInputPinObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActionInputPinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlActionInputPinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlActionInputPinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActionInputPinObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlActionInputPinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActionInputPinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActionInputPinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionInputPinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionInputPinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionInputPinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionInputPinObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlActionInputPinObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setOrdered(isOrdered);
}

void QUmlActionInputPinObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlActionInputPinObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUnique(isUnique);
}

void QUmlActionInputPinObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlActionInputPinObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setLower(lower);
}

void QUmlActionInputPinObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlActionInputPinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlActionInputPinObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUpper(upper);
}

void QUmlActionInputPinObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlActionInputPinObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActionInputPinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionInputPinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionInputPinObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setName(name);
}

void QUmlActionInputPinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActionInputPinObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActionInputPinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActionInputPinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActionInputPinObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setLeaf(isLeaf);
}

void QUmlActionInputPinObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlActionInputPinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActionInputPinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActionInputPinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActionInputPinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlActionInputPinObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlActionInputPinObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActionInputPinObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActionInputPinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActionInputPinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActionInputPinObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActionInputPinObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActionInputPinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlActionInputPinObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActionInputPinObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActionInputPinObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActionInputPinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActionInputPinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlActionInputPinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlActionInputPinObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlActionInputPinObject::addInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlActionInputPinObject::removeInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInState(qmodelingelementproperty_cast<QUmlState *>(inState));
}

void QUmlActionInputPinObject::setControlType(bool isControlType)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setControlType(isControlType);
}

void QUmlActionInputPinObject::unsetControlType()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("controlType"));
}

void QUmlActionInputPinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setOrdering(ordering);
}

void QUmlActionInputPinObject::unsetOrdering()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordering"));
}

void QUmlActionInputPinObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
}

void QUmlActionInputPinObject::setUpperBound(QObject *upperBound)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUpperBound(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlActionInputPinObject::setControl(bool isControl)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setControl(isControl);
}

void QUmlActionInputPinObject::unsetControl()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("control"));
}

// SLOTS FOR OWNED ATTRIBUTES [ActionInputPin]

void QUmlActionInputPinObject::setFromAction(QObject *fromAction)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setFromAction(qmodelingelementproperty_cast<QUmlAction *>(fromAction));
}


void QUmlActionInputPinObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlActionInputPin");
    d->groupProperties.insert(QStringLiteral("QUmlActionInputPin"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("fromAction"))));
}

void QUmlActionInputPinObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, PropertyClassRole, QStringLiteral("QUmlActionInputPin"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, DocumentationRole, QStringLiteral("The action used to provide values."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

