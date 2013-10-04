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

QUmlRemoveStructuralFeatureValueActionObject::QUmlRemoveStructuralFeatureValueActionObject(QUmlRemoveStructuralFeatureValueAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlRemoveStructuralFeatureValueActionObject::~QUmlRemoveStructuralFeatureValueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlRemoveStructuralFeatureValueActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->name();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->namespace_()->asQObject();
}

QString QUmlRemoveStructuralFeatureValueActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRemoveStructuralFeatureValueActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRemoveStructuralFeatureValueActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlRemoveStructuralFeatureValueActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlRemoveStructuralFeatureValueActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlRemoveStructuralFeatureValueActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlRemoveStructuralFeatureValueActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlRemoveStructuralFeatureValueActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlRemoveStructuralFeatureValueActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->object()->asQObject();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::structuralFeature() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->structuralFeature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->structuralFeature()->asQObject();
}

// OWNED ATTRIBUTES [WriteStructuralFeatureAction]

QObject *QUmlRemoveStructuralFeatureValueActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->result()->asQObject();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::value() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->value())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->value()->asQObject();
}

// OWNED ATTRIBUTES [RemoveStructuralFeatureValueAction]

bool QUmlRemoveStructuralFeatureValueActionObject::isRemoveDuplicates() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isRemoveDuplicates();
}

QObject *QUmlRemoveStructuralFeatureValueActionObject::removeAt() const
{
    if (!qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeAt())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeAt()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRemoveStructuralFeatureValueActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRemoveStructuralFeatureValueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlRemoveStructuralFeatureValueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlRemoveStructuralFeatureValueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRemoveStructuralFeatureValueActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlRemoveStructuralFeatureValueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlRemoveStructuralFeatureValueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRemoveStructuralFeatureValueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRemoveStructuralFeatureValueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRemoveStructuralFeatureValueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRemoveStructuralFeatureValueActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setName(name);
}

void QUmlRemoveStructuralFeatureValueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRemoveStructuralFeatureValueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRemoveStructuralFeatureValueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlRemoveStructuralFeatureValueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRemoveStructuralFeatureValueActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlRemoveStructuralFeatureValueActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlRemoveStructuralFeatureValueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRemoveStructuralFeatureValueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlRemoveStructuralFeatureValueActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlRemoveStructuralFeatureValueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlRemoveStructuralFeatureValueActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlRemoveStructuralFeatureValueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlRemoveStructuralFeatureValueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlRemoveStructuralFeatureValueActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlRemoveStructuralFeatureValueActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlRemoveStructuralFeatureValueActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlRemoveStructuralFeatureValueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlRemoveStructuralFeatureValueActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlRemoveStructuralFeatureValueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlRemoveStructuralFeatureValueActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlRemoveStructuralFeatureValueActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlRemoveStructuralFeatureValueActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlRemoveStructuralFeatureValueActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setStructuralFeature(qmodelingobjectproperty_cast<QUmlStructuralFeature *>(structuralFeature));
}

// SLOTS FOR OWNED ATTRIBUTES [WriteStructuralFeatureAction]

void QUmlRemoveStructuralFeatureValueActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlRemoveStructuralFeatureValueActionObject::setValue(QObject *value)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setValue(qmodelingobjectproperty_cast<QUmlInputPin *>(value));
}

// SLOTS FOR OWNED ATTRIBUTES [RemoveStructuralFeatureValueAction]

void QUmlRemoveStructuralFeatureValueActionObject::setRemoveDuplicates(bool isRemoveDuplicates)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setRemoveDuplicates(isRemoveDuplicates);
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->modifiedResettableProperties() << QStringLiteral("removeDuplicates");
}

void QUmlRemoveStructuralFeatureValueActionObject::unsetRemoveDuplicates()
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("removeDuplicates"));
}

void QUmlRemoveStructuralFeatureValueActionObject::setRemoveAt(QObject *removeAt)
{
    qmodelingobjectproperty_cast<QUmlRemoveStructuralFeatureValueAction *>(this)->setRemoveAt(qmodelingobjectproperty_cast<QUmlInputPin *>(removeAt));
}

QT_END_NAMESPACE

