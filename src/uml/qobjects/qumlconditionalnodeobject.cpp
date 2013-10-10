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

QUmlConditionalNodeObject::QUmlConditionalNodeObject(QUmlConditionalNode *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
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

