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
#include "qumldestroylinkactionobject_p.h"

#include <QtUml/QUmlDestroyLinkAction>
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
#include <QtUml/QUmlLinkEndDestructionData>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>

QT_BEGIN_NAMESPACE

QUmlDestroyLinkActionObject::QUmlDestroyLinkActionObject(QUmlDestroyLinkAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlDestroyLinkActionObject::~QUmlDestroyLinkActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDestroyLinkActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyLinkActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDestroyLinkActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDestroyLinkActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlDestroyLinkActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->name();
}

QObject *QUmlDestroyLinkActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlDestroyLinkActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->namespace_()->asQObject();
}

QString QUmlDestroyLinkActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlDestroyLinkActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlDestroyLinkActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlDestroyLinkActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyLinkActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlDestroyLinkActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlDestroyLinkActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyLinkActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyLinkActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlDestroyLinkActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlDestroyLinkActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyLinkActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyLinkActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlDestroyLinkActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlDestroyLinkActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlDestroyLinkActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlDestroyLinkActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlDestroyLinkActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlDestroyLinkActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlDestroyLinkActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [LinkAction]

const QSet<QObject *> QUmlDestroyLinkActionObject::inputValues() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->inputValues())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [DestroyLinkAction]

const QSet<QObject *> QUmlDestroyLinkActionObject::endData() const
{
    QSet<QObject *> set;
    foreach (QUmlLinkEndDestructionData *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->endData())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDestroyLinkActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDestroyLinkActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDestroyLinkActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlDestroyLinkActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlDestroyLinkActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDestroyLinkActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlDestroyLinkActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlDestroyLinkActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [LinkAction]

QObject *QUmlDestroyLinkActionObject::association() const
{
    if (!qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->association())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->association()->asQObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDestroyLinkActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestroyLinkActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestroyLinkActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestroyLinkActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestroyLinkActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDestroyLinkActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestroyLinkActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestroyLinkActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setName(name);
}

void QUmlDestroyLinkActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDestroyLinkActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDestroyLinkActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlDestroyLinkActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlDestroyLinkActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setLeaf(isLeaf);
}

void QUmlDestroyLinkActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlDestroyLinkActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDestroyLinkActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlDestroyLinkActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlDestroyLinkActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlDestroyLinkActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlDestroyLinkActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlDestroyLinkActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlDestroyLinkActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlDestroyLinkActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlDestroyLinkActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlDestroyLinkActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlDestroyLinkActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlDestroyLinkActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlDestroyLinkActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlDestroyLinkActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlDestroyLinkActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlDestroyLinkActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlDestroyLinkActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlDestroyLinkActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlDestroyLinkActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlDestroyLinkActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlDestroyLinkActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlDestroyLinkActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlDestroyLinkActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlDestroyLinkActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlDestroyLinkActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlDestroyLinkActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlDestroyLinkActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlDestroyLinkActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlDestroyLinkActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlDestroyLinkActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [LinkAction]

void QUmlDestroyLinkActionObject::addInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlDestroyLinkActionObject::removeInputValue(QObject *inputValue)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeInputValue(qmodelingobjectproperty_cast<QUmlInputPin *>(inputValue));
}

// SLOTS FOR OWNED ATTRIBUTES [DestroyLinkAction]

void QUmlDestroyLinkActionObject::addEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->addEndData(qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(endData));
}

void QUmlDestroyLinkActionObject::removeEndData(QObject *endData)
{
    qmodelingobjectproperty_cast<QUmlDestroyLinkAction *>(this)->removeEndData(qmodelingobjectproperty_cast<QUmlLinkEndDestructionData *>(endData));
}

QT_END_NAMESPACE

