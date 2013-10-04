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
#include "qumlunmarshallactionobject_p.h"

#include <QtUml/QUmlUnmarshallAction>
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

QUmlUnmarshallActionObject::QUmlUnmarshallActionObject(QUmlUnmarshallAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlUnmarshallActionObject::~QUmlUnmarshallActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlUnmarshallActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlUnmarshallActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlUnmarshallActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlUnmarshallActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->name();
}

QObject *QUmlUnmarshallActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlUnmarshallActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->namespace_()->asQObject();
}

QString QUmlUnmarshallActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlUnmarshallActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlUnmarshallActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlUnmarshallActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlUnmarshallActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlUnmarshallActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlUnmarshallActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlUnmarshallActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlUnmarshallActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlUnmarshallActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlUnmarshallActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlUnmarshallActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlUnmarshallActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlUnmarshallActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlUnmarshallActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [UnmarshallAction]

QObject *QUmlUnmarshallActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->object()->asQObject();
}

const QSet<QObject *> QUmlUnmarshallActionObject::result() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->result())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlUnmarshallActionObject::unmarshallType() const
{
    if (!qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->unmarshallType())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->unmarshallType()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlUnmarshallActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUnmarshallActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlUnmarshallActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlUnmarshallActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlUnmarshallActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlUnmarshallActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlUnmarshallActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlUnmarshallActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlUnmarshallActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUnmarshallActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUnmarshallActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUnmarshallActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUnmarshallActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlUnmarshallActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUnmarshallActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUnmarshallActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setName(name);
}

void QUmlUnmarshallActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlUnmarshallActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlUnmarshallActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlUnmarshallActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlUnmarshallActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlUnmarshallActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlUnmarshallActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUnmarshallActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlUnmarshallActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlUnmarshallActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlUnmarshallActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlUnmarshallActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlUnmarshallActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlUnmarshallActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlUnmarshallActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlUnmarshallActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlUnmarshallActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlUnmarshallActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlUnmarshallActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlUnmarshallActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlUnmarshallActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlUnmarshallActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlUnmarshallActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlUnmarshallActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlUnmarshallActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlUnmarshallActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlUnmarshallActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlUnmarshallActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlUnmarshallActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlUnmarshallActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlUnmarshallActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlUnmarshallActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlUnmarshallActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlUnmarshallActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlUnmarshallActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlUnmarshallActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlUnmarshallActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [UnmarshallAction]

void QUmlUnmarshallActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlUnmarshallActionObject::addResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->addResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlUnmarshallActionObject::removeResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->removeResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlUnmarshallActionObject::setUnmarshallType(QObject *unmarshallType)
{
    qmodelingobjectproperty_cast<QUmlUnmarshallAction *>(this)->setUnmarshallType(qmodelingobjectproperty_cast<QUmlClassifier *>(unmarshallType));
}

QT_END_NAMESPACE

