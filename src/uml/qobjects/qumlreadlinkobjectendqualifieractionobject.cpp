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
#include "private/qmodelingobject_p.h"

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

QUmlReadLinkObjectEndQualifierActionObject::QUmlReadLinkObjectEndQualifierActionObject(QUmlReadLinkObjectEndQualifierAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlReadLinkObjectEndQualifierActionObject::~QUmlReadLinkObjectEndQualifierActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlReadLinkObjectEndQualifierActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->name();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlReadLinkObjectEndQualifierActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadLinkObjectEndQualifierActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadLinkObjectEndQualifierActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadLinkObjectEndQualifierActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadLinkObjectEndQualifierActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlReadLinkObjectEndQualifierActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlReadLinkObjectEndQualifierActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlReadLinkObjectEndQualifierActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [ReadLinkObjectEndQualifierAction]

QObject *QUmlReadLinkObjectEndQualifierActionObject::object() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->object())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->object()->asQModelingObject();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::qualifier() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->qualifier())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->qualifier()->asQModelingObject();
}

QObject *QUmlReadLinkObjectEndQualifierActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->result()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlReadLinkObjectEndQualifierActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadLinkObjectEndQualifierActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlReadLinkObjectEndQualifierActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlReadLinkObjectEndQualifierActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadLinkObjectEndQualifierActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadLinkObjectEndQualifierActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadLinkObjectEndQualifierActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadLinkObjectEndQualifierActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkObjectEndQualifierActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadLinkObjectEndQualifierActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkObjectEndQualifierActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setName(name);
}

void QUmlReadLinkObjectEndQualifierActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadLinkObjectEndQualifierActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadLinkObjectEndQualifierActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadLinkObjectEndQualifierActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadLinkObjectEndQualifierActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setLeaf(isLeaf);
}

void QUmlReadLinkObjectEndQualifierActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlReadLinkObjectEndQualifierActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkObjectEndQualifierActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadLinkObjectEndQualifierActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkObjectEndQualifierActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadLinkObjectEndQualifierActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkObjectEndQualifierActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkObjectEndQualifierActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadLinkObjectEndQualifierActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadLinkObjectEndQualifierActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadLinkObjectEndQualifierActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkObjectEndQualifierActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReadLinkObjectEndQualifierActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadLinkObjectEndQualifierActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkObjectEndQualifierActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadLinkObjectEndQualifierActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadLinkObjectEndQualifierAction]

void QUmlReadLinkObjectEndQualifierActionObject::setObject(QObject *object)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setObject(qmodelingelementproperty_cast<QUmlInputPin *>(object));
}

void QUmlReadLinkObjectEndQualifierActionObject::setQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlReadLinkObjectEndQualifierActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlReadLinkObjectEndQualifierAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}


void QUmlReadLinkObjectEndQualifierActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlReadLinkObjectEndQualifierAction");
    d->groupProperties.insert(QStringLiteral("QUmlReadLinkObjectEndQualifierAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("object"))));
    d->groupProperties.insert(QStringLiteral("QUmlReadLinkObjectEndQualifierAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifier"))));
    d->groupProperties.insert(QStringLiteral("QUmlReadLinkObjectEndQualifierAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
}

void QUmlReadLinkObjectEndQualifierActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, PropertyClassRole, QStringLiteral("QUmlReadLinkObjectEndQualifierAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, DocumentationRole, QStringLiteral("Gives the input pin from which the link object is obtained."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, object, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, PropertyClassRole, QStringLiteral("QUmlReadLinkObjectEndQualifierAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, DocumentationRole, QStringLiteral("The attribute representing the qualifier to be read."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, qualifier, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, PropertyClassRole, QStringLiteral("QUmlReadLinkObjectEndQualifierAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, DocumentationRole, QStringLiteral("Pin where the result value is placed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlReadLinkObjectEndQualifierAction, result, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

