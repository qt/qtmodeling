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
#include "qumlremovestructuralfeaturevalueactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlRemoveStructuralFeatureValueAction>
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

QUmlRemoveStructuralFeatureValueActionObject::QUmlRemoveStructuralFeatureValueActionObject(QUmlRemoveStructuralFeatureValueAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlRemoveStructuralFeatureValueActionObject::~QUmlRemoveStructuralFeatureValueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlRemoveStructuralFeatureValueActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->name();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlRemoveStructuralFeatureValueActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRemoveStructuralFeatureValueActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRemoveStructuralFeatureValueActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlRemoveStructuralFeatureValueActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlRemoveStructuralFeatureValueActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlRemoveStructuralFeatureValueActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlRemoveStructuralFeatureValueActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlRemoveStructuralFeatureValueActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlRemoveStructuralFeatureValueActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->object()->asQModelingObject();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::structuralFeature() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->structuralFeature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->structuralFeature()->asQModelingObject();
}

// OWNED ATTRIBUTES [WriteStructuralFeatureAction]

QObject *QUmlRemoveStructuralFeatureValueActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->result()->asQModelingObject();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->value()->asQModelingObject();
}

// OWNED ATTRIBUTES [RemoveStructuralFeatureValueAction]

bool QUmlRemoveStructuralFeatureValueActionObject::isRemoveDuplicates() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isRemoveDuplicates();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::removeAt() const
{
    if (!qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeAt())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeAt()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRemoveStructuralFeatureValueActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRemoveStructuralFeatureValueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRemoveStructuralFeatureValueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRemoveStructuralFeatureValueActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlRemoveStructuralFeatureValueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlRemoveStructuralFeatureValueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRemoveStructuralFeatureValueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRemoveStructuralFeatureValueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRemoveStructuralFeatureValueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRemoveStructuralFeatureValueActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setName(name);
}

void QUmlRemoveStructuralFeatureValueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRemoveStructuralFeatureValueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRemoveStructuralFeatureValueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlRemoveStructuralFeatureValueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRemoveStructuralFeatureValueActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setLeaf(isLeaf);
}

void QUmlRemoveStructuralFeatureValueActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlRemoveStructuralFeatureValueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlRemoveStructuralFeatureValueActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRemoveStructuralFeatureValueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlRemoveStructuralFeatureValueActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRemoveStructuralFeatureValueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRemoveStructuralFeatureValueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlRemoveStructuralFeatureValueActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlRemoveStructuralFeatureValueActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlRemoveStructuralFeatureValueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlRemoveStructuralFeatureValueActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlRemoveStructuralFeatureValueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlRemoveStructuralFeatureValueActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
}

void QUmlRemoveStructuralFeatureValueActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setStructuralFeature(qmodelingelementproperty_cast<QUmlStructuralFeature *>(structuralFeature));
}

// SLOTS FOR OWNED ATTRIBUTES [WriteStructuralFeatureAction]

void QUmlRemoveStructuralFeatureValueActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlRemoveStructuralFeatureValueActionObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setValue(qmodelingelementproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [RemoveStructuralFeatureValueAction]

void QUmlRemoveStructuralFeatureValueActionObject::setRemoveDuplicates(bool isRemoveDuplicates)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setRemoveDuplicates(isRemoveDuplicates);
}

void QUmlRemoveStructuralFeatureValueActionObject::unsetRemoveDuplicates()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("removeDuplicates"));
}

void QUmlRemoveStructuralFeatureValueActionObject::setRemoveAt(QObject *removeAt)
{
    qmodelingelementproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setRemoveAt(qmodelingelementproperty_cast<QUmlInputPin *>(removeAt));
}


void QUmlRemoveStructuralFeatureValueActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlWriteStructuralFeatureAction");
    d->groupProperties.insert(QStringLiteral("QUmlWriteStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
    d->groupProperties.insert(QStringLiteral("QUmlWriteStructuralFeatureAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));

    d->propertyGroups << QStringLiteral("QUmlRemoveStructuralFeatureValueAction");
    d->groupProperties.insert(QStringLiteral("QUmlRemoveStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isRemoveDuplicates"))));
    d->groupProperties.insert(QStringLiteral("QUmlRemoveStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("removeAt"))));
}

void QUmlRemoveStructuralFeatureValueActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, PropertyClassRole, QStringLiteral("QUmlRemoveStructuralFeatureValueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, DocumentationRole, QStringLiteral("Specifies whether to remove duplicates of the value in nonunique structural features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, isRemoveDuplicates, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, PropertyClassRole, QStringLiteral("QUmlRemoveStructuralFeatureValueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, DocumentationRole, QStringLiteral("Specifies the position of an existing value to remove in ordered nonunique structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero or unlimited."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRemoveStructuralFeatureValueAction, removeAt, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

