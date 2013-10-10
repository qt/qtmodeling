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
#include "qumlvaluespecificationactionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlValueSpecificationAction>
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
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlValueSpecificationActionObject::QUmlValueSpecificationActionObject(QUmlValueSpecificationAction *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlValueSpecificationActionObject::~QUmlValueSpecificationActionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlValueSpecificationActionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlValueSpecificationActionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlValueSpecificationActionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlValueSpecificationActionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->name();
}

QObject *QUmlValueSpecificationActionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlValueSpecificationActionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->namespace_()->asQModelingObject();
}

QString QUmlValueSpecificationActionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlValueSpecificationActionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlValueSpecificationActionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->isLeaf();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

QObject *QUmlValueSpecificationActionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlValueSpecificationActionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlValueSpecificationActionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlValueSpecificationActionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlValueSpecificationActionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlValueSpecificationActionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlValueSpecificationActionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlValueSpecificationActionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlValueSpecificationActionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [ValueSpecificationAction]

QObject *QUmlValueSpecificationActionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->result()->asQModelingObject();
}

QObject *QUmlValueSpecificationActionObject::value() const
{
    if (!qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->value())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->value()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlValueSpecificationActionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlValueSpecificationActionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlValueSpecificationActionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlValueSpecificationActionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlValueSpecificationActionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlValueSpecificationActionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlValueSpecificationActionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlValueSpecificationActionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlValueSpecificationActionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValueSpecificationActionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlValueSpecificationActionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValueSpecificationActionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlValueSpecificationActionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlValueSpecificationActionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValueSpecificationActionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlValueSpecificationActionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setName(name);
}

void QUmlValueSpecificationActionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlValueSpecificationActionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlValueSpecificationActionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setQualifiedName(qualifiedName);
}

void QUmlValueSpecificationActionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlValueSpecificationActionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setLeaf(isLeaf);
}

void QUmlValueSpecificationActionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlValueSpecificationActionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValueSpecificationActionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlValueSpecificationActionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlValueSpecificationActionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlValueSpecificationActionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlValueSpecificationActionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValueSpecificationActionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlValueSpecificationActionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValueSpecificationActionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlValueSpecificationActionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValueSpecificationActionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlValueSpecificationActionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlValueSpecificationActionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValueSpecificationActionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlValueSpecificationActionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValueSpecificationActionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlValueSpecificationActionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlValueSpecificationActionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlValueSpecificationActionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlValueSpecificationActionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlValueSpecificationActionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlValueSpecificationActionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlValueSpecificationActionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlValueSpecificationActionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlValueSpecificationActionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlValueSpecificationActionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlValueSpecificationActionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlValueSpecificationActionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlValueSpecificationActionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlValueSpecificationActionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlValueSpecificationActionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [ValueSpecificationAction]

void QUmlValueSpecificationActionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlValueSpecificationActionObject::setValue(QObject *value)
{
    qmodelingelementproperty_cast<QUmlValueSpecificationAction *>(this)->setValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(value));
}


void QUmlValueSpecificationActionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlValueSpecificationAction");
    d->groupProperties.insert(QStringLiteral("QUmlValueSpecificationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
    d->groupProperties.insert(QStringLiteral("QUmlValueSpecificationAction"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QUmlValueSpecificationActionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, PropertyClassRole, QStringLiteral("QUmlValueSpecificationAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, DocumentationRole, QStringLiteral("Gives the output pin on which the result is put."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, result, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, PropertyClassRole, QStringLiteral("QUmlValueSpecificationAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, DocumentationRole, QStringLiteral("Value specification to be evaluated."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlValueSpecificationAction, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

