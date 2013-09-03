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
#include "qumlcreatelinkactionobject_p.h"

#include <QtUml/QUmlCreateLinkAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlLinkEndCreationData>
#include <QtUml/QUmlLinkEndData>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlCreateLinkActionObject::QUmlCreateLinkActionObject(QUmlCreateLinkAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCreateLinkActionObject::~QUmlCreateLinkActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCreateLinkActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCreateLinkActionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCreateLinkActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCreateLinkActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->name();
}

QObject *QUmlCreateLinkActionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCreateLinkActionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->namespace_()->asQObject();
}

QString QUmlCreateLinkActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCreateLinkActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCreateLinkActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCreateLinkActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCreateLinkActionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlCreateLinkActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCreateLinkActionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlCreateLinkActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlCreateLinkActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlCreateLinkActionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlCreateLinkActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlCreateLinkActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlCreateLinkActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlCreateLinkActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [LinkAction]

const QSet<QObject *> QUmlCreateLinkActionObject::inputValue() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->inputValue())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [CreateLinkAction]

const QSet<QObject *> QUmlCreateLinkActionObject::endData() const
{
    QSet<QObject *> set;
    foreach (QUmlLinkEndCreationData *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->endData())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCreateLinkActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCreateLinkActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCreateLinkActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCreateLinkActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCreateLinkActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCreateLinkActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCreateLinkActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCreateLinkActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [LinkAction]

QObject *QUmlCreateLinkActionObject::association() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->association()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCreateLinkActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCreateLinkActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCreateLinkActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCreateLinkActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCreateLinkActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCreateLinkActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCreateLinkActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCreateLinkActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setName(name);
}
    
void QUmlCreateLinkActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCreateLinkActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCreateLinkActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlCreateLinkActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCreateLinkActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setLeaf(isLeaf);
}
    
void QUmlCreateLinkActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCreateLinkActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCreateLinkActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCreateLinkActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCreateLinkActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlCreateLinkActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCreateLinkActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCreateLinkActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCreateLinkActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCreateLinkActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCreateLinkActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCreateLinkActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCreateLinkActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCreateLinkActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCreateLinkActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCreateLinkActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCreateLinkActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCreateLinkActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlCreateLinkActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlCreateLinkActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlCreateLinkActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlCreateLinkActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCreateLinkActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCreateLinkActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlCreateLinkActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCreateLinkActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCreateLinkActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCreateLinkActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCreateLinkActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlCreateLinkActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkAction]

void QUmlCreateLinkActionObject::addInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlCreateLinkActionObject::removeInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

// SLOTS FOR OWNED ATTRIBUTES [CreateLinkAction]

void QUmlCreateLinkActionObject::addEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->addEndData(qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(endData));
}

void QUmlCreateLinkActionObject::removeEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkAction *>(this)->removeEndData(qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(endData));
}

QT_END_NAMESPACE

