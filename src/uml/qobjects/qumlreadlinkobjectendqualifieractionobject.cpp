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
#include "qumlreadlinkobjectendqualifieractionobject_p.h"

#include <QtUml/QUmlReadLinkObjectEndQualifierAction>
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
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlReadLinkObjectEndQualifierActionObject::QUmlReadLinkObjectEndQualifierActionObject(QUmlReadLinkObjectEndQualifierAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlReadLinkObjectEndQualifierActionObject::~QUmlReadLinkObjectEndQualifierActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReadLinkObjectEndQualifierActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->name();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->namespace_()->asQObject();
}

QString QUmlReadLinkObjectEndQualifierActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadLinkObjectEndQualifierActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadLinkObjectEndQualifierActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadLinkObjectEndQualifierActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadLinkObjectEndQualifierActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReadLinkObjectEndQualifierActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlReadLinkObjectEndQualifierActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReadLinkObjectEndQualifierActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ReadLinkObjectEndQualifierAction]

QObject *QUmlReadLinkObjectEndQualifierActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->object()->asQObject();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::qualifier() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->qualifier())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->qualifier()->asQObject();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadLinkObjectEndQualifierActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadLinkObjectEndQualifierActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadLinkObjectEndQualifierActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadLinkObjectEndQualifierActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadLinkObjectEndQualifierActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadLinkObjectEndQualifierActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadLinkObjectEndQualifierActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkObjectEndQualifierActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadLinkObjectEndQualifierActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkObjectEndQualifierActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setName(name);
}

void QUmlReadLinkObjectEndQualifierActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadLinkObjectEndQualifierActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadLinkObjectEndQualifierActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadLinkObjectEndQualifierActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadLinkObjectEndQualifierActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlReadLinkObjectEndQualifierActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReadLinkObjectEndQualifierActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadLinkObjectEndQualifierActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkObjectEndQualifierActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadLinkObjectEndQualifierActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkObjectEndQualifierActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkObjectEndQualifierActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadLinkObjectEndQualifierActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadLinkObjectEndQualifierActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkObjectEndQualifierActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlReadLinkObjectEndQualifierActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadLinkObjectEndQualifierActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadLinkObjectEndQualifierAction]

void QUmlReadLinkObjectEndQualifierActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

void QUmlReadLinkObjectEndQualifierActionObject::setQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlReadLinkObjectEndQualifierActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

