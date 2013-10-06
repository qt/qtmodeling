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
#include "qumlreclassifyobjectactionobject_p.h"

#include <QtUml/QUmlReclassifyObjectAction>
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

QUmlReclassifyObjectActionObject::QUmlReclassifyObjectActionObject(QUmlReclassifyObjectAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlReclassifyObjectActionObject::~QUmlReclassifyObjectActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReclassifyObjectActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReclassifyObjectActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReclassifyObjectActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReclassifyObjectActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->name();
}

QObject *QUmlReclassifyObjectActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReclassifyObjectActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->namespace_()->asQObject();
}

QString QUmlReclassifyObjectActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReclassifyObjectActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReclassifyObjectActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReclassifyObjectActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReclassifyObjectActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReclassifyObjectActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReclassifyObjectActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReclassifyObjectActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlReclassifyObjectActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReclassifyObjectActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ReclassifyObjectAction]

bool QUmlReclassifyObjectActionObject::isReplaceAll() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->isReplaceAll();
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::newClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->newClassifiers())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReclassifyObjectActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->object()->asQObject();
}

const QSet<QObject *> QUmlReclassifyObjectActionObject::oldClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->oldClassifiers())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReclassifyObjectActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReclassifyObjectActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReclassifyObjectActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReclassifyObjectActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReclassifyObjectActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReclassifyObjectActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReclassifyObjectActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReclassifyObjectActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReclassifyObjectActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReclassifyObjectActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReclassifyObjectActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReclassifyObjectActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReclassifyObjectActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReclassifyObjectActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReclassifyObjectActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReclassifyObjectActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setName(name);
}

void QUmlReclassifyObjectActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReclassifyObjectActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReclassifyObjectActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReclassifyObjectActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReclassifyObjectActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setLeaf(isLeaf);
}

void QUmlReclassifyObjectActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReclassifyObjectActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReclassifyObjectActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReclassifyObjectActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReclassifyObjectActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReclassifyObjectActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReclassifyObjectActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReclassifyObjectActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReclassifyObjectActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReclassifyObjectActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReclassifyObjectActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReclassifyObjectActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReclassifyObjectActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReclassifyObjectActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReclassifyObjectActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReclassifyObjectActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReclassifyObjectActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReclassifyObjectActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReclassifyObjectActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReclassifyObjectActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReclassifyObjectActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReclassifyObjectActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReclassifyObjectActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReclassifyObjectActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReclassifyObjectActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReclassifyObjectActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReclassifyObjectActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReclassifyObjectActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReclassifyObjectActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReclassifyObjectActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReclassifyObjectActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReclassifyObjectActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReclassifyObjectAction]

void QUmlReclassifyObjectActionObject::setReplaceAll(bool isReplaceAll)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setReplaceAll(isReplaceAll);
}

void QUmlReclassifyObjectActionObject::unsetReplaceAll()
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("replaceAll"));
}

void QUmlReclassifyObjectActionObject::addNewClassifier(QObject *newClassifier)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addNewClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(newClassifier));
}

void QUmlReclassifyObjectActionObject::removeNewClassifier(QObject *newClassifier)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeNewClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(newClassifier));
}

void QUmlReclassifyObjectActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlReclassifyObjectActionObject::addOldClassifier(QObject *oldClassifier)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->addOldClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(oldClassifier));
}

void QUmlReclassifyObjectActionObject::removeOldClassifier(QObject *oldClassifier)
{
    qmodelingobjectproperty_cast<QUmlReclassifyObjectAction *>(this)->removeOldClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(oldClassifier));
}

QT_END_NAMESPACE

