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
#include "private/qmodelingobject_p.h"

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

QUmlCallOperationActionObject::QUmlCallOperationActionObject(QUmlCallOperationAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCallOperationActionObject::~QUmlCallOperationActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCallOperationActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCallOperationActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCallOperationActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCallOperationActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->name();
}

QObject *QUmlCallOperationActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCallOperationActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCallOperationActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCallOperationActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCallOperationActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCallOperationActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCallOperationActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlCallOperationActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCallOperationActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlCallOperationActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlCallOperationActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlCallOperationActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlCallOperationActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlCallOperationActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlCallOperationActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallOperationActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlCallOperationActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlCallOperationActionObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->arguments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlCallOperationActionObject::onPort() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->onPort())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->onPort()->asQModelingObject();
}

// OWNED ATTRIBUTES [CallAction]

bool QUmlCallOperationActionObject::isSynchronous() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->isSynchronous();
}

const QList<QObject *> QUmlCallOperationActionObject::results() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->results())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [CallOperationAction]

QObject *QUmlCallOperationActionObject::operation() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->operation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->operation()->asQModelingObject();
}

QObject *QUmlCallOperationActionObject::target() const
{
    if (!qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->target())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->target()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCallOperationActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCallOperationActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCallOperationActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCallOperationActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCallOperationActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCallOperationActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCallOperationActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCallOperationActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCallOperationActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallOperationActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallOperationActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallOperationActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallOperationActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCallOperationActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallOperationActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallOperationActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setName(name);
}

void QUmlCallOperationActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCallOperationActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCallOperationActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCallOperationActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCallOperationActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setLeaf(isLeaf);
}

void QUmlCallOperationActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlCallOperationActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallOperationActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCallOperationActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCallOperationActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCallOperationActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlCallOperationActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallOperationActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCallOperationActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallOperationActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCallOperationActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallOperationActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCallOperationActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCallOperationActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallOperationActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCallOperationActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallOperationActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCallOperationActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCallOperationActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlCallOperationActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlCallOperationActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlCallOperationActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlCallOperationActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallOperationActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlCallOperationActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlCallOperationActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlCallOperationActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallOperationActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCallOperationActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallOperationActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCallOperationActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlCallOperationActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlCallOperationActionObject::addArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallOperationActionObject::removeArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlCallOperationActionObject::setOnPort(QObject *onPort)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setOnPort(qmodelingelementproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [CallAction]

void QUmlCallOperationActionObject::setSynchronous(bool isSynchronous)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setSynchronous(isSynchronous);
}

void QUmlCallOperationActionObject::unsetSynchronous()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("synchronous"));
}

void QUmlCallOperationActionObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlCallOperationActionObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

// SLOTS FOR OWNED ATTRIBUTES [CallOperationAction]

void QUmlCallOperationActionObject::setOperation(QObject *operation)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setOperation(qmodelingelementproperty_cast<QUmlOperation *>(operation));
}

void QUmlCallOperationActionObject::setTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlCallOperationAction *>(this)->setTarget(qmodelingelementproperty_cast<QUmlInputPin *>(target));
}


void QUmlCallOperationActionObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlActivityNode");
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inGroups"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inInterruptibleRegions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inPartitions"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inStructuredNode"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedNodes"))));

    d->propertyGroups << QStringLiteral("QUmlExecutableNode");
    d->groupProperties.insert(QStringLiteral("QUmlExecutableNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("handlers"))));

    d->propertyGroups << QStringLiteral("QUmlAction");
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputs"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLocallyReentrant"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPostconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("localPreconditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputs"))));

    d->propertyGroups << QStringLiteral("QUmlInvocationAction");
    d->groupProperties.insert(QStringLiteral("QUmlInvocationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("arguments"))));
    d->groupProperties.insert(QStringLiteral("QUmlInvocationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("onPort"))));

    d->propertyGroups << QStringLiteral("QUmlCallAction");
    d->groupProperties.insert(QStringLiteral("QUmlCallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSynchronous"))));
    d->groupProperties.insert(QStringLiteral("QUmlCallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("results"))));

    d->propertyGroups << QStringLiteral("QUmlCallOperationAction");
    d->groupProperties.insert(QStringLiteral("QUmlCallOperationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("operation"))));
    d->groupProperties.insert(QStringLiteral("QUmlCallOperationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("target"))));
}

void QUmlCallOperationActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, PropertyClassRole, QStringLiteral("QUmlCallOperationAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, DocumentationRole, QStringLiteral("The operation to be invoked by the action execution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, operation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, PropertyClassRole, QStringLiteral("QUmlCallOperationAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, DocumentationRole, QStringLiteral("The target object to which the request is sent. The classifier of the target object is used to dynamically determine a behavior to invoke. This object constitutes the context of the execution of the operation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallOperationAction, target, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

