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
#include "qumlobjectflowobject_p.h"

#include <QtUml/QUmlObjectFlow>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlBehavior>
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

QUmlObjectFlowObject::QUmlObjectFlowObject(QUmlObjectFlow *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlObjectFlowObject::~QUmlObjectFlowObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlObjectFlowObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlObjectFlowObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlObjectFlowObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlObjectFlowObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlObjectFlowObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->name();
}

QObject *QUmlObjectFlowObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->nameExpression()->asQObject();
}

QObject *QUmlObjectFlowObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->namespace_()->asQObject();
}

QString QUmlObjectFlowObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlObjectFlowObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlObjectFlowObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->isLeaf();
}

const QSet<QObject *> QUmlObjectFlowObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlObjectFlowObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityEdge]

QObject *QUmlObjectFlowObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->activity()->asQObject();
}

QObject *QUmlObjectFlowObject::guard() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->guard())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->guard()->asQObject();
}

const QSet<QObject *> QUmlObjectFlowObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlObjectFlowObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlObjectFlowObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->inStructuredNode()->asQObject();
}

QObject *QUmlObjectFlowObject::interrupts() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->interrupts())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->interrupts()->asQObject();
}

const QSet<QObject *> QUmlObjectFlowObject::redefinedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->redefinedEdge())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlObjectFlowObject::source() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->source())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->source()->asQObject();
}

QObject *QUmlObjectFlowObject::target() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->target())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->target()->asQObject();
}

QObject *QUmlObjectFlowObject::weight() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->weight())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->weight()->asQObject();
}

// OWNED ATTRIBUTES [ObjectFlow]

bool QUmlObjectFlowObject::isMulticast() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->isMulticast();
}

bool QUmlObjectFlowObject::isMultireceive() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->isMultireceive();
}

QObject *QUmlObjectFlowObject::selection() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->selection())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->selection()->asQObject();
}

QObject *QUmlObjectFlowObject::transformation() const
{
    if (!qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->transformation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->transformation()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlObjectFlowObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlObjectFlowObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlObjectFlowObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlObjectFlowObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlObjectFlowObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlObjectFlowObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlObjectFlowObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlObjectFlowObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlObjectFlowObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlObjectFlowObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlObjectFlowObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlObjectFlowObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlObjectFlowObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlObjectFlowObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlObjectFlowObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlObjectFlowObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setName(name);
}

void QUmlObjectFlowObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlObjectFlowObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlObjectFlowObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setQualifiedName(qualifiedName);
}

void QUmlObjectFlowObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlObjectFlowObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setLeaf(isLeaf);
}

void QUmlObjectFlowObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlObjectFlowObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlObjectFlowObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlObjectFlowObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlObjectFlowObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityEdge]

void QUmlObjectFlowObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlObjectFlowObject::setGuard(QObject *guard)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setGuard(qmodelingobjectproperty_cast<QUmlValueSpecification *>(guard));
}

void QUmlObjectFlowObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlObjectFlowObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlObjectFlowObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlObjectFlowObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlObjectFlowObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlObjectFlowObject::setInterrupts(QObject *interrupts)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setInterrupts(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(interrupts));
}

void QUmlObjectFlowObject::addRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->addRedefinedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlObjectFlowObject::removeRedefinedEdge(QObject *redefinedEdge)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->removeRedefinedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(redefinedEdge));
}

void QUmlObjectFlowObject::setSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setSource(qmodelingobjectproperty_cast<QUmlActivityNode *>(source));
}

void QUmlObjectFlowObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlActivityNode *>(target));
}

void QUmlObjectFlowObject::setWeight(QObject *weight)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setWeight(qmodelingobjectproperty_cast<QUmlValueSpecification *>(weight));
}

// SLOTS FOR OWNED ATTRIBUTES [ObjectFlow]

void QUmlObjectFlowObject::setMulticast(bool isMulticast)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setMulticast(isMulticast);
}

void QUmlObjectFlowObject::unsetMulticast()
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("multicast"));
}

void QUmlObjectFlowObject::setMultireceive(bool isMultireceive)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setMultireceive(isMultireceive);
}

void QUmlObjectFlowObject::unsetMultireceive()
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("multireceive"));
}

void QUmlObjectFlowObject::setSelection(QObject *selection)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setSelection(qmodelingobjectproperty_cast<QUmlBehavior *>(selection));
}

void QUmlObjectFlowObject::setTransformation(QObject *transformation)
{
    qmodelingobjectproperty_cast<QUmlObjectFlow *>(this)->setTransformation(qmodelingobjectproperty_cast<QUmlBehavior *>(transformation));
}

QT_END_NAMESPACE

