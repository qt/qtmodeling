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
#include "qumlsendobjectactionobject_p.h"

#include <QtUml/QUmlSendObjectAction>
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
#include <QtUml/QUmlPort>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlSendObjectActionObject::QUmlSendObjectActionObject(QUmlSendObjectAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlSendObjectActionObject::~QUmlSendObjectActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSendObjectActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendObjectActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSendObjectActionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSendObjectActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlSendObjectActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->name();
}

QObject *QUmlSendObjectActionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlSendObjectActionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->namespace_()->asQObject();
}

QString QUmlSendObjectActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlSendObjectActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlSendObjectActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlSendObjectActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendObjectActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlSendObjectActionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlSendObjectActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendObjectActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendObjectActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSendObjectActionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlSendObjectActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendObjectActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendObjectActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlSendObjectActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlSendObjectActionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlSendObjectActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlSendObjectActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlSendObjectActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendObjectActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlSendObjectActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

QObject *QUmlSendObjectActionObject::onPort() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->onPort()->asQObject();
}

// OWNED ATTRIBUTES [SendObjectAction]

QObject *QUmlSendObjectActionObject::request() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->request()->asQObject();
}

QObject *QUmlSendObjectActionObject::target() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->target()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSendObjectActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSendObjectActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSendObjectActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSendObjectActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSendObjectActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSendObjectActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlSendObjectActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlSendObjectActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSendObjectActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSendObjectActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSendObjectActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSendObjectActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSendObjectActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSendObjectActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSendObjectActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSendObjectActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setName(name);
}
    
void QUmlSendObjectActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSendObjectActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSendObjectActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlSendObjectActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlSendObjectActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setLeaf(isLeaf);
}
    
void QUmlSendObjectActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSendObjectActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSendObjectActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlSendObjectActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlSendObjectActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlSendObjectActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSendObjectActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSendObjectActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSendObjectActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSendObjectActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSendObjectActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSendObjectActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlSendObjectActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSendObjectActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSendObjectActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSendObjectActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSendObjectActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlSendObjectActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlSendObjectActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlSendObjectActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlSendObjectActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlSendObjectActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlSendObjectActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlSendObjectActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlSendObjectActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSendObjectActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSendObjectActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSendObjectActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSendObjectActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlSendObjectActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlSendObjectActionObject::setOnPort(QObject *onPort)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setOnPort(qmodelingobjectproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [SendObjectAction]

void QUmlSendObjectActionObject::setRequest(QObject *request)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setRequest(qmodelingobjectproperty_cast<QUmlInputPin *>(request));
}

void QUmlSendObjectActionObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlSendObjectAction *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlInputPin *>(target));
}

QT_END_NAMESPACE

