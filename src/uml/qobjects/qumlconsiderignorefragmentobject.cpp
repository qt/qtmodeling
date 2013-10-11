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
#include "qumlconsiderignorefragmentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlConsiderIgnoreFragment>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGate>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlConsiderIgnoreFragmentObject::QUmlConsiderIgnoreFragmentObject(QUmlConsiderIgnoreFragment *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlConsiderIgnoreFragmentObject::~QUmlConsiderIgnoreFragmentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConsiderIgnoreFragmentObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlConsiderIgnoreFragmentObject::name() const
{
    return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->name();
}

QObject *QUmlConsiderIgnoreFragmentObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlConsiderIgnoreFragmentObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->namespace_()->asQModelingObject();
}

QString QUmlConsiderIgnoreFragmentObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlConsiderIgnoreFragmentObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlConsiderIgnoreFragmentObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlConsiderIgnoreFragmentObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [CombinedFragment]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::cfragmentGates() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->cfragmentGates())
        set.insert(element->asQModelingObject());
    return set;
}

QtUml::InteractionOperatorKind QUmlConsiderIgnoreFragmentObject::interactionOperator() const
{
    return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->interactionOperator();
}

const QList<QObject *> QUmlConsiderIgnoreFragmentObject::operands() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionOperand *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->operands())
        list.append(element->asQModelingObject());
    return list;
}

// OWNED ATTRIBUTES [ConsiderIgnoreFragment]

const QSet<QObject *> QUmlConsiderIgnoreFragmentObject::messages() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->messages())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlConsiderIgnoreFragmentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConsiderIgnoreFragmentObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlConsiderIgnoreFragmentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlConsiderIgnoreFragmentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlConsiderIgnoreFragmentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlConsiderIgnoreFragmentObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlConsiderIgnoreFragmentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConsiderIgnoreFragmentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlConsiderIgnoreFragmentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConsiderIgnoreFragmentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlConsiderIgnoreFragmentObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlConsiderIgnoreFragmentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConsiderIgnoreFragmentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlConsiderIgnoreFragmentObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setName(name);
}

void QUmlConsiderIgnoreFragmentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlConsiderIgnoreFragmentObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlConsiderIgnoreFragmentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setQualifiedName(qualifiedName);
}

void QUmlConsiderIgnoreFragmentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlConsiderIgnoreFragmentObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlConsiderIgnoreFragmentObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlConsiderIgnoreFragmentObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlConsiderIgnoreFragmentObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlConsiderIgnoreFragmentObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlConsiderIgnoreFragmentObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [CombinedFragment]

void QUmlConsiderIgnoreFragmentObject::addCfragmentGate(QObject *cfragmentGate)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addCfragmentGate(qmodelingelementproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlConsiderIgnoreFragmentObject::removeCfragmentGate(QObject *cfragmentGate)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeCfragmentGate(qmodelingelementproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlConsiderIgnoreFragmentObject::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->setInteractionOperator(interactionOperator);
}

void QUmlConsiderIgnoreFragmentObject::unsetInteractionOperator()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("interactionOperator"));
}

void QUmlConsiderIgnoreFragmentObject::addOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(operand));
}

void QUmlConsiderIgnoreFragmentObject::removeOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(operand));
}

// SLOTS FOR OWNED ATTRIBUTES [ConsiderIgnoreFragment]

void QUmlConsiderIgnoreFragmentObject::addMessage(QObject *message)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->addMessage(qmodelingelementproperty_cast<QUmlNamedElement *>(message));
}

void QUmlConsiderIgnoreFragmentObject::removeMessage(QObject *message)
{
    qmodelingelementproperty_cast<QUmlConsiderIgnoreFragment *>(this)->removeMessage(qmodelingelementproperty_cast<QUmlNamedElement *>(message));
}


void QUmlConsiderIgnoreFragmentObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlCombinedFragment");
    d->groupProperties.insert(QStringLiteral("QUmlCombinedFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("cfragmentGates"))));
    d->groupProperties.insert(QStringLiteral("QUmlCombinedFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interactionOperator"))));
    d->groupProperties.insert(QStringLiteral("QUmlCombinedFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("operands"))));

    d->propertyGroups << QStringLiteral("QUmlConsiderIgnoreFragment");
    d->groupProperties.insert(QStringLiteral("QUmlConsiderIgnoreFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("messages"))));
}

void QUmlConsiderIgnoreFragmentObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, DocumentationRole, QStringLiteral("The Comments owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedComments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, DocumentationRole, QStringLiteral("The Elements owned by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, ownedElements, OppositeEndRole, QStringLiteral("Element-owner"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, PropertyClassRole, QStringLiteral("QUmlElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, DocumentationRole, QStringLiteral("The Element that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlElement, owner, OppositeEndRole, QStringLiteral("Element-ownedElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, DocumentationRole, QStringLiteral("Indicates the dependencies that reference the client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, SubsettedPropertiesRole, QStringLiteral("A_source_directedRelationship-directedRelationship"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, clientDependencies, OppositeEndRole, QStringLiteral("Dependency-client"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, DocumentationRole, QStringLiteral("The name of the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, name, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, DocumentationRole, QStringLiteral("The string expression used to define the name of this named element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, nameExpression, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, DocumentationRole, QStringLiteral("Specifies the namespace that owns the NamedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, namespace_, OppositeEndRole, QStringLiteral("Namespace-ownedMember"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, DocumentationRole, QStringLiteral("A name which allows the NamedElement to be identified within a hierarchy of nested Namespaces. It is constructed from the names of the containing namespaces starting at the root of the hierarchy and ending with the name of the NamedElement itself."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, qualifiedName, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, PropertyClassRole, QStringLiteral("QUmlNamedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, DocumentationRole, QStringLiteral("Determines where the NamedElement appears within different Namespaces within the overall model, and its accessibility."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlNamedElement, visibility, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, DocumentationRole, QStringLiteral("References the Lifelines that the InteractionFragment involves."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, covered, OppositeEndRole, QStringLiteral("Lifeline-coveredBy"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, DocumentationRole, QStringLiteral("The Interaction enclosing this InteractionFragment."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingInteraction, OppositeEndRole, QStringLiteral("Interaction-fragment"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, DocumentationRole, QStringLiteral("The operand enclosing this InteractionFragment (they may nest recursively)"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, enclosingOperand, OppositeEndRole, QStringLiteral("InteractionOperand-fragment"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, PropertyClassRole, QStringLiteral("QUmlInteractionFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, DocumentationRole, QStringLiteral("The general ordering relationships contained in this fragment."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionFragment, generalOrderings, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, PropertyClassRole, QStringLiteral("QUmlCombinedFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, DocumentationRole, QStringLiteral("Specifies the gates that form the interface between this CombinedFragment and its surroundings"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, cfragmentGates, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, PropertyClassRole, QStringLiteral("QUmlCombinedFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, DocumentationRole, QStringLiteral("Specifies the operation which defines the semantics of this combination of InteractionFragments."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, interactionOperator, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, PropertyClassRole, QStringLiteral("QUmlCombinedFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, DocumentationRole, QStringLiteral("The set of operands of the combined fragment."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCombinedFragment, operands, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, PropertyClassRole, QStringLiteral("QUmlConsiderIgnoreFragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, DocumentationRole, QStringLiteral("The set of messages that apply to this fragment"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConsiderIgnoreFragment, messages, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

