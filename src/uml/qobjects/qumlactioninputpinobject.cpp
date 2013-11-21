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

QUmlActionInputPinObject::QUmlActionInputPinObject(QUmlActionInputPin *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
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

QString QUmlActionInputPinObject::upper() const
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

QString QUmlActionInputPinObject::upperBoundOperation() const
{
    return qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->upperBoundOperation();
}

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
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlActionInputPinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlActionInputPinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlActionInputPinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlActionInputPinObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlActionInputPinObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setOrdered(isOrdered);
    emit isOrderedChanged(this->isOrdered());
}

void QUmlActionInputPinObject::unsetOrdered()
{
    Q_D(QModelingObject);
    setOrdered(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isOrdered"));
}

void QUmlActionInputPinObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUnique(isUnique);
    emit isUniqueChanged(this->isUnique());
}

void QUmlActionInputPinObject::unsetUnique()
{
    Q_D(QModelingObject);

    setUnique(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isUnique"));
}

void QUmlActionInputPinObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setLower(lower);
    emit lowerChanged(this->lower());
}

void QUmlActionInputPinObject::unsetLower()
{
    Q_D(QModelingObject);
    setLower(1);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlActionInputPinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
    emit lowerValueChanged(this->lowerValue());
}

void QUmlActionInputPinObject::setUpper(QString upper)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUpper(upper);
    emit upperChanged(this->upper());
}

void QUmlActionInputPinObject::unsetUpper()
{
    Q_D(QModelingObject);
    setUpper(QStringLiteral("1"));
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlActionInputPinObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
    emit upperValueChanged(this->upperValue());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActionInputPinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlActionInputPinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlActionInputPinObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlActionInputPinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlActionInputPinObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlActionInputPinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlActionInputPinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActionInputPinObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlActionInputPinObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlActionInputPinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlActionInputPinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlActionInputPinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlActionInputPinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlActionInputPinObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
    emit activityChanged(this->activity());
}

void QUmlActionInputPinObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlActionInputPinObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
    emit inGroupsChanged(this->inGroups());
}

void QUmlActionInputPinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
    emit inInterruptibleRegionsChanged(this->inInterruptibleRegions());
}

void QUmlActionInputPinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
    emit inInterruptibleRegionsChanged(this->inInterruptibleRegions());
}

void QUmlActionInputPinObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlActionInputPinObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
    emit inPartitionsChanged(this->inPartitions());
}

void QUmlActionInputPinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
    emit inStructuredNodeChanged(this->inStructuredNode());
}

void QUmlActionInputPinObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlActionInputPinObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlActionInputPinObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlActionInputPinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlActionInputPinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
    emit redefinedNodesChanged(this->redefinedNodes());
}

void QUmlActionInputPinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
    emit redefinedNodesChanged(this->redefinedNodes());
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlActionInputPinObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
    emit typeChanged(this->type());
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlActionInputPinObject::addInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->addInState(qmodelingelementproperty_cast<QUmlState *>(inState));
    emit inStatesChanged(this->inStates());
}

void QUmlActionInputPinObject::removeInState(QObject *inState)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->removeInState(qmodelingelementproperty_cast<QUmlState *>(inState));
    emit inStatesChanged(this->inStates());
}

void QUmlActionInputPinObject::setControlType(bool isControlType)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setControlType(isControlType);
    emit isControlTypeChanged(this->isControlType());
}

void QUmlActionInputPinObject::unsetControlType()
{
    Q_D(QModelingObject);
    setControlType(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isControlType"));
}

void QUmlActionInputPinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setOrdering(ordering);
    emit orderingChanged(this->ordering());
}

void QUmlActionInputPinObject::unsetOrdering()
{
    Q_D(QModelingObject);
    setOrdering(QtUml::ObjectNodeOrderingKindFIFO);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordering"));
}

void QUmlActionInputPinObject::setSelection(QObject *selection)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setSelection(qmodelingelementproperty_cast<QUmlBehavior *>(selection));
    emit selectionChanged(this->selection());
}

void QUmlActionInputPinObject::setUpperBound(QObject *upperBound)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setUpperBound(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperBound));
    emit upperBoundChanged(this->upperBound());
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlActionInputPinObject::setControl(bool isControl)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setControl(isControl);
    emit isControlChanged(this->isControl());
}

void QUmlActionInputPinObject::unsetControl()
{
    Q_D(QModelingObject);
    setControl(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isControl"));
}

// SLOTS FOR OWNED ATTRIBUTES [ActionInputPin]

void QUmlActionInputPinObject::setFromAction(QObject *fromAction)
{
    qmodelingelementproperty_cast<QUmlActionInputPin *>(this)->setFromAction(qmodelingelementproperty_cast<QUmlAction *>(fromAction));
    emit fromActionChanged(this->fromAction());
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, PropertyTypeRole, QStringLiteral("int"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, DocumentationRole, QStringLiteral("Specifies the lower bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, PropertyTypeRole, QStringLiteral("QUmlValueSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, DocumentationRole, QStringLiteral("The specification of the lower bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, DocumentationRole, QStringLiteral("Specifies the upper bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, PropertyTypeRole, QStringLiteral("QUmlValueSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, DocumentationRole, QStringLiteral("The specification of the upper bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, OppositeEndRole, QStringLiteral(""));

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

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, PropertyTypeRole, QStringLiteral("QUmlActivity *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, DocumentationRole, QStringLiteral("Activity containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, OppositeEndRole, QStringLiteral("Activity-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityGroup *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, DocumentationRole, QStringLiteral("Groups containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, OppositeEndRole, QStringLiteral("ActivityGroup-containedNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, PropertyTypeRole, QStringLiteral("QSet<QUmlInterruptibleActivityRegion *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, DocumentationRole, QStringLiteral("Interruptible regions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, OppositeEndRole, QStringLiteral("InterruptibleActivityRegion-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityPartition *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, DocumentationRole, QStringLiteral("Partitions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, OppositeEndRole, QStringLiteral("ActivityPartition-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, PropertyTypeRole, QStringLiteral("QUmlStructuredActivityNode *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, DocumentationRole, QStringLiteral("Structured activity node containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, OppositeEndRole, QStringLiteral("StructuredActivityNode-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityEdge *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, DocumentationRole, QStringLiteral("Edges that have the node as target."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, OppositeEndRole, QStringLiteral("ActivityEdge-target"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityEdge *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, DocumentationRole, QStringLiteral("Edges that have the node as source."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, OppositeEndRole, QStringLiteral("ActivityEdge-source"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, PropertyTypeRole, QStringLiteral("QSet<QUmlActivityNode *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, DocumentationRole, QStringLiteral("Inherited nodes replaced by this node in a specialization of the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, PropertyClassRole, QStringLiteral("QUmlTypedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, PropertyTypeRole, QStringLiteral("QUmlType *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.The type of the TypedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, PropertyTypeRole, QStringLiteral("QSet<QUmlState *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, DocumentationRole, QStringLiteral("The required states of the object available at this point in the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, inStates, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, DocumentationRole, QStringLiteral("Tells whether the type of the object node is to be treated as control."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, isControlType, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, PropertyTypeRole, QStringLiteral("QtUml::ObjectNodeOrderingKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, DocumentationRole, QStringLiteral("Tells whether and how the tokens in the object node are ordered for selection to traverse edges outgoing from the object node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, ordering, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, PropertyTypeRole, QStringLiteral("QUmlBehavior *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, DocumentationRole, QStringLiteral("Selects tokens for outgoing edges."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, selection, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, PropertyClassRole, QStringLiteral("QUmlObjectNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, PropertyTypeRole, QStringLiteral("QUmlValueSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, DocumentationRole, QStringLiteral("The maximum number of tokens allowed in the node. Objects cannot flow into the node if the upper bound is reached."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlObjectNode, upperBound, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, PropertyClassRole, QStringLiteral("QUmlPin"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, PropertyTypeRole, QStringLiteral("bool"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, DocumentationRole, QStringLiteral("Tells whether the pins provide data to the actions, or just controls when it executes it."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPin, isControl, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, PropertyClassRole, QStringLiteral("QUmlActionInputPin"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, PropertyTypeRole, QStringLiteral("QUmlAction *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, DocumentationRole, QStringLiteral("The action used to provide values."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActionInputPin, fromAction, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

