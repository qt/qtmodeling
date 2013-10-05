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

QUmlFinalStateObject::QUmlFinalStateObject(QUmlFinalState *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlFinalStateObject::~QUmlFinalStateObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlFinalState *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlFinalStateObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlFinalStateObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlFinalStateObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlFinalStateObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->name();
}

QObject *QUmlFinalStateObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->nameExpression()->asQObject();
}

QObject *QUmlFinalStateObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->namespace_()->asQObject();
}

QString QUmlFinalStateObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlFinalStateObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->visibility();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlFinalStateObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlFinalStateObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isLeaf();
}

const QSet<QObject *> QUmlFinalStateObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}
// OWNED ATTRIBUTES [Vertex]

QObject *QUmlFinalStateObject::container() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->container())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->container()->asQObject();
}

const QSet<QObject *> QUmlFinalStateObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [State]

const QSet<QObject *> QUmlFinalStateObject::connection() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectionPointReference *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->connection())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::connectionPoint() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->connectionPoint())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlFinalStateObject::deferrableTrigger() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->deferrableTrigger())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlFinalStateObject::doActivity() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->doActivity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->doActivity()->asQObject();
}

QObject *QUmlFinalStateObject::entry() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->entry())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->entry()->asQObject();
}

QObject *QUmlFinalStateObject::exit() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->exit())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->exit()->asQObject();
}

bool QUmlFinalStateObject::isComposite() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isComposite();
}

bool QUmlFinalStateObject::isOrthogonal() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isOrthogonal();
}

bool QUmlFinalStateObject::isSimple() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isSimple();
}

bool QUmlFinalStateObject::isSubmachineState() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isSubmachineState();
}

QObject *QUmlFinalStateObject::redefinedState() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->redefinedState())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->redefinedState()->asQObject();
}

QObject *QUmlFinalStateObject::redefinitionContext() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->redefinitionContext())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->redefinitionContext()->asQObject();
}

const QSet<QObject *> QUmlFinalStateObject::region() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->region())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlFinalStateObject::stateInvariant() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->stateInvariant())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->stateInvariant()->asQObject();
}

QObject *QUmlFinalStateObject::submachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->submachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->submachine()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlFinalStateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlFinalStateObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlFinalStateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlFinalStateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlFinalStateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlFinalStateObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlFinalStateObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlFinalStateObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlFinalStateObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlFinalState *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlFinalStateObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]
// OPERATIONS [Vertex]
// OPERATIONS [State]

QObject *QUmlFinalStateObject::containingStateMachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlFinalState *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->containingStateMachine()->asQObject();
}

bool QUmlFinalStateObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlFinalStateObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlFinalState *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlState *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlFinalStateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlFinalStateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlFinalStateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFinalStateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlFinalStateObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlFinalStateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFinalStateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlFinalStateObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setName(name);
}

void QUmlFinalStateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlFinalStateObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlFinalStateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setQualifiedName(qualifiedName);
}

void QUmlFinalStateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlFinalStateObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFinalStateObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlFinalStateObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFinalStateObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlFinalStateObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFinalStateObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlFinalStateObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFinalStateObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlFinalStateObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFinalStateObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlFinalStateObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlFinalStateObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlFinalStateObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setLeaf(isLeaf);
}

void QUmlFinalStateObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlFinalStateObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlFinalStateObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlFinalStateObject::setContainer(QObject *container)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setContainer(qmodelingobjectproperty_cast<QUmlRegion *>(container));
}

void QUmlFinalStateObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlFinalStateObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlFinalStateObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

void QUmlFinalStateObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

// SLOTS FOR OWNED ATTRIBUTES [State]

void QUmlFinalStateObject::addConnection(QObject *connection)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addConnection(qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(connection));
}

void QUmlFinalStateObject::removeConnection(QObject *connection)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeConnection(qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(connection));
}

void QUmlFinalStateObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlFinalStateObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlFinalStateObject::addDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addDeferrableTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(deferrableTrigger));
}

void QUmlFinalStateObject::removeDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeDeferrableTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(deferrableTrigger));
}

void QUmlFinalStateObject::setDoActivity(QObject *doActivity)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setDoActivity(qmodelingobjectproperty_cast<QUmlBehavior *>(doActivity));
}

void QUmlFinalStateObject::setEntry(QObject *entry)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setEntry(qmodelingobjectproperty_cast<QUmlBehavior *>(entry));
}

void QUmlFinalStateObject::setExit(QObject *exit)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setExit(qmodelingobjectproperty_cast<QUmlBehavior *>(exit));
}

void QUmlFinalStateObject::setComposite(bool isComposite)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setComposite(isComposite);
}

void QUmlFinalStateObject::unsetComposite()
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("composite"));
}

void QUmlFinalStateObject::setOrthogonal(bool isOrthogonal)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setOrthogonal(isOrthogonal);
}

void QUmlFinalStateObject::unsetOrthogonal()
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("orthogonal"));
}

void QUmlFinalStateObject::setSimple(bool isSimple)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setSimple(isSimple);
}

void QUmlFinalStateObject::unsetSimple()
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("simple"));
}

void QUmlFinalStateObject::setSubmachineState(bool isSubmachineState)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setSubmachineState(isSubmachineState);
}

void QUmlFinalStateObject::unsetSubmachineState()
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("submachineState"));
}

void QUmlFinalStateObject::setRedefinedState(QObject *redefinedState)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setRedefinedState(qmodelingobjectproperty_cast<QUmlState *>(redefinedState));
}

void QUmlFinalStateObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlFinalStateObject::addRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->addRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlFinalStateObject::removeRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->removeRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlFinalStateObject::setStateInvariant(QObject *stateInvariant)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setStateInvariant(qmodelingobjectproperty_cast<QUmlConstraint *>(stateInvariant));
}

void QUmlFinalStateObject::setSubmachine(QObject *submachine)
{
    qmodelingobjectproperty_cast<QUmlFinalState *>(this)->setSubmachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(submachine));
}

QT_END_NAMESPACE

