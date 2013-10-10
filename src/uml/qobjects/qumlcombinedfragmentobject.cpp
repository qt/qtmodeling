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
#include "qumlcombinedfragmentobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlCombinedFragment>
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

QUmlCombinedFragmentObject::QUmlCombinedFragmentObject(QUmlCombinedFragment *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCombinedFragmentObject::~QUmlCombinedFragmentObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCombinedFragmentObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCombinedFragmentObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCombinedFragmentObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCombinedFragmentObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCombinedFragmentObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->name();
}

QObject *QUmlCombinedFragmentObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCombinedFragmentObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCombinedFragmentObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCombinedFragmentObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlCombinedFragmentObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCombinedFragmentObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlCombinedFragmentObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlCombinedFragmentObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [CombinedFragment]

const QSet<QObject *> QUmlCombinedFragmentObject::cfragmentGates() const
{
    QSet<QObject *> set;
    foreach (QUmlGate *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->cfragmentGates())
        set.insert(element->asQModelingObject());
    return set;
}

QtUml::InteractionOperatorKind QUmlCombinedFragmentObject::interactionOperator() const
{
    return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->interactionOperator();
}

const QList<QObject *> QUmlCombinedFragmentObject::operands() const
{
    QList<QObject *> list;
    foreach (QUmlInteractionOperand *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->operands())
        list.append(element->asQModelingObject());
    return list;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCombinedFragmentObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCombinedFragmentObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCombinedFragmentObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCombinedFragmentObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCombinedFragmentObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCombinedFragmentObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCombinedFragmentObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCombinedFragmentObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCombinedFragmentObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCombinedFragmentObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCombinedFragmentObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCombinedFragmentObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCombinedFragmentObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCombinedFragmentObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setName(name);
}

void QUmlCombinedFragmentObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCombinedFragmentObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCombinedFragmentObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCombinedFragmentObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlCombinedFragmentObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlCombinedFragmentObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlCombinedFragmentObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlCombinedFragmentObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlCombinedFragmentObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlCombinedFragmentObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [CombinedFragment]

void QUmlCombinedFragmentObject::addCfragmentGate(QObject *cfragmentGate)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->addCfragmentGate(qmodelingelementproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlCombinedFragmentObject::removeCfragmentGate(QObject *cfragmentGate)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->removeCfragmentGate(qmodelingelementproperty_cast<QUmlGate *>(cfragmentGate));
}

void QUmlCombinedFragmentObject::setInteractionOperator(QtUml::InteractionOperatorKind interactionOperator)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->setInteractionOperator(interactionOperator);
}

void QUmlCombinedFragmentObject::unsetInteractionOperator()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("interactionOperator"));
}

void QUmlCombinedFragmentObject::addOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->addOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(operand));
}

void QUmlCombinedFragmentObject::removeOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlCombinedFragment *>(this)->removeOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(operand));
}


void QUmlCombinedFragmentObject::setGroupProperties()
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
}

void QUmlCombinedFragmentObject::setPropertyData()
{
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

}

QT_END_NAMESPACE

