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
#include "private/qmodelingobject_p.h"

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

QUmlStructuredActivityNodeObject::QUmlStructuredActivityNodeObject(QUmlStructuredActivityNode *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlStructuredActivityNodeObject::~QUmlStructuredActivityNodeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStructuredActivityNodeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStructuredActivityNodeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlStructuredActivityNodeObject::name() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->name();
}

QObject *QUmlStructuredActivityNodeObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlStructuredActivityNodeObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->namespace_()->asQModelingObject();
}

QString QUmlStructuredActivityNodeObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStructuredActivityNodeObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStructuredActivityNodeObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityNode]

const QSet<QObject *> QUmlStructuredActivityNodeObject::inGroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->inGroups())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::inInterruptibleRegions() const
{
    QSet<QObject *> set;
    foreach (QUmlInterruptibleActivityRegion *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->inInterruptibleRegions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::inPartitions() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityPartition *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->inPartitions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStructuredActivityNodeObject::inStructuredNode() const
{
    if (!qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->inStructuredNode())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->inStructuredNode()->asQModelingObject();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::redefinedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->redefinedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutableNode]

const QSet<QObject *> QUmlStructuredActivityNodeObject::handlers() const
{
    QSet<QObject *> set;
    foreach (QUmlExceptionHandler *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->handlers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Action]

QObject *QUmlStructuredActivityNodeObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->context()->asQModelingObject();
}

const QList<QObject *> QUmlStructuredActivityNodeObject::inputs() const
{
    QList<QObject *> list;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->inputs())
        list.append(element->asQModelingObject());
    return list;
}

bool QUmlStructuredActivityNodeObject::isLocallyReentrant() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->isLocallyReentrant();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::localPostconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->localPostconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::localPreconditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->localPreconditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlStructuredActivityNodeObject::outputs() const
{
    QList<QObject *> list;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->outputs())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlStructuredActivityNodeObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ActivityGroup]

const QSet<QObject *> QUmlStructuredActivityNodeObject::containedEdges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->containedEdges())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::containedNodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->containedNodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::subgroups() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityGroup *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->subgroups())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStructuredActivityNodeObject::superGroup() const
{
    if (!qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->superGroup())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->superGroup()->asQModelingObject();
}

// OWNED ATTRIBUTES [StructuredActivityNode]

QObject *QUmlStructuredActivityNodeObject::activity() const
{
    if (!qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->activity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->activity()->asQModelingObject();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::edges() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityEdge *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->edges())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::mustIsolate() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->mustIsolate();
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::nodes() const
{
    QSet<QObject *> set;
    foreach (QUmlActivityNode *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->nodes())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::structuredNodeInputs() const
{
    QSet<QObject *> set;
    foreach (QUmlInputPin *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->structuredNodeInputs())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::structuredNodeOutputs() const
{
    QSet<QObject *> set;
    foreach (QUmlOutputPin *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->structuredNodeOutputs())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStructuredActivityNodeObject::variables() const
{
    QSet<QObject *> set;
    foreach (QUmlVariable *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->variables())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStructuredActivityNodeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStructuredActivityNodeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStructuredActivityNodeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStructuredActivityNodeObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlStructuredActivityNodeObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStructuredActivityNodeObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlStructuredActivityNodeObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlStructuredActivityNodeObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlStructuredActivityNodeObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStructuredActivityNodeObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStructuredActivityNodeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStructuredActivityNodeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStructuredActivityNodeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStructuredActivityNodeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStructuredActivityNodeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStructuredActivityNodeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStructuredActivityNodeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStructuredActivityNodeObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setName(name);
}

void QUmlStructuredActivityNodeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStructuredActivityNodeObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStructuredActivityNodeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setQualifiedName(qualifiedName);
}

void QUmlStructuredActivityNodeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStructuredActivityNodeObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setLeaf(isLeaf);
}

void QUmlStructuredActivityNodeObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlStructuredActivityNodeObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStructuredActivityNodeObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStructuredActivityNodeObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStructuredActivityNodeObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityNode]

void QUmlStructuredActivityNodeObject::addInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStructuredActivityNodeObject::removeInGroup(QObject *inGroup)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeInGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(inGroup));
}

void QUmlStructuredActivityNodeObject::addInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStructuredActivityNodeObject::removeInInterruptibleRegion(QObject *inInterruptibleRegion)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeInInterruptibleRegion(qmodelingelementproperty_cast<QUmlInterruptibleActivityRegion *>(inInterruptibleRegion));
}

void QUmlStructuredActivityNodeObject::addInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStructuredActivityNodeObject::removeInPartition(QObject *inPartition)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeInPartition(qmodelingelementproperty_cast<QUmlActivityPartition *>(inPartition));
}

void QUmlStructuredActivityNodeObject::setInStructuredNode(QObject *inStructuredNode)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setInStructuredNode(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(inStructuredNode));
}

void QUmlStructuredActivityNodeObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStructuredActivityNodeObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlActivityEdge *>(incoming));
}

void QUmlStructuredActivityNodeObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStructuredActivityNodeObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlActivityEdge *>(outgoing));
}

void QUmlStructuredActivityNodeObject::addRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

void QUmlStructuredActivityNodeObject::removeRedefinedNode(QObject *redefinedNode)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeRedefinedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(redefinedNode));
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutableNode]

void QUmlStructuredActivityNodeObject::addHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

void QUmlStructuredActivityNodeObject::removeHandler(QObject *handler)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeHandler(qmodelingelementproperty_cast<QUmlExceptionHandler *>(handler));
}

// SLOTS FOR OWNED ATTRIBUTES [Action]

void QUmlStructuredActivityNodeObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setContext(qmodelingelementproperty_cast<QUmlClassifier *>(context));
}

void QUmlStructuredActivityNodeObject::addInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlStructuredActivityNodeObject::removeInput(QObject *input)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeInput(qmodelingelementproperty_cast<QUmlInputPin *>(input));
}

void QUmlStructuredActivityNodeObject::setLocallyReentrant(bool isLocallyReentrant)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setLocallyReentrant(isLocallyReentrant);
}

void QUmlStructuredActivityNodeObject::unsetLocallyReentrant()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("locallyReentrant"));
}

void QUmlStructuredActivityNodeObject::addLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStructuredActivityNodeObject::removeLocalPostcondition(QObject *localPostcondition)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeLocalPostcondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPostcondition));
}

void QUmlStructuredActivityNodeObject::addLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStructuredActivityNodeObject::removeLocalPrecondition(QObject *localPrecondition)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeLocalPrecondition(qmodelingelementproperty_cast<QUmlConstraint *>(localPrecondition));
}

void QUmlStructuredActivityNodeObject::addOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

void QUmlStructuredActivityNodeObject::removeOutput(QObject *output)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(output));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlStructuredActivityNodeObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStructuredActivityNodeObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStructuredActivityNodeObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStructuredActivityNodeObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStructuredActivityNodeObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStructuredActivityNodeObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStructuredActivityNodeObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStructuredActivityNodeObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStructuredActivityNodeObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStructuredActivityNodeObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStructuredActivityNodeObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlStructuredActivityNodeObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [ActivityGroup]

void QUmlStructuredActivityNodeObject::addContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlStructuredActivityNodeObject::removeContainedEdge(QObject *containedEdge)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeContainedEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(containedEdge));
}

void QUmlStructuredActivityNodeObject::addContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlStructuredActivityNodeObject::removeContainedNode(QObject *containedNode)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeContainedNode(qmodelingelementproperty_cast<QUmlActivityNode *>(containedNode));
}

void QUmlStructuredActivityNodeObject::addSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlStructuredActivityNodeObject::removeSubgroup(QObject *subgroup)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeSubgroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(subgroup));
}

void QUmlStructuredActivityNodeObject::setSuperGroup(QObject *superGroup)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setSuperGroup(qmodelingelementproperty_cast<QUmlActivityGroup *>(superGroup));
}

// SLOTS FOR OWNED ATTRIBUTES [StructuredActivityNode]

void QUmlStructuredActivityNodeObject::setActivity(QObject *activity)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setActivity(qmodelingelementproperty_cast<QUmlActivity *>(activity));
}

void QUmlStructuredActivityNodeObject::addEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlStructuredActivityNodeObject::removeEdge(QObject *edge)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeEdge(qmodelingelementproperty_cast<QUmlActivityEdge *>(edge));
}

void QUmlStructuredActivityNodeObject::setMustIsolate(bool mustIsolate)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->setMustIsolate(mustIsolate);
}

void QUmlStructuredActivityNodeObject::unsetMustIsolate()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("mustIsolate"));
}

void QUmlStructuredActivityNodeObject::addNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlStructuredActivityNodeObject::removeNode(QObject *node)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeNode(qmodelingelementproperty_cast<QUmlActivityNode *>(node));
}

void QUmlStructuredActivityNodeObject::addStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addStructuredNodeInput(qmodelingelementproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlStructuredActivityNodeObject::removeStructuredNodeInput(QObject *structuredNodeInput)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeStructuredNodeInput(qmodelingelementproperty_cast<QUmlInputPin *>(structuredNodeInput));
}

void QUmlStructuredActivityNodeObject::addStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addStructuredNodeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlStructuredActivityNodeObject::removeStructuredNodeOutput(QObject *structuredNodeOutput)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeStructuredNodeOutput(qmodelingelementproperty_cast<QUmlOutputPin *>(structuredNodeOutput));
}

void QUmlStructuredActivityNodeObject::addVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->addVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}

void QUmlStructuredActivityNodeObject::removeVariable(QObject *variable)
{
    qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(this)->removeVariable(qmodelingelementproperty_cast<QUmlVariable *>(variable));
}


void QUmlStructuredActivityNodeObject::setGroupProperties()
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
}

void QUmlStructuredActivityNodeObject::setPropertyData()
{
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

}

QT_END_NAMESPACE

