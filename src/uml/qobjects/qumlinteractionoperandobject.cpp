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
#include "qumlinteractionoperandobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlElementImport>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionConstraint>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlPackageImport>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlInteractionOperandObject::QUmlInteractionOperandObject(QUmlInteractionOperand *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlInteractionOperandObject::~QUmlInteractionOperandObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInteractionOperandObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionOperandObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInteractionOperandObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlInteractionOperandObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->name();
}

QObject *QUmlInteractionOperandObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlInteractionOperandObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->namespace_()->asQModelingObject();
}

QString QUmlInteractionOperandObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInteractionOperandObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlInteractionOperandObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionOperandObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlInteractionOperandObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlInteractionOperandObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Namespace]

const QSet<QObject *> QUmlInteractionOperandObject::elementImports() const
{
    QSet<QObject *> set;
    foreach (QUmlElementImport *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->elementImports())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::importedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->importedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::members() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->members())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::ownedMembers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->ownedMembers())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::ownedRules() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->ownedRules())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionOperandObject::packageImports() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageImport *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->packageImports())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [InteractionOperand]

const QList<QObject *> QUmlInteractionOperandObject::fragments() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionFragment *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->fragments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlInteractionOperandObject::guard() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->guard())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->guard()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInteractionOperandObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionOperandObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInteractionOperandObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInteractionOperandObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionOperandObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInteractionOperandObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->separator();
}

// OPERATIONS [Namespace]

QSet<QObject *> QUmlInteractionOperandObject::excludeCollisions(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->excludeCollisions(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

QSet<QString> QUmlInteractionOperandObject::getNamesOfMember(QObject *element) const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->getNamesOfMember(qmodelingelementproperty_cast<QUmlNamedElement *>(element));
}

QSet<QObject *> QUmlInteractionOperandObject::importMembers(QSet<QObject *> imps) const
{
    QSet<QUmlPackageableElement *> impsConverted;
    foreach (QObject *object, imps)
        impsConverted.insert(qmodelingelementproperty_cast<QUmlPackageableElement *>(object));
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->importMembers(impsConverted))
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionOperandObject::membersAreDistinguishable() const
{
    return qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->membersAreDistinguishable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInteractionOperandObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionOperandObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionOperandObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionOperandObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionOperandObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInteractionOperandObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionOperandObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionOperandObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setName(name);
}

void QUmlInteractionOperandObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInteractionOperandObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInteractionOperandObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setQualifiedName(qualifiedName);
}

void QUmlInteractionOperandObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlInteractionOperandObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionOperandObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionOperandObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlInteractionOperandObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlInteractionOperandObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlInteractionOperandObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [Namespace]

void QUmlInteractionOperandObject::addElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionOperandObject::removeElementImport(QObject *elementImport)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeElementImport(qmodelingelementproperty_cast<QUmlElementImport *>(elementImport));
}

void QUmlInteractionOperandObject::addImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionOperandObject::removeImportedMember(QObject *importedMember)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeImportedMember(qmodelingelementproperty_cast<QUmlPackageableElement *>(importedMember));
}

void QUmlInteractionOperandObject::addMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionOperandObject::removeMember(QObject *member)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeMember(qmodelingelementproperty_cast<QUmlNamedElement *>(member));
}

void QUmlInteractionOperandObject::addOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionOperandObject::removeOwnedMember(QObject *ownedMember)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedMember(qmodelingelementproperty_cast<QUmlNamedElement *>(ownedMember));
}

void QUmlInteractionOperandObject::addOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionOperandObject::removeOwnedRule(QObject *ownedRule)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeOwnedRule(qmodelingelementproperty_cast<QUmlConstraint *>(ownedRule));
}

void QUmlInteractionOperandObject::addPackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addPackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

void QUmlInteractionOperandObject::removePackageImport(QObject *packageImport)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removePackageImport(qmodelingelementproperty_cast<QUmlPackageImport *>(packageImport));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionOperand]

void QUmlInteractionOperandObject::addFragment(QObject *fragment)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->addFragment(qmodelingelementproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionOperandObject::removeFragment(QObject *fragment)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->removeFragment(qmodelingelementproperty_cast<QUmlInteractionFragment *>(fragment));
}

void QUmlInteractionOperandObject::setGuard(QObject *guard)
{
    qmodelingelementproperty_cast<QUmlInteractionOperand *>(this)->setGuard(qmodelingelementproperty_cast<QUmlInteractionConstraint *>(guard));
}


void QUmlInteractionOperandObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInteractionFragment");
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingInteraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingOperand"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalOrderings"))));

    d->propertyGroups << QStringLiteral("QUmlNamespace");
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("elementImports"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("importedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("members"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedMembers"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedRules"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamespace"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("packageImports"))));

    d->propertyGroups << QStringLiteral("QUmlInteractionOperand");
    d->groupProperties.insert(QStringLiteral("QUmlInteractionOperand"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("fragments"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionOperand"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("guard"))));
}

void QUmlInteractionOperandObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, PropertyClassRole, QStringLiteral("QUmlInteractionOperand"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, DocumentationRole, QStringLiteral("The fragments of the operand."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, SubsettedPropertiesRole, QStringLiteral("Namespace-ownedMember"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, fragments, OppositeEndRole, QStringLiteral("InteractionFragment-enclosingOperand"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, PropertyClassRole, QStringLiteral("QUmlInteractionOperand"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, DocumentationRole, QStringLiteral("Constraint of the operand."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionOperand, guard, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

