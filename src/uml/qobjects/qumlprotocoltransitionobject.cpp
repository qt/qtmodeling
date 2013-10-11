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
#include "qumlprotocoltransitionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlProtocolTransition>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

QUmlProtocolTransitionObject::QUmlProtocolTransitionObject(QUmlProtocolTransition *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlProtocolTransitionObject::~QUmlProtocolTransitionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProtocolTransitionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlProtocolTransitionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlProtocolTransitionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlProtocolTransitionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->name();
}

QObject *QUmlProtocolTransitionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlProtocolTransitionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->namespace_()->asQModelingObject();
}

QString QUmlProtocolTransitionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlProtocolTransitionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlProtocolTransitionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->isLeaf();
}

const QSet<QObject *> QUmlProtocolTransitionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlProtocolTransitionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Transition]

QObject *QUmlProtocolTransitionObject::container() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->container()->asQModelingObject();
}

QObject *QUmlProtocolTransitionObject::effect() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->effect())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->effect()->asQModelingObject();
}

QObject *QUmlProtocolTransitionObject::guard() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->guard())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->guard()->asQModelingObject();
}

QtUml::TransitionKind QUmlProtocolTransitionObject::kind() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->kind();
}

QObject *QUmlProtocolTransitionObject::redefinedTransition() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->redefinedTransition())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->redefinedTransition()->asQModelingObject();
}

QObject *QUmlProtocolTransitionObject::redefinitionContext() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->redefinitionContext())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->redefinitionContext()->asQModelingObject();
}

QObject *QUmlProtocolTransitionObject::source() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->source())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->source()->asQModelingObject();
}

QObject *QUmlProtocolTransitionObject::target() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->target())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->target()->asQModelingObject();
}

const QSet<QObject *> QUmlProtocolTransitionObject::triggers() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->triggers())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ProtocolTransition]

QObject *QUmlProtocolTransitionObject::postCondition() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->postCondition())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->postCondition()->asQModelingObject();
}

QObject *QUmlProtocolTransitionObject::preCondition() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->preCondition())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->preCondition()->asQModelingObject();
}

const QSet<QObject *> QUmlProtocolTransitionObject::referred() const
{
    QSet<QObject *> set;
    foreach (QUmlOperation *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->referred())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProtocolTransitionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolTransitionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlProtocolTransitionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlProtocolTransitionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolTransitionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlProtocolTransitionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlProtocolTransitionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlProtocolTransitionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlProtocolTransitionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlProtocolTransitionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlProtocolTransitionObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Transition]

QObject *QUmlProtocolTransitionObject::containingStateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->containingStateMachine()->asQModelingObject();
}

bool QUmlProtocolTransitionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolTransitionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolTransitionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolTransitionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolTransitionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolTransitionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProtocolTransitionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolTransitionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolTransitionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setName(name);
}

void QUmlProtocolTransitionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlProtocolTransitionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlProtocolTransitionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setQualifiedName(qualifiedName);
}

void QUmlProtocolTransitionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlProtocolTransitionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setLeaf(isLeaf);
}

void QUmlProtocolTransitionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlProtocolTransitionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlProtocolTransitionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProtocolTransitionObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolTransitionObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolTransitionObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolTransitionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolTransitionObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolTransitionObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolTransitionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolTransitionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolTransitionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolTransitionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolTransitionObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlProtocolTransitionObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Transition]

void QUmlProtocolTransitionObject::setContainer(QObject *container)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setContainer(qmodelingelementproperty_cast<QUmlRegion *>(container));
}

void QUmlProtocolTransitionObject::setEffect(QObject *effect)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setEffect(qmodelingelementproperty_cast<QUmlBehavior *>(effect));
}

void QUmlProtocolTransitionObject::setGuard(QObject *guard)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setGuard(qmodelingelementproperty_cast<QUmlConstraint *>(guard));
}

void QUmlProtocolTransitionObject::setKind(QtUml::TransitionKind kind)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setKind(kind);
}

void QUmlProtocolTransitionObject::unsetKind()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("kind"));
}

void QUmlProtocolTransitionObject::setRedefinedTransition(QObject *redefinedTransition)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setRedefinedTransition(qmodelingelementproperty_cast<QUmlTransition *>(redefinedTransition));
}

void QUmlProtocolTransitionObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlProtocolTransitionObject::setSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setSource(qmodelingelementproperty_cast<QUmlVertex *>(source));
}

void QUmlProtocolTransitionObject::setTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setTarget(qmodelingelementproperty_cast<QUmlVertex *>(target));
}

void QUmlProtocolTransitionObject::addTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlProtocolTransitionObject::removeTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolTransition]

void QUmlProtocolTransitionObject::setPostCondition(QObject *postCondition)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setPostCondition(qmodelingelementproperty_cast<QUmlConstraint *>(postCondition));
}

void QUmlProtocolTransitionObject::setPreCondition(QObject *preCondition)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->setPreCondition(qmodelingelementproperty_cast<QUmlConstraint *>(preCondition));
}

void QUmlProtocolTransitionObject::addReferred(QObject *referred)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->addReferred(qmodelingelementproperty_cast<QUmlOperation *>(referred));
}

void QUmlProtocolTransitionObject::removeReferred(QObject *referred)
{
    qmodelingelementproperty_cast<QUmlProtocolTransition *>(this)->removeReferred(qmodelingelementproperty_cast<QUmlOperation *>(referred));
}


void QUmlProtocolTransitionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlTransition");
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("container"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("effect"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("guard"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("kind"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedTransition"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContext"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("source"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("target"))));
    d->groupProperties.insert(QStringLiteral("QUmlTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("triggers"))));

    d->propertyGroups << QStringLiteral("QUmlProtocolTransition");
    d->groupProperties.insert(QStringLiteral("QUmlProtocolTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("postCondition"))));
    d->groupProperties.insert(QStringLiteral("QUmlProtocolTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("preCondition"))));
    d->groupProperties.insert(QStringLiteral("QUmlProtocolTransition"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("referred"))));
}

void QUmlProtocolTransitionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, PropertyClassRole, QStringLiteral("QUmlProtocolTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, DocumentationRole, QStringLiteral("Specifies the post condition of the transition which is the condition that should be obtained once the transition is triggered. This post condition is part of the post condition of the operation connected to the transition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, postCondition, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, PropertyClassRole, QStringLiteral("QUmlProtocolTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, DocumentationRole, QStringLiteral("Specifies the precondition of the transition. It specifies the condition that should be verified before triggering the transition. This guard condition added to the source state will be evaluated as part of the precondition of the operation referred by the transition if any."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, SubsettedPropertiesRole, QStringLiteral("Transition-guard"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, preCondition, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, PropertyClassRole, QStringLiteral("QUmlProtocolTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, DocumentationRole, QStringLiteral("This association refers to the associated operation. It is derived from the operation of the call trigger when applicable."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProtocolTransition, referred, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

