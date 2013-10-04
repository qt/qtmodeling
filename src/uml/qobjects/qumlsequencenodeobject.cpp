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
#include "qumlsequencenodeobject_p.h"

#include <QtUml/QUmlSequenceNode>
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
#include <QtUml/QUmlExecutableNode>
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

QUmlSequenceNodeObject::QUmlSequenceNodeObject(QUmlSequenceNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlSequenceNodeObject::~QUmlSequenceNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSequenceNodeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSequenceNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSequenceNodeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlSequenceNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->name();
}

QObject *QUmlSequenceNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlSequenceNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->namespace_()->asQObject();
}

QString QUmlSequenceNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlSequenceNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlSequenceNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlSequenceNodeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlSequenceNodeObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSequenceNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlSequenceNodeObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlSequenceNodeObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlSequenceNodeObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlSequenceNodeObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlSequenceNodeObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlSequenceNodeObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlSequenceNodeObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlSequenceNodeObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlSequenceNodeObject::containedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->containedEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::containedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->containedNode())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::subgroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->subgroup())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlSequenceNodeObject::superGroup() const
{
    if (!qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->superGroup())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->superGroup()->asQObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlSequenceNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlSequenceNodeObject::edge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->edge())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSequenceNodeObject::mustIsolate() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlSequenceNodeObject::structuredNodeInput() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->structuredNodeInput())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::structuredNodeOutput() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->structuredNodeOutput())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlSequenceNodeObject::variable() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->variable())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [SequenceNode]

const QList<QObject *> QUmlSequenceNodeObject::executableNode() const
{
    QList<QObject *> list;
    foreach (QUmlExecutableNode *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->executableNode())
        list.append(element->asQObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSequenceNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSequenceNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSequenceNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlSequenceNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlSequenceNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSequenceNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlSequenceNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlSequenceNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlSequenceNodeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlSequenceNodeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlSequenceNodeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlSequenceNodeObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSequenceNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSequenceNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSequenceNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSequenceNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSequenceNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSequenceNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSequenceNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSequenceNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setName(name);
}

void QUmlSequenceNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSequenceNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSequenceNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlSequenceNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlSequenceNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlSequenceNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlSequenceNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSequenceNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlSequenceNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlSequenceNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlSequenceNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSequenceNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlSequenceNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSequenceNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlSequenceNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSequenceNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlSequenceNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlSequenceNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSequenceNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlSequenceNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSequenceNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlSequenceNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlSequenceNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlSequenceNodeObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlSequenceNodeObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlSequenceNodeObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlSequenceNodeObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlSequenceNodeObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlSequenceNodeObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlSequenceNodeObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlSequenceNodeObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSequenceNodeObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlSequenceNodeObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSequenceNodeObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlSequenceNodeObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlSequenceNodeObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlSequenceNodeObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlSequenceNodeObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlSequenceNodeObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlSequenceNodeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlSequenceNodeObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlSequenceNodeObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlSequenceNodeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlSequenceNodeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlSequenceNodeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlSequenceNodeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlSequenceNodeObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlSequenceNodeObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlSequenceNodeObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlSequenceNodeObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlSequenceNodeObject::addContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlSequenceNodeObject::removeContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlSequenceNodeObject::addSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlSequenceNodeObject::removeSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlSequenceNodeObject::setSuperGroup(QObject *superGroup)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setSuperGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlSequenceNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlSequenceNodeObject::addEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlSequenceNodeObject::removeEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlSequenceNodeObject::setMustIsolate(bool mustIsolate)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->setMustIsolate(mustIsolate);
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->modifiedResettableProperties() << QStringLiteral("mustIsolate");
}

void QUmlSequenceNodeObject::unsetMustIsolate()
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("mustIsolate"));
}

void QUmlSequenceNodeObject::addStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlSequenceNodeObject::removeStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeStructuredNodeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlSequenceNodeObject::addStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addStructuredNodeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlSequenceNodeObject::removeStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeStructuredNodeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlSequenceNodeObject::addVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

void QUmlSequenceNodeObject::removeVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [SequenceNode]

void QUmlSequenceNodeObject::addExecutableNode(QObject *executableNode)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->addExecutableNode(qmodelingobjectproperty_cast<QUmlExecutableNode *>(executableNode));
}

void QUmlSequenceNodeObject::removeExecutableNode(QObject *executableNode)
{
    qmodelingobjectproperty_cast<QUmlSequenceNode *>(this)->removeExecutableNode(qmodelingobjectproperty_cast<QUmlExecutableNode *>(executableNode));
}

QT_END_NAMESPACE

