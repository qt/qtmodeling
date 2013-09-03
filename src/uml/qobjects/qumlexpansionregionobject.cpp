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
#include "qumlexpansionregionobject_p.h"

#include <QtUml/QUmlExpansionRegion>
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
#include <QtUml/QUmlExpansionNode>
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
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlExpansionRegionObject::QUmlExpansionRegionObject(QUmlExpansionRegion *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlExpansionRegionObject::~QUmlExpansionRegionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExpansionRegionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExpansionRegionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExpansionRegionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExpansionRegionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->name();
}

QObject *QUmlExpansionRegionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExpansionRegionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->namespace_()->asQObject();
}

QString QUmlExpansionRegionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExpansionRegionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExpansionRegionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExpansionRegionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlExpansionRegionObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExpansionRegionObject::inStructuredNode() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlExpansionRegionObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlExpansionRegionObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlExpansionRegionObject::context() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlExpansionRegionObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlExpansionRegionObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlExpansionRegionObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlExpansionRegionObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlExpansionRegionObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlExpansionRegionObject::containedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->containedEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::containedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->containedNode())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::subgroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->subgroup())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExpansionRegionObject::superGroup() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->superGroup()->asQObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlExpansionRegionObject::activity() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlExpansionRegionObject::edge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->edge())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpansionRegionObject::mustIsolate() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlExpansionRegionObject::node() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->node())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::structuredNodeInput() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->structuredNodeInput())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::structuredNodeOutput() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->structuredNodeOutput())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::variable() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->variable())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExpansionRegion]

const QSet<QObject *> QUmlExpansionRegionObject::inputElement() const
{
    QSet<QObject *> set;
    foreach (QUmlExpansionNode *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->inputElement())
        set.insert(element->asQObject());
    return set;
}

QtUml::ExpansionKind QUmlExpansionRegionObject::mode() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->mode();
}

const QSet<QObject *> QUmlExpansionRegionObject::outputElement() const
{
    QSet<QObject *> set;
    foreach (QUmlExpansionNode *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->outputElement())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExpansionRegionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpansionRegionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExpansionRegionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExpansionRegionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpansionRegionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExpansionRegionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlExpansionRegionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExpansionRegionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlExpansionRegionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlExpansionRegionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlExpansionRegionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlExpansionRegionObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExpansionRegionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionRegionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionRegionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionRegionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionRegionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExpansionRegionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionRegionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionRegionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setName(name);
}
    
void QUmlExpansionRegionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExpansionRegionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExpansionRegionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlExpansionRegionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExpansionRegionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setLeaf(isLeaf);
}
    
void QUmlExpansionRegionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionRegionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionRegionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExpansionRegionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlExpansionRegionObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionRegionObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionRegionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionRegionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionRegionObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionRegionObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionRegionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlExpansionRegionObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionRegionObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionRegionObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionRegionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionRegionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlExpansionRegionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlExpansionRegionObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlExpansionRegionObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlExpansionRegionObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlExpansionRegionObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlExpansionRegionObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlExpansionRegionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setLocallyReentrant(isLocallyReentrant);
}
    
void QUmlExpansionRegionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlExpansionRegionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlExpansionRegionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlExpansionRegionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlExpansionRegionObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlExpansionRegionObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlExpansionRegionObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExpansionRegionObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExpansionRegionObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExpansionRegionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExpansionRegionObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExpansionRegionObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExpansionRegionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExpansionRegionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExpansionRegionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExpansionRegionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExpansionRegionObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlExpansionRegionObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlExpansionRegionObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlExpansionRegionObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlExpansionRegionObject::addContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlExpansionRegionObject::removeContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlExpansionRegionObject::addSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlExpansionRegionObject::removeSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlExpansionRegionObject::setSuperGroup(QObject *superGroup)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setSuperGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlExpansionRegionObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlExpansionRegionObject::addEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlExpansionRegionObject::removeEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlExpansionRegionObject::setMustIsolate(bool mustIsolate)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setMustIsolate(mustIsolate);
}
    
void QUmlExpansionRegionObject::addNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlExpansionRegionObject::removeNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlExpansionRegionObject::addStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlExpansionRegionObject::removeStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlExpansionRegionObject::addStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addStructuredNodeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlExpansionRegionObject::removeStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeStructuredNodeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlExpansionRegionObject::addVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

void QUmlExpansionRegionObject::removeVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [ExpansionRegion]

void QUmlExpansionRegionObject::addInputElement(QObject *inputElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addInputElement(qmodelingobjectproperty_cast<QUmlExpansionNode *>(inputElement));
}

void QUmlExpansionRegionObject::removeInputElement(QObject *inputElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeInputElement(qmodelingobjectproperty_cast<QUmlExpansionNode *>(inputElement));
}

void QUmlExpansionRegionObject::setMode(QtUml::ExpansionKind mode)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->setMode(mode);
}
    
void QUmlExpansionRegionObject::addOutputElement(QObject *outputElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->addOutputElement(qmodelingobjectproperty_cast<QUmlExpansionNode *>(outputElement));
}

void QUmlExpansionRegionObject::removeOutputElement(QObject *outputElement)
{
    qmodelingobjectproperty_cast<QUmlExpansionRegion *>(this)->removeOutputElement(qmodelingobjectproperty_cast<QUmlExpansionNode *>(outputElement));
}

QT_END_NAMESPACE

