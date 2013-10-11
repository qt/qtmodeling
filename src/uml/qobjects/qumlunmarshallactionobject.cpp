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
#include "qumlunmarshallactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlUnmarshallAction>
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

QUmlUnmarshallActionObject::QUmlUnmarshallActionObject(QUmlUnmarshallAction *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlUnmarshallActionObject::~QUmlUnmarshallActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlUnmarshallActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlUnmarshallActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlUnmarshallActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlUnmarshallActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->name();
}

QObject *QUmlUnmarshallActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlUnmarshallActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlUnmarshallActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlUnmarshallActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlUnmarshallActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlUnmarshallActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlUnmarshallActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlUnmarshallActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlUnmarshallActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlUnmarshallActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlUnmarshallActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlUnmarshallActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlUnmarshallActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlUnmarshallActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlUnmarshallActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlUnmarshallActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [UnmarshallAction]

QObject *QUmlUnmarshallActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->object()->asQModelingObject();
}

const QSet<QObject *> QUmlUnmarshallActionObject::results() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->results())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlUnmarshallActionObject::unmarshallType() const
{
    if (!qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->unmarshallType())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->unmarshallType()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlUnmarshallActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUnmarshallActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlUnmarshallActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlUnmarshallActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUnmarshallActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlUnmarshallActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlUnmarshallActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlUnmarshallActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlUnmarshallActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUnmarshallActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUnmarshallActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUnmarshallActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUnmarshallActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlUnmarshallActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUnmarshallActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUnmarshallActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setName(name);
}

void QUmlUnmarshallActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlUnmarshallActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlUnmarshallActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlUnmarshallActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlUnmarshallActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setLeaf(isLeaf);
}

void QUmlUnmarshallActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlUnmarshallActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUnmarshallActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUnmarshallActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlUnmarshallActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlUnmarshallActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlUnmarshallActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlUnmarshallActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlUnmarshallActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlUnmarshallActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlUnmarshallActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlUnmarshallActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlUnmarshallActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlUnmarshallActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlUnmarshallActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlUnmarshallActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlUnmarshallActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlUnmarshallActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlUnmarshallActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlUnmarshallActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlUnmarshallActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlUnmarshallActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlUnmarshallActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlUnmarshallActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlUnmarshallActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlUnmarshallActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlUnmarshallActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlUnmarshallActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlUnmarshallActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlUnmarshallActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlUnmarshallActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlUnmarshallActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [UnmarshallAction]

void QUmlUnmarshallActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
}

void QUmlUnmarshallActionObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlUnmarshallActionObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlUnmarshallActionObject::setUnmarshallType(QObject *unmarshallType)
{
    qmodelingelementproperty_cast<QUmlUnmarshallAction *>(this)->setUnmarshallType(qmodelingelementproperty_cast<QUmlClassifier *>(unmarshallType));
}


void QUmlUnmarshallActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlUnmarshallAction");
    d->groupProperties.insert(QStringLiteral("QUmlUnmarshallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("object"))));
    d->groupProperties.insert(QStringLiteral("QUmlUnmarshallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("results"))));
    d->groupProperties.insert(QStringLiteral("QUmlUnmarshallAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("unmarshallType"))));
}

void QUmlUnmarshallActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, PropertyClassRole, QStringLiteral("QUmlUnmarshallAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, DocumentationRole, QStringLiteral("The object to be unmarshalled."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, object, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, PropertyClassRole, QStringLiteral("QUmlUnmarshallAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, DocumentationRole, QStringLiteral("The values of the structural features of the input object."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, results, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, PropertyClassRole, QStringLiteral("QUmlUnmarshallAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, DocumentationRole, QStringLiteral("The type of the object to be unmarshalled."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlUnmarshallAction, unmarshallType, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

