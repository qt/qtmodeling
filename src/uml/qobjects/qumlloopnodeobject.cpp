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
#include "qumlloopnodeobject_p.h"

#include <QtUml/QUmlLoopNode>
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

QUmlLoopNodeObject::QUmlLoopNodeObject(QUmlLoopNode *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlLoopNodeObject::~QUmlLoopNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLoopNodeObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLoopNodeObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLoopNodeObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlLoopNodeObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->name();
}

QObject *QUmlLoopNodeObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->nameExpression()->asQObject();
}

QObject *QUmlLoopNodeObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->namespace_()->asQObject();
}

QString QUmlLoopNodeObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlLoopNodeObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlLoopNodeObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlLoopNodeObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlLoopNodeObject::inGroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->inGroup())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::inInterruptibleRegion() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->inInterruptibleRegion())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::inPartition() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->inPartition())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLoopNodeObject::inStructuredNode() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->inStructuredNode()->asQObject();
}

const QSet<QObject *> QUmlLoopNodeObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::redefinedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->redefinedNode())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlLoopNodeObject::handler() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->handler())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlLoopNodeObject::context() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->context())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->context()->asQObject();
}

const QList<QObject *> QUmlLoopNodeObject::input() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->input())
        list.append(element->asQObject());
    return list;
}

bool QUmlLoopNodeObject::isLocallyReentrant() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlLoopNodeObject::localPostcondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->localPostcondition())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::localPrecondition() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->localPrecondition())
        set.insert(element->asQObject());
    return set;
}

const QList<QObject *> QUmlLoopNodeObject::output() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->output())
        list.append(element->asQObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlLoopNodeObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlLoopNodeObject::containedEdge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->containedEdge())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::containedNode() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->containedNode())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::subgroup() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->subgroup())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLoopNodeObject::superGroup() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->superGroup())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->superGroup()->asQObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlLoopNodeObject::activity() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->activity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->activity()->asQObject();
}

const QSet<QObject *> QUmlLoopNodeObject::edge() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->edge())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLoopNodeObject::mustIsolate() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlLoopNodeObject::node() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->node())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::variable() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->variable())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [LoopNode]

const QList<QObject *> QUmlLoopNodeObject::bodyOutput() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->bodyOutput())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlLoopNodeObject::bodyPart() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->bodyPart())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlLoopNodeObject::decider() const
{
    if (!qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->decider())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->decider()->asQObject();
}

bool QUmlLoopNodeObject::isTestedFirst() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->isTestedFirst();
}

const QList<QObject *> QUmlLoopNodeObject::loopVariable() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->loopVariable())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlLoopNodeObject::loopVariableInput() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->loopVariableInput())
        list.append(element->asQObject());
    return list;
}

const QList<QObject *> QUmlLoopNodeObject::result() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->result())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlLoopNodeObject::setupPart() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setupPart())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::test() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->test())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLoopNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLoopNodeObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLoopNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlLoopNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlLoopNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLoopNodeObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlLoopNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlLoopNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlLoopNodeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlLoopNodeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlLoopNodeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlLoopNodeObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLoopNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLoopNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLoopNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLoopNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLoopNodeObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLoopNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLoopNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLoopNodeObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setName(name);
}

void QUmlLoopNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLoopNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLoopNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlLoopNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlLoopNodeObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlLoopNodeObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlLoopNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlLoopNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlLoopNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlLoopNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlLoopNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlLoopNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeInGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlLoopNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlLoopNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeInInterruptibleRegion(qmodelingobjectproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlLoopNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlLoopNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeInPartition(qmodelingobjectproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlLoopNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setInStructuredNode(qmodelingobjectproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlLoopNodeObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlLoopNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlLoopNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlLoopNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlLoopNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlLoopNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeRedefinedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlLoopNodeObject::addHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlLoopNodeObject::removeHandler(QObject *handler)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeHandler(qmodelingobjectproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlLoopNodeObject::setContext(QObject *context)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setContext(qmodelingobjectproperty_cast<QUmlClassifier *>(context));
}

void QUmlLoopNodeObject::addInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlLoopNodeObject::removeInput(QObject *input)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeInput(qmodelingobjectproperty_cast<QUmlInputPin *>(input));
}

void QUmlLoopNodeObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setLocallyReentrant(isLocallyReentrant);
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties() << QStringLiteral("locallyReentrant");
}

void QUmlLoopNodeObject::unsetLocallyReentrant()
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlLoopNodeObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlLoopNodeObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeLocalPostcondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlLoopNodeObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlLoopNodeObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeLocalPrecondition(qmodelingobjectproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlLoopNodeObject::addOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

void QUmlLoopNodeObject::removeOutput(QObject *output)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlLoopNodeObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlLoopNodeObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlLoopNodeObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlLoopNodeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlLoopNodeObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlLoopNodeObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlLoopNodeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlLoopNodeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlLoopNodeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlLoopNodeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlLoopNodeObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlLoopNodeObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlLoopNodeObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlLoopNodeObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeContainedEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlLoopNodeObject::addContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlLoopNodeObject::removeContainedNode(QObject *containedNode)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeContainedNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlLoopNodeObject::addSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlLoopNodeObject::removeSubgroup(QObject *subgroup)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeSubgroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlLoopNodeObject::setSuperGroup(QObject *superGroup)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setSuperGroup(qmodelingobjectproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlLoopNodeObject::setActivity(QObject *activity)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setActivity(qmodelingobjectproperty_cast<QUmlActivity *>(activity));
}

void QUmlLoopNodeObject::addEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlLoopNodeObject::removeEdge(QObject *edge)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeEdge(qmodelingobjectproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlLoopNodeObject::setMustIsolate(bool mustIsolate)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setMustIsolate(mustIsolate);
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties() << QStringLiteral("mustIsolate");
}

void QUmlLoopNodeObject::unsetMustIsolate()
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("mustIsolate"));
}

void QUmlLoopNodeObject::addNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlLoopNodeObject::removeNode(QObject *node)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeNode(qmodelingobjectproperty_cast<QUmlActivityNode *>(node));
}

void QUmlLoopNodeObject::addVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

void QUmlLoopNodeObject::removeVariable(QObject *variable)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeVariable(qmodelingobjectproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [LoopNode]

void QUmlLoopNodeObject::addBodyOutput(QObject *bodyOutput)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addBodyOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(bodyOutput));
}

void QUmlLoopNodeObject::removeBodyOutput(QObject *bodyOutput)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeBodyOutput(qmodelingobjectproperty_cast<QUmlOutputPin *>(bodyOutput));
}

void QUmlLoopNodeObject::addBodyPart(QObject *bodyPart)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addBodyPart(qmodelingobjectproperty_cast<QUmlExecutableNode *>(bodyPart));
}

void QUmlLoopNodeObject::removeBodyPart(QObject *bodyPart)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeBodyPart(qmodelingobjectproperty_cast<QUmlExecutableNode *>(bodyPart));
}

void QUmlLoopNodeObject::setDecider(QObject *decider)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setDecider(qmodelingobjectproperty_cast<QUmlOutputPin *>(decider));
}

void QUmlLoopNodeObject::setTestedFirst(bool isTestedFirst)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->setTestedFirst(isTestedFirst);
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties() << QStringLiteral("testedFirst");
}

void QUmlLoopNodeObject::unsetTestedFirst()
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("testedFirst"));
}

void QUmlLoopNodeObject::addLoopVariable(QObject *loopVariable)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addLoopVariable(qmodelingobjectproperty_cast<QUmlOutputPin *>(loopVariable));
}

void QUmlLoopNodeObject::removeLoopVariable(QObject *loopVariable)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeLoopVariable(qmodelingobjectproperty_cast<QUmlOutputPin *>(loopVariable));
}

void QUmlLoopNodeObject::addLoopVariableInput(QObject *loopVariableInput)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addLoopVariableInput(qmodelingobjectproperty_cast<QUmlInputPin *>(loopVariableInput));
}

void QUmlLoopNodeObject::removeLoopVariableInput(QObject *loopVariableInput)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeLoopVariableInput(qmodelingobjectproperty_cast<QUmlInputPin *>(loopVariableInput));
}

void QUmlLoopNodeObject::addResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlLoopNodeObject::removeResult(QObject *result)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeResult(qmodelingobjectproperty_cast<QUmlOutputPin *>(result));
}

void QUmlLoopNodeObject::addSetupPart(QObject *setupPart)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addSetupPart(qmodelingobjectproperty_cast<QUmlExecutableNode *>(setupPart));
}

void QUmlLoopNodeObject::removeSetupPart(QObject *setupPart)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeSetupPart(qmodelingobjectproperty_cast<QUmlExecutableNode *>(setupPart));
}

void QUmlLoopNodeObject::addTest(QObject *test)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->addTest(qmodelingobjectproperty_cast<QUmlExecutableNode *>(test));
}

void QUmlLoopNodeObject::removeTest(QObject *test)
{
    qmodelingobjectproperty_cast<QUmlLoopNode *>(this)->removeTest(qmodelingobjectproperty_cast<QUmlExecutableNode *>(test));
}

QT_END_NAMESPACE

