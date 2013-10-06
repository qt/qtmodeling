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
#include "qumlreadextentactionobject_p.h"

#include <QtUml/QUmlReadExtentAction>
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

QUmlReadExtentActionObject::QUmlReadExtentActionObject(QUmlReadExtentAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlReadExtentActionObject::~QUmlReadExtentActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadExtentActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadExtentActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadExtentActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadExtentActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReadExtentActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->name();
}

QObject *QUmlReadExtentActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReadExtentActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->namespace_()->asQObject();
}

QString QUmlReadExtentActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadExtentActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadExtentActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadExtentActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadExtentActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadExtentActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReadExtentActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadExtentActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadExtentActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadExtentActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReadExtentActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadExtentActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadExtentActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadExtentActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadExtentActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReadExtentActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlReadExtentActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadExtentActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadExtentActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReadExtentActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ReadExtentAction]

QObject *QUmlReadExtentActionObject::classifier() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->classifier())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->classifier()->asQObject();
}

QObject *QUmlReadExtentActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadExtentActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadExtentActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadExtentActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReadExtentActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadExtentActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadExtentActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadExtentActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadExtentActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadExtentActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadExtentActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadExtentActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadExtentActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadExtentActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadExtentActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadExtentActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadExtentActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setName(name);
}

void QUmlReadExtentActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadExtentActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadExtentActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadExtentActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadExtentActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setLeaf(isLeaf);
}

void QUmlReadExtentActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReadExtentActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadExtentActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadExtentActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadExtentActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadExtentActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadExtentActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadExtentActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadExtentActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadExtentActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadExtentActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadExtentActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadExtentActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadExtentActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadExtentActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadExtentActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadExtentActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadExtentActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadExtentActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadExtentActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadExtentActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadExtentActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadExtentActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadExtentActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadExtentActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReadExtentActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadExtentActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadExtentActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadExtentActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadExtentActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadExtentActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadExtentActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadExtentAction]

void QUmlReadExtentActionObject::setClassifier(QObject *classifier)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(classifier));
}

void QUmlReadExtentActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlReadExtentAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

