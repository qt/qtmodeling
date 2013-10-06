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

QUmlSendSignalActionObject::QUmlSendSignalActionObject(QUmlSendSignalAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlSendSignalActionObject::~QUmlSendSignalActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSendSignalActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSendSignalActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSendSignalActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlSendSignalActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->name();
}

QObject *QUmlSendSignalActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlSendSignalActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->namespace_()->asQObject();
}

QString QUmlSendSignalActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlSendSignalActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlSendSignalActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlSendSignalActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlSendSignalActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlSendSignalActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSendSignalActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlSendSignalActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlSendSignalActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlSendSignalActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlSendSignalActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlSendSignalActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlSendSignalActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSendSignalActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlSendSignalActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [InvocationAction]

const QList<QObject *> QUmlSendSignalActionObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->arguments())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlSendSignalActionObject::onPort() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->onPort())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->onPort()->asQObject();
}

// OWNED ATTRIBUTES [SendSignalAction]

QObject *QUmlSendSignalActionObject::signal() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->signal())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->signal()->asQObject();
}

QObject *QUmlSendSignalActionObject::target() const
{
    if (!qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->target())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->target()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSendSignalActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSendSignalActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSendSignalActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSendSignalActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSendSignalActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSendSignalActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlSendSignalActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlSendSignalActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSendSignalActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSendSignalActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSendSignalActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSendSignalActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSendSignalActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSendSignalActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSendSignalActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSendSignalActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setName(name);
}

void QUmlSendSignalActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSendSignalActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSendSignalActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlSendSignalActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlSendSignalActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setLeaf(isLeaf);
}

void QUmlSendSignalActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlSendSignalActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSendSignalActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSendSignalActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlSendSignalActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlSendSignalActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlSendSignalActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSendSignalActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSendSignalActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSendSignalActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSendSignalActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSendSignalActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSendSignalActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlSendSignalActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSendSignalActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSendSignalActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSendSignalActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSendSignalActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlSendSignalActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlSendSignalActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlSendSignalActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlSendSignalActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlSendSignalActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlSendSignalActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlSendSignalActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlSendSignalActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlSendSignalActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSendSignalActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSendSignalActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSendSignalActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSendSignalActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlSendSignalActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [InvocationAction]

void QUmlSendSignalActionObject::addArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->addArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlSendSignalActionObject::removeArgument(QObject *argument)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->removeArgument(qmodelingobjectproperty_cast<QUmlInputPin *>(argument));
}

void QUmlSendSignalActionObject::setOnPort(QObject *onPort)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setOnPort(qmodelingobjectproperty_cast<QUmlPort *>(onPort));
}

// SLOTS FOR OWNED ATTRIBUTES [SendSignalAction]

void QUmlSendSignalActionObject::setSignal(QObject *signal)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setSignal(qmodelingobjectproperty_cast<QUmlSignal *>(signal));
}

void QUmlSendSignalActionObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlSendSignalAction *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlInputPin *>(target));
}

QT_END_NAMESPACE

