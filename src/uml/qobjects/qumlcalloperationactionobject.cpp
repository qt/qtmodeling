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
#include "qumlcalloperationactionobject_p.h"

#include <QtUml/QUmlCallOperationAction>
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
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPort>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlCallOperationActionObject::QUmlCallOperationActionObject(QUmlCallOperationAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlCallOperationActionObject::~QUmlCallOperationActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCallOperationActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCallOperationActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCallOperationActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCallOperationActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->name();
}

QObject *QUmlCallOperationActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCallOperationActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->namespace_()->asQObject();
}

QString QUmlCallOperationActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCallOperationActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCallOperationActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCallOperationActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCallOperationActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlCallOperationActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCallOperationActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlCallOperationActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlCallOperationActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlCallOperationActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlCallOperationActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlCallOperationActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlCallOperationActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlCallOperationActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlCallOperationActionObject::argument() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->argument())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlCallOperationActionObject::onPort() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->onPort())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->onPort()->asQObject();
}

// OWNED ATTRIBUTES [CallAction]

bool QUmlCallOperationActionObject::isSynchronous() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->isSynchronous();
}

const QList<QObject *> QUmlCallOperationActionObject::result() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->result())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [CallOperationAction]

QObject *QUmlCallOperationActionObject::operation() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->operation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->operation()->asQObject();
}

QObject *QUmlCallOperationActionObject::target() const
{
    if (!qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->target())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->target()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCallOperationActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCallOperationActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCallOperationActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCallOperationActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCallOperationActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCallOperationActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCallOperationActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCallOperationActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCallOperationActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallOperationActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallOperationActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallOperationActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallOperationActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCallOperationActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallOperationActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallOperationActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setName(name);
}

void QUmlCallOperationActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCallOperationActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCallOperationActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCallOperationActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCallOperationActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlCallOperationActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlCallOperationActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallOperationActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallOperationActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCallOperationActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCallOperationActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlCallOperationActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallOperationActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallOperationActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallOperationActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallOperationActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallOperationActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallOperationActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCallOperationActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallOperationActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallOperationActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallOperationActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallOperationActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCallOperationActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlCallOperationActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlCallOperationActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlCallOperationActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlCallOperationActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallOperationActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallOperationActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlCallOperationActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlCallOperationActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallOperationActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallOperationActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallOperationActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallOperationActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlCallOperationActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlCallOperationActionObject::addArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallOperationActionObject::removeArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallOperationActionObject::setOnPort(QObject *onPort)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setOnPort(qmodelingobjectproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [CallAction]

void QUmlCallOperationActionObject::setSynchronous(bool isSynchronous)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setSynchronous(isSynchronous);
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->modifiedResettableProperties() << QStringLiteral("synchronous");
}

void QUmlCallOperationActionObject::unsetSynchronous()
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("synchronous"));
}

void QUmlCallOperationActionObject::addResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->addResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlCallOperationActionObject::removeResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->removeResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

// SLOTS FOR OWNED ATTRIBUTES [CallOperationAction]

void QUmlCallOperationActionObject::setOperation(QObject *operation)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setOperation(qmodelingobjectproperty_cast<QUmlOperation *>(operation));
}

void QUmlCallOperationActionObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlCallOperationAction *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlInputPin *>(target));
}

QT_END_NAMESPACE

