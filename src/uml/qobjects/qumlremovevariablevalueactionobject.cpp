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
#include "qumlremovevariablevalueactionobject_p.h"

#include <QtUml/QUmlRemoveVariableValueAction>
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
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlRemoveVariableValueActionObject::QUmlRemoveVariableValueActionObject(QUmlRemoveVariableValueAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlRemoveVariableValueActionObject::~QUmlRemoveVariableValueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRemoveVariableValueActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRemoveVariableValueActionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRemoveVariableValueActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlRemoveVariableValueActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->name();
}

QObject *QUmlRemoveVariableValueActionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlRemoveVariableValueActionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->namespace_()->asQObject();
}

QString QUmlRemoveVariableValueActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRemoveVariableValueActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRemoveVariableValueActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlRemoveVariableValueActionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRemoveVariableValueActionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlRemoveVariableValueActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlRemoveVariableValueActionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlRemoveVariableValueActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlRemoveVariableValueActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveVariableValueActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlRemoveVariableValueActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [VariableAction]

QObject *QUmlRemoveVariableValueActionObject::variable() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->variable()->asQObject();
}

// OWNED ATTRIBUTES [WriteVariableAction]

QObject *QUmlRemoveVariableValueActionObject::value() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->value()->asQObject();
}

// OWNED ATTRIBUTES [RemoveVariableValueAction]

bool QUmlRemoveVariableValueActionObject::isRemoveDuplicates() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->isRemoveDuplicates();
}

QObject *QUmlRemoveVariableValueActionObject::removeAt() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeAt()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRemoveVariableValueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRemoveVariableValueActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRemoveVariableValueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlRemoveVariableValueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRemoveVariableValueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRemoveVariableValueActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlRemoveVariableValueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlRemoveVariableValueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRemoveVariableValueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRemoveVariableValueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRemoveVariableValueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRemoveVariableValueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRemoveVariableValueActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRemoveVariableValueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRemoveVariableValueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRemoveVariableValueActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setName(name);
}
    
void QUmlRemoveVariableValueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRemoveVariableValueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRemoveVariableValueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlRemoveVariableValueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRemoveVariableValueActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setLeaf(isLeaf);
}
    
void QUmlRemoveVariableValueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRemoveVariableValueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRemoveVariableValueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRemoveVariableValueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlRemoveVariableValueActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlRemoveVariableValueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRemoveVariableValueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRemoveVariableValueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRemoveVariableValueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRemoveVariableValueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRemoveVariableValueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRemoveVariableValueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlRemoveVariableValueActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRemoveVariableValueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRemoveVariableValueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRemoveVariableValueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRemoveVariableValueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlRemoveVariableValueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlRemoveVariableValueActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlRemoveVariableValueActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlRemoveVariableValueActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlRemoveVariableValueActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlRemoveVariableValueActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlRemoveVariableValueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlRemoveVariableValueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRemoveVariableValueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRemoveVariableValueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRemoveVariableValueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRemoveVariableValueActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlRemoveVariableValueActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [VariableAction]

void QUmlRemoveVariableValueActionObject::setVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [WriteVariableAction]

void QUmlRemoveVariableValueActionObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [RemoveVariableValueAction]

void QUmlRemoveVariableValueActionObject::setRemoveDuplicates(bool isRemoveDuplicates)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setRemoveDuplicates(isRemoveDuplicates);
}
    
void QUmlRemoveVariableValueActionObject::setRemoveAt(QObject *removeAt)
{
    qmodelingobjectproperty_cast<QUmlRemoveVariableValueAction *>(this)->setRemoveAt(qmodelingobjectproperty_cast<QUmlInputPin *>(removeAt));
}

QT_END_NAMESPACE

