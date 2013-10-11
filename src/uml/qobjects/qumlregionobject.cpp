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
#include "qumlregionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlRegion>
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
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>
#include <QtUml/QUmlVertex>

QT_BEGIN_NAMESPACE

QUmlRegionObject::QUmlRegionObject(QUmlRegion *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlRegionObject::~QUmlRegionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlRegion *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlRegionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlRegionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlRegionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlRegionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->name();
}

QObject *QUmlRegionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlRegionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->namespace_()->asQModelingObject();
}

QString QUmlRegionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlRegionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->visibility();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlRegionObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->isLeaf();
}

const QSet<QObject *> QUmlRegionObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlRegionObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Region]

QObject *QUmlRegionObject::extendedRegion() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->extendedRegion())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->extendedRegion()->asQModelingObject();
}

QObject *QUmlRegionObject::redefinitionContext() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->redefinitionContext())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->redefinitionContext()->asQModelingObject();
}

QObject *QUmlRegionObject::state() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->state())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->state()->asQModelingObject();
}

QObject *QUmlRegionObject::stateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->stateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->stateMachine()->asQModelingObject();
}

const QSet<QObject *> QUmlRegionObject::subvertices() const
{
    QSet<QObject *> set;
    foreach (QUmlVertex *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->subvertices())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlRegionObject::transitions() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->transitions())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlRegionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRegionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlRegionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlRegionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRegionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlRegionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->separator();
}

// OPERATIONS [RedefinableElement]
// OPERATIONS [Namespace]

QSet<QObject *> QUmlRegionObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlRegionObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlRegionObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlRegion *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlRegionObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->membersAreDistinguishable();
}

// OPERATIONS [Region]

bool QUmlRegionObject::belongsToPSM() const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->belongsToPSM();
}

QObject *QUmlRegionObject::containingStateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlRegion *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlRegion *>(this)->containingStateMachine()->asQModelingObject();
}

bool QUmlRegionObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlRegionObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlRegion *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRegion *>(redefined));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlRegionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRegionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlRegionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRegionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlRegionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlRegionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRegionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlRegionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setName(name);
}

void QUmlRegionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlRegionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlRegionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setQualifiedName(qualifiedName);
}

void QUmlRegionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlRegionObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setLeaf(isLeaf);
}

void QUmlRegionObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlRegionObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlRegionObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}
// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlRegionObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlRegionObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlRegionObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlRegionObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlRegionObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlRegionObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlRegionObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlRegionObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlRegionObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlRegionObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlRegionObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlRegionObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [Region]

void QUmlRegionObject::setExtendedRegion(QObject *extendedRegion)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setExtendedRegion(qmodelingelementproperty_cast<QUmlRegion *>(extendedRegion));
}

void QUmlRegionObject::setRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlRegionObject::setState(QObject *state)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setState(qmodelingelementproperty_cast<QUmlState *>(state));
}

void QUmlRegionObject::setStateMachine(QObject *stateMachine)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->setStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(stateMachine));
}

void QUmlRegionObject::addSubvertex(QObject *subvertex)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addSubvertex(qmodelingelementproperty_cast<QUmlVertex *>(subvertex));
}

void QUmlRegionObject::removeSubvertex(QObject *subvertex)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeSubvertex(qmodelingelementproperty_cast<QUmlVertex *>(subvertex));
}

void QUmlRegionObject::addTransition(QObject *transition)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->addTransition(qmodelingelementproperty_cast<QUmlTransition *>(transition));
}

void QUmlRegionObject::removeTransition(QObject *transition)
{
    qmodelingelementproperty_cast<QUmlRegion *>(this)->removeTransition(qmodelingelementproperty_cast<QUmlTransition *>(transition));
}


void QUmlRegionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlRegion");
    d->groupProperties.insert(QStringLiteral("QUmlRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("extendedRegion"))));
    d->groupProperties.insert(QStringLiteral("QUmlRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContext"))));
    d->groupProperties.insert(QStringLiteral("QUmlRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("state"))));
    d->groupProperties.insert(QStringLiteral("QUmlRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("stateMachine"))));
    d->groupProperties.insert(QStringLiteral("QUmlRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subvertices"))));
    d->groupProperties.insert(QStringLiteral("QUmlRegion"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("transitions"))));
}

void QUmlRegionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, PropertyClassRole, QStringLiteral("QUmlRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, DocumentationRole, QStringLiteral("The region of which this region is an extension."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, extendedRegion, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, PropertyClassRole, QStringLiteral("QUmlRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, DocumentationRole, QStringLiteral("References the classifier in which context this element may be redefined."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, RedefinedPropertiesRole, QStringLiteral("RedefinableElement-redefinitionContext"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, redefinitionContext, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, PropertyClassRole, QStringLiteral("QUmlRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, DocumentationRole, QStringLiteral("The State that owns the Region. If a Region is owned by a State, then it cannot also be owned by a StateMachine."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, state, OppositeEndRole, QStringLiteral("State-region"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, PropertyClassRole, QStringLiteral("QUmlRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, DocumentationRole, QStringLiteral("The StateMachine that owns the Region. If a Region is owned by a StateMachine, then it cannot also be owned by a State."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, stateMachine, OppositeEndRole, QStringLiteral("StateMachine-region"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, PropertyClassRole, QStringLiteral("QUmlRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, DocumentationRole, QStringLiteral("The set of vertices that are owned by this region."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, subvertices, OppositeEndRole, QStringLiteral("Vertex-container"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, PropertyClassRole, QStringLiteral("QUmlRegion"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, DocumentationRole, QStringLiteral("The set of transitions owned by the region."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRegion, transitions, OppositeEndRole, QStringLiteral("Transition-container"));

}

QT_END_NAMESPACE

