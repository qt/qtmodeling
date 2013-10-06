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
#include "qumlreadlinkactionobject_p.h"

#include <QtUml/QUmlReadLinkAction>
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
#include <QtUml/QUmlLinkEndData>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlReadLinkActionObject::QUmlReadLinkActionObject(QUmlReadLinkAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlReadLinkActionObject::~QUmlReadLinkActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlReadLinkActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadLinkActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlReadLinkActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlReadLinkActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->name();
}

QObject *QUmlReadLinkActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlReadLinkActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->namespace_()->asQObject();
}

QString QUmlReadLinkActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlReadLinkActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlReadLinkActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlReadLinkActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlReadLinkActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlReadLinkActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlReadLinkActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlReadLinkActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlReadLinkActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlReadLinkActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlReadLinkActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlReadLinkActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlReadLinkActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlReadLinkActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [LinkAction]

const QSet<QObject *> QUmlReadLinkActionObject::endData() const
{
    QSet<QObject *> set;
    foreach (QUmlLinkEndData *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->endData())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlReadLinkActionObject::inputValues() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->inputValues())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ReadLinkAction]

QObject *QUmlReadLinkActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlReadLinkActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadLinkActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlReadLinkActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlReadLinkActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlReadLinkActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlReadLinkActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlReadLinkActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlReadLinkActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [LinkAction]

QObject *QUmlReadLinkActionObject::association() const
{
    if (!qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->association())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->association()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlReadLinkActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlReadLinkActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlReadLinkActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlReadLinkActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlReadLinkActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setName(name);
}

void QUmlReadLinkActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlReadLinkActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlReadLinkActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlReadLinkActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlReadLinkActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setLeaf(isLeaf);
}

void QUmlReadLinkActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlReadLinkActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlReadLinkActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlReadLinkActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlReadLinkActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlReadLinkActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlReadLinkActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlReadLinkActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlReadLinkActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlReadLinkActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlReadLinkActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlReadLinkActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlReadLinkActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlReadLinkActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlReadLinkActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlReadLinkActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlReadLinkActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlReadLinkActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlReadLinkActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlReadLinkActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlReadLinkActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlReadLinkActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlReadLinkActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkAction]

void QUmlReadLinkActionObject::addEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addEndData(qmodelingobjectproperty_cast<QUmlLinkEndData *>(endData));
}

void QUmlReadLinkActionObject::removeEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeEndData(qmodelingobjectproperty_cast<QUmlLinkEndData *>(endData));
}

void QUmlReadLinkActionObject::addInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->addInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlReadLinkActionObject::removeInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->removeInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

// SLOTS FOR OWNED ATTRIBUTES [ReadLinkAction]

void QUmlReadLinkActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlReadLinkAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

