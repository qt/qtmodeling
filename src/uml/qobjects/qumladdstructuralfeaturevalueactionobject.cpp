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
#include "qumladdstructuralfeaturevalueactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlAddStructuralFeatureValueAction>
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

QUmlAddStructuralFeatureValueActionObject::QUmlAddStructuralFeatureValueActionObject(QUmlAddStructuralFeatureValueAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlAddStructuralFeatureValueActionObject::~QUmlAddStructuralFeatureValueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAddStructuralFeatureValueActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlAddStructuralFeatureValueActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->name();
}

QObject *QUmlAddStructuralFeatureValueActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlAddStructuralFeatureValueActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlAddStructuralFeatureValueActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlAddStructuralFeatureValueActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlAddStructuralFeatureValueActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAddStructuralFeatureValueActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlAddStructuralFeatureValueActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlAddStructuralFeatureValueActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlAddStructuralFeatureValueActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlAddStructuralFeatureValueActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlAddStructuralFeatureValueActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->object()->asQModelingObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::structuralFeature() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->structuralFeature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->structuralFeature()->asQModelingObject();
}

// OWNED ATTRIBUTES [WriteStructuralFeatureAction]

QObject *QUmlAddStructuralFeatureValueActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->result()->asQModelingObject();
}

QObject *QUmlAddStructuralFeatureValueActionObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->value()->asQModelingObject();
}

// OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

QObject *QUmlAddStructuralFeatureValueActionObject::insertAt() const
{
    if (!qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->insertAt())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->insertAt()->asQModelingObject();
}

bool QUmlAddStructuralFeatureValueActionObject::isReplaceAll() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isReplaceAll();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAddStructuralFeatureValueActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAddStructuralFeatureValueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAddStructuralFeatureValueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAddStructuralFeatureValueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAddStructuralFeatureValueActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlAddStructuralFeatureValueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlAddStructuralFeatureValueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAddStructuralFeatureValueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAddStructuralFeatureValueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAddStructuralFeatureValueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAddStructuralFeatureValueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAddStructuralFeatureValueActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAddStructuralFeatureValueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAddStructuralFeatureValueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAddStructuralFeatureValueActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setName(name);
}

void QUmlAddStructuralFeatureValueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAddStructuralFeatureValueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAddStructuralFeatureValueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlAddStructuralFeatureValueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlAddStructuralFeatureValueActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setLeaf(isLeaf);
}

void QUmlAddStructuralFeatureValueActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlAddStructuralFeatureValueActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlAddStructuralFeatureValueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAddStructuralFeatureValueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlAddStructuralFeatureValueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAddStructuralFeatureValueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlAddStructuralFeatureValueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAddStructuralFeatureValueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlAddStructuralFeatureValueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlAddStructuralFeatureValueActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAddStructuralFeatureValueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlAddStructuralFeatureValueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAddStructuralFeatureValueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlAddStructuralFeatureValueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlAddStructuralFeatureValueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlAddStructuralFeatureValueActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlAddStructuralFeatureValueActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlAddStructuralFeatureValueActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlAddStructuralFeatureValueActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlAddStructuralFeatureValueActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlAddStructuralFeatureValueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlAddStructuralFeatureValueActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlAddStructuralFeatureValueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAddStructuralFeatureValueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlAddStructuralFeatureValueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAddStructuralFeatureValueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlAddStructuralFeatureValueActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlAddStructuralFeatureValueActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlAddStructuralFeatureValueActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
}

void QUmlAddStructuralFeatureValueActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setStructuralFeature(qmodelingelementproperty_cast<QUmlStructuralFeature *>(structuralFeature));
}

// SLOTS FOR OWNED ATTRIBUTES [WriteStructuralFeatureAction]

void QUmlAddStructuralFeatureValueActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlAddStructuralFeatureValueActionObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setValue(qmodelingelementproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [AddStructuralFeatureValueAction]

void QUmlAddStructuralFeatureValueActionObject::setInsertAt(QObject *insertAt)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setInsertAt(qmodelingelementproperty_cast<QUmlInputPin *>(insertAt));
}

void QUmlAddStructuralFeatureValueActionObject::setReplaceAll(bool isReplaceAll)
{
    qmodelingelementproperty_cast<QUmlAddStructuralFeatureValueAction *>(this)->setReplaceAll(isReplaceAll);
}

void QUmlAddStructuralFeatureValueActionObject::unsetReplaceAll()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("replaceAll"));
}


void QUmlAddStructuralFeatureValueActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlAddStructuralFeatureValueAction");
    d->groupProperties.insert(QStringLiteral("QUmlAddStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("insertAt"))));
    d->groupProperties.insert(QStringLiteral("QUmlAddStructuralFeatureValueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReplaceAll"))));
}

void QUmlAddStructuralFeatureValueActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, PropertyClassRole, QStringLiteral("QUmlAddStructuralFeatureValueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, DocumentationRole, QStringLiteral("Gives the position at which to insert a new value or move an existing value in ordered structural features. The type of the pin is UnlimitedNatural, but the value cannot be zero. This pin is omitted for unordered structural features."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, insertAt, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, PropertyClassRole, QStringLiteral("QUmlAddStructuralFeatureValueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, DocumentationRole, QStringLiteral("Specifies whether existing values of the structural feature of the object should be removed before adding the new value."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAddStructuralFeatureValueAction, isReplaceAll, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

