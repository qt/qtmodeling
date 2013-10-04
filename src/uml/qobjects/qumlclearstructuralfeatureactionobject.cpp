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
#include "qumlclearstructuralfeatureactionobject_p.h"

#include <QtUml/QUmlClearStructuralFeatureAction>
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

QUmlClearStructuralFeatureActionObject::QUmlClearStructuralFeatureActionObject(QUmlClearStructuralFeatureAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlClearStructuralFeatureActionObject::~QUmlClearStructuralFeatureActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClearStructuralFeatureActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlClearStructuralFeatureActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->name();
}

QObject *QUmlClearStructuralFeatureActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlClearStructuralFeatureActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->namespace_()->asQObject();
}

QString QUmlClearStructuralFeatureActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlClearStructuralFeatureActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlClearStructuralFeatureActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlClearStructuralFeatureActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClearStructuralFeatureActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlClearStructuralFeatureActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlClearStructuralFeatureActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlClearStructuralFeatureActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearStructuralFeatureActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlClearStructuralFeatureActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [StructuralFeatureAction]

QObject *QUmlClearStructuralFeatureActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->object()->asQObject();
}

QObject *QUmlClearStructuralFeatureActionObject::structuralFeature() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->structuralFeature())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->structuralFeature()->asQObject();
}

// OWNED ATTRIBUTES [ClearStructuralFeatureAction]

QObject *QUmlClearStructuralFeatureActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlClearStructuralFeatureActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClearStructuralFeatureActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlClearStructuralFeatureActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlClearStructuralFeatureActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClearStructuralFeatureActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlClearStructuralFeatureActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlClearStructuralFeatureActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlClearStructuralFeatureActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClearStructuralFeatureActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClearStructuralFeatureActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClearStructuralFeatureActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClearStructuralFeatureActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClearStructuralFeatureActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlClearStructuralFeatureActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlClearStructuralFeatureActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlClearStructuralFeatureActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setName(name);
}

void QUmlClearStructuralFeatureActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlClearStructuralFeatureActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlClearStructuralFeatureActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlClearStructuralFeatureActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlClearStructuralFeatureActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlClearStructuralFeatureActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlClearStructuralFeatureActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlClearStructuralFeatureActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlClearStructuralFeatureActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlClearStructuralFeatureActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlClearStructuralFeatureActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlClearStructuralFeatureActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlClearStructuralFeatureActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlClearStructuralFeatureActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlClearStructuralFeatureActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlClearStructuralFeatureActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlClearStructuralFeatureActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlClearStructuralFeatureActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlClearStructuralFeatureActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlClearStructuralFeatureActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlClearStructuralFeatureActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlClearStructuralFeatureActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlClearStructuralFeatureActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlClearStructuralFeatureActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlClearStructuralFeatureActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlClearStructuralFeatureActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlClearStructuralFeatureActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlClearStructuralFeatureActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlClearStructuralFeatureActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlClearStructuralFeatureActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlClearStructuralFeatureActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlClearStructuralFeatureActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlClearStructuralFeatureActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlClearStructuralFeatureActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlClearStructuralFeatureActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlClearStructuralFeatureActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlClearStructuralFeatureActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuralFeatureAction]

void QUmlClearStructuralFeatureActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlClearStructuralFeatureActionObject::setStructuralFeature(QObject *structuralFeature)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setStructuralFeature(qmodelingobjectproperty_cast<QUmlStructuralFeature *>(structuralFeature));
}

// SLOTS FOR OWNED ATTRIBUTES [ClearStructuralFeatureAction]

void QUmlClearStructuralFeatureActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlClearStructuralFeatureAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

