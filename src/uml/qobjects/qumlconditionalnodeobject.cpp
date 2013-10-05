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
#include "qumlconditionalnodeobject_p.h"

#include <QtUml/QUmlConditionalNode>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlActivityEdge>
#include <QtUml/QUmlActivityGroup>
#include <QtUml/QUmlActivityNode>
#include <QtUml/QUmlActivityPartition>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlClause>
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
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlVariable>

QT_BEGIN_NAMESPACE

QUmlConditionalNodeObject::QUmlConditionalNodeObject(QUmlConditionalNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlConditionalNodeObject::~QUmlConditionalNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConditionalNodeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConditionalNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConditionalNodeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlConditionalNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->name();
}

QObject *QUmlConditionalNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlConditionalNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->namespace_()->asQObject();
}

QString QUmlConditionalNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConditionalNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlConditionalNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlConditionalNodeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlConditionalNodeObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConditionalNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlConditionalNodeObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlConditionalNodeObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlConditionalNodeObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlConditionalNodeObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlConditionalNodeObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlConditionalNodeObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlConditionalNodeObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlConditionalNodeObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlConditionalNodeObject::containedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->containedEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::containedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->containedNode())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::subgroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->subgroup())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlConditionalNodeObject::superGroup() const
{
    if (!qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->superGroup())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->superGroup()->asQObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlConditionalNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlConditionalNodeObject::edge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->edge())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConditionalNodeObject::mustIsolate() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlConditionalNodeObject::node() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->node())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::structuredNodeInput() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->structuredNodeInput())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::variable() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->variable())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ConditionalNode]

const QSet<QObject *> QUmlConditionalNodeObject::clause() const
{
    QSet<QObject *> set;
    foreach (QUmlClause *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->clause())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConditionalNodeObject::isAssured() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->isAssured();
}

bool QUmlConditionalNodeObject::isDeterminate() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->isDeterminate();
}

const QList<QObject *> QUmlConditionalNodeObject::result() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->result())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConditionalNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConditionalNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConditionalNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlConditionalNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlConditionalNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConditionalNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlConditionalNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlConditionalNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlConditionalNodeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlConditionalNodeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlConditionalNodeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlConditionalNodeObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConditionalNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConditionalNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConditionalNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConditionalNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConditionalNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConditionalNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConditionalNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConditionalNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setName(name);
}

void QUmlConditionalNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConditionalNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConditionalNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlConditionalNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlConditionalNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setLeaf(isLeaf);
}

void QUmlConditionalNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlConditionalNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConditionalNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConditionalNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlConditionalNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlConditionalNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlConditionalNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlConditionalNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlConditionalNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlConditionalNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlConditionalNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlConditionalNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlConditionalNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlConditionalNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlConditionalNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlConditionalNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlConditionalNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlConditionalNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlConditionalNodeObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlConditionalNodeObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlConditionalNodeObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlConditionalNodeObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlConditionalNodeObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlConditionalNodeObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlConditionalNodeObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlConditionalNodeObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlConditionalNodeObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlConditionalNodeObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlConditionalNodeObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlConditionalNodeObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlConditionalNodeObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlConditionalNodeObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlConditionalNodeObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlConditionalNodeObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlConditionalNodeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlConditionalNodeObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlConditionalNodeObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlConditionalNodeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlConditionalNodeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlConditionalNodeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlConditionalNodeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlConditionalNodeObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlConditionalNodeObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlConditionalNodeObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlConditionalNodeObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlConditionalNodeObject::addContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlConditionalNodeObject::removeContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlConditionalNodeObject::addSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlConditionalNodeObject::removeSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlConditionalNodeObject::setSuperGroup(QObject *superGroup)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setSuperGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlConditionalNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlConditionalNodeObject::addEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlConditionalNodeObject::removeEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlConditionalNodeObject::setMustIsolate(bool mustIsolate)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setMustIsolate(mustIsolate);
}

void QUmlConditionalNodeObject::unsetMustIsolate()
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("mustIsolate"));
}

void QUmlConditionalNodeObject::addNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlConditionalNodeObject::removeNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlConditionalNodeObject::addStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlConditionalNodeObject::removeStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlConditionalNodeObject::addVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

void QUmlConditionalNodeObject::removeVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [ConditionalNode]

void QUmlConditionalNodeObject::addClause(QObject *clause)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addClause(qmodelingobjectproperty_cast<QUmlClause *>(clause));
}

void QUmlConditionalNodeObject::removeClause(QObject *clause)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeClause(qmodelingobjectproperty_cast<QUmlClause *>(clause));
}

void QUmlConditionalNodeObject::setAssured(bool isAssured)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setAssured(isAssured);
}

void QUmlConditionalNodeObject::unsetAssured()
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("assured"));
}

void QUmlConditionalNodeObject::setDeterminate(bool isDeterminate)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->setDeterminate(isDeterminate);
}

void QUmlConditionalNodeObject::unsetDeterminate()
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("determinate"));
}

void QUmlConditionalNodeObject::addResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->addResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlConditionalNodeObject::removeResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlConditionalNode *>(this)->removeResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

QT_END_NAMESPACE

