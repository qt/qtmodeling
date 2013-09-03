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
#include "qumladdstructuralfeaturevalueactionobject_p.h"

#include <QtUml/QUmlAddStructuralFeatureValueAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlAddStructuralFeatureValueActionObject::QUmlAddStructuralFeatureValueActionObject(QUmlAddStructuralFeatureValueAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlAddStructuralFeatureValueActionObject::~QUmlAddStructuralFeatureValueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAddStructuralFeatureValueActionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlAddStructuralFeatureValueActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->name();
}

QObject *QUmlAddStructuralFeatureValueActionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->namespace_()->asQObject();
}

QString QUmlAddStructuralFeatureValueActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAddStructuralFeatureValueActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAddStructuralFeatureValueActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAddStructuralFeatureValueActionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAddStructuralFeatureValueActionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAddStructuralFeatureValueActionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlAddStructuralFeatureValueActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlAddStructuralFeatureValueActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlAddStructuralFeatureValueActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlAddStructuralFeatureValueActionObject::object() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->object()->asQObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::structuralFeature() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->structuralFeature()->asQObject();
}

// OWNED ATTRIBUTES [WriteStructuralFeatureAction]

QObject *QUmlAddStructuralFeatureValueActionObject::result() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->result()->asQObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->value()->asQObject();
}

// OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

QObject *QUmlAddStructuralFeatureValueActionObject::insertAt() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->insertAt()->asQObject();
}

bool QUmlAddStructuralFeatureValueActionObject::isReplaceAll() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isReplaceAll();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAddStructuralFeatureValueActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAddStructuralFeatureValueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAddStructuralFeatureValueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAddStructuralFeatureValueActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAddStructuralFeatureValueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAddStructuralFeatureValueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAddStructuralFeatureValueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAddStructuralFeatureValueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAddStructuralFeatureValueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAddStructuralFeatureValueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAddStructuralFeatureValueActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAddStructuralFeatureValueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAddStructuralFeatureValueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAddStructuralFeatureValueActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setName(name);
}
    
void QUmlAddStructuralFeatureValueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAddStructuralFeatureValueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAddStructuralFeatureValueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlAddStructuralFeatureValueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAddStructuralFeatureValueActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setLeaf(isLeaf);
}
    
void QUmlAddStructuralFeatureValueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAddStructuralFeatureValueActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlAddStructuralFeatureValueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAddStructuralFeatureValueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAddStructuralFeatureValueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAddStructuralFeatureValueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAddStructuralFeatureValueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAddStructuralFeatureValueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAddStructuralFeatureValueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlAddStructuralFeatureValueActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAddStructuralFeatureValueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAddStructuralFeatureValueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAddStructuralFeatureValueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAddStructuralFeatureValueActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlAddStructuralFeatureValueActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAddStructuralFeatureValueActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlAddStructuralFeatureValueActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAddStructuralFeatureValueActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAddStructuralFeatureValueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlAddStructuralFeatureValueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAddStructuralFeatureValueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAddStructuralFeatureValueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAddStructuralFeatureValueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAddStructuralFeatureValueActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlAddStructuralFeatureValueActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlAddStructuralFeatureValueActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlAddStructuralFeatureValueActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setStructuralFeature(qmodelingobjectproperty_cast<QUmlStructuralFeature *>(structuralFeature));
}

// SLOTS FOR OWNED ATTRIBUTES [WriteStructuralFeatureAction]

void QUmlAddStructuralFeatureValueActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAddStructuralFeatureValueActionObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

void QUmlAddStructuralFeatureValueActionObject::setInsertAt(QObject *insertAt)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setInsertAt(qmodelingobjectproperty_cast<QUmlInputPin *>(insertAt));
}

void QUmlAddStructuralFeatureValueActionObject::setReplaceAll(bool isReplaceAll)
{
    qmodelingobjectproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setReplaceAll(isReplaceAll);
}
    
QT_END_NAMESPACE

