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
#include "qumloccurrencespecificationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlOccurrenceSpecificationObject::QUmlOccurrenceSpecificationObject(QUmlOccurrenceSpecification *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOccurrenceSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOccurrenceSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOccurrenceSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlOccurrenceSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->name();
}

QObject *QUmlOccurrenceSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlOccurrenceSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlOccurrenceSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlOccurrenceSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlOccurrenceSpecificationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlOccurrenceSpecificationObject::covered() const
{
    if (!qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->covered())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->covered()->asQModelingObject();
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::toAfters() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->toAfters())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOccurrenceSpecificationObject::toBefores() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->toBefores())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOccurrenceSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
    emit enclosingInteractionChanged(this->enclosingInteraction());
}

void QUmlOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
    emit enclosingOperandChanged(this->enclosingOperand());
}

void QUmlOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
    emit generalOrderingsChanged(this->generalOrderings());
}

void QUmlOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
    emit generalOrderingsChanged(this->generalOrderings());
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
    emit coveredChanged(this->covered());
}

void QUmlOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
    emit toAftersChanged(this->toAfters());
}

void QUmlOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
    emit toAftersChanged(this->toAfters());
}

void QUmlOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
    emit toBeforesChanged(this->toBefores());
}

void QUmlOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
    emit toBeforesChanged(this->toBefores());
}


void QUmlOccurrenceSpecificationObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingInteraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingOperand"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalOrderings"))));

    d->propertyGroups << QStringLiteral("QUmlOccurrenceSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("toAfters"))));
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("toBefores"))));
}

void QUmlOccurrenceSpecificationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyTypeRole, QStringLiteral("QSet<QUmlComment *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyTypeRole, QStringLiteral("QSet<QUmlElement *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyTypeRole, QStringLiteral("QUmlElement *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyTypeRole, QStringLiteral("QSet<QUmlDependency *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyTypeRole, QStringLiteral("QUmlStringExpression *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyTypeRole, QStringLiteral("QUmlNamespace *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyTypeRole, QStringLiteral("QString"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyTypeRole, QStringLiteral("QtUml::VisibilityKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, PropertyTypeRole, QStringLiteral("QSet<QUmlLifeline *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, DocumentationRole, QStringLiteral("References the Lifelines that the InteractionFragment involves."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, OppositeEndRole, QStringLiteral("Lifeline-coveredBy"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, PropertyTypeRole, QStringLiteral("QUmlInteraction *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, DocumentationRole, QStringLiteral("The Interaction enclosing this InteractionFragment."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, OppositeEndRole, QStringLiteral("Interaction-fragment"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, PropertyTypeRole, QStringLiteral("QUmlInteractionOperand *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, DocumentationRole, QStringLiteral("The operand enclosing this InteractionFragment (they may nest recursively)"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, OppositeEndRole, QStringLiteral("InteractionOperand-fragment"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, PropertyTypeRole, QStringLiteral("QSet<QUmlGeneralOrdering *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, DocumentationRole, QStringLiteral("The general ordering relationships contained in this fragment."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, PropertyClassRole, QStringLiteral("QUmlOccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, PropertyTypeRole, QStringLiteral("QUmlLifeline *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, DocumentationRole, QStringLiteral("References the Lifeline on which the OccurrenceSpecification appears."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, RedefinedPropertiesRole, QStringLiteral("InteractionFragment-covered"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, PropertyClassRole, QStringLiteral("QUmlOccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, PropertyTypeRole, QStringLiteral("QSet<QUmlGeneralOrdering *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, DocumentationRole, QStringLiteral("References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, OppositeEndRole, QStringLiteral("GeneralOrdering-before"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, PropertyClassRole, QStringLiteral("QUmlOccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, PropertyTypeRole, QStringLiteral("QSet<QUmlGeneralOrdering *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, DocumentationRole, QStringLiteral("References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, OppositeEndRole, QStringLiteral("GeneralOrdering-after"));

}

QT_END_NAMESPACE

