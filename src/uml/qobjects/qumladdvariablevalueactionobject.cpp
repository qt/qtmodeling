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
#include "qumladdvariablevalueactionobject_p.h"

#include <QtUml/QUmlAddVariableValueAction>
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

QUmlAddVariableValueActionObject::QUmlAddVariableValueActionObject(QUmlAddVariableValueAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlAddVariableValueActionObject::~QUmlAddVariableValueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAddVariableValueActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddVariableValueActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAddVariableValueActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAddVariableValueActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlAddVariableValueActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->name();
}

QObject *QUmlAddVariableValueActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlAddVariableValueActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->namespace_()->asQObject();
}

QString QUmlAddVariableValueActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAddVariableValueActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAddVariableValueActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAddVariableValueActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddVariableValueActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAddVariableValueActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlAddVariableValueActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddVariableValueActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddVariableValueActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlAddVariableValueActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlAddVariableValueActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddVariableValueActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddVariableValueActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAddVariableValueActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAddVariableValueActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlAddVariableValueActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlAddVariableValueActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAddVariableValueActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlAddVariableValueActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlAddVariableValueActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [VariableAction]

QObject *QUmlAddVariableValueActionObject::variable() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->variable())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->variable()->asQObject();
}

// OWNED ATTRIBUTES [WriteVariableAction]

QObject *QUmlAddVariableValueActionObject::value() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->value())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->value()->asQObject();
}

// OWNED ATTRIBUTES [AddVariableValueAction]

QObject *QUmlAddVariableValueActionObject::insertAt() const
{
    if (!qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->insertAt())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->insertAt()->asQObject();
}

bool QUmlAddVariableValueActionObject::isReplaceAll() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->isReplaceAll();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAddVariableValueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAddVariableValueActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAddVariableValueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlAddVariableValueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlAddVariableValueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAddVariableValueActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAddVariableValueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAddVariableValueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAddVariableValueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAddVariableValueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAddVariableValueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAddVariableValueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAddVariableValueActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAddVariableValueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAddVariableValueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAddVariableValueActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setName(name);
}

void QUmlAddVariableValueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAddVariableValueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAddVariableValueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlAddVariableValueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAddVariableValueActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setLeaf(isLeaf);
}

void QUmlAddVariableValueActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlAddVariableValueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAddVariableValueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAddVariableValueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAddVariableValueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAddVariableValueActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlAddVariableValueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAddVariableValueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAddVariableValueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAddVariableValueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAddVariableValueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAddVariableValueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAddVariableValueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlAddVariableValueActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAddVariableValueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAddVariableValueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAddVariableValueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAddVariableValueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlAddVariableValueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAddVariableValueActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlAddVariableValueActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAddVariableValueActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlAddVariableValueActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAddVariableValueActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlAddVariableValueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlAddVariableValueActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlAddVariableValueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAddVariableValueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAddVariableValueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAddVariableValueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAddVariableValueActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlAddVariableValueActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [VariableAction]

void QUmlAddVariableValueActionObject::setVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [WriteVariableAction]

void QUmlAddVariableValueActionObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [AddVariableValueAction]

void QUmlAddVariableValueActionObject::setInsertAt(QObject *insertAt)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setInsertAt(qmodelingobjectproperty_cast<QUmlInputPin *>(insertAt));
}

void QUmlAddVariableValueActionObject::setReplaceAll(bool isReplaceAll)
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->setReplaceAll(isReplaceAll);
}

void QUmlAddVariableValueActionObject::unsetReplaceAll()
{
    qmodelingobjectproperty_cast<QUmlAddVariableValueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("replaceAll"));
}

QT_END_NAMESPACE

