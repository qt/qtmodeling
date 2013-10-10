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
#include "qumlopaqueactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlOpaqueAction>
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

QUmlOpaqueActionObject::QUmlOpaqueActionObject(QUmlOpaqueAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlOpaqueActionObject::~QUmlOpaqueActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOpaqueActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOpaqueActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOpaqueActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlOpaqueActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->name();
}

QObject *QUmlOpaqueActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlOpaqueActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlOpaqueActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOpaqueActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlOpaqueActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlOpaqueActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlOpaqueActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlOpaqueActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOpaqueActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlOpaqueActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlOpaqueActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlOpaqueActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlOpaqueActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlOpaqueActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlOpaqueActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlOpaqueActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [OpaqueAction]

const QList<QString> QUmlOpaqueActionObject::bodies() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->bodies();
}

const QSet<QObject *> QUmlOpaqueActionObject::inputValues() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->inputValues())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QString> QUmlOpaqueActionObject::languages() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->languages();
}

const QSet<QObject *> QUmlOpaqueActionObject::outputValues() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->outputValues())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOpaqueActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOpaqueActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlOpaqueActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOpaqueActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlOpaqueActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlOpaqueActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOpaqueActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOpaqueActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setName(name);
}

void QUmlOpaqueActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOpaqueActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOpaqueActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOpaqueActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlOpaqueActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setLeaf(isLeaf);
}

void QUmlOpaqueActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlOpaqueActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlOpaqueActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlOpaqueActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlOpaqueActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlOpaqueActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOpaqueActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlOpaqueActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOpaqueActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlOpaqueActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOpaqueActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlOpaqueActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlOpaqueActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOpaqueActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlOpaqueActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOpaqueActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlOpaqueActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlOpaqueActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlOpaqueActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlOpaqueActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlOpaqueActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlOpaqueActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlOpaqueActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlOpaqueActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlOpaqueActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlOpaqueActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlOpaqueActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlOpaqueActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlOpaqueActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlOpaqueActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlOpaqueActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueAction]

void QUmlOpaqueActionObject::addBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addBody(body);
}

void QUmlOpaqueActionObject::removeBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeBody(body);
}

void QUmlOpaqueActionObject::addInputValue(QObject *inputValue)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addInputValue(qmodelingelementproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlOpaqueActionObject::removeInputValue(QObject *inputValue)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeInputValue(qmodelingelementproperty_cast<QUmlInputPin *>(inputValue));
}

void QUmlOpaqueActionObject::addLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addLanguage(language);
}

void QUmlOpaqueActionObject::removeLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeLanguage(language);
}

void QUmlOpaqueActionObject::addOutputValue(QObject *outputValue)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->addOutputValue(qmodelingelementproperty_cast<QUmlOutputPin *>(outputValue));
}

void QUmlOpaqueActionObject::removeOutputValue(QObject *outputValue)
{
    qmodelingelementproperty_cast<QUmlOpaqueAction *>(this)->removeOutputValue(qmodelingelementproperty_cast<QUmlOutputPin *>(outputValue));
}


void QUmlOpaqueActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlOpaqueAction");
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodies"))));
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputValues"))));
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("languages"))));
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputValues"))));
}

void QUmlOpaqueActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, PropertyClassRole, QStringLiteral("QUmlOpaqueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, DocumentationRole, QStringLiteral("Specifies the action in one or more languages."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, bodies, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, PropertyClassRole, QStringLiteral("QUmlOpaqueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, DocumentationRole, QStringLiteral("Provides input to the action."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, inputValues, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, PropertyClassRole, QStringLiteral("QUmlOpaqueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, DocumentationRole, QStringLiteral("Languages the body strings use, in the same order as the body strings"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, languages, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, PropertyClassRole, QStringLiteral("QUmlOpaqueAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, DocumentationRole, QStringLiteral("Takes output from the action."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueAction, outputValues, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

