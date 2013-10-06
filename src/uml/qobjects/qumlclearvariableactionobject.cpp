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
#include "qumlclearvariableactionobject_p.h"

#include <QtUml/QUmlClearVariableAction>
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
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlClearVariableActionObject::QUmlClearVariableActionObject(QUmlClearVariableAction *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlClearVariableActionObject::~QUmlClearVariableActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlClearVariableActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearVariableActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClearVariableActionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlClearVariableActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlClearVariableActionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->name();
}

QObject *QUmlClearVariableActionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->nameExpression()->asQObject();
}

QObject *QUmlClearVariableActionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->namespace_()->asQObject();
}

QString QUmlClearVariableActionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlClearVariableActionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlClearVariableActionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlClearVariableActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearVariableActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlClearVariableActionObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlClearVariableActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->inGroups())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearVariableActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearVariableActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->inPartitions())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlClearVariableActionObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlClearVariableActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->incomings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearVariableActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->outgoings())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearVariableActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->redefinedNodes())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlClearVariableActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->handlers())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlClearVariableActionObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlClearVariableActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->inputs())
        list.append(element->asQObject());
    return list;
}

bool QUmlClearVariableActionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlClearVariableActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->localPostconditions())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlClearVariableActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->localPreconditions())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlClearVariableActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->outputs())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [VariableAction]

QObject *QUmlClearVariableActionObject::variable() const
{
    if (!qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->variable())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->variable()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlClearVariableActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClearVariableActionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlClearVariableActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlClearVariableActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlClearVariableActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlClearVariableActionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlClearVariableActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlClearVariableActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlClearVariableActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClearVariableActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlClearVariableActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClearVariableActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlClearVariableActionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlClearVariableActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlClearVariableActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlClearVariableActionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setName(name);
}

void QUmlClearVariableActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlClearVariableActionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlClearVariableActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlClearVariableActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlClearVariableActionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setLeaf(isLeaf);
}

void QUmlClearVariableActionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlClearVariableActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlClearVariableActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlClearVariableActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlClearVariableActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlClearVariableActionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlClearVariableActionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlClearVariableActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlClearVariableActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlClearVariableActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlClearVariableActionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlClearVariableActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlClearVariableActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlClearVariableActionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlClearVariableActionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlClearVariableActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlClearVariableActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlClearVariableActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlClearVariableActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlClearVariableActionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlClearVariableActionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlClearVariableActionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlClearVariableActionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlClearVariableActionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlClearVariableActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlClearVariableActionObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlClearVariableActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlClearVariableActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlClearVariableActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlClearVariableActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlClearVariableActionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlClearVariableActionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [VariableAction]

void QUmlClearVariableActionObject::setVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlClearVariableAction *>(this)->setVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

QT_END_NAMESPACE

