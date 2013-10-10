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
#include "qumlcreatelinkobjectactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlCreateLinkObjectAction>
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
#include <QtUml/QUmlLinkEndCreationData>
#include <QtUml/QUmlLinkEndData>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlCreateLinkObjectActionObject::QUmlCreateLinkObjectActionObject(QUmlCreateLinkObjectAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCreateLinkObjectActionObject::~QUmlCreateLinkObjectActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCreateLinkObjectActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCreateLinkObjectActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->name();
}

QObject *QUmlCreateLinkObjectActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCreateLinkObjectActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCreateLinkObjectActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCreateLinkObjectActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCreateLinkObjectActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCreateLinkObjectActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCreateLinkObjectActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlCreateLinkObjectActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlCreateLinkObjectActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlCreateLinkObjectActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlCreateLinkObjectActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [LinkAction]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inputValues() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->inputValues())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [CreateLinkAction]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::endData() const
{
    QSet<QObject *> set;
    foreach (QUmlLinkEndCreationData *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->endData())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [CreateLinkObjectAction]

QObject *QUmlCreateLinkObjectActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->result()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCreateLinkObjectActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCreateLinkObjectActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCreateLinkObjectActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCreateLinkObjectActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCreateLinkObjectActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCreateLinkObjectActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCreateLinkObjectActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCreateLinkObjectActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [LinkAction]

QObject *QUmlCreateLinkObjectActionObject::association() const
{
    if (!qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->association())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->association()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCreateLinkObjectActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCreateLinkObjectActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCreateLinkObjectActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCreateLinkObjectActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCreateLinkObjectActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCreateLinkObjectActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCreateLinkObjectActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCreateLinkObjectActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setName(name);
}

void QUmlCreateLinkObjectActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCreateLinkObjectActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCreateLinkObjectActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCreateLinkObjectActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCreateLinkObjectActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setLeaf(isLeaf);
}

void QUmlCreateLinkObjectActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlCreateLinkObjectActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCreateLinkObjectActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCreateLinkObjectActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCreateLinkObjectActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCreateLinkObjectActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlCreateLinkObjectActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCreateLinkObjectActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCreateLinkObjectActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCreateLinkObjectActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCreateLinkObjectActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCreateLinkObjectActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCreateLinkObjectActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCreateLinkObjectActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCreateLinkObjectActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCreateLinkObjectActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCreateLinkObjectActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCreateLinkObjectActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCreateLinkObjectActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlCreateLinkObjectActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlCreateLinkObjectActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlCreateLinkObjectActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlCreateLinkObjectActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlCreateLinkObjectActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlCreateLinkObjectActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlCreateLinkObjectActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlCreateLinkObjectActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCreateLinkObjectActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCreateLinkObjectActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCreateLinkObjectActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCreateLinkObjectActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlCreateLinkObjectActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkAction]

void QUmlCreateLinkObjectActionObject::addInputValue(QObject *inputValue)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInputValue(qmodelingelementproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlCreateLinkObjectActionObject::removeInputValue(QObject *inputValue)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInputValue(qmodelingelementproperty_cast<QUmlInputPin *>(inputValue));
}

// SLOTS FOR OWNED ATTRIBUTES [CreateLinkAction]

void QUmlCreateLinkObjectActionObject::addEndData(QObject *endData)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->addEndData(qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(endData));
}

void QUmlCreateLinkObjectActionObject::removeEndData(QObject *endData)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeEndData(qmodelingelementproperty_cast<QUmlLinkEndCreationData *>(endData));
}

// SLOTS FOR OWNED ATTRIBUTES [CreateLinkObjectAction]

void QUmlCreateLinkObjectActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlCreateLinkObjectAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}


void QUmlCreateLinkObjectActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlLinkAction");
    d->groupProperties.insert(QStringLiteral("QUmlLinkAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputValues"))));

    d->propertyGroups << QStringLiteral("QUmlWriteLinkAction");

    d->propertyGroups << QStringLiteral("QUmlCreateLinkAction");
    d->groupProperties.insert(QStringLiteral("QUmlCreateLinkAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("endData"))));

    d->propertyGroups << QStringLiteral("QUmlCreateLinkObjectAction");
    d->groupProperties.insert(QStringLiteral("QUmlCreateLinkObjectAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
}

void QUmlCreateLinkObjectActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, PropertyClassRole, QStringLiteral("QUmlCreateLinkObjectAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, DocumentationRole, QStringLiteral("Gives the output pin on which the result is put."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCreateLinkObjectAction, result, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

