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
#include "qumlreadstructuralfeatureactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlReadStructuralFeatureAction>
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
#include <QtUml/QUmlStructuralFeature>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlReadStructuralFeatureActionObject::QUmlReadStructuralFeatureActionObject(QUmlReadStructuralFeatureAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlReadStructuralFeatureActionObject::~QUmlReadStructuralFeatureActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlReadStructuralFeatureActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlReadStructuralFeatureActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->name();
}

QObject *QUmlReadStructuralFeatureActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlReadStructuralFeatureActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlReadStructuralFeatureActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadStructuralFeatureActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadStructuralFeatureActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadStructuralFeatureActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlReadStructuralFeatureActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadStructuralFeatureActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlReadStructuralFeatureActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlReadStructuralFeatureActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadStructuralFeatureActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlReadStructuralFeatureActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlReadStructuralFeatureActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->object()->asQModelingObject();
}

QObject *QUmlReadStructuralFeatureActionObject::structuralFeature() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->structuralFeature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->structuralFeature()->asQModelingObject();
}

// OWNED ATTRIBUTES [ReadStructuralFeatureAction]

QObject *QUmlReadStructuralFeatureActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->result()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadStructuralFeatureActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlReadStructuralFeatureActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadStructuralFeatureActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlReadStructuralFeatureActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlReadStructuralFeatureActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadStructuralFeatureActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadStructuralFeatureActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadStructuralFeatureActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadStructuralFeatureActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadStructuralFeatureActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadStructuralFeatureActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadStructuralFeatureActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadStructuralFeatureActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadStructuralFeatureActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadStructuralFeatureActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadStructuralFeatureActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setName(name);
}

void QUmlReadStructuralFeatureActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadStructuralFeatureActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadStructuralFeatureActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadStructuralFeatureActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadStructuralFeatureActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setLeaf(isLeaf);
}

void QUmlReadStructuralFeatureActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlReadStructuralFeatureActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadStructuralFeatureActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadStructuralFeatureActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadStructuralFeatureActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadStructuralFeatureActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadStructuralFeatureActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadStructuralFeatureActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadStructuralFeatureActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadStructuralFeatureActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadStructuralFeatureActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadStructuralFeatureActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadStructuralFeatureActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadStructuralFeatureActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadStructuralFeatureActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadStructuralFeatureActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadStructuralFeatureActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadStructuralFeatureActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadStructuralFeatureActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadStructuralFeatureActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadStructuralFeatureActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadStructuralFeatureActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadStructuralFeatureActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadStructuralFeatureActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadStructuralFeatureActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReadStructuralFeatureActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadStructuralFeatureActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadStructuralFeatureActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadStructuralFeatureActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadStructuralFeatureActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadStructuralFeatureActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadStructuralFeatureActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlReadStructuralFeatureActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
}

void QUmlReadStructuralFeatureActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setStructuralFeature(qmodelingelementproperty_cast<QUmlStructuralFeature *>(structuralFeature));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadStructuralFeatureAction]

void QUmlReadStructuralFeatureActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlReadStructuralFeatureAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}


void QUmlReadStructuralFeatureActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlStructuralFeatureAction");
    d->groupProperties.insert(QStringLiteral("QUmlStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("object"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuralFeature"))));

    d->propertyGroups << QStringLiteral("QUmlReadStructuralFeatureAction");
    d->groupProperties.insert(QStringLiteral("QUmlReadStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
}

void QUmlReadStructuralFeatureActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, PropertyClassRole, QStringLiteral("QUmlReadStructuralFeatureAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, DocumentationRole, QStringLiteral("Gives the output pin on which the result is put."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadStructuralFeatureAction, result, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

