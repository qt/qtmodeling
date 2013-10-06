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
#include "qumlreadselfactionobject_p.h"

#include <QtUml/QUmlReadSelfAction>
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

QUmlReadSelfActionObject::QUmlReadSelfActionObject(QUmlReadSelfAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlReadSelfActionObject::~QUmlReadSelfActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadSelfActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadSelfActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadSelfActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadSelfActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReadSelfActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->name();
}

QObject *QUmlReadSelfActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReadSelfActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->namespace_()->asQObject();
}

QString QUmlReadSelfActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadSelfActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadSelfActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadSelfActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadSelfActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadSelfActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReadSelfActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadSelfActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadSelfActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadSelfActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReadSelfActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadSelfActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadSelfActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadSelfActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadSelfActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReadSelfActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlReadSelfActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadSelfActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadSelfActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReadSelfActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ReadSelfAction]

QObject *QUmlReadSelfActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadSelfActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadSelfActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadSelfActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReadSelfActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadSelfActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadSelfActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadSelfActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadSelfActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadSelfActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadSelfActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadSelfActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadSelfActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadSelfActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadSelfActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadSelfActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadSelfActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setName(name);
}

void QUmlReadSelfActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadSelfActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadSelfActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadSelfActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadSelfActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setLeaf(isLeaf);
}

void QUmlReadSelfActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReadSelfActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadSelfActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadSelfActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadSelfActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadSelfActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadSelfActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadSelfActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadSelfActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadSelfActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadSelfActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadSelfActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadSelfActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadSelfActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadSelfActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadSelfActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadSelfActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadSelfActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadSelfActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadSelfActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadSelfActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadSelfActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadSelfActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadSelfActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadSelfActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReadSelfActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadSelfActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadSelfActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadSelfActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadSelfActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadSelfActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadSelfActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadSelfAction]

void QUmlReadSelfActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlReadSelfAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

