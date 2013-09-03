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
#include "qumlreadstructuralfeatureactionobject_p.h"

#include <QtUml/QUmlReadStructuralFeatureAction>
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

QUmlReadStructuralFeatureActionObject::QUmlReadStructuralFeatureActionObject(QUmlReadStructuralFeatureAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlReadStructuralFeatureActionObject::~QUmlReadStructuralFeatureActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadStructuralFeatureActionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReadStructuralFeatureActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->name();
}

QObject *QUmlReadStructuralFeatureActionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReadStructuralFeatureActionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->namespace_()->asQObject();
}

QString QUmlReadStructuralFeatureActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadStructuralFeatureActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadStructuralFeatureActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadStructuralFeatureActionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadStructuralFeatureActionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadStructuralFeatureActionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReadStructuralFeatureActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlReadStructuralFeatureActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReadStructuralFeatureActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlReadStructuralFeatureActionObject::object() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->object()->asQObject();
}

QObject *QUmlReadStructuralFeatureActionObject::structuralFeature() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->structuralFeature()->asQObject();
}

// OWNED ATTRIBUTES [ReadStructuralFeatureAction]

QObject *QUmlReadStructuralFeatureActionObject::result() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadStructuralFeatureActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadStructuralFeatureActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadStructuralFeatureActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReadStructuralFeatureActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadStructuralFeatureActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadStructuralFeatureActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadStructuralFeatureActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadStructuralFeatureActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadStructuralFeatureActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadStructuralFeatureActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadStructuralFeatureActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadStructuralFeatureActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadStructuralFeatureActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadStructuralFeatureActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadStructuralFeatureActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadStructuralFeatureActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setName(name);
}
    
void QUmlReadStructuralFeatureActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadStructuralFeatureActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadStructuralFeatureActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlReadStructuralFeatureActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadStructuralFeatureActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setLeaf(isLeaf);
}
    
void QUmlReadStructuralFeatureActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadStructuralFeatureActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadStructuralFeatureActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadStructuralFeatureActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadStructuralFeatureActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadStructuralFeatureActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadStructuralFeatureActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadStructuralFeatureActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadStructuralFeatureActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadStructuralFeatureActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadStructuralFeatureActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadStructuralFeatureActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadStructuralFeatureActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadStructuralFeatureActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadStructuralFeatureActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadStructuralFeatureActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadStructuralFeatureActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadStructuralFeatureActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadStructuralFeatureActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadStructuralFeatureActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadStructuralFeatureActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadStructuralFeatureActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadStructuralFeatureActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadStructuralFeatureActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlReadStructuralFeatureActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadStructuralFeatureActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadStructuralFeatureActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadStructuralFeatureActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadStructuralFeatureActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadStructuralFeatureActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlReadStructuralFeatureActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlReadStructuralFeatureActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setStructuralFeature(qmodelingobjectproperty_cast<QUmlStructuralFeature *>(structuralFeature));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadStructuralFeatureAction]

void QUmlReadStructuralFeatureActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

