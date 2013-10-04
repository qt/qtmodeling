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
#include "qumlstateobject_p.h"

#include <QtUml/QUmlState>
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
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>

QT_BEGIN_NAMESPACE

QUmlStateObject::QUmlStateObject(QUmlState *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlStateObject::~QUmlStateObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlState *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStateObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlState *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStateObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlState *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlStateObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->name();
}

QObject *QUmlStateObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->nameExpression()->asQObject();
}

QObject *QUmlStateObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->namespace_()->asQObject();
}

QString QUmlStateObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStateObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->visibility();
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlStateObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlState *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlState *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlState *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlStateObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isLeaf();
}

const QSet<QObject *> QUmlStateObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}
// OWNED ATTRIBUTES [Vertex]

QObject *QUmlStateObject::container() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->container())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->container()->asQObject();
}

const QSet<QObject *> QUmlStateObject::incoming() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlState *>(this)->incoming())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::outgoing() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingobjectproperty_cast<QUmlState *>(this)->outgoing())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [State]

const QSet<QObject *> QUmlStateObject::connection() const
{
    QSet<QObject *> set;
    foreach (QUmlConnectionPointReference *element, qmodelingobjectproperty_cast<QUmlState *>(this)->connection())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::connectionPoint() const
{
    QSet<QObject *> set;
    foreach (QUmlPseudostate *element, qmodelingobjectproperty_cast<QUmlState *>(this)->connectionPoint())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlStateObject::deferrableTrigger() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingobjectproperty_cast<QUmlState *>(this)->deferrableTrigger())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateObject::doActivity() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->doActivity())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->doActivity()->asQObject();
}

QObject *QUmlStateObject::entry() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->entry())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->entry()->asQObject();
}

QObject *QUmlStateObject::exit() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->exit())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->exit()->asQObject();
}

bool QUmlStateObject::isComposite() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isComposite();
}

bool QUmlStateObject::isOrthogonal() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isOrthogonal();
}

bool QUmlStateObject::isSimple() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isSimple();
}

bool QUmlStateObject::isSubmachineState() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isSubmachineState();
}

QObject *QUmlStateObject::redefinedState() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->redefinedState())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->redefinedState()->asQObject();
}

QObject *QUmlStateObject::redefinitionContext() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->redefinitionContext())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->redefinitionContext()->asQObject();
}

const QSet<QObject *> QUmlStateObject::region() const
{
    QSet<QObject *> set;
    foreach (QUmlRegion *element, qmodelingobjectproperty_cast<QUmlState *>(this)->region())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlStateObject::stateInvariant() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->stateInvariant())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->stateInvariant()->asQObject();
}

QObject *QUmlStateObject::submachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->submachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->submachine()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlState *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlStateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlState *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStateObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlStateObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlStateObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlStateObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlState *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlStateObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->membersAreDistinguishable();
}

// OPERATIONS [RedefinableElement]
// OPERATIONS [Vertex]
// OPERATIONS [State]

QObject *QUmlStateObject::containingStateMachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlState *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlState *>(this)->containingStateMachine()->asQObject();
}

bool QUmlStateObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlStateObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlState *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlState *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setName(name);
}

void QUmlStateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStateObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setQualifiedName(qualifiedName);
}

void QUmlStateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlStateObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStateObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlStateObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStateObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlStateObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStateObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlStateObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStateObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlStateObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStateObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlStateObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlStateObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlStateObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlStateObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlStateObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlStateObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlStateObject::setContainer(QObject *container)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setContainer(qmodelingobjectproperty_cast<QUmlRegion *>(container));
}

void QUmlStateObject::addIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlStateObject::removeIncoming(QObject *incoming)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeIncoming(qmodelingobjectproperty_cast<QUmlTransition *>(incoming));
}

void QUmlStateObject::addOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

void QUmlStateObject::removeOutgoing(QObject *outgoing)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeOutgoing(qmodelingobjectproperty_cast<QUmlTransition *>(outgoing));
}

// SLOTS FOR OWNED ATTRIBUTES [State]

void QUmlStateObject::addConnection(QObject *connection)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addConnection(qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(connection));
}

void QUmlStateObject::removeConnection(QObject *connection)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeConnection(qmodelingobjectproperty_cast<QUmlConnectionPointReference *>(connection));
}

void QUmlStateObject::addConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlStateObject::removeConnectionPoint(QObject *connectionPoint)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeConnectionPoint(qmodelingobjectproperty_cast<QUmlPseudostate *>(connectionPoint));
}

void QUmlStateObject::addDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addDeferrableTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(deferrableTrigger));
}

void QUmlStateObject::removeDeferrableTrigger(QObject *deferrableTrigger)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeDeferrableTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(deferrableTrigger));
}

void QUmlStateObject::setDoActivity(QObject *doActivity)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setDoActivity(qmodelingobjectproperty_cast<QUmlBehavior *>(doActivity));
}

void QUmlStateObject::setEntry(QObject *entry)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setEntry(qmodelingobjectproperty_cast<QUmlBehavior *>(entry));
}

void QUmlStateObject::setExit(QObject *exit)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setExit(qmodelingobjectproperty_cast<QUmlBehavior *>(exit));
}

void QUmlStateObject::setComposite(bool isComposite)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setComposite(isComposite);
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties() << QStringLiteral("composite");
}

void QUmlStateObject::unsetComposite()
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("composite"));
}

void QUmlStateObject::setOrthogonal(bool isOrthogonal)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setOrthogonal(isOrthogonal);
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties() << QStringLiteral("orthogonal");
}

void QUmlStateObject::unsetOrthogonal()
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("orthogonal"));
}

void QUmlStateObject::setSimple(bool isSimple)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setSimple(isSimple);
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties() << QStringLiteral("simple");
}

void QUmlStateObject::unsetSimple()
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("simple"));
}

void QUmlStateObject::setSubmachineState(bool isSubmachineState)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setSubmachineState(isSubmachineState);
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties() << QStringLiteral("submachineState");
}

void QUmlStateObject::unsetSubmachineState()
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("submachineState"));
}

void QUmlStateObject::setRedefinedState(QObject *redefinedState)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setRedefinedState(qmodelingobjectproperty_cast<QUmlState *>(redefinedState));
}

void QUmlStateObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlStateObject::addRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->addRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlStateObject::removeRegion(QObject *region)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->removeRegion(qmodelingobjectproperty_cast<QUmlRegion *>(region));
}

void QUmlStateObject::setStateInvariant(QObject *stateInvariant)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setStateInvariant(qmodelingobjectproperty_cast<QUmlConstraint *>(stateInvariant));
}

void QUmlStateObject::setSubmachine(QObject *submachine)
{
    qmodelingobjectproperty_cast<QUmlState *>(this)->setSubmachine(qmodelingobjectproperty_cast<QUmlStateMachine *>(submachine));
}

QT_END_NAMESPACE

