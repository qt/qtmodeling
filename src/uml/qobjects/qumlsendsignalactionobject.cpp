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
#include "qumlsendsignalactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlSendSignalAction>
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
#include <QtUml/QUmlSignal>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlSendSignalActionObject::QUmlSendSignalActionObject(QUmlSendSignalAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlSendSignalActionObject::~QUmlSendSignalActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSendSignalActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlSendSignalActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSendSignalActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlSendSignalActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->name();
}

QObject *QUmlSendSignalActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlSendSignalActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlSendSignalActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlSendSignalActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlSendSignalActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlSendSignalActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlSendSignalActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlSendSignalActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlSendSignalActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlSendSignalActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlSendSignalActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlSendSignalActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlSendSignalActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlSendSignalActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlSendSignalActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlSendSignalActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlSendSignalActionObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->arguments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlSendSignalActionObject::onPort() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->onPort())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->onPort()->asQModelingObject();
}

// OWNED ATTRIBUTES [SendSignalAction]

QObject *QUmlSendSignalActionObject::signal() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->signal())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->signal()->asQModelingObject();
}

QObject *QUmlSendSignalActionObject::target() const
{
    if (!qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->target())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->target()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSendSignalActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlSendSignalActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSendSignalActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlSendSignalActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlSendSignalActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSendSignalActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlSendSignalActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlSendSignalActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSendSignalActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSendSignalActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSendSignalActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSendSignalActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSendSignalActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSendSignalActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSendSignalActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSendSignalActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setName(name);
}

void QUmlSendSignalActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSendSignalActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSendSignalActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlSendSignalActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlSendSignalActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setLeaf(isLeaf);
}

void QUmlSendSignalActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlSendSignalActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSendSignalActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSendSignalActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlSendSignalActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlSendSignalActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlSendSignalActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSendSignalActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSendSignalActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSendSignalActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSendSignalActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSendSignalActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSendSignalActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlSendSignalActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSendSignalActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSendSignalActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSendSignalActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSendSignalActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlSendSignalActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlSendSignalActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlSendSignalActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlSendSignalActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlSendSignalActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlSendSignalActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlSendSignalActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlSendSignalActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlSendSignalActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSendSignalActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSendSignalActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSendSignalActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSendSignalActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlSendSignalActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlSendSignalActionObject::addArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->addArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlSendSignalActionObject::removeArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->removeArgument(qmodelingelementproperty_cast<QUmlInputPin *>(argument));
}

void QUmlSendSignalActionObject::setOnPort(QObject *onPort)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setOnPort(qmodelingelementproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [SendSignalAction]

void QUmlSendSignalActionObject::setSignal(QObject *signal)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setSignal(qmodelingelementproperty_cast<QUmlSignal *>(signal));
}

void QUmlSendSignalActionObject::setTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlSendSignalAction *>(this)->setTarget(qmodelingelementproperty_cast<QUmlInputPin *>(target));
}


void QUmlSendSignalActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlSendSignalAction");
    d->groupProperties.insert(QStringLiteral("QUmlSendSignalAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signal"))));
    d->groupProperties.insert(QStringLiteral("QUmlSendSignalAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("target"))));
}

void QUmlSendSignalActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, PropertyClassRole, QStringLiteral("QUmlSendSignalAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, DocumentationRole, QStringLiteral("The type of signal transmitted to the target object."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, signal, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, PropertyClassRole, QStringLiteral("QUmlSendSignalAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, DocumentationRole, QStringLiteral("The target object to which the signal is sent."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSendSignalAction, target, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

