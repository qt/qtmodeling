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
#include "qumllifelineobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElement>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionFragment>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPartDecomposition>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlLifelineObject::QUmlLifelineObject(QUmlLifeline *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlLifelineObject::~QUmlLifelineObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlLifeline *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLifelineObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLifeline *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLifelineObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLifeline *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLifelineObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLifeline *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLifeline *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLifelineObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlLifeline *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlLifelineObject::name() const
{
    return qmodelingelementproperty_cast<QUmlLifeline *>(this)->name();
}

QObject *QUmlLifelineObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlLifeline *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLifeline *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlLifelineObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlLifeline *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLifeline *>(this)->namespace_()->asQModelingObject();
}

QString QUmlLifelineObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlLifeline *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlLifelineObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlLifeline *>(this)->visibility();
}

// OWNED ATTRIBUTES [Lifeline]

const QSet<QObject *> QUmlLifelineObject::coveredBy() const
{
    QSet<QObject *> set;
    foreach (QUmlInteractionFragment *element, qmodelingelementproperty_cast<QUmlLifeline *>(this)->coveredBy())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLifelineObject::decomposedAs() const
{
    if (!qmodelingelementproperty_cast<QUmlLifeline *>(this)->decomposedAs())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLifeline *>(this)->decomposedAs()->asQModelingObject();
}

QObject *QUmlLifelineObject::interaction() const
{
    if (!qmodelingelementproperty_cast<QUmlLifeline *>(this)->interaction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLifeline *>(this)->interaction()->asQModelingObject();
}

QObject *QUmlLifelineObject::represents() const
{
    if (!qmodelingelementproperty_cast<QUmlLifeline *>(this)->represents())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLifeline *>(this)->represents()->asQModelingObject();
}

QObject *QUmlLifelineObject::selector() const
{
    if (!qmodelingelementproperty_cast<QUmlLifeline *>(this)->selector())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLifeline *>(this)->selector()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLifelineObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLifeline *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLifelineObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLifeline *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLifelineObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlLifeline *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlLifelineObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlLifeline *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLifelineObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlLifeline *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLifelineObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlLifeline *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLifelineObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLifelineObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLifelineObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLifelineObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLifelineObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLifelineObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLifelineObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLifelineObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setName(name);
}

void QUmlLifelineObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLifelineObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLifelineObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setQualifiedName(qualifiedName);
}

void QUmlLifelineObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Lifeline]

void QUmlLifelineObject::addCoveredBy(QObject *coveredBy)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->addCoveredBy(qmodelingelementproperty_cast<QUmlInteractionFragment *>(coveredBy));
}

void QUmlLifelineObject::removeCoveredBy(QObject *coveredBy)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->removeCoveredBy(qmodelingelementproperty_cast<QUmlInteractionFragment *>(coveredBy));
}

void QUmlLifelineObject::setDecomposedAs(QObject *decomposedAs)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setDecomposedAs(qmodelingelementproperty_cast<QUmlPartDecomposition *>(decomposedAs));
}

void QUmlLifelineObject::setInteraction(QObject *interaction)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(interaction));
}

void QUmlLifelineObject::setRepresents(QObject *represents)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setRepresents(qmodelingelementproperty_cast<QUmlConnectableElement *>(represents));
}

void QUmlLifelineObject::setSelector(QObject *selector)
{
    qmodelingelementproperty_cast<QUmlLifeline *>(this)->setSelector(qmodelingelementproperty_cast<QUmlValueSpecification *>(selector));
}


void QUmlLifelineObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlLifeline");
    d->groupProperties.insert(QStringLiteral("QUmlLifeline"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("coveredBy"))));
    d->groupProperties.insert(QStringLiteral("QUmlLifeline"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("decomposedAs"))));
    d->groupProperties.insert(QStringLiteral("QUmlLifeline"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interaction"))));
    d->groupProperties.insert(QStringLiteral("QUmlLifeline"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("represents"))));
    d->groupProperties.insert(QStringLiteral("QUmlLifeline"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("selector"))));
}

void QUmlLifelineObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, PropertyClassRole, QStringLiteral("QUmlLifeline"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, DocumentationRole, QStringLiteral("References the InteractionFragments in which this Lifeline takes part."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, coveredBy, OppositeEndRole, QStringLiteral("InteractionFragment-covered"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, PropertyClassRole, QStringLiteral("QUmlLifeline"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, DocumentationRole, QStringLiteral("References the Interaction that represents the decomposition."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, decomposedAs, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, PropertyClassRole, QStringLiteral("QUmlLifeline"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, DocumentationRole, QStringLiteral("References the Interaction enclosing this Lifeline."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, interaction, OppositeEndRole, QStringLiteral("Interaction-lifeline"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, PropertyClassRole, QStringLiteral("QUmlLifeline"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, DocumentationRole, QStringLiteral("References the ConnectableElement within the classifier that contains the enclosing interaction."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, represents, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, PropertyClassRole, QStringLiteral("QUmlLifeline"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, DocumentationRole, QStringLiteral("If the referenced ConnectableElement is multivalued, then this specifies the specific individual part within that set."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLifeline, selector, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

