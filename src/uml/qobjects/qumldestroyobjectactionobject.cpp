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
#include "qumldestroyobjectactionobject_p.h"

#include <QtUml/QUmlDestroyObjectAction>
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

QUmlDestroyObjectActionObject::QUmlDestroyObjectActionObject(QUmlDestroyObjectAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlDestroyObjectActionObject::~QUmlDestroyObjectActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDestroyObjectActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyObjectActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDestroyObjectActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDestroyObjectActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDestroyObjectActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->name();
}

QObject *QUmlDestroyObjectActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDestroyObjectActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->namespace_()->asQObject();
}

QString QUmlDestroyObjectActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlDestroyObjectActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlDestroyObjectActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlDestroyObjectActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyObjectActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlDestroyObjectActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlDestroyObjectActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyObjectActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyObjectActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDestroyObjectActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlDestroyObjectActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyObjectActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyObjectActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlDestroyObjectActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlDestroyObjectActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlDestroyObjectActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlDestroyObjectActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlDestroyObjectActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyObjectActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlDestroyObjectActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [DestroyObjectAction]

bool QUmlDestroyObjectActionObject::isDestroyLinks() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->isDestroyLinks();
}

bool QUmlDestroyObjectActionObject::isDestroyOwnedObjects() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->isDestroyOwnedObjects();
}

QObject *QUmlDestroyObjectActionObject::target() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->target())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->target()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDestroyObjectActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDestroyObjectActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDestroyObjectActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDestroyObjectActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDestroyObjectActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDestroyObjectActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlDestroyObjectActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlDestroyObjectActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDestroyObjectActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestroyObjectActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestroyObjectActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestroyObjectActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestroyObjectActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDestroyObjectActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestroyObjectActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestroyObjectActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setName(name);
}

void QUmlDestroyObjectActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDestroyObjectActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDestroyObjectActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlDestroyObjectActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlDestroyObjectActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlDestroyObjectActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlDestroyObjectActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDestroyObjectActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDestroyObjectActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlDestroyObjectActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlDestroyObjectActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlDestroyObjectActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlDestroyObjectActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlDestroyObjectActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlDestroyObjectActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlDestroyObjectActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlDestroyObjectActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlDestroyObjectActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlDestroyObjectActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlDestroyObjectActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlDestroyObjectActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlDestroyObjectActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlDestroyObjectActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlDestroyObjectActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlDestroyObjectActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlDestroyObjectActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlDestroyObjectActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlDestroyObjectActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlDestroyObjectActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlDestroyObjectActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlDestroyObjectActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlDestroyObjectActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlDestroyObjectActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlDestroyObjectActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlDestroyObjectActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlDestroyObjectActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlDestroyObjectActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [DestroyObjectAction]

void QUmlDestroyObjectActionObject::setDestroyLinks(bool isDestroyLinks)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setDestroyLinks(isDestroyLinks);
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties() << QStringLiteral("destroyLinks");
}

void QUmlDestroyObjectActionObject::unsetDestroyLinks()
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("destroyLinks"));
}

void QUmlDestroyObjectActionObject::setDestroyOwnedObjects(bool isDestroyOwnedObjects)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setDestroyOwnedObjects(isDestroyOwnedObjects);
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties() << QStringLiteral("destroyOwnedObjects");
}

void QUmlDestroyObjectActionObject::unsetDestroyOwnedObjects()
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("destroyOwnedObjects"));
}

void QUmlDestroyObjectActionObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlDestroyObjectAction *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlInputPin *>(target));
}

QT_END_NAMESPACE

