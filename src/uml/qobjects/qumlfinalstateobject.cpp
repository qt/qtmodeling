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

QUmlFinalStateObject::~QUmlFinalStateObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlFinalState *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
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
}

void QUmlFinalStateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlFinalStateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFinalStateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFinalStateObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlFinalStateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFinalStateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFinalStateObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setName(name);
}

void QUmlFinalStateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlFinalStateObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlFinalStateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setQualifiedName(qualifiedName);
}

void QUmlFinalStateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlFinalStateObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFinalStateObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFinalStateObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFinalStateObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFinalStateObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFinalStateObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFinalStateObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFinalStateObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFinalStateObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFinalStateObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFinalStateObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlFinalStateObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlFinalStateObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setLeaf(isLeaf);
}

void QUmlFinalStateObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlFinalStateObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlFinalStateObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlFinalStateObject::setContainer(QObject *container)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setContainer(qmodelingelementproperty_cast<QUmlRegion *>(container));
}

void QUmlFinalStateObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
}

void QUmlFinalStateObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
}

void QUmlFinalStateObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
}

void QUmlFinalStateObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
}

// SLOTS FOR OWNED ATTRIBUTES [State]

void QUmlFinalStateObject::addConnection(QObject *connection)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addConnection(qmodelingelementproperty_cast<QUmlConnectionPointReference *>(connection));
}

void QUmlFinalStateObject::removeConnection(QObject *connection)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeConnection(qmodelingelementproperty_cast<QUmlConnectionPointReference *>(connection));
}

void QUmlFinalStateObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlFinalStateObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeConnectionPoint(qmodelingelementproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlFinalStateObject::addDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addDeferrableTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(deferrableTrigger));
}

void QUmlFinalStateObject::removeDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeDeferrableTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(deferrableTrigger));
}

void QUmlFinalStateObject::setDoActivity(QObject *doActivity)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setDoActivity(qmodelingelementproperty_cast<QUmlBehavior *>(doActivity));
}

void QUmlFinalStateObject::setEntry(QObject *entry)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setEntry(qmodelingelementproperty_cast<QUmlBehavior *>(entry));
}

void QUmlFinalStateObject::setExit(QObject *exit)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setExit(qmodelingelementproperty_cast<QUmlBehavior *>(exit));
}

void QUmlFinalStateObject::setComposite(bool isComposite)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setComposite(isComposite);
}

void QUmlFinalStateObject::unsetComposite()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("composite"));
}

void QUmlFinalStateObject::setOrthogonal(bool isOrthogonal)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setOrthogonal(isOrthogonal);
}

void QUmlFinalStateObject::unsetOrthogonal()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("orthogonal"));
}

void QUmlFinalStateObject::setSimple(bool isSimple)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setSimple(isSimple);
}

void QUmlFinalStateObject::unsetSimple()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("simple"));
}

void QUmlFinalStateObject::setSubmachineState(bool isSubmachineState)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setSubmachineState(isSubmachineState);
}

void QUmlFinalStateObject::unsetSubmachineState()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("submachineState"));
}

void QUmlFinalStateObject::setRedefinedState(QObject *redefinedState)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setRedefinedState(qmodelingelementproperty_cast<QUmlState *>(redefinedState));
}

void QUmlFinalStateObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlFinalStateObject::addRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->addRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
}

void QUmlFinalStateObject::removeRegion(QObject *region)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->removeRegion(qmodelingelementproperty_cast<QUmlRegion *>(region));
}

void QUmlFinalStateObject::setStateInvariant(QObject *stateInvariant)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setStateInvariant(qmodelingelementproperty_cast<QUmlConstraint *>(stateInvariant));
}

void QUmlFinalStateObject::setSubmachine(QObject *submachine)
{
    qmodelingelementproperty_cast<QUmlFinalState *>(this)->setSubmachine(qmodelingelementproperty_cast<QUmlStateMachine *>(submachine));
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
}

QT_END_NAMESPACE

