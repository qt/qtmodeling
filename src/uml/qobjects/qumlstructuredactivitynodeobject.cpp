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
#include "qumlstructuredactivitynodeobject_p.h"

#include <QtUml/QUmlStructuredActivityNode>
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
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlExceptionHandler>
#include <QtUml/QUmlInputPin>
#include <QtUml/QUmlInterruptibleActivityRegion>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOutputPin>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlStructuredActivityNodeObject::QUmlStructuredActivityNodeObject(QUmlStructuredActivityNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlStructuredActivityNodeObject::~QUmlStructuredActivityNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStructuredActivityNodeObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStructuredActivityNodeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlStructuredActivityNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->name();
}

QObject *QUmlStructuredActivityNodeObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlStructuredActivityNodeObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->namespace_()->asQObject();
}

QString QUmlStructuredActivityNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStructuredActivityNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStructuredActivityNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlStructuredActivityNodeObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStructuredActivityNodeObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlStructuredActivityNodeObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlStructuredActivityNodeObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlStructuredActivityNodeObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlStructuredActivityNodeObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlStructuredActivityNodeObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlStructuredActivityNodeObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlStructuredActivityNodeObject::containedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->containedEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::containedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->containedNode())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::subgroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->subgroup())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStructuredActivityNodeObject::superGroup() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->superGroup()->asQObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlStructuredActivityNodeObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::edge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->edge())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::mustIsolate() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::node() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->node())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::structuredNodeInput() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->structuredNodeInput())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::structuredNodeOutput() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->structuredNodeOutput())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::variable() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->variable())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStructuredActivityNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStructuredActivityNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStructuredActivityNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStructuredActivityNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlStructuredActivityNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStructuredActivityNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlStructuredActivityNodeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlStructuredActivityNodeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlStructuredActivityNodeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStructuredActivityNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStructuredActivityNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStructuredActivityNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStructuredActivityNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStructuredActivityNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStructuredActivityNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStructuredActivityNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStructuredActivityNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setName(name);
}
    
void QUmlStructuredActivityNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStructuredActivityNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStructuredActivityNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlStructuredActivityNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStructuredActivityNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setLeaf(isLeaf);
}
    
void QUmlStructuredActivityNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStructuredActivityNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStructuredActivityNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStructuredActivityNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlStructuredActivityNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStructuredActivityNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStructuredActivityNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStructuredActivityNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStructuredActivityNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStructuredActivityNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStructuredActivityNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlStructuredActivityNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStructuredActivityNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStructuredActivityNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStructuredActivityNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStructuredActivityNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlStructuredActivityNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlStructuredActivityNodeObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlStructuredActivityNodeObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlStructuredActivityNodeObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlStructuredActivityNodeObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlStructuredActivityNodeObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlStructuredActivityNodeObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlStructuredActivityNodeObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStructuredActivityNodeObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStructuredActivityNodeObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStructuredActivityNodeObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStructuredActivityNodeObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlStructuredActivityNodeObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlStructuredActivityNodeObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStructuredActivityNodeObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStructuredActivityNodeObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStructuredActivityNodeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStructuredActivityNodeObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStructuredActivityNodeObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStructuredActivityNodeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStructuredActivityNodeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStructuredActivityNodeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStructuredActivityNodeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStructuredActivityNodeObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlStructuredActivityNodeObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlStructuredActivityNodeObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlStructuredActivityNodeObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlStructuredActivityNodeObject::addContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlStructuredActivityNodeObject::removeContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlStructuredActivityNodeObject::addSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlStructuredActivityNodeObject::removeSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlStructuredActivityNodeObject::setSuperGroup(QObject *superGroup)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setSuperGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlStructuredActivityNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlStructuredActivityNodeObject::addEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlStructuredActivityNodeObject::removeEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlStructuredActivityNodeObject::setMustIsolate(bool mustIsolate)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->setMustIsolate(mustIsolate);
}
    
void QUmlStructuredActivityNodeObject::addNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlStructuredActivityNodeObject::removeNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlStructuredActivityNodeObject::addStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlStructuredActivityNodeObject::removeStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlStructuredActivityNodeObject::addStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addStructuredNodeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlStructuredActivityNodeObject::removeStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeStructuredNodeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlStructuredActivityNodeObject::addVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->addVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

void QUmlStructuredActivityNodeObject::removeVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(this)->removeVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

QT_END_NAMESPACE
