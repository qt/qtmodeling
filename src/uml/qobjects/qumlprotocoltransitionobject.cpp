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

QUmlProtocolTransitionObject::QUmlProtocolTransitionObject(QUmlProtocolTransition *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlProtocolTransitionObject::~QUmlProtocolTransitionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlProtocolTransitionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlProtocolTransitionObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlProtocolTransitionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlProtocolTransitionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->name();
}

QObject *QUmlProtocolTransitionObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->nameExpression()->asQObject();
}

QObject *QUmlProtocolTransitionObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->namespace_()->asQObject();
}

QString QUmlProtocolTransitionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlProtocolTransitionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlProtocolTransitionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->isLeaf();
}

const QSet<QObject *> QUmlProtocolTransitionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlProtocolTransitionObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlProtocolTransitionObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Transition]

QObject *QUmlProtocolTransitionObject::container() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->container())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->container()->asQObject();
}

QObject *QUmlProtocolTransitionObject::effect() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->effect())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->effect()->asQObject();
}

QObject *QUmlProtocolTransitionObject::guard() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->guard())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->guard()->asQObject();
}

QtUml::TransitionKind QUmlProtocolTransitionObject::kind() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->kind();
}

QObject *QUmlProtocolTransitionObject::redefinedTransition() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->redefinedTransition())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->redefinedTransition()->asQObject();
}

QObject *QUmlProtocolTransitionObject::redefinitionContext() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->redefinitionContext())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->redefinitionContext()->asQObject();
}

QObject *QUmlProtocolTransitionObject::source() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->source())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->source()->asQObject();
}

QObject *QUmlProtocolTransitionObject::target() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->target())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->target()->asQObject();
}

const QSet<QObject *> QUmlProtocolTransitionObject::trigger() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->trigger())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ProtocolTransition]

QObject *QUmlProtocolTransitionObject::postCondition() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->postCondition())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->postCondition()->asQObject();
}

QObject *QUmlProtocolTransitionObject::preCondition() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->preCondition())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->preCondition()->asQObject();
}

const QSet<QObject *> QUmlProtocolTransitionObject::referred() const
{
    QSet<QObject *> set;
    foreach (QUmlOperation *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->referred())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlProtocolTransitionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolTransitionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlProtocolTransitionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlProtocolTransitionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolTransitionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlProtocolTransitionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlProtocolTransitionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlProtocolTransitionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlProtocolTransitionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlProtocolTransitionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlProtocolTransitionObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Transition]

QObject *QUmlProtocolTransitionObject::containingStateMachine() const
{
    if (!qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->containingStateMachine()->asQObject();
}

bool QUmlProtocolTransitionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlProtocolTransitionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolTransitionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlProtocolTransitionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolTransitionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlProtocolTransitionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlProtocolTransitionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolTransitionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlProtocolTransitionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setName(name);
}

void QUmlProtocolTransitionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlProtocolTransitionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlProtocolTransitionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setQualifiedName(qualifiedName);
}

void QUmlProtocolTransitionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlProtocolTransitionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlProtocolTransitionObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlProtocolTransitionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlProtocolTransitionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlProtocolTransitionObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolTransitionObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlProtocolTransitionObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolTransitionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlProtocolTransitionObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolTransitionObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlProtocolTransitionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolTransitionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlProtocolTransitionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolTransitionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlProtocolTransitionObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlProtocolTransitionObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Transition]

void QUmlProtocolTransitionObject::setContainer(QObject *container)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setContainer(qmodelingobjectproperty_cast<QUmlRegion *>(container));
}

void QUmlProtocolTransitionObject::setEffect(QObject *effect)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setEffect(qmodelingobjectproperty_cast<QUmlBehavior *>(effect));
}

void QUmlProtocolTransitionObject::setGuard(QObject *guard)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setGuard(qmodelingobjectproperty_cast<QUmlConstraint *>(guard));
}

void QUmlProtocolTransitionObject::setKind(QtUml::TransitionKind kind)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setKind(kind);
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->modifiedResettableProperties() << QStringLiteral("kind");
}

void QUmlProtocolTransitionObject::unsetKind()
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("kind"));
}

void QUmlProtocolTransitionObject::setRedefinedTransition(QObject *redefinedTransition)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setRedefinedTransition(qmodelingobjectproperty_cast<QUmlTransition *>(redefinedTransition));
}

void QUmlProtocolTransitionObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlProtocolTransitionObject::setSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setSource(qmodelingobjectproperty_cast<QUmlVertex *>(source));
}

void QUmlProtocolTransitionObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlVertex *>(target));
}

void QUmlProtocolTransitionObject::addTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlProtocolTransitionObject::removeTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

// SLOTS FOR OWNED ATTRIBUTES [ProtocolTransition]

void QUmlProtocolTransitionObject::setPostCondition(QObject *postCondition)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setPostCondition(qmodelingobjectproperty_cast<QUmlConstraint *>(postCondition));
}

void QUmlProtocolTransitionObject::setPreCondition(QObject *preCondition)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->setPreCondition(qmodelingobjectproperty_cast<QUmlConstraint *>(preCondition));
}

void QUmlProtocolTransitionObject::addReferred(QObject *referred)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->addReferred(qmodelingobjectproperty_cast<QUmlOperation *>(referred));
}

void QUmlProtocolTransitionObject::removeReferred(QObject *referred)
{
    qmodelingobjectproperty_cast<QUmlProtocolTransition *>(this)->removeReferred(qmodelingobjectproperty_cast<QUmlOperation *>(referred));
}

QT_END_NAMESPACE

