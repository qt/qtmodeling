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
#include "qumlvaluespecificationactionobject_p.h"

#include <QtUml/QUmlValueSpecificationAction>
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
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlValueSpecificationActionObject::QUmlValueSpecificationActionObject(QUmlValueSpecificationAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlValueSpecificationActionObject::~QUmlValueSpecificationActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlValueSpecificationActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlValueSpecificationActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlValueSpecificationActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlValueSpecificationActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->name();
}

QObject *QUmlValueSpecificationActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlValueSpecificationActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->namespace_()->asQObject();
}

QString QUmlValueSpecificationActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlValueSpecificationActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlValueSpecificationActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlValueSpecificationActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlValueSpecificationActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlValueSpecificationActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlValueSpecificationActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlValueSpecificationActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlValueSpecificationActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlValueSpecificationActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ValueSpecificationAction]

QObject *QUmlValueSpecificationActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->result()->asQObject();
}

QObject *QUmlValueSpecificationActionObject::value() const
{
    if (!qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->value())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->value()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlValueSpecificationActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlValueSpecificationActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlValueSpecificationActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlValueSpecificationActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlValueSpecificationActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlValueSpecificationActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlValueSpecificationActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlValueSpecificationActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlValueSpecificationActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValueSpecificationActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValueSpecificationActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValueSpecificationActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValueSpecificationActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlValueSpecificationActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValueSpecificationActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValueSpecificationActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setName(name);
}

void QUmlValueSpecificationActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlValueSpecificationActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlValueSpecificationActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlValueSpecificationActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlValueSpecificationActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setLeaf(isLeaf);
}

void QUmlValueSpecificationActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlValueSpecificationActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValueSpecificationActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValueSpecificationActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlValueSpecificationActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlValueSpecificationActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlValueSpecificationActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValueSpecificationActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValueSpecificationActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValueSpecificationActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValueSpecificationActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValueSpecificationActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValueSpecificationActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlValueSpecificationActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValueSpecificationActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValueSpecificationActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValueSpecificationActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValueSpecificationActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlValueSpecificationActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlValueSpecificationActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlValueSpecificationActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlValueSpecificationActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlValueSpecificationActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlValueSpecificationActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlValueSpecificationActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlValueSpecificationActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlValueSpecificationActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlValueSpecificationActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlValueSpecificationActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlValueSpecificationActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlValueSpecificationActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlValueSpecificationActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ValueSpecificationAction]

void QUmlValueSpecificationActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlValueSpecificationActionObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlValueSpecificationAction *>(this)->setValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(value));
}

QT_END_NAMESPACE

