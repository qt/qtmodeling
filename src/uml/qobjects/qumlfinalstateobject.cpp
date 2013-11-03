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
#include "qumlfinalstateobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlFinalState>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectionPointReference>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

QUmlFinalStateObject::QUmlFinalStateObject(QUmlFinalState *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlFinalStateObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlFinalStateObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlFinalStateObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlFinalStateObject::name() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->name();
}

QObject *QUmlFinalStateObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlFinalStateObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->namespace_()->asQModelingObject();
}

QString QUmlFinalStateObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlFinalStateObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->visibility();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlFinalStateObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlFinalStateObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isLeaf();
}

const QSet<QObject *> QUmlFinalStateObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Vertex]

QObject *QUmlFinalStateObject::container() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->container()->asQModelingObject();
}

const QSet<QObject *> QUmlFinalStateObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [State]

const QSet<QObject *> QUmlFinalStateObject::connections() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectionPointReference *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->connections())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::connectionPoints() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->connectionPoints())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::deferrableTriggers() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->deferrableTriggers())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlFinalStateObject::doActivity() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->doActivity())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->doActivity()->asQModelingObject();
}

QObject *QUmlFinalStateObject::entry() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->entry())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->entry()->asQModelingObject();
}

QObject *QUmlFinalStateObject::exit() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->exit())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->exit()->asQModelingObject();
}

bool QUmlFinalStateObject::isComposite() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isComposite();
}

bool QUmlFinalStateObject::isOrthogonal() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isOrthogonal();
}

bool QUmlFinalStateObject::isSimple() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isSimple();
}

bool QUmlFinalStateObject::isSubmachineState() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isSubmachineState();
}

QObject *QUmlFinalStateObject::redefinedState() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->redefinedState())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->redefinedState()->asQModelingObject();
}

QObject *QUmlFinalStateObject::redefinitionContext() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->redefinitionContext())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->redefinitionContext()->asQModelingObject();
}

const QSet<QObject *> QUmlFinalStateObject::regions() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->regions())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlFinalStateObject::stateInvariant() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->stateInvariant())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->stateInvariant()->asQModelingObject();
}

QObject *QUmlFinalStateObject::submachine() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->submachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->submachine()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlFinalStateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFinalStateObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlFinalStateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlFinalStateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFinalStateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlFinalStateObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlFinalStateObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlFinalStateObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlFinalStateObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlFinalState *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlFinalStateObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]

// OPERATIONS [Vertex]

// OPERATIONS [State]

QObject *QUmlFinalStateObject::containingStateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlFinalState *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlFinalState *>(this)->containingStateMachine()->asQModelingObject();
}

bool QUmlFinalStateObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlFinalStateObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlFinalState *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlState *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlFinalStateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlFinalStateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlFinalStateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlFinalStateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlFinalStateObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlFinalStateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlFinalStateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlFinalStateObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlFinalStateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlFinalStateObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlFinalStateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlFinalStateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlFinalStateObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QUmlFinalStateObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
    emit elementImportsChanged(this->elementImports());
}

void QUmlFinalStateObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QUmlFinalStateObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
    emit importedMembersChanged(this->importedMembers());
}

void QUmlFinalStateObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
    emit membersChanged(this->members());
}

void QUmlFinalStateObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
    emit membersChanged(this->members());
}

void QUmlFinalStateObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QUmlFinalStateObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
    emit ownedMembersChanged(this->ownedMembers());
}

void QUmlFinalStateObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QUmlFinalStateObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
    emit ownedRulesChanged(this->ownedRules());
}

void QUmlFinalStateObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

void QUmlFinalStateObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
    emit packageImportsChanged(this->packageImports());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlFinalStateObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlFinalStateObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlFinalStateObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlFinalStateObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}
// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlFinalStateObject::setContainer(QObject *container)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setContainer(qmodelingelementproperty_cast<QUmlRegion *>(container));
    emit containerChanged(this->container());
}

void QUmlFinalStateObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlFinalStateObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlFinalStateObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlFinalStateObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

// SLOTS FOR OWNED ATTRIBUTES [State]

void QUmlFinalStateObject::addConnection(QObject *connection)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addConnection(qmodelingelementproperty_cast<QUmlConnectionPointReference *>(connection));
    emit connectionsChanged(this->connections());
}

void QUmlFinalStateObject::removeConnection(QObject *connection)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeConnection(qmodelingelementproperty_cast<QUmlConnectionPointReference *>(connection));
    emit connectionsChanged(this->connections());
}

void QUmlFinalStateObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
    emit connectionPointsChanged(this->connectionPoints());
}

void QUmlFinalStateObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
    emit connectionPointsChanged(this->connectionPoints());
}

void QUmlFinalStateObject::addDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addDeferrableTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(deferrableTrigger));
    emit deferrableTriggersChanged(this->deferrableTriggers());
}

void QUmlFinalStateObject::removeDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeDeferrableTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(deferrableTrigger));
    emit deferrableTriggersChanged(this->deferrableTriggers());
}

void QUmlFinalStateObject::setDoActivity(QObject *doActivity)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setDoActivity(qmodelingelementproperty_cast<QUmlBehavior *>(doActivity));
    emit doActivityChanged(this->doActivity());
}

void QUmlFinalStateObject::setEntry(QObject *entry)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setEntry(qmodelingelementproperty_cast<QUmlBehavior *>(entry));
    emit entryChanged(this->entry());
}

void QUmlFinalStateObject::setExit(QObject *exit)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setExit(qmodelingelementproperty_cast<QUmlBehavior *>(exit));
    emit exitChanged(this->exit());
}

void QUmlFinalStateObject::setComposite(bool isComposite)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setComposite(isComposite);
    emit isCompositeChanged(this->isComposite());
}

void QUmlFinalStateObject::unsetComposite()
{
    Q_D(QModelingObject);
    setComposite(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isComposite"));
}

void QUmlFinalStateObject::setOrthogonal(bool isOrthogonal)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setOrthogonal(isOrthogonal);
    emit isOrthogonalChanged(this->isOrthogonal());
}

void QUmlFinalStateObject::unsetOrthogonal()
{
    Q_D(QModelingObject);
    setOrthogonal(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isOrthogonal"));
}

void QUmlFinalStateObject::setSimple(bool isSimple)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setSimple(isSimple);
    emit isSimpleChanged(this->isSimple());
}

void QUmlFinalStateObject::unsetSimple()
{
    Q_D(QModelingObject);

    setSimple(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isSimple"));
}

void QUmlFinalStateObject::setSubmachineState(bool isSubmachineState)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setSubmachineState(isSubmachineState);
    emit isSubmachineStateChanged(this->isSubmachineState());
}

void QUmlFinalStateObject::unsetSubmachineState()
{
    Q_D(QModelingObject);
    setSubmachineState(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isSubmachineState"));
}

void QUmlFinalStateObject::setRedefinedState(QObject *redefinedState)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setRedefinedState(qmodelingelementproperty_cast<QUmlState *>(redefinedState));
    emit redefinedStateChanged(this->redefinedState());
}

void QUmlFinalStateObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextChanged(this->redefinitionContext());
}

void QUmlFinalStateObject::addRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
    emit regionsChanged(this->regions());
}

void QUmlFinalStateObject::removeRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
    emit regionsChanged(this->regions());
}

void QUmlFinalStateObject::setStateInvariant(QObject *stateInvariant)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setStateInvariant(qmodelingelementproperty_cast<QUmlConstraint *>(stateInvariant));
    emit stateInvariantChanged(this->stateInvariant());
}

void QUmlFinalStateObject::setSubmachine(QObject *submachine)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setSubmachine(qmodelingelementproperty_cast<QUmlStateMachine *>(submachine));
    emit submachineChanged(this->submachine());
}


void QUmlFinalStateObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));

    d->propertyGroups << QStringLiteral("QUmlVertex");
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("container"))));
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));

    d->propertyGroups << QStringLiteral("QUmlState");
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("connections"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("connectionPoints"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deferrableTriggers"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("doActivity"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("entry"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("exit"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isComposite"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrthogonal"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSimple"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isSubmachineState"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedState"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContext"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("regions"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("stateInvariant"))));
    d->groupProperties.insert(QStringLiteral("QUmlState"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("submachine"))));

    d->propertyGroups << QStringLiteral("QUmlFinalState");
}

void QUmlFinalStateObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, PropertyClassRole, QStringLiteral("QUmlVertex"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, DocumentationRole, QStringLiteral("The region that contains this vertex."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, OppositeEndRole, QStringLiteral("Region-subvertex"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, PropertyClassRole, QStringLiteral("QUmlVertex"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, DocumentationRole, QStringLiteral("Specifies the transitions entering this vertex."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, OppositeEndRole, QStringLiteral("Transition-target"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, PropertyClassRole, QStringLiteral("QUmlVertex"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, DocumentationRole, QStringLiteral("Specifies the transitions departing from this vertex."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, OppositeEndRole, QStringLiteral("Transition-source"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, DocumentationRole, QStringLiteral("The entry and exit connection points used in conjunction with this (submachine) state, i.e. as targets and sources, respectively, in the region with the submachine state. A connection point reference references the corresponding definition of a connection point pseudostate in the statemachine referenced by the submachinestate."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connections, OppositeEndRole, QStringLiteral("ConnectionPointReference-state"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, DocumentationRole, QStringLiteral("The entry and exit pseudostates of a composite state. These can only be entry or exit Pseudostates, and they must have different names. They can only be defined for composite states."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, connectionPoints, OppositeEndRole, QStringLiteral("Pseudostate-state"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, DocumentationRole, QStringLiteral("A list of triggers that are candidates to be retained by the state machine if they trigger no transitions out of the state (not consumed). A deferred trigger is retained until the state machine reaches a state configuration where it is no longer deferred."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, deferrableTriggers, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, DocumentationRole, QStringLiteral("An optional behavior that is executed while being in the state. The execution starts when this state is entered, and stops either by itself, or when the state is exited, whichever comes first."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, doActivity, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, DocumentationRole, QStringLiteral("An optional behavior that is executed whenever this state is entered regardless of the transition taken to reach the state. If defined, entry actions are always executed to completion prior to any internal behavior or transitions performed within the state."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, entry, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, DocumentationRole, QStringLiteral("An optional behavior that is executed whenever this state is exited regardless of which transition was taken out of the state. If defined, exit actions are always executed to completion only after all internal activities and transition actions have completed execution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, exit, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, DocumentationRole, QStringLiteral("A state with isComposite=true is said to be a composite state. A composite state is a state that contains at least one region."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isComposite, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, DocumentationRole, QStringLiteral("A state with isOrthogonal=true is said to be an orthogonal composite state. An orthogonal composite state contains two or more regions."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isOrthogonal, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, DocumentationRole, QStringLiteral("A state with isSimple=true is said to be a simple state. A simple state does not have any regions and it does not refer to any submachine state machine."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSimple, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, DocumentationRole, QStringLiteral("A state with isSubmachineState=true is said to be a submachine state. Such a state refers to a state machine (submachine)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, isSubmachineState, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, DocumentationRole, QStringLiteral("The state of which this state is a redefinition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinedState, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, DocumentationRole, QStringLiteral("References the classifier in which context this element may be redefined."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, RedefinedPropertiesRole, QStringLiteral("RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, redefinitionContext, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, DocumentationRole, QStringLiteral("The regions owned directly by the state."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, regions, OppositeEndRole, QStringLiteral("Region-state"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, DocumentationRole, QStringLiteral("Specifies conditions that are always true when this state is the current state. In protocol state machines, state invariants are additional conditions to the preconditions of the outgoing transitions, and to the postcondition of the incoming transitions."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, stateInvariant, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, PropertyClassRole, QStringLiteral("QUmlState"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, DocumentationRole, QStringLiteral("The state machine that is to be inserted in place of the (submachine) state."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlState, submachine, OppositeEndRole, QStringLiteral("StateMachine-submachineState"));

}

QT_END_NAMESPACE

