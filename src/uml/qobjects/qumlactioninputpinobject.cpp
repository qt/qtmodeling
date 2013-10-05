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

QUmlActionInputPinObject::QUmlActionInputPinObject(QUmlActionInputPin *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlActionInputPinObject::~QUmlActionInputPinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlActionInputPinObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActionInputPinObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlActionInputPinObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isOrdered();
}

bool QUmlActionInputPinObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isUnique();
}

int QUmlActionInputPinObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->lower();
}

QObject *QUmlActionInputPinObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->lowerValue()->asQObject();
}

int QUmlActionInputPinObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->upper();
}

QObject *QUmlActionInputPinObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlActionInputPinObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlActionInputPinObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->name();
}

QObject *QUmlActionInputPinObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->nameExpression()->asQObject();
}

QObject *QUmlActionInputPinObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->namespace_()->asQObject();
}

QString QUmlActionInputPinObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlActionInputPinObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlActionInputPinObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlActionInputPinObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlActionInputPinObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlActionInputPinObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlActionInputPinObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlActionInputPinObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlActionInputPinObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlActionInputPinObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlActionInputPinObject::inState() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->inState())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActionInputPinObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlActionInputPinObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->ordering();
}

QObject *QUmlActionInputPinObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->selection()->asQObject();
}

QObject *QUmlActionInputPinObject::upperBound() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->upperBound())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->upperBound()->asQObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlActionInputPinObject::isControl() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isControl();
}

// OWNED ATTRIBUTES [ActionInputPin]

QObject *QUmlActionInputPinObject::fromAction() const
{
    if (!qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->fromAction())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->fromAction()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlActionInputPinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActionInputPinObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlActionInputPinObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlActionInputPinObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->includesCardinality(C);
}

bool QUmlActionInputPinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlActionInputPinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->is(lowerbound, upperbound);
}

bool QUmlActionInputPinObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isMultivalued();
}

int QUmlActionInputPinObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->lowerBound();
}

//int QUmlActionInputPinObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlActionInputPinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlActionInputPinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlActionInputPinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlActionInputPinObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlActionInputPinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlActionInputPinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlActionInputPinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionInputPinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlActionInputPinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionInputPinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlActionInputPinObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlActionInputPinObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setOrdered(isOrdered);
}

void QUmlActionInputPinObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlActionInputPinObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setUnique(isUnique);
}

void QUmlActionInputPinObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlActionInputPinObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setLower(lower);
}

void QUmlActionInputPinObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlActionInputPinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlActionInputPinObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setUpper(upper);
}

void QUmlActionInputPinObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlActionInputPinObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlActionInputPinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionInputPinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlActionInputPinObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setName(name);
}

void QUmlActionInputPinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlActionInputPinObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlActionInputPinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setQualifiedName(qualifiedName);
}

void QUmlActionInputPinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlActionInputPinObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setLeaf(isLeaf);
}

void QUmlActionInputPinObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlActionInputPinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActionInputPinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlActionInputPinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlActionInputPinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlActionInputPinObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlActionInputPinObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActionInputPinObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlActionInputPinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActionInputPinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlActionInputPinObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActionInputPinObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlActionInputPinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlActionInputPinObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActionInputPinObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlActionInputPinObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActionInputPinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlActionInputPinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlActionInputPinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlActionInputPinObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlActionInputPinObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlActionInputPinObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlActionInputPinObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setControlType(isControlType);
}

void QUmlActionInputPinObject::unsetControlType()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("controlType"));
}

void QUmlActionInputPinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setOrdering(ordering);
}

void QUmlActionInputPinObject::unsetOrdering()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordering"));
}

void QUmlActionInputPinObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlActionInputPinObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlActionInputPinObject::setControl(bool isControl)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setControl(isControl);
}

void QUmlActionInputPinObject::unsetControl()
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("control"));
}

// SLOTS FOR OWNED ATTRIBUTES [ActionInputPin]

void QUmlActionInputPinObject::setFromAction(QObject *fromAction)
{
    qmodelingobjectproperty_cast<QUmlActionInputPin *>(this)->setFromAction(qmodelingobjectproperty_cast<QUmlAction *>(fromAction));
}

QT_END_NAMESPACE

