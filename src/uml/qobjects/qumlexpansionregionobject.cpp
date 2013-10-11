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

