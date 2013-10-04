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

QUmlInputPinObject::QUmlInputPinObject(QUmlInputPin *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlInputPinObject::~QUmlInputPinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlInputPin *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInputPinObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInputPinObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlInputPinObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isOrdered();
}

bool QUmlInputPinObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isUnique();
}

int QUmlInputPinObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->lower();
}

QObject *QUmlInputPinObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->lowerValue()->asQObject();
}

int QUmlInputPinObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->upper();
}

QObject *QUmlInputPinObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInputPinObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlInputPinObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->name();
}

QObject *QUmlInputPinObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->nameExpression()->asQObject();
}

QObject *QUmlInputPinObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->namespace_()->asQObject();
}

QString QUmlInputPinObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInputPinObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlInputPinObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlInputPinObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlInputPinObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlInputPinObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlInputPinObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlInputPinObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlInputPinObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlInputPinObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlInputPinObject::inState() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->inState())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInputPinObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlInputPinObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->ordering();
}

QObject *QUmlInputPinObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->selection()->asQObject();
}

QObject *QUmlInputPinObject::upperBound() const
{
    if (!qmodelingobjectproperty_cast<QUmlInputPin *>(this)->upperBound())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->upperBound()->asQObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlInputPinObject::isControl() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isControl();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInputPinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInputPinObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlInputPinObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlInputPinObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->includesCardinality(C);
}

bool QUmlInputPinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlInputPinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->is(lowerbound, upperbound);
}

bool QUmlInputPinObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isMultivalued();
}

int QUmlInputPinObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->lowerBound();
}

//int QUmlInputPinObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInputPinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlInputPinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlInputPin *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlInputPinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInputPinObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlInputPinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlInputPinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlInputPin *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInputPinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInputPinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInputPinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInputPinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInputPinObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlInputPinObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setOrdered(isOrdered);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("ordered");
}

void QUmlInputPinObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlInputPinObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setUnique(isUnique);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("unique");
}

void QUmlInputPinObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlInputPinObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setLower(lower);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("lower");
}

void QUmlInputPinObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlInputPinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlInputPinObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setUpper(upper);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("upper");
}

void QUmlInputPinObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlInputPinObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInputPinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInputPinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInputPinObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setName(name);
}

void QUmlInputPinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInputPinObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInputPinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setQualifiedName(qualifiedName);
}

void QUmlInputPinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlInputPinObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlInputPinObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlInputPinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInputPinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlInputPinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlInputPinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlInputPinObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlInputPinObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlInputPinObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlInputPinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlInputPinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlInputPinObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlInputPinObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlInputPinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlInputPinObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlInputPinObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlInputPinObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlInputPinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlInputPinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlInputPinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlInputPinObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlInputPinObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlInputPinObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlInputPinObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setControlType(isControlType);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("controlType");
}

void QUmlInputPinObject::unsetControlType()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("controlType"));
}

void QUmlInputPinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setOrdering(ordering);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("ordering");
}

void QUmlInputPinObject::unsetOrdering()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordering"));
}

void QUmlInputPinObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlInputPinObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlInputPinObject::setControl(bool isControl)
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->setControl(isControl);
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties() << QStringLiteral("control");
}

void QUmlInputPinObject::unsetControl()
{
    qmodelingobjectproperty_cast<QUmlInputPin *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("control"));
}

QT_END_NAMESPACE

