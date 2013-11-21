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
#include "qumlpseudostateobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlPseudostate>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlRegion>
#include <QtUml/QUmlState>
#include <QtUml/QUmlStateMachine>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTransition>

QT_BEGIN_NAMESPACE

QUmlPseudostateObject::QUmlPseudostateObject(QUmlPseudostate *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPseudostateObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPseudostateObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlPseudostateObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPseudostateObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlPseudostateObject::name() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->name();
}

QObject *QUmlPseudostateObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlPseudostateObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->namespace_()->asQModelingObject();
}

QString QUmlPseudostateObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPseudostateObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->visibility();
}

// OWNED ATTRIBUTES [Vertex]

QObject *QUmlPseudostateObject::container() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->container())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->container()->asQModelingObject();
}

const QSet<QObject *> QUmlPseudostateObject::incomings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->incomings())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPseudostateObject::outgoings() const
{
    QSet<QObject *> set;
    foreach (QUmlTransition *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->outgoings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Pseudostate]

QtUml::PseudostateKind QUmlPseudostateObject::kind() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->kind();
}

QObject *QUmlPseudostateObject::state() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->state())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->state()->asQModelingObject();
}

QObject *QUmlPseudostateObject::stateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->stateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->stateMachine()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPseudostateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPseudostateObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPseudostateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlPseudostateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlPseudostate *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPseudostateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPseudostateObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->separator();
}

// OPERATIONS [Vertex]

QObject *QUmlPseudostateObject::containingStateMachine() const
{
    if (!qmodelingelementproperty_cast<QUmlPseudostate *>(this)->containingStateMachine())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPseudostate *>(this)->containingStateMachine()->asQModelingObject();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPseudostateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlPseudostateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlPseudostateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlPseudostateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlPseudostateObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPseudostateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlPseudostateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlPseudostateObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlPseudostateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlPseudostateObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlPseudostateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlPseudostateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [Vertex]

void QUmlPseudostateObject::setContainer(QObject *container)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setContainer(qmodelingelementproperty_cast<QUmlRegion *>(container));
    emit containerChanged(this->container());
}

void QUmlPseudostateObject::addIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlPseudostateObject::removeIncoming(QObject *incoming)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeIncoming(qmodelingelementproperty_cast<QUmlTransition *>(incoming));
    emit incomingsChanged(this->incomings());
}

void QUmlPseudostateObject::addOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->addOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

void QUmlPseudostateObject::removeOutgoing(QObject *outgoing)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->removeOutgoing(qmodelingelementproperty_cast<QUmlTransition *>(outgoing));
    emit outgoingsChanged(this->outgoings());
}

// SLOTS FOR OWNED ATTRIBUTES [Pseudostate]

void QUmlPseudostateObject::setKind(QtUml::PseudostateKind kind)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setKind(kind);
    emit kindChanged(this->kind());
}

void QUmlPseudostateObject::unsetKind()
{
    Q_D(QModelingObject);
    setKind(QtUml::PseudostateKindInitial);
    d->modifiedResettableProperties.removeAll(QStringLiteral("kind"));
}

void QUmlPseudostateObject::setState(QObject *state)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setState(qmodelingelementproperty_cast<QUmlState *>(state));
    emit stateChanged(this->state());
}

void QUmlPseudostateObject::setStateMachine(QObject *stateMachine)
{
    qmodelingelementproperty_cast<QUmlPseudostate *>(this)->setStateMachine(qmodelingelementproperty_cast<QUmlStateMachine *>(stateMachine));
    emit stateMachineChanged(this->stateMachine());
}


void QUmlPseudostateObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlVertex");
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("container"))));
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("incomings"))));
    d->groupProperties.insert(QStringLiteral("QUmlVertex"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("outgoings"))));

    d->propertyGroups << QStringLiteral("QUmlPseudostate");
    d->groupProperties.insert(QStringLiteral("QUmlPseudostate"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("kind"))));
    d->groupProperties.insert(QStringLiteral("QUmlPseudostate"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("state"))));
    d->groupProperties.insert(QStringLiteral("QUmlPseudostate"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("stateMachine"))));
}

void QUmlPseudostateObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, PropertyClassRole, QStringLiteral("QUmlVertex"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, PropertyTypeRole, QStringLiteral("QUmlRegion *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, DocumentationRole, QStringLiteral("The region that contains this vertex."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, container, OppositeEndRole, QStringLiteral("Region-subvertex"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, PropertyClassRole, QStringLiteral("QUmlVertex"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, PropertyTypeRole, QStringLiteral("QSet<QUmlTransition *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, DocumentationRole, QStringLiteral("Specifies the transitions entering this vertex."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, incomings, OppositeEndRole, QStringLiteral("Transition-target"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, PropertyClassRole, QStringLiteral("QUmlVertex"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, PropertyTypeRole, QStringLiteral("QSet<QUmlTransition *>"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, DocumentationRole, QStringLiteral("Specifies the transitions departing from this vertex."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVertex, outgoings, OppositeEndRole, QStringLiteral("Transition-source"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, PropertyClassRole, QStringLiteral("QUmlPseudostate"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, PropertyTypeRole, QStringLiteral("QtUml::PseudostateKind"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, DocumentationRole, QStringLiteral("Determines the precise type of the Pseudostate and can be one of: entryPoint, exitPoint, initial, deepHistory, shallowHistory, join, fork, junction, terminate or choice."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, kind, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, PropertyClassRole, QStringLiteral("QUmlPseudostate"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, PropertyTypeRole, QStringLiteral("QUmlState *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, DocumentationRole, QStringLiteral("The State that owns this pseudostate and in which it appears."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, state, OppositeEndRole, QStringLiteral("State-connectionPoint"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, PropertyClassRole, QStringLiteral("QUmlPseudostate"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, PropertyTypeRole, QStringLiteral("QUmlStateMachine *"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, DocumentationRole, QStringLiteral("The StateMachine in which this Pseudostate is defined. This only applies to Pseudostates of the kind entryPoint or exitPoint."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPseudostate, stateMachine, OppositeEndRole, QStringLiteral("StateMachine-connectionPoint"));

}

QT_END_NAMESPACE

