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
#include "qumltransitionobject_p.h"

#include <QtUml/QUmlTransition>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTrigger>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

QUmlTransitionObject::QUmlTransitionObject(QUmlTransition *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlTransitionObject::~QUmlTransitionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlTransition *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTransitionObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlTransitionObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTransitionObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlTransitionObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->name();
}

QObject *QUmlTransitionObject::nameExpression() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->nameExpression()->asQObject();
}

QObject *QUmlTransitionObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->namespace_()->asQObject();
}

QString QUmlTransitionObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlTransitionObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlTransitionObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->isLeaf();
}

const QSet<QObject *> QUmlTransitionObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}
// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlTransitionObject::elementImport() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->elementImport())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::importedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->importedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::member() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->member())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::ownedMember() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->ownedMember())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::ownedRule() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->ownedRule())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::packageImport() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->packageImport())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Transition]

QObject *QUmlTransitionObject::container() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->container()->asQObject();
}

QObject *QUmlTransitionObject::effect() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->effect()->asQObject();
}

QObject *QUmlTransitionObject::guard() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->guard()->asQObject();
}

QtUml::TransitionKind QUmlTransitionObject::kind() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->kind();
}

QObject *QUmlTransitionObject::redefinedTransition() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->redefinedTransition()->asQObject();
}

QObject *QUmlTransitionObject::redefinitionContext() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->redefinitionContext()->asQObject();
}

QObject *QUmlTransitionObject::source() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->source()->asQObject();
}

QObject *QUmlTransitionObject::target() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->target()->asQObject();
}

const QSet<QObject *> QUmlTransitionObject::trigger() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->trigger())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTransitionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTransitionObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTransitionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlTransitionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlTransitionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTransitionObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlTransitionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlTransitionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQObject());
    return set;
}

QSet<QString> QUmlTransitionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->getNamesOfMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlTransitionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingobjectproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlTransition *>(this)->importMembers(impsConverted))
        set.insert(element->asQObject());
    return set;
}

bool QUmlTransitionObject::membersAreDistinguishable() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Transition]

QObject *QUmlTransitionObject::containingStateMachine() const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->containingStateMachine()->asQObject();
}

bool QUmlTransitionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlTransition *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTransitionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTransitionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTransitionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTransitionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTransitionObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTransitionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTransitionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTransitionObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setName(name);
}
    
void QUmlTransitionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTransitionObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTransitionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlTransitionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlTransitionObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setLeaf(isLeaf);
}
    
void QUmlTransitionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlTransitionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlTransitionObject::addElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlTransitionObject::removeElementImport(QObject *elementImport)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeElementImport(qmodelingobjectproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlTransitionObject::addImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlTransitionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeImportedMember(qmodelingobjectproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlTransitionObject::addMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlTransitionObject::removeMember(QObject *member)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(member));
}

void QUmlTransitionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlTransitionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeOwnedMember(qmodelingobjectproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlTransitionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlTransitionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeOwnedRule(qmodelingobjectproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlTransitionObject::addPackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addPackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlTransitionObject::removePackageImport(QObject *packageImport)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removePackageImport(qmodelingobjectproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Transition]

void QUmlTransitionObject::setContainer(QObject *container)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setContainer(qmodelingobjectproperty_cast<QUmlRegion *>(container));
}

void QUmlTransitionObject::setEffect(QObject *effect)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setEffect(qmodelingobjectproperty_cast<QUmlBehavior *>(effect));
}

void QUmlTransitionObject::setGuard(QObject *guard)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setGuard(qmodelingobjectproperty_cast<QUmlConstraint *>(guard));
}

void QUmlTransitionObject::setKind(QtUml::TransitionKind kind)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setKind(kind);
}
    
void QUmlTransitionObject::setRedefinedTransition(QObject *redefinedTransition)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setRedefinedTransition(qmodelingobjectproperty_cast<QUmlTransition *>(redefinedTransition));
}

void QUmlTransitionObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlTransitionObject::setSource(QObject *source)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setSource(qmodelingobjectproperty_cast<QUmlVertex *>(source));
}

void QUmlTransitionObject::setTarget(QObject *target)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->setTarget(qmodelingobjectproperty_cast<QUmlVertex *>(target));
}

void QUmlTransitionObject::addTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->addTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlTransitionObject::removeTrigger(QObject *trigger)
{
    qmodelingobjectproperty_cast<QUmlTransition *>(this)->removeTrigger(qmodelingobjectproperty_cast<QUmlTrigger *>(trigger));
}

QT_END_NAMESPACE

