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
#include "qumlclearassociationactionobject_p.h"

#include <QtUml/QUmlClearAssociationAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlAssociation>
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

QUmlClearAssociationActionObject::QUmlClearAssociationActionObject(QUmlClearAssociationAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlClearAssociationActionObject::~QUmlClearAssociationActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlClearAssociationActionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearAssociationActionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClearAssociationActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlClearAssociationActionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlClearAssociationActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->name();
}

QObject *QUmlClearAssociationActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlClearAssociationActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->namespace_()->asQObject();
}

QString QUmlClearAssociationActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlClearAssociationActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlClearAssociationActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlClearAssociationActionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearAssociationActionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlClearAssociationActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlClearAssociationActionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearAssociationActionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearAssociationActionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClearAssociationActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlClearAssociationActionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearAssociationActionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearAssociationActionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlClearAssociationActionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlClearAssociationActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlClearAssociationActionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlClearAssociationActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlClearAssociationActionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearAssociationActionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlClearAssociationActionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [ClearAssociationAction]

QObject *QUmlClearAssociationActionObject::association() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->association())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->association()->asQObject();
}

QObject *QUmlClearAssociationActionObject::object() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->object())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->object()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlClearAssociationActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClearAssociationActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlClearAssociationActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlClearAssociationActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClearAssociationActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlClearAssociationActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlClearAssociationActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlClearAssociationActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClearAssociationActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClearAssociationActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClearAssociationActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClearAssociationActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClearAssociationActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlClearAssociationActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlClearAssociationActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlClearAssociationActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setName(name);
}

void QUmlClearAssociationActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlClearAssociationActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlClearAssociationActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlClearAssociationActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlClearAssociationActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlClearAssociationActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlClearAssociationActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlClearAssociationActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlClearAssociationActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlClearAssociationActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlClearAssociationActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlClearAssociationActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlClearAssociationActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlClearAssociationActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlClearAssociationActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlClearAssociationActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlClearAssociationActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlClearAssociationActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlClearAssociationActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlClearAssociationActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlClearAssociationActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlClearAssociationActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlClearAssociationActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlClearAssociationActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlClearAssociationActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlClearAssociationActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlClearAssociationActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlClearAssociationActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlClearAssociationActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlClearAssociationActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlClearAssociationActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlClearAssociationActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlClearAssociationActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlClearAssociationActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlClearAssociationActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlClearAssociationActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlClearAssociationActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ClearAssociationAction]

void QUmlClearAssociationActionObject::setAssociation(QObject *association)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setAssociation(qmodelingobjectproperty_cast<QUmlAssociation *>(association));
}

void QUmlClearAssociationActionObject::setObject(QObject *object)
{
    qmodelingobjectproperty_cast<QUmlClearAssociationAction *>(this)->setObject(qmodelingobjectproperty_cast<QUmlInputPin *>(object));
}

QT_END_NAMESPACE

