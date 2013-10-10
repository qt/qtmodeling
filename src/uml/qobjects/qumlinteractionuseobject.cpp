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
#include "qumlinteractionuseobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInteractionUse>
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
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlInteractionUseObject::QUmlInteractionUseObject(QUmlInteractionUse *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlInteractionUseObject::~QUmlInteractionUseObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlInteractionUseObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlInteractionUseObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionUseObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlInteractionUseObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlInteractionUseObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->name();
}

QObject *QUmlInteractionUseObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlInteractionUseObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->namespace_()->asQModelingObject();
}

QString QUmlInteractionUseObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlInteractionUseObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlInteractionUseObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlInteractionUseObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlInteractionUseObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlInteractionUseObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [InteractionUse]

const QSet<QObject *> QUmlInteractionUseObject::actualGates() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->actualGates())
        set.insert(element->asQModelingObject());
    return set;
}

const QList<QObject *> QUmlInteractionUseObject::arguments() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->arguments())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlInteractionUseObject::refersTo() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->refersTo())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->refersTo()->asQModelingObject();
}

QObject *QUmlInteractionUseObject::returnValue() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->returnValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->returnValue()->asQModelingObject();
}

QObject *QUmlInteractionUseObject::returnValueRecipient() const
{
    if (!qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->returnValueRecipient())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->returnValueRecipient()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlInteractionUseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionUseObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlInteractionUseObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlInteractionUseObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlInteractionUseObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlInteractionUseObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlInteractionUseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionUseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlInteractionUseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionUseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlInteractionUseObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlInteractionUseObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionUseObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlInteractionUseObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setName(name);
}

void QUmlInteractionUseObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlInteractionUseObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlInteractionUseObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setQualifiedName(qualifiedName);
}

void QUmlInteractionUseObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlInteractionUseObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionUseObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlInteractionUseObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlInteractionUseObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlInteractionUseObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlInteractionUseObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionUse]

void QUmlInteractionUseObject::addActualGate(QObject *actualGate)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->addActualGate(qmodelingelementproperty_cast<QUmlGate *>(actualGate));
}

void QUmlInteractionUseObject::removeActualGate(QObject *actualGate)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->removeActualGate(qmodelingelementproperty_cast<QUmlGate *>(actualGate));
}

void QUmlInteractionUseObject::addArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->addArgument(qmodelingelementproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlInteractionUseObject::removeArgument(QObject *argument)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->removeArgument(qmodelingelementproperty_cast<QUmlValueSpecification *>(argument));
}

void QUmlInteractionUseObject::setRefersTo(QObject *refersTo)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setRefersTo(qmodelingelementproperty_cast<QUmlInteraction *>(refersTo));
}

void QUmlInteractionUseObject::setReturnValue(QObject *returnValue)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setReturnValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(returnValue));
}

void QUmlInteractionUseObject::setReturnValueRecipient(QObject *returnValueRecipient)
{
    qmodelingelementproperty_cast<QUmlInteractionUse *>(this)->setReturnValueRecipient(qmodelingelementproperty_cast<QUmlProperty *>(returnValueRecipient));
}


void QUmlInteractionUseObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInteractionUse");
    d->groupProperties.insert(QStringLiteral("QUmlInteractionUse"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("actualGates"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionUse"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("arguments"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionUse"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("refersTo"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionUse"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("returnValue"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionUse"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("returnValueRecipient"))));
}

void QUmlInteractionUseObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, PropertyClassRole, QStringLiteral("QUmlInteractionUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, DocumentationRole, QStringLiteral("The actual gates of the InteractionUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, actualGates, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, PropertyClassRole, QStringLiteral("QUmlInteractionUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, DocumentationRole, QStringLiteral("The actual arguments of the Interaction"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, arguments, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, PropertyClassRole, QStringLiteral("QUmlInteractionUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, DocumentationRole, QStringLiteral("Refers to the Interaction that defines its meaning"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, refersTo, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, PropertyClassRole, QStringLiteral("QUmlInteractionUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, DocumentationRole, QStringLiteral("The value of the executed Interaction."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, PropertyClassRole, QStringLiteral("QUmlInteractionUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, DocumentationRole, QStringLiteral("The recipient of the return value."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInteractionUse, returnValueRecipient, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

