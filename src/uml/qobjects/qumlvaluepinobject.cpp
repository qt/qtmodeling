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

QUmlValuePinObject::QUmlValuePinObject(QUmlValuePin *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlValuePinObject::~QUmlValuePinObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlValuePin *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlValuePinObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlValuePinObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlValuePinObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isOrdered();
}

bool QUmlValuePinObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isUnique();
}

int QUmlValuePinObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->lower();
}

QObject *QUmlValuePinObject::lowerValue() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->lowerValue()->asQObject();
}

int QUmlValuePinObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->upper();
}

QObject *QUmlValuePinObject::upperValue() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlValuePinObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlValuePinObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->name();
}

QObject *QUmlValuePinObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->nameExpression()->asQObject();
}

QObject *QUmlValuePinObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->namespace_()->asQObject();
}

QString QUmlValuePinObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlValuePinObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlValuePinObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isLeaf();
}

const QSet<QObject *> QUmlValuePinObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlValuePinObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlValuePinObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlValuePinObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlValuePinObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValuePinObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlValuePinObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [ObjectNode]

const QSet<QObject *> QUmlValuePinObject::inState() const
{
    QSet<QObject *> set;
    foreach (QUmlState *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->inState())
        set.insert(element->asQObject());
    return set;
}

bool QUmlValuePinObject::isControlType() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isControlType();
}

QtUml::ObjectNodeOrderingKind QUmlValuePinObject::ordering() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->ordering();
}

QObject *QUmlValuePinObject::selection() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->selection()->asQObject();
}

QObject *QUmlValuePinObject::upperBound() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->upperBound()->asQObject();
}

// OWNED ATTRIBUTES [Pin]

bool QUmlValuePinObject::isControl() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isControl();
}

// OWNED ATTRIBUTES [ValuePin]

QObject *QUmlValuePinObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->value()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlValuePinObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlValuePinObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlValuePinObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlValuePinObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->includesCardinality(C);
}

bool QUmlValuePinObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlValuePinObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->is(lowerbound, upperbound);
}

bool QUmlValuePinObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isMultivalued();
}

int QUmlValuePinObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->lowerBound();
}

//int QUmlValuePinObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlValuePinObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlValuePinObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlValuePin *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlValuePinObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlValuePinObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlValuePinObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlValuePinObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlValuePin *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlValuePinObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValuePinObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValuePinObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValuePinObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValuePinObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlValuePinObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setOrdered(isOrdered);
}
    
void QUmlValuePinObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setUnique(isUnique);
}
    
void QUmlValuePinObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setLower(lower);
}
    
void QUmlValuePinObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlValuePinObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setUpper(upper);
}
    
void QUmlValuePinObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlValuePinObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValuePinObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValuePinObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setName(name);
}
    
void QUmlValuePinObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlValuePinObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlValuePinObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlValuePinObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlValuePinObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setLeaf(isLeaf);
}
    
void QUmlValuePinObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValuePinObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValuePinObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlValuePinObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlValuePinObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlValuePinObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValuePinObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValuePinObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValuePinObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValuePinObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValuePinObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValuePinObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlValuePinObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValuePinObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValuePinObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValuePinObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValuePinObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlValuePinObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlValuePinObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectNode]

void QUmlValuePinObject::addInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->addInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlValuePinObject::removeInState(QObject *inState)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->removeInState(qmodelingobjectproperty_cast<QUmlState *>(inState));
}

void QUmlValuePinObject::setControlType(bool isControlType)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setControlType(isControlType);
}
    
void QUmlValuePinObject::setOrdering(QtUml::ObjectNodeOrderingKind ordering)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setOrdering(ordering);
}
    
void QUmlValuePinObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlValuePinObject::setUpperBound(QObject *upperBound)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setUpperBound(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperBound));
}

// SLOTS FOR OWNED ATTRIBUTES [Pin]

void QUmlValuePinObject::setControl(bool isControl)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setControl(isControl);
}
    
// SLOTS FOR OWNED ATTRIBUTES [ValuePin]

void QUmlValuePinObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlValuePin *>(this)->setValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(value));
}

QT_END_NAMESPACE

