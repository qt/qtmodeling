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
#include "qumlbehaviorexecutionspecificationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlBehaviorExecutionSpecification>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlBehaviorExecutionSpecificationObject::QUmlBehaviorExecutionSpecificationObject(QUmlBehaviorExecutionSpecification *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlBehaviorExecutionSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlBehaviorExecutionSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->name();
}

QObject *QUmlBehaviorExecutionSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlBehaviorExecutionSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlBehaviorExecutionSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlBehaviorExecutionSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExecutionSpecification]

QObject *QUmlBehaviorExecutionSpecificationObject::finish() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->finish())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->finish()->asQModelingObject();
}

QObject *QUmlBehaviorExecutionSpecificationObject::start() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->start())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->start()->asQModelingObject();
}

// OWNED ATTRIBUTES [BehaviorExecutionSpecification]

QObject *QUmlBehaviorExecutionSpecificationObject::behavior() const
{
    if (!qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->behavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->behavior()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlBehaviorExecutionSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlBehaviorExecutionSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlBehaviorExecutionSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlBehaviorExecutionSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlBehaviorExecutionSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlBehaviorExecutionSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlBehaviorExecutionSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlBehaviorExecutionSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlBehaviorExecutionSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlBehaviorExecutionSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlBehaviorExecutionSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlBehaviorExecutionSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlBehaviorExecutionSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlBehaviorExecutionSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlBehaviorExecutionSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlBehaviorExecutionSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlBehaviorExecutionSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlBehaviorExecutionSpecificationObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
    emit coveredChanged(this->covered());
}

void QUmlBehaviorExecutionSpecificationObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
    emit coveredChanged(this->covered());
}

void QUmlBehaviorExecutionSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
    emit enclosingInteractionChanged(this->enclosingInteraction());
}

void QUmlBehaviorExecutionSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
    emit enclosingOperandChanged(this->enclosingOperand());
}

void QUmlBehaviorExecutionSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
    emit generalOrderingsChanged(this->generalOrderings());
}

void QUmlBehaviorExecutionSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
    emit generalOrderingsChanged(this->generalOrderings());
}

// SLOTS FOR OWNED ATTRIBUTES [ExecutionSpecification]

void QUmlBehaviorExecutionSpecificationObject::setFinish(QObject *finish)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setFinish(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(finish));
    emit finishChanged(this->finish());
}

void QUmlBehaviorExecutionSpecificationObject::setStart(QObject *start)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setStart(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(start));
    emit startChanged(this->start());
}

// SLOTS FOR OWNED ATTRIBUTES [BehaviorExecutionSpecification]

void QUmlBehaviorExecutionSpecificationObject::setBehavior(QObject *behavior)
{
    qmodelingelementproperty_cast<QUmlBehaviorExecutionSpecification *>(this)->setBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(behavior));
    emit behaviorChanged(this->behavior());
}


void QUmlBehaviorExecutionSpecificationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlExecutionSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlExecutionSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("finish"))));
    d->groupProperties.insert(QStringLiteral("QUmlExecutionSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("start"))));

    d->propertyGroups << QStringLiteral("QUmlBehaviorExecutionSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlBehaviorExecutionSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("behavior"))));
}

void QUmlBehaviorExecutionSpecificationObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, PropertyClassRole, QStringLiteral("QUmlExecutionSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, PropertyTypeRole, QStringLiteral("QUmlOccurrenceSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, DocumentationRole, QStringLiteral("References the OccurrenceSpecification that designates the finish of the Action or Behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, finish, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, PropertyClassRole, QStringLiteral("QUmlExecutionSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, PropertyTypeRole, QStringLiteral("QUmlOccurrenceSpecification *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, DocumentationRole, QStringLiteral("References the OccurrenceSpecification that designates the start of the Action or Behavior"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExecutionSpecification, start, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, PropertyClassRole, QStringLiteral("QUmlBehaviorExecutionSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, PropertyTypeRole, QStringLiteral("QUmlBehavior *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, DocumentationRole, QStringLiteral("Behavior whose execution is occurring."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlBehaviorExecutionSpecification, behavior, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

