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
#include "qumlraiseexceptionactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlRaiseExceptionAction>
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

QUmlRaiseExceptionActionObject::QUmlRaiseExceptionActionObject(QUmlRaiseExceptionAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlRaiseExceptionActionObject::~QUmlRaiseExceptionActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRaiseExceptionActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlRaiseExceptionActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRaiseExceptionActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlRaiseExceptionActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->name();
}

QObject *QUmlRaiseExceptionActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlRaiseExceptionActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlRaiseExceptionActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRaiseExceptionActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRaiseExceptionActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlRaiseExceptionActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlRaiseExceptionActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlRaiseExceptionActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlRaiseExceptionActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlRaiseExceptionActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlRaiseExceptionActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRaiseExceptionActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlRaiseExceptionActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [RaiseExceptionAction]

QObject *QUmlRaiseExceptionActionObject::exception() const
{
    if (!qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->exception())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->exception()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRaiseExceptionActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRaiseExceptionActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRaiseExceptionActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlRaiseExceptionActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRaiseExceptionActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRaiseExceptionActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlRaiseExceptionActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlRaiseExceptionActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRaiseExceptionActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRaiseExceptionActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRaiseExceptionActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRaiseExceptionActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRaiseExceptionActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRaiseExceptionActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRaiseExceptionActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRaiseExceptionActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setName(name);
}

void QUmlRaiseExceptionActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRaiseExceptionActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRaiseExceptionActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlRaiseExceptionActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRaiseExceptionActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setLeaf(isLeaf);
}

void QUmlRaiseExceptionActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlRaiseExceptionActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRaiseExceptionActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRaiseExceptionActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRaiseExceptionActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlRaiseExceptionActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlRaiseExceptionActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRaiseExceptionActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRaiseExceptionActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRaiseExceptionActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRaiseExceptionActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRaiseExceptionActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRaiseExceptionActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlRaiseExceptionActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRaiseExceptionActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRaiseExceptionActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRaiseExceptionActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRaiseExceptionActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlRaiseExceptionActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlRaiseExceptionActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlRaiseExceptionActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlRaiseExceptionActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlRaiseExceptionActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlRaiseExceptionActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlRaiseExceptionActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlRaiseExceptionActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlRaiseExceptionActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRaiseExceptionActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRaiseExceptionActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRaiseExceptionActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRaiseExceptionActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlRaiseExceptionActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [RaiseExceptionAction]

void QUmlRaiseExceptionActionObject::setException(QObject *exception)
{
    qmodelingelementproperty_cast<QUmlRaiseExceptionAction *>(this)->setException(qmodelingelementproperty_cast<QUmlInputPin *>(exception));
}


void QUmlRaiseExceptionActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlRaiseExceptionAction");
    d->groupProperties.insert(QStringLiteral("QUmlRaiseExceptionAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("exception"))));
}

void QUmlRaiseExceptionActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, PropertyClassRole, QStringLiteral("QUmlRaiseExceptionAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, DocumentationRole, QStringLiteral("An input pin whose value becomes an exception object."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRaiseExceptionAction, exception, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

