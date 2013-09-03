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
#include "qumlcallbehavioractionobject_p.h"

#include <QtUml/QUmlCallBehaviorAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
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
#include <QtUml/QUmlPort>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlCallBehaviorActionObject::QUmlCallBehaviorActionObject(QUmlCallBehaviorAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCallBehaviorActionObject::~QUmlCallBehaviorActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCallBehaviorActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCallBehaviorActionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCallBehaviorActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCallBehaviorActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->name();
}

QObject *QUmlCallBehaviorActionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCallBehaviorActionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->namespace_()->asQObject();
}

QString QUmlCallBehaviorActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCallBehaviorActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCallBehaviorActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCallBehaviorActionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCallBehaviorActionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlCallBehaviorActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlCallBehaviorActionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlCallBehaviorActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlCallBehaviorActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlCallBehaviorActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallBehaviorActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlCallBehaviorActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlCallBehaviorActionObject::argument() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->argument())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlCallBehaviorActionObject::onPort() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->onPort()->asQObject();
}

// OWNED ATTRIBUTES [CallAction]

bool QUmlCallBehaviorActionObject::isSynchronous() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->isSynchronous();
}

const QList<QObject *> QUmlCallBehaviorActionObject::result() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->result())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [CallBehaviorAction]

QObject *QUmlCallBehaviorActionObject::behavior() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->behavior()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCallBehaviorActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCallBehaviorActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCallBehaviorActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCallBehaviorActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCallBehaviorActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCallBehaviorActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCallBehaviorActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCallBehaviorActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCallBehaviorActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallBehaviorActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallBehaviorActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallBehaviorActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallBehaviorActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCallBehaviorActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallBehaviorActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallBehaviorActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setName(name);
}
    
void QUmlCallBehaviorActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCallBehaviorActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCallBehaviorActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlCallBehaviorActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCallBehaviorActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setLeaf(isLeaf);
}
    
void QUmlCallBehaviorActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallBehaviorActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallBehaviorActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCallBehaviorActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCallBehaviorActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlCallBehaviorActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallBehaviorActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallBehaviorActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallBehaviorActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallBehaviorActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallBehaviorActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallBehaviorActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCallBehaviorActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallBehaviorActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallBehaviorActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallBehaviorActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallBehaviorActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCallBehaviorActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlCallBehaviorActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlCallBehaviorActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlCallBehaviorActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlCallBehaviorActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallBehaviorActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallBehaviorActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlCallBehaviorActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallBehaviorActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallBehaviorActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallBehaviorActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallBehaviorActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlCallBehaviorActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlCallBehaviorActionObject::addArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallBehaviorActionObject::removeArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallBehaviorActionObject::setOnPort(QObject *onPort)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setOnPort(qmodelingobjectproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [CallAction]

void QUmlCallBehaviorActionObject::setSynchronous(bool isSynchronous)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setSynchronous(isSynchronous);
}
    
void QUmlCallBehaviorActionObject::addResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->addResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlCallBehaviorActionObject::removeResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->removeResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

// SLOTS FOR OWNED ATTRIBUTES [CallBehaviorAction]

void QUmlCallBehaviorActionObject::setBehavior(QObject *behavior)
{
    qmodelingobjectproperty_cast<QUmlCallBehaviorAction *>(this)->setBehavior(qmodelingobjectproperty_cast<QUmlBehavior *>(behavior));
}

QT_END_NAMESPACE

