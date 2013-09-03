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
#include "qumlstartclassifierbehavioractionobject_p.h"

#include <QtUml/QUmlStartClassifierBehaviorAction>
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
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlStartClassifierBehaviorActionObject::QUmlStartClassifierBehaviorActionObject(QUmlStartClassifierBehaviorAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlStartClassifierBehaviorActionObject::~QUmlStartClassifierBehaviorActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStartClassifierBehaviorActionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlStartClassifierBehaviorActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->name();
}

QObject *QUmlStartClassifierBehaviorActionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlStartClassifierBehaviorActionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->namespace_()->asQObject();
}

QString QUmlStartClassifierBehaviorActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStartClassifierBehaviorActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStartClassifierBehaviorActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlStartClassifierBehaviorActionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStartClassifierBehaviorActionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlStartClassifierBehaviorActionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlStartClassifierBehaviorActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlStartClassifierBehaviorActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStartClassifierBehaviorActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlStartClassifierBehaviorActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [StartClassifierBehaviorAction]

QObject *QUmlStartClassifierBehaviorActionObject::object() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->object()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStartClassifierBehaviorActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStartClassifierBehaviorActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStartClassifierBehaviorActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStartClassifierBehaviorActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStartClassifierBehaviorActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStartClassifierBehaviorActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlStartClassifierBehaviorActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStartClassifierBehaviorActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStartClassifierBehaviorActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStartClassifierBehaviorActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStartClassifierBehaviorActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStartClassifierBehaviorActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStartClassifierBehaviorActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStartClassifierBehaviorActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStartClassifierBehaviorActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStartClassifierBehaviorActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setName(name);
}
    
void QUmlStartClassifierBehaviorActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStartClassifierBehaviorActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStartClassifierBehaviorActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlStartClassifierBehaviorActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStartClassifierBehaviorActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setLeaf(isLeaf);
}
    
void QUmlStartClassifierBehaviorActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStartClassifierBehaviorActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStartClassifierBehaviorActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStartClassifierBehaviorActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlStartClassifierBehaviorActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlStartClassifierBehaviorActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStartClassifierBehaviorActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStartClassifierBehaviorActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStartClassifierBehaviorActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStartClassifierBehaviorActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStartClassifierBehaviorActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStartClassifierBehaviorActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlStartClassifierBehaviorActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStartClassifierBehaviorActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStartClassifierBehaviorActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStartClassifierBehaviorActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStartClassifierBehaviorActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlStartClassifierBehaviorActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlStartClassifierBehaviorActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlStartClassifierBehaviorActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlStartClassifierBehaviorActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlStartClassifierBehaviorActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlStartClassifierBehaviorActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlStartClassifierBehaviorActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlStartClassifierBehaviorActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStartClassifierBehaviorActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStartClassifierBehaviorActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStartClassifierBehaviorActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStartClassifierBehaviorActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlStartClassifierBehaviorActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StartClassifierBehaviorAction]

void QUmlStartClassifierBehaviorActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlStartClassifierBehaviorAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

QT_END_NAMESPACE

