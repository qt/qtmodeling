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
#include "private/qmodelingobject_p.h"

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

QUmlExpansionRegionObject::QUmlExpansionRegionObject(QUmlExpansionRegion *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlExpansionRegionObject::~QUmlExpansionRegionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExpansionRegionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExpansionRegionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExpansionRegionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlExpansionRegionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->name();
}

QObject *QUmlExpansionRegionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlExpansionRegionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->namespace_()->asQModelingObject();
}

QString QUmlExpansionRegionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExpansionRegionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExpansionRegionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExpansionRegionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlExpansionRegionObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExpansionRegionObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlExpansionRegionObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlExpansionRegionObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlExpansionRegionObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlExpansionRegionObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlExpansionRegionObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlExpansionRegionObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlExpansionRegionObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlExpansionRegionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlExpansionRegionObject::containedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->containedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::containedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->containedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::subgroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->subgroups())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExpansionRegionObject::superGroup() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->superGroup())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->superGroup()->asQModelingObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlExpansionRegionObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlExpansionRegionObject::edges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->edges())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpansionRegionObject::mustIsolate() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlExpansionRegionObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->nodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::structuredNodeInputs() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->structuredNodeInputs())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::structuredNodeOutputs() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->structuredNodeOutputs())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpansionRegionObject::variables() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->variables())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExpansionRegion]

const QSet<QObject *> QUmlExpansionRegionObject::inputElements() const
{
    QSet<QObject *> set;
    foreach (QUmlExpansionNode *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->inputElements())
        set.insert(element->asQModelingObject());
    return set;
}

QtUml::ExpansionKind QUmlExpansionRegionObject::mode() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->mode();
}

const QSet<QObject *> QUmlExpansionRegionObject::outputElements() const
{
    QSet<QObject *> set;
    foreach (QUmlExpansionNode *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->outputElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExpansionRegionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpansionRegionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExpansionRegionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExpansionRegionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpansionRegionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExpansionRegionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlExpansionRegionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExpansionRegionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlExpansionRegionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlExpansionRegionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlExpansionRegionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpansionRegionObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExpansionRegionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionRegionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpansionRegionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionRegionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpansionRegionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExpansionRegionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionRegionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpansionRegionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setName(name);
}

void QUmlExpansionRegionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExpansionRegionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExpansionRegionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setQualifiedName(qualifiedName);
}

void QUmlExpansionRegionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExpansionRegionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setLeaf(isLeaf);
}

void QUmlExpansionRegionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlExpansionRegionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionRegionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExpansionRegionObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExpansionRegionObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlExpansionRegionObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionRegionObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlExpansionRegionObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionRegionObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlExpansionRegionObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionRegionObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlExpansionRegionObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlExpansionRegionObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionRegionObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlExpansionRegionObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionRegionObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlExpansionRegionObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlExpansionRegionObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlExpansionRegionObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlExpansionRegionObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlExpansionRegionObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlExpansionRegionObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlExpansionRegionObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlExpansionRegionObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlExpansionRegionObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlExpansionRegionObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlExpansionRegionObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlExpansionRegionObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlExpansionRegionObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlExpansionRegionObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlExpansionRegionObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlExpansionRegionObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExpansionRegionObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlExpansionRegionObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExpansionRegionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlExpansionRegionObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExpansionRegionObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlExpansionRegionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExpansionRegionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlExpansionRegionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExpansionRegionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlExpansionRegionObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlExpansionRegionObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlExpansionRegionObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlExpansionRegionObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlExpansionRegionObject::addContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlExpansionRegionObject::removeContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlExpansionRegionObject::addSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlExpansionRegionObject::removeSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlExpansionRegionObject::setSuperGroup(QObject *superGroup)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setSuperGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlExpansionRegionObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlExpansionRegionObject::addEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlExpansionRegionObject::removeEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlExpansionRegionObject::setMustIsolate(bool mustIsolate)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setMustIsolate(mustIsolate);
}

void QUmlExpansionRegionObject::unsetMustIsolate()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("mustIsolate"));
}

void QUmlExpansionRegionObject::addNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlExpansionRegionObject::removeNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlExpansionRegionObject::addStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addStructuredNodeInput(qmodelingelementproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlExpansionRegionObject::removeStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeStructuredNodeInput(qmodelingelementproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlExpansionRegionObject::addStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addStructuredNodeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlExpansionRegionObject::removeStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeStructuredNodeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlExpansionRegionObject::addVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

void QUmlExpansionRegionObject::removeVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

// SLOTS FOR OWNED ATTRIBUTES [ExpansionRegion]

void QUmlExpansionRegionObject::addInputElement(QObject *inputElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addInputElement(qmodelingelementproperty_cast<QUmlExpansionNode *>(inputElement));
}

void QUmlExpansionRegionObject::removeInputElement(QObject *inputElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeInputElement(qmodelingelementproperty_cast<QUmlExpansionNode *>(inputElement));
}

void QUmlExpansionRegionObject::setMode(QtUml::ExpansionKind mode)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->setMode(mode);
}

void QUmlExpansionRegionObject::unsetMode()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("mode"));
}

void QUmlExpansionRegionObject::addOutputElement(QObject *outputElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->addOutputElement(qmodelingelementproperty_cast<QUmlExpansionNode *>(outputElement));
}

void QUmlExpansionRegionObject::removeOutputElement(QObject *outputElement)
{
    qmodelingelementproperty_cast<QUmlExpansionRegion *>(this)->removeOutputElement(qmodelingelementproperty_cast<QUmlExpansionNode *>(outputElement));
}


void QUmlExpansionRegionObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("structuredNodeOutputs"))));
    d->groupProperties.insert(QStringLiteral("QUmlStructuredActivityNode"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("variables"))));

    d->propertyGroups << QStringLiteral("QUmlExpansionRegion");
    d->groupProperties.insert(QStringLiteral("QUmlExpansionRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("inputElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlExpansionRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("mode"))));
    d->groupProperties.insert(QStringLiteral("QUmlExpansionRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outputElements"))));
}

void QUmlExpansionRegionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, PropertyClassRole, QStringLiteral("QUmlExpansionRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, DocumentationRole, QStringLiteral("An object node that holds a separate element of the input collection during each of the multiple executions of the region."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, inputElements, OppositeEndRole, QStringLiteral("ExpansionNode-regionAsInput"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, PropertyClassRole, QStringLiteral("QUmlExpansionRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, DocumentationRole, QStringLiteral("The way in which the executions interact: parallel: all interactions are independent iterative: the interactions occur in order of the elements stream: a stream of values flows into a single execution"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, mode, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, PropertyClassRole, QStringLiteral("QUmlExpansionRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, DocumentationRole, QStringLiteral("An object node that accepts a separate element of the output collection during each of the multiple executions of the region. The values are formed into a collection that is available when the execution of the region is complete."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpansionRegion, outputElements, OppositeEndRole, QStringLiteral("ExpansionNode-regionAsOutput"));

}

QT_END_NAMESPACE

