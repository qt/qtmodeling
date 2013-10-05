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
#include "qumlopaqueactionobject_p.h"

#include <QtUml/QUmlOpaqueAction>
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

QUmlOpaqueActionObject::QUmlOpaqueActionObject(QUmlOpaqueAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlOpaqueActionObject::~QUmlOpaqueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOpaqueActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOpaqueActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOpaqueActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlOpaqueActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->name();
}

QObject *QUmlOpaqueActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlOpaqueActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->namespace_()->asQObject();
}

QString QUmlOpaqueActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOpaqueActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOpaqueActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOpaqueActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlOpaqueActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlOpaqueActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlOpaqueActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlOpaqueActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlOpaqueActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlOpaqueActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlOpaqueActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlOpaqueActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlOpaqueActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlOpaqueActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [OpaqueAction]

const QList<QString> QUmlOpaqueActionObject::body() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->body();
}

const QSet<QObject *> QUmlOpaqueActionObject::inputValue() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->inputValue())
        set.insert(element->asQObject());
    return set;
}

const QList<QString> QUmlOpaqueActionObject::language() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->language();
}

const QSet<QObject *> QUmlOpaqueActionObject::outputValue() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->outputValue())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOpaqueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOpaqueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlOpaqueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlOpaqueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOpaqueActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlOpaqueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlOpaqueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOpaqueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOpaqueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setName(name);
}

void QUmlOpaqueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOpaqueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOpaqueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOpaqueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOpaqueActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setLeaf(isLeaf);
}

void QUmlOpaqueActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlOpaqueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOpaqueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlOpaqueActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlOpaqueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOpaqueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOpaqueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOpaqueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOpaqueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOpaqueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOpaqueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlOpaqueActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOpaqueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOpaqueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOpaqueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOpaqueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlOpaqueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlOpaqueActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlOpaqueActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlOpaqueActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlOpaqueActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlOpaqueActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlOpaqueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlOpaqueActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlOpaqueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlOpaqueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlOpaqueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlOpaqueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlOpaqueActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlOpaqueActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueAction]

void QUmlOpaqueActionObject::addBody(QString  body)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addBody(body);
}

void QUmlOpaqueActionObject::removeBody(QString  body)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeBody(body);
}

void QUmlOpaqueActionObject::addInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlOpaqueActionObject::removeInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlOpaqueActionObject::addLanguage(QString  language)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addLanguage(language);
}

void QUmlOpaqueActionObject::removeLanguage(QString  language)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeLanguage(language);
}

void QUmlOpaqueActionObject::addOutputValue(QObject *outputValue)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->addOutputValue(qmodelingobjectproperty_cast<QUmlOutputPin *>(outputValue));
}

void QUmlOpaqueActionObject::removeOutputValue(QObject *outputValue)
{
    qmodelingobjectproperty_cast<QUmlOpaqueAction *>(this)->removeOutputValue(qmodelingobjectproperty_cast<QUmlOutputPin *>(outputValue));
}

QT_END_NAMESPACE

