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
#include "qumlstateinvariantobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlStateInvariant>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
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

QUmlStateInvariantObject::QUmlStateInvariantObject(QUmlStateInvariant *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlStateInvariantObject::~QUmlStateInvariantObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStateInvariantObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStateInvariantObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStateInvariantObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStateInvariantObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlStateInvariantObject::name() const
{
    return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->name();
}

QObject *QUmlStateInvariantObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlStateInvariantObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->namespace_()->asQModelingObject();
}

QString QUmlStateInvariantObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlStateInvariantObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlStateInvariantObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlStateInvariantObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlStateInvariantObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StateInvariant]

QObject *QUmlStateInvariantObject::covered() const
{
    if (!qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->covered())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->covered()->asQModelingObject();
}

QObject *QUmlStateInvariantObject::invariant() const
{
    if (!qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->invariant())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->invariant()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStateInvariantObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateInvariantObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStateInvariantObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStateInvariantObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStateInvariantObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStateInvariantObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStateInvariantObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateInvariantObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStateInvariantObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateInvariantObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStateInvariantObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStateInvariantObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateInvariantObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStateInvariantObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setName(name);
}

void QUmlStateInvariantObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStateInvariantObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStateInvariantObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setQualifiedName(qualifiedName);
}

void QUmlStateInvariantObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlStateInvariantObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlStateInvariantObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlStateInvariantObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlStateInvariantObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [StateInvariant]

void QUmlStateInvariantObject::setCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlStateInvariantObject::setInvariant(QObject *invariant)
{
    qmodelingelementproperty_cast<QUmlStateInvariant *>(this)->setInvariant(qmodelingelementproperty_cast<QUmlConstraint *>(invariant));
}


void QUmlStateInvariantObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlStateInvariant");
    d->groupProperties.insert(QStringLiteral("QUmlStateInvariant"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlStateInvariant"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("invariant"))));
}

void QUmlStateInvariantObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, PropertyClassRole, QStringLiteral("QUmlStateInvariant"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, DocumentationRole, QStringLiteral("References the Lifeline on which the StateInvariant appears."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, RedefinedPropertiesRole, QStringLiteral("InteractionFragment-covered"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, covered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, PropertyClassRole, QStringLiteral("QUmlStateInvariant"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, DocumentationRole, QStringLiteral("A Constraint that should hold at runtime for this StateInvariant"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStateInvariant, invariant, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

