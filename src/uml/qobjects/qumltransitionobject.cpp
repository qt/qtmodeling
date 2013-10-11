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
#include "private/qmodelingobject_p.h"

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

QUmlTransitionObject::QUmlTransitionObject(QUmlTransition *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlTransitionObject::~QUmlTransitionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlTransition *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTransitionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTransitionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTransitionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlTransitionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->name();
}

QObject *QUmlTransitionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlTransitionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->namespace_()->asQModelingObject();
}

QString QUmlTransitionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlTransitionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlTransitionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->isLeaf();
}

const QSet<QObject *> QUmlTransitionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlTransitionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTransitionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Transition]

QObject *QUmlTransitionObject::container() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->container()->asQModelingObject();
}

QObject *QUmlTransitionObject::effect() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->effect())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->effect()->asQModelingObject();
}

QObject *QUmlTransitionObject::guard() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->guard())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->guard()->asQModelingObject();
}

QtUml::TransitionKind QUmlTransitionObject::kind() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->kind();
}

QObject *QUmlTransitionObject::redefinedTransition() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->redefinedTransition())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->redefinedTransition()->asQModelingObject();
}

QObject *QUmlTransitionObject::redefinitionContext() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->redefinitionContext())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->redefinitionContext()->asQModelingObject();
}

QObject *QUmlTransitionObject::source() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->source())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->source()->asQModelingObject();
}

QObject *QUmlTransitionObject::target() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->target())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->target()->asQModelingObject();
}

const QSet<QObject *> QUmlTransitionObject::triggers() const
{
    QSet<QObject *> set;
    foreach (QUmlTrigger *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->triggers())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTransitionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTransitionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTransitionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlTransitionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTransitionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTransitionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->separator();
}

// OPERATIONS [RedefinableElement]

bool QUmlTransitionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlTransitionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlTransitionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlTransitionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlTransition *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTransitionObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Transition]

QObject *QUmlTransitionObject::containingStateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlTransition *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTransition *>(this)->containingStateMachine()->asQModelingObject();
}

bool QUmlTransitionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlTransition *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTransitionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTransitionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTransitionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTransitionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTransitionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTransitionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTransitionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTransitionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setName(name);
}

void QUmlTransitionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTransitionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTransitionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setQualifiedName(qualifiedName);
}

void QUmlTransitionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlTransitionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setLeaf(isLeaf);
}

void QUmlTransitionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlTransitionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlTransitionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlTransitionObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlTransitionObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlTransitionObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlTransitionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlTransitionObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlTransitionObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlTransitionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlTransitionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlTransitionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlTransitionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlTransitionObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlTransitionObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Transition]

void QUmlTransitionObject::setContainer(QObject *container)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setContainer(qmodelingelementproperty_cast<QUmlRegion *>(container));
}

void QUmlTransitionObject::setEffect(QObject *effect)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setEffect(qmodelingelementproperty_cast<QUmlBehavior *>(effect));
}

void QUmlTransitionObject::setGuard(QObject *guard)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setGuard(qmodelingelementproperty_cast<QUmlConstraint *>(guard));
}

void QUmlTransitionObject::setKind(QtUml::TransitionKind kind)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setKind(kind);
}

void QUmlTransitionObject::unsetKind()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("kind"));
}

void QUmlTransitionObject::setRedefinedTransition(QObject *redefinedTransition)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setRedefinedTransition(qmodelingelementproperty_cast<QUmlTransition *>(redefinedTransition));
}

void QUmlTransitionObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlTransitionObject::setSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setSource(qmodelingelementproperty_cast<QUmlVertex *>(source));
}

void QUmlTransitionObject::setTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->setTarget(qmodelingelementproperty_cast<QUmlVertex *>(target));
}

void QUmlTransitionObject::addTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->addTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}

void QUmlTransitionObject::removeTrigger(QObject *trigger)
{
    qmodelingelementproperty_cast<QUmlTransition *>(this)->removeTrigger(qmodelingelementproperty_cast<QUmlTrigger *>(trigger));
}


void QUmlTransitionObject::setGroupProperties()
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
}

void QUmlTransitionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, DocumentationRole, QStringLiteral("Designates the region that owns this transition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, container, OppositeEndRole, QStringLiteral("Region-transition"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, DocumentationRole, QStringLiteral("Specifies an optional behavior to be performed when the transition fires."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, effect, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, DocumentationRole, QStringLiteral("A guard is a constraint that provides a fine-grained control over the firing of the transition. The guard is evaluated when an event occurrence is dispatched by the state machine. If the guard is true at that time, the transition may be enabled, otherwise, it is disabled. Guards should be pure expressions without side effects. Guard expressions with side effects are ill formed."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedRule"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, guard, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, DocumentationRole, QStringLiteral("Indicates the precise type of the transition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, kind, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, DocumentationRole, QStringLiteral("The transition that is redefined by this transition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinedTransition, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, DocumentationRole, QStringLiteral("References the classifier in which context this element may be redefined."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, RedefinedPropertiesRole, QStringLiteral("RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, redefinitionContext, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, DocumentationRole, QStringLiteral("Designates the originating vertex (state or pseudostate) of the transition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, source, OppositeEndRole, QStringLiteral("Vertex-outgoing"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, DocumentationRole, QStringLiteral("Designates the target vertex that is reached when the transition is taken."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, target, OppositeEndRole, QStringLiteral("Vertex-incoming"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, PropertyClassRole, QStringLiteral("QUmlTransition"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, DocumentationRole, QStringLiteral("Specifies the triggers that may fire the transition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTransition, triggers, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

