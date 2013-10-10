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
#include "private/qmodelingobject_p.h"

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

QUmlLoopNodeObject::QUmlLoopNodeObject(QUmlLoopNode *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlLoopNodeObject::~QUmlLoopNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlLoopNode *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLoopNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLoopNodeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLoopNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlLoopNodeObject::name() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->name();
}

QObject *QUmlLoopNodeObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlLoopNodeObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->namespace_()->asQModelingObject();
}

QString QUmlLoopNodeObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlLoopNodeObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlLoopNodeObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlLoopNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlLoopNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLoopNodeObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlLoopNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlLoopNodeObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlLoopNodeObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlLoopNodeObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlLoopNodeObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlLoopNodeObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlLoopNodeObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlLoopNodeObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlLoopNodeObject::containedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->containedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::containedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->containedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::subgroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->subgroups())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLoopNodeObject::superGroup() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->superGroup())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->superGroup()->asQModelingObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlLoopNodeObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlLoopNodeObject::edges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->edges())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLoopNodeObject::mustIsolate() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlLoopNodeObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->nodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::variables() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->variables())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [LoopNode]

const QList<QObject *> QUmlLoopNodeObject::bodyOutputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->bodyOutputs())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlLoopNodeObject::bodyParts() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->bodyParts())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLoopNodeObject::decider() const
{
    if (!qmodelingelementproperty_cast<QUmlLoopNode *>(this)->decider())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->decider()->asQModelingObject();
}

bool QUmlLoopNodeObject::isTestedFirst() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->isTestedFirst();
}

const QList<QObject *> QUmlLoopNodeObject::loopVariables() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->loopVariables())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlLoopNodeObject::loopVariableInputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->loopVariableInputs())
        list.append(element->asQModelingObject());
    return list;
}

const QList<QObject *> QUmlLoopNodeObject::results() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->results())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlLoopNodeObject::setupParts() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setupParts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLoopNodeObject::tests() const
{
    QSet<QObject *> set;
    foreach (QUmlExecutableNode *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->tests())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLoopNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLoopNodeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLoopNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlLoopNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLoopNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLoopNodeObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlLoopNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlLoopNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlLoopNodeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlLoopNodeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlLoopNodeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlLoopNode *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLoopNodeObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlLoopNode *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLoopNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLoopNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLoopNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLoopNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLoopNodeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLoopNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLoopNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLoopNodeObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setName(name);
}

void QUmlLoopNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLoopNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLoopNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlLoopNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlLoopNodeObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setLeaf(isLeaf);
}

void QUmlLoopNodeObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlLoopNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlLoopNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlLoopNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlLoopNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlLoopNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlLoopNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlLoopNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlLoopNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlLoopNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlLoopNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlLoopNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlLoopNodeObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlLoopNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlLoopNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlLoopNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlLoopNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlLoopNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlLoopNodeObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlLoopNodeObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlLoopNodeObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlLoopNodeObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlLoopNodeObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlLoopNodeObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlLoopNodeObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlLoopNodeObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlLoopNodeObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlLoopNodeObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlLoopNodeObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlLoopNodeObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlLoopNodeObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlLoopNodeObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlLoopNodeObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlLoopNodeObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlLoopNodeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlLoopNodeObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlLoopNodeObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlLoopNodeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlLoopNodeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlLoopNodeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlLoopNodeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlLoopNodeObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlLoopNodeObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlLoopNodeObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlLoopNodeObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlLoopNodeObject::addContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlLoopNodeObject::removeContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlLoopNodeObject::addSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlLoopNodeObject::removeSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlLoopNodeObject::setSuperGroup(QObject *superGroup)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setSuperGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlLoopNodeObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlLoopNodeObject::addEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlLoopNodeObject::removeEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlLoopNodeObject::setMustIsolate(bool mustIsolate)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setMustIsolate(mustIsolate);
}

void QUmlLoopNodeObject::unsetMustIsolate()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("mustIsolate"));
}

void QUmlLoopNodeObject::addNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlLoopNodeObject::removeNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlLoopNodeObject::addVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

void QUmlLoopNodeObject::removeVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [LoopNode]

void QUmlLoopNodeObject::addBodyOutput(QObject *bodyOutput)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addBodyOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(bodyOutput));
}

void QUmlLoopNodeObject::removeBodyOutput(QObject *bodyOutput)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeBodyOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(bodyOutput));
}

void QUmlLoopNodeObject::addBodyPart(QObject *bodyPart)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addBodyPart(qmodelingelementproperty_cast<QUmlExecutableNode *>(bodyPart));
}

void QUmlLoopNodeObject::removeBodyPart(QObject *bodyPart)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeBodyPart(qmodelingelementproperty_cast<QUmlExecutableNode *>(bodyPart));
}

void QUmlLoopNodeObject::setDecider(QObject *decider)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setDecider(qmodelingelementproperty_cast<QUmlOutputPin *>(decider));
}

void QUmlLoopNodeObject::setTestedFirst(bool isTestedFirst)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->setTestedFirst(isTestedFirst);
}

void QUmlLoopNodeObject::unsetTestedFirst()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("testedFirst"));
}

void QUmlLoopNodeObject::addLoopVariable(QObject *loopVariable)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addLoopVariable(qmodelingelementproperty_cast<QUmlOutputPin *>(loopVariable));
}

void QUmlLoopNodeObject::removeLoopVariable(QObject *loopVariable)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeLoopVariable(qmodelingelementproperty_cast<QUmlOutputPin *>(loopVariable));
}

void QUmlLoopNodeObject::addLoopVariableInput(QObject *loopVariableInput)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addLoopVariableInput(qmodelingelementproperty_cast<QUmlInputPin *>(loopVariableInput));
}

void QUmlLoopNodeObject::removeLoopVariableInput(QObject *loopVariableInput)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeLoopVariableInput(qmodelingelementproperty_cast<QUmlInputPin *>(loopVariableInput));
}

void QUmlLoopNodeObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlLoopNodeObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlLoopNodeObject::addSetupPart(QObject *setupPart)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addSetupPart(qmodelingelementproperty_cast<QUmlExecutableNode *>(setupPart));
}

void QUmlLoopNodeObject::removeSetupPart(QObject *setupPart)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeSetupPart(qmodelingelementproperty_cast<QUmlExecutableNode *>(setupPart));
}

void QUmlLoopNodeObject::addTest(QObject *test)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->addTest(qmodelingelementproperty_cast<QUmlExecutableNode *>(test));
}

void QUmlLoopNodeObject::removeTest(QObject *test)
{
    qmodelingelementproperty_cast<QUmlLoopNode *>(this)->removeTest(qmodelingelementproperty_cast<QUmlExecutableNode *>(test));
}


void QUmlLoopNodeObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlActivityGroup");
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedEdges"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("containedNodes"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subgroups"))));
    d->groupProperties.insert(QStringLiteral("QUmlActivityGroup"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("superGroup"))));

    d->propertyGroups << QStringLiteral("QUmlStructuredActivityNode");
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activity"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("edges"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("mustIsolate"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nodes"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("variables"))));

    d->propertyGroups << QStringLiteral("QUmlLoopNode");
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodyOutputs"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodyParts"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("decider"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isTestedFirst"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("loopVariables"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("loopVariableInputs"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("results"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("setupParts"))));
    d->groupProperties.insert(QStringLiteral("QUmlLoopNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("tests"))));
}

void QUmlLoopNodeObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, DocumentationRole, QStringLiteral("A list of output pins within the body fragment the values of which are moved to the loop variable pins after completion of execution of the body, before the next iteration of the loop begins or before the loop exits."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyOutputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, DocumentationRole, QStringLiteral("The set of nodes and edges that perform the repetitive computations of the loop. The body section is executed as long as the test section produces a true value."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, bodyParts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, DocumentationRole, QStringLiteral("An output pin within the test fragment the value of which is examined after execution of the test to determine whether to execute the loop body."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, decider, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, DocumentationRole, QStringLiteral("If true, the test is performed before the first execution of the body. If false, the body is executed once before the test is performed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, isTestedFirst, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, DocumentationRole, QStringLiteral("A list of output pins that hold the values of the loop variables during an execution of the loop. When the test fails, the values are movied to the result pins of the loop."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariables, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, DocumentationRole, QStringLiteral("A list of values that are moved into the loop variable pins before the first iteration of the loop."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, RedefinedPropertiesRole, QStringLiteral("StructuredActivityNode-structuredNodeInput"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, loopVariableInputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, DocumentationRole, QStringLiteral("A list of output pins that constitute the data flow output of the entire loop."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, RedefinedPropertiesRole, QStringLiteral("StructuredActivityNode-structuredNodeOutput"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, results, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, DocumentationRole, QStringLiteral("The set of nodes and edges that initialize values or perform other setup computations for the loop."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, setupParts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, PropertyClassRole, QStringLiteral("QUmlLoopNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, DocumentationRole, QStringLiteral("The set of nodes, edges, and designated value that compute a Boolean value to determine if another execution of the body will be performed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLoopNode, tests, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

