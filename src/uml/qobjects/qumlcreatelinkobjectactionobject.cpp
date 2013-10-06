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

QUmlCreateLinkObjectActionObject::QUmlCreateLinkObjectActionObject(QUmlCreateLinkObjectAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlCreateLinkObjectActionObject::~QUmlCreateLinkObjectActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCreateLinkObjectActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlCreateLinkObjectActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->name();
}

QObject *QUmlCreateLinkObjectActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlCreateLinkObjectActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->namespace_()->asQObject();
}

QString QUmlCreateLinkObjectActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCreateLinkObjectActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlCreateLinkObjectActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlCreateLinkObjectActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlCreateLinkObjectActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlCreateLinkObjectActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlCreateLinkObjectActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlCreateLinkObjectActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlCreateLinkObjectActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlCreateLinkObjectActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [LinkAction]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::inputValues() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->inputValues())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [CreateLinkAction]

const QSet<QObject *> QUmlCreateLinkObjectActionObject::endData() const
{
    QSet<QObject *> set;
    foreach (QUmlLinkEndCreationData *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->endData())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [CreateLinkObjectAction]

QObject *QUmlCreateLinkObjectActionObject::result() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->result())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->result()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCreateLinkObjectActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCreateLinkObjectActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCreateLinkObjectActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlCreateLinkObjectActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlCreateLinkObjectActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCreateLinkObjectActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlCreateLinkObjectActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlCreateLinkObjectActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [LinkAction]

QObject *QUmlCreateLinkObjectActionObject::association() const
{
    if (!qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->association())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->association()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCreateLinkObjectActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCreateLinkObjectActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCreateLinkObjectActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCreateLinkObjectActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCreateLinkObjectActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCreateLinkObjectActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCreateLinkObjectActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCreateLinkObjectActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setName(name);
}

void QUmlCreateLinkObjectActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCreateLinkObjectActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCreateLinkObjectActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCreateLinkObjectActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlCreateLinkObjectActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setLeaf(isLeaf);
}

void QUmlCreateLinkObjectActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlCreateLinkObjectActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCreateLinkObjectActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlCreateLinkObjectActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlCreateLinkObjectActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlCreateLinkObjectActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlCreateLinkObjectActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCreateLinkObjectActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlCreateLinkObjectActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCreateLinkObjectActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlCreateLinkObjectActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCreateLinkObjectActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlCreateLinkObjectActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlCreateLinkObjectActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCreateLinkObjectActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlCreateLinkObjectActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCreateLinkObjectActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlCreateLinkObjectActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlCreateLinkObjectActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlCreateLinkObjectActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlCreateLinkObjectActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlCreateLinkObjectActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlCreateLinkObjectActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCreateLinkObjectActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlCreateLinkObjectActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlCreateLinkObjectActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlCreateLinkObjectActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCreateLinkObjectActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlCreateLinkObjectActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCreateLinkObjectActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlCreateLinkObjectActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlCreateLinkObjectActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkAction]

void QUmlCreateLinkObjectActionObject::addInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlCreateLinkObjectActionObject::removeInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

// SLOTS FOR OWNED ATTRIBUTES [CreateLinkAction]

void QUmlCreateLinkObjectActionObject::addEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->addEndData(qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(endData));
}

void QUmlCreateLinkObjectActionObject::removeEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->removeEndData(qmodelingobjectproperty_cast<QUmlLinkEndCreationData *>(endData));
}

// SLOTS FOR OWNED ATTRIBUTES [CreateLinkObjectAction]

void QUmlCreateLinkObjectActionObject::setResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlCreateLinkObjectAction *>(this)->setResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

