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
#include "private/qmodelingobject_p.h"

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

QUmlConditionalNodeObject::QUmlConditionalNodeObject(QUmlConditionalNode *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlConditionalNodeObject::~QUmlConditionalNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConditionalNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConditionalNodeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConditionalNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlConditionalNodeObject::name() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->name();
}

QObject *QUmlConditionalNodeObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlConditionalNodeObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->namespace_()->asQModelingObject();
}

QString QUmlConditionalNodeObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConditionalNodeObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlConditionalNodeObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlConditionalNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlConditionalNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConditionalNodeObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlConditionalNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlConditionalNodeObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlConditionalNodeObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlConditionalNodeObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlConditionalNodeObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlConditionalNodeObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlConditionalNodeObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlConditionalNodeObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlConditionalNodeObject::containedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->containedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::containedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->containedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::subgroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->subgroups())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConditionalNodeObject::superGroup() const
{
    if (!qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->superGroup())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->superGroup()->asQModelingObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlConditionalNodeObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlConditionalNodeObject::edges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->edges())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConditionalNodeObject::mustIsolate() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlConditionalNodeObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->nodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::structuredNodeInputs() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->structuredNodeInputs())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConditionalNodeObject::variables() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->variables())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ConditionalNode]

const QSet<QObject *> QUmlConditionalNodeObject::clauses() const
{
    QSet<QObject *> set;
    foreach (QUmlClause *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->clauses())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConditionalNodeObject::isAssured() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->isAssured();
}

bool QUmlConditionalNodeObject::isDeterminate() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->isDeterminate();
}

const QList<QObject *> QUmlConditionalNodeObject::results() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->results())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConditionalNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConditionalNodeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConditionalNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlConditionalNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConditionalNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConditionalNodeObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlConditionalNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlConditionalNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlConditionalNodeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlConditionalNodeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlConditionalNodeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConditionalNodeObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConditionalNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConditionalNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConditionalNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConditionalNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConditionalNodeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConditionalNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConditionalNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConditionalNodeObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setName(name);
}

void QUmlConditionalNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConditionalNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConditionalNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlConditionalNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlConditionalNodeObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setLeaf(isLeaf);
}

void QUmlConditionalNodeObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlConditionalNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConditionalNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlConditionalNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlConditionalNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlConditionalNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlConditionalNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlConditionalNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlConditionalNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlConditionalNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlConditionalNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlConditionalNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlConditionalNodeObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlConditionalNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlConditionalNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlConditionalNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlConditionalNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlConditionalNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlConditionalNodeObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlConditionalNodeObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlConditionalNodeObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlConditionalNodeObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlConditionalNodeObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlConditionalNodeObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlConditionalNodeObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlConditionalNodeObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlConditionalNodeObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlConditionalNodeObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlConditionalNodeObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlConditionalNodeObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlConditionalNodeObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlConditionalNodeObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlConditionalNodeObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlConditionalNodeObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlConditionalNodeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlConditionalNodeObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlConditionalNodeObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlConditionalNodeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlConditionalNodeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlConditionalNodeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlConditionalNodeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlConditionalNodeObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlConditionalNodeObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlConditionalNodeObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlConditionalNodeObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlConditionalNodeObject::addContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlConditionalNodeObject::removeContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlConditionalNodeObject::addSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlConditionalNodeObject::removeSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlConditionalNodeObject::setSuperGroup(QObject *superGroup)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setSuperGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlConditionalNodeObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlConditionalNodeObject::addEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlConditionalNodeObject::removeEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlConditionalNodeObject::setMustIsolate(bool mustIsolate)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setMustIsolate(mustIsolate);
}

void QUmlConditionalNodeObject::unsetMustIsolate()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("mustIsolate"));
}

void QUmlConditionalNodeObject::addNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlConditionalNodeObject::removeNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlConditionalNodeObject::addStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addStructuredNodeInput(qmodelingelementproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlConditionalNodeObject::removeStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeStructuredNodeInput(qmodelingelementproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlConditionalNodeObject::addVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

void QUmlConditionalNodeObject::removeVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [ConditionalNode]

void QUmlConditionalNodeObject::addClause(QObject *clause)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addClause(qmodelingelementproperty_cast<QUmlClause *>(clause));
}

void QUmlConditionalNodeObject::removeClause(QObject *clause)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeClause(qmodelingelementproperty_cast<QUmlClause *>(clause));
}

void QUmlConditionalNodeObject::setAssured(bool isAssured)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setAssured(isAssured);
}

void QUmlConditionalNodeObject::unsetAssured()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("assured"));
}

void QUmlConditionalNodeObject::setDeterminate(bool isDeterminate)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->setDeterminate(isDeterminate);
}

void QUmlConditionalNodeObject::unsetDeterminate()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("determinate"));
}

void QUmlConditionalNodeObject::addResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->addResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}

void QUmlConditionalNodeObject::removeResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlConditionalNode *>(this)->removeResult(qmodelingelementproperty_cast<QUmlOutputPin *>(result));
}


void QUmlConditionalNodeObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuredNodeInputs"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("variables"))));

    d->propertyGroups << QStringLiteral("QUmlConditionalNode");
    d->groupProperties.insert(QStringLiteral("QUmlConditionalNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clauses"))));
    d->groupProperties.insert(QStringLiteral("QUmlConditionalNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isAssured"))));
    d->groupProperties.insert(QStringLiteral("QUmlConditionalNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDeterminate"))));
    d->groupProperties.insert(QStringLiteral("QUmlConditionalNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("results"))));
}

void QUmlConditionalNodeObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, DocumentationRole, QStringLiteral("Activity containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, activity, OppositeEndRole, QStringLiteral("Activity-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, DocumentationRole, QStringLiteral("Groups containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inGroups, OppositeEndRole, QStringLiteral("ActivityGroup-containedNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, DocumentationRole, QStringLiteral("Interruptible regions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inInterruptibleRegions, OppositeEndRole, QStringLiteral("InterruptibleActivityRegion-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, DocumentationRole, QStringLiteral("Partitions containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inPartitions, OppositeEndRole, QStringLiteral("ActivityPartition-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, DocumentationRole, QStringLiteral("Structured activity node containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, SubsettedPropertiesRole, QStringLiteral("ActivityNode-inGroup Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, inStructuredNode, OppositeEndRole, QStringLiteral("StructuredActivityNode-node"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, DocumentationRole, QStringLiteral("Edges that have the node as target."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, incomings, OppositeEndRole, QStringLiteral("ActivityEdge-target"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, DocumentationRole, QStringLiteral("Edges that have the node as source."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, outgoings, OppositeEndRole, QStringLiteral("ActivityEdge-source"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, PropertyClassRole, QStringLiteral("QUmlActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, DocumentationRole, QStringLiteral("Inherited nodes replaced by this node in a specialization of the activity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityNode, redefinedNodes, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, PropertyClassRole, QStringLiteral("QUmlExecutableNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, DocumentationRole, QStringLiteral("A set of exception handlers that are examined if an uncaught exception propagates to the outer level of the executable node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutableNode, handlers, OppositeEndRole, QStringLiteral("ExceptionHandler-protectedNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, DocumentationRole, QStringLiteral("The classifier that owns the behavior of which this action is a part."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, context, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, DocumentationRole, QStringLiteral("The ordered set of input pins connected to the Action. These are among the total set of inputs."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, inputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, DocumentationRole, QStringLiteral("If true, the action can begin a new, concurrent execution, even if there is already another execution of the action ongoing. If false, the action cannot begin a new execution until any previous execution has completed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, isLocallyReentrant, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, DocumentationRole, QStringLiteral("Constraint that must be satisfied when executed is completed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPostconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, DocumentationRole, QStringLiteral("Constraint that must be satisfied when execution is started."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, localPreconditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, PropertyClassRole, QStringLiteral("QUmlAction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, DocumentationRole, QStringLiteral("The ordered set of output pins connected to the Action. The action places its results onto pins in this set."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlAction, outputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, DocumentationRole, QStringLiteral("References the ElementImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, elementImports, OppositeEndRole, QStringLiteral("ElementImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, DocumentationRole, QStringLiteral("References the PackageableElements that are members of this Namespace as a result of either PackageImports or ElementImports."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, importedMembers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, DocumentationRole, QStringLiteral("A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, members, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, DocumentationRole, QStringLiteral("A collection of NamedElements owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, SubsettedPropertiesRole, QStringLiteral("Namespace-member Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedMembers, OppositeEndRole, QStringLiteral("NamedElement-namespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, DocumentationRole, QStringLiteral("Specifies a set of Constraints owned by this Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, ownedRules, OppositeEndRole, QStringLiteral("Constraint-context"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, PropertyClassRole, QStringLiteral("QUmlNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, DocumentationRole, QStringLiteral("References the PackageImports owned by the Namespace."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamespace, packageImports, OppositeEndRole, QStringLiteral("PackageImport-importingNamespace"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, DocumentationRole, QStringLiteral("Edges immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedEdges, OppositeEndRole, QStringLiteral("ActivityEdge-inGroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, DocumentationRole, QStringLiteral("Nodes immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, containedNodes, OppositeEndRole, QStringLiteral("ActivityNode-inGroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, DocumentationRole, QStringLiteral("Activity containing the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, inActivity, OppositeEndRole, QStringLiteral("Activity-group"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, DocumentationRole, QStringLiteral("Groups immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, subgroups, OppositeEndRole, QStringLiteral("ActivityGroup-superGroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, PropertyClassRole, QStringLiteral("QUmlActivityGroup"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, DocumentationRole, QStringLiteral("Group immediately containing the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlActivityGroup, superGroup, OppositeEndRole, QStringLiteral("ActivityGroup-subgroup"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, PropertyClassRole, QStringLiteral("QUmlStructuredActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, DocumentationRole, QStringLiteral("Activity immediately containing the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, RedefinedPropertiesRole, QStringLiteral("ActivityGroup-inActivity ActivityNode-activity"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, activity, OppositeEndRole, QStringLiteral("Activity-structuredNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, PropertyClassRole, QStringLiteral("QUmlStructuredActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, DocumentationRole, QStringLiteral("Edges immediately contained in the structured node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, SubsettedPropertiesRole, QStringLiteral("ActivityGroup-containedEdge Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, edges, OppositeEndRole, QStringLiteral("ActivityEdge-inStructuredNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, PropertyClassRole, QStringLiteral("QUmlStructuredActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, DocumentationRole, QStringLiteral("If true, then the actions in the node execute in isolation from actions outside the node."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, mustIsolate, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, PropertyClassRole, QStringLiteral("QUmlStructuredActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, DocumentationRole, QStringLiteral("Nodes immediately contained in the group."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, SubsettedPropertiesRole, QStringLiteral("ActivityGroup-containedNode Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, nodes, OppositeEndRole, QStringLiteral("ActivityNode-inStructuredNode"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, PropertyClassRole, QStringLiteral("QUmlStructuredActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, SubsettedPropertiesRole, QStringLiteral("Action-input"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeInputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, PropertyClassRole, QStringLiteral("QUmlStructuredActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, DocumentationRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, SubsettedPropertiesRole, QStringLiteral("Action-output"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, structuredNodeOutputs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, PropertyClassRole, QStringLiteral("QUmlStructuredActivityNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, DocumentationRole, QStringLiteral("A variable defined in the scope of the structured activity node. It has no value and may not be accessed"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuredActivityNode, variables, OppositeEndRole, QStringLiteral("Variable-scope"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, PropertyClassRole, QStringLiteral("QUmlConditionalNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, DocumentationRole, QStringLiteral("Set of clauses composing the conditional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, clauses, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, PropertyClassRole, QStringLiteral("QUmlConditionalNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, DocumentationRole, QStringLiteral("If true, the modeler asserts that at least one test will succeed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isAssured, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, PropertyClassRole, QStringLiteral("QUmlConditionalNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, DocumentationRole, QStringLiteral("If true, the modeler asserts that at most one test will succeed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, isDeterminate, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, PropertyClassRole, QStringLiteral("QUmlConditionalNode"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, DocumentationRole, QStringLiteral("A list of output pins that constitute the data flow outputs of the conditional."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, RedefinedPropertiesRole, QStringLiteral("StructuredActivityNode-structuredNodeOutput"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConditionalNode, results, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

