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
#include "qumltestidentityactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTestIdentityAction>
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

QUmlTestIdentityActionObject::QUmlTestIdentityActionObject(QUmlTestIdentityAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlTestIdentityActionObject::~QUmlTestIdentityActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTestIdentityActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTestIdentityActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTestIdentityActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlTestIdentityActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->name();
}

QObject *QUmlTestIdentityActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlTestIdentityActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlTestIdentityActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlTestIdentityActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlTestIdentityActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlTestIdentityActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlTestIdentityActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTestIdentityActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlTestIdentityActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlTestIdentityActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlTestIdentityActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlTestIdentityActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlTestIdentityActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlTestIdentityActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTestIdentityActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlTestIdentityActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [TestIdentityAction]

QObject *QUmlTestIdentityActionObject::first() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->first())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->first()->asQModelingObject();
}

QObject *QUmlTestIdentityActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->result()->asQModelingObject();
}

QObject *QUmlTestIdentityActionObject::second() const
{
    if (!qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->second())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->second()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTestIdentityActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTestIdentityActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTestIdentityActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlTestIdentityActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTestIdentityActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTestIdentityActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlTestIdentityActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlTestIdentityActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTestIdentityActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTestIdentityActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTestIdentityActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTestIdentityActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTestIdentityActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTestIdentityActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTestIdentityActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTestIdentityActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setName(name);
}

void QUmlTestIdentityActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTestIdentityActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTestIdentityActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlTestIdentityActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlTestIdentityActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setLeaf(isLeaf);
}

void QUmlTestIdentityActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlTestIdentityActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlTestIdentityActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlTestIdentityActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlTestIdentityActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlTestIdentityActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlTestIdentityActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlTestIdentityActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlTestIdentityActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlTestIdentityActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlTestIdentityActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlTestIdentityActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlTestIdentityActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlTestIdentityActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlTestIdentityActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlTestIdentityActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlTestIdentityActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlTestIdentityActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlTestIdentityActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlTestIdentityActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlTestIdentityActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlTestIdentityActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlTestIdentityActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlTestIdentityActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlTestIdentityActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlTestIdentityActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlTestIdentityActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlTestIdentityActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlTestIdentityActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlTestIdentityActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlTestIdentityActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlTestIdentityActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [TestIdentityAction]

void QUmlTestIdentityActionObject::setFirst(QObject *first)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setFirst(qmodelingelementproperty_cast<QUmlInputPin *>(first));
}

void QUmlTestIdentityActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlTestIdentityActionObject::setSecond(QObject *second)
{
    qmodelingelementproperty_cast<QUmlTestIdentityAction *>(this)->setSecond(qmodelingelementproperty_cast<QUmlInputPin *>(second));
}


void QUmlTestIdentityActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTestIdentityAction");
    d->groupProperties.insert(QStringLiteral("QUmlTestIdentityAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("first"))));
    d->groupProperties.insert(QStringLiteral("QUmlTestIdentityAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
    d->groupProperties.insert(QStringLiteral("QUmlTestIdentityAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("second"))));
}

void QUmlTestIdentityActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, PropertyClassRole, QStringLiteral("QUmlTestIdentityAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, DocumentationRole, QStringLiteral("Gives the pin on which an object is placed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, first, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, PropertyClassRole, QStringLiteral("QUmlTestIdentityAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, DocumentationRole, QStringLiteral("Tells whether the two input objects are identical."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, result, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, PropertyClassRole, QStringLiteral("QUmlTestIdentityAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, DocumentationRole, QStringLiteral("Gives the pin on which an object is placed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTestIdentityAction, second, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

