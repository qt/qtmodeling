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

QUmlOutputPinObject::QUmlOutputPinObject(QUmlOutputPin *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlOutputPinObject::~QUmlOutputPinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOutputPinObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOutputPinObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlOutputPinObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isOrdered();
}

bool QUmlOutputPinObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isUnique();
}

int QUmlOutputPinObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->lower();
}

QObject *QUmlOutputPinObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->lowerValue()->asQObject();
}

int QUmlOutputPinObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->upper();
}

QObject *QUmlOutputPinObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOutputPinObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlOutputPinObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->name();
}

QObject *QUmlOutputPinObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->nameExpression()->asQObject();
}

QObject *QUmlOutputPinObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->namespace_()->asQObject();
}

QString QUmlOutputPinObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOutputPinObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOutputPinObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOutputPinObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlOutputPinObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlOutputPinObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOutputPinObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlOutputPinObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOutputPinObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlOutputPinObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlOutputPinObject::inState() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->inState())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOutputPinObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlOutputPinObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->ordering();
}

QObject *QUmlOutputPinObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->selection()->asQObject();
}

QObject *QUmlOutputPinObject::upperBound() const
{
    if (!qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->upperBound())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->upperBound()->asQObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlOutputPinObject::isControl() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isControl();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOutputPinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOutputPinObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlOutputPinObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlOutputPinObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->includesCardinality(C);
}

bool QUmlOutputPinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlOutputPinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->is(lowerbound, upperbound);
}

bool QUmlOutputPinObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isMultivalued();
}

int QUmlOutputPinObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->lowerBound();
}

//int QUmlOutputPinObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOutputPinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlOutputPinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOutputPinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOutputPinObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlOutputPinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlOutputPinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOutputPinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOutputPinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOutputPinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOutputPinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOutputPinObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlOutputPinObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setOrdered(isOrdered);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("ordered");
}

void QUmlOutputPinObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlOutputPinObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setUnique(isUnique);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("unique");
}

void QUmlOutputPinObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlOutputPinObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setLower(lower);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("lower");
}

void QUmlOutputPinObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlOutputPinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlOutputPinObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setUpper(upper);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("upper");
}

void QUmlOutputPinObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlOutputPinObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOutputPinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOutputPinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOutputPinObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setName(name);
}

void QUmlOutputPinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOutputPinObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOutputPinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOutputPinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOutputPinObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlOutputPinObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlOutputPinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOutputPinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOutputPinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOutputPinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlOutputPinObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlOutputPinObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOutputPinObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOutputPinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOutputPinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOutputPinObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOutputPinObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOutputPinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlOutputPinObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOutputPinObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOutputPinObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOutputPinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOutputPinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlOutputPinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlOutputPinObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlOutputPinObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlOutputPinObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlOutputPinObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setControlType(isControlType);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("controlType");
}

void QUmlOutputPinObject::unsetControlType()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("controlType"));
}

void QUmlOutputPinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setOrdering(ordering);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("ordering");
}

void QUmlOutputPinObject::unsetOrdering()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordering"));
}

void QUmlOutputPinObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlOutputPinObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlOutputPinObject::setControl(bool isControl)
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->setControl(isControl);
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties() << QStringLiteral("control");
}

void QUmlOutputPinObject::unsetControl()
{
    qmodelingobjectproperty_cast<QUmlOutputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("control"));
}

QT_END_NAMESPACE

