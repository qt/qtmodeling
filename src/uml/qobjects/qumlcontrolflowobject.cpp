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
#include "qumlcontrolflowobject_p.h"

#include <QtUml/QUmlControlFlow>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlControlFlowObject::QUmlControlFlowObject(QUmlControlFlow *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlControlFlowObject::~QUmlControlFlowObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlControlFlowObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlControlFlowObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlControlFlowObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlControlFlowObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlControlFlowObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->name();
}

QObject *QUmlControlFlowObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->nameExpression()->asQObject();
}

QObject *QUmlControlFlowObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->namespace_()->asQObject();
}

QString QUmlControlFlowObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlControlFlowObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlControlFlowObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->isLeaf();
}

const QSet<QObject *> QUmlControlFlowObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlControlFlowObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityEdge]

QObject *QUmlControlFlowObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->activity()->asQObject();
}

QObject *QUmlControlFlowObject::guard() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->guard())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->guard()->asQObject();
}

const QSet<QObject *> QUmlControlFlowObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlControlFlowObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlControlFlowObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->inStructuredNode()->asQObject();
}

QObject *QUmlControlFlowObject::interrupts() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->interrupts())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->interrupts()->asQObject();
}

const QSet<QObject *> QUmlControlFlowObject::redefinedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->redefinedEdge())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlControlFlowObject::source() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->source())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->source()->asQObject();
}

QObject *QUmlControlFlowObject::target() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->target())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->target()->asQObject();
}

QObject *QUmlControlFlowObject::weight() const
{
    if (!qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->weight())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->weight()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlControlFlowObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlControlFlowObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlControlFlowObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlControlFlowObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlControlFlowObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlControlFlowObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlControlFlowObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlControlFlowObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlControlFlowObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlControlFlowObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlControlFlowObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlControlFlowObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlControlFlowObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlControlFlowObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlControlFlowObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlControlFlowObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setName(name);
}

void QUmlControlFlowObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlControlFlowObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlControlFlowObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setQualifiedName(qualifiedName);
}

void QUmlControlFlowObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlControlFlowObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setLeaf(isLeaf);
}

void QUmlControlFlowObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlControlFlowObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlControlFlowObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlControlFlowObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlControlFlowObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityEdge]

void QUmlControlFlowObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlControlFlowObject::setGuard(QObject *guard)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setGuard(qmodelingobjectproperty_cast<QUmlValueSpecification *>(guard));
}

void QUmlControlFlowObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlControlFlowObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlControlFlowObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlControlFlowObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlControlFlowObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlControlFlowObject::setInterrupts(QObject *interrupts)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setInterrupts(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(interrupts));
}

void QUmlControlFlowObject::addRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->addRedefinedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlControlFlowObject::removeRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->removeRedefinedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlControlFlowObject::setSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setSource(qmodelingobjectproperty_cast<QUmlActivityNode *>(source));
}

void QUmlControlFlowObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlActivityNode *>(target));
}

void QUmlControlFlowObject::setWeight(QObject *weight)
{
    qmodelingobjectproperty_cast<QUmlControlFlow *>(this)->setWeight(qmodelingobjectproperty_cast<QUmlValueSpecification *>(weight));
}

QT_END_NAMESPACE

