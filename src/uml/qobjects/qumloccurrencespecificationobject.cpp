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

QUmlOccurrenceSpecificationObject::QUmlOccurrenceSpecificationObject(QUmlOccurrenceSpecification *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlOccurrenceSpecificationObject::~QUmlOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
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
}

void QUmlOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setName(name);
}

void QUmlOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->setCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->addToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(this)->removeToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
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
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, PropertyClassRole, QStringLiteral("QUmlOccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, DocumentationRole, QStringLiteral("References the Lifeline on which the OccurrenceSpecification appears."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, RedefinedPropertiesRole, QStringLiteral("InteractionFragment-covered"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, covered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, PropertyClassRole, QStringLiteral("QUmlOccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, DocumentationRole, QStringLiteral("References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toAfters, OppositeEndRole, QStringLiteral("GeneralOrdering-before"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, PropertyClassRole, QStringLiteral("QUmlOccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, DocumentationRole, QStringLiteral("References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOccurrenceSpecification, toBefores, OppositeEndRole, QStringLiteral("GeneralOrdering-after"));

}

QT_END_NAMESPACE

