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
#include "qumlgeneralizationsetobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlGeneralizationSet>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralization>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlGeneralizationSetObject::QUmlGeneralizationSetObject(QUmlGeneralizationSet *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlGeneralizationSetObject::~QUmlGeneralizationSetObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGeneralizationSetObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlGeneralizationSetObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlGeneralizationSetObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlGeneralizationSetObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlGeneralizationSetObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlGeneralizationSetObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlGeneralizationSetObject::name() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->name();
}

QObject *QUmlGeneralizationSetObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlGeneralizationSetObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->namespace_()->asQModelingObject();
}

QString QUmlGeneralizationSetObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlGeneralizationSetObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->visibility();
}

// OWNED ATTRIBUTES [GeneralizationSet]

const QSet<QObject *> QUmlGeneralizationSetObject::generalizations() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralization *element, qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->generalizations())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGeneralizationSetObject::isCovering() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->isCovering();
}

bool QUmlGeneralizationSetObject::isDisjoint() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->isDisjoint();
}

QObject *QUmlGeneralizationSetObject::powertype() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->powertype())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->powertype()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGeneralizationSetObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGeneralizationSetObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlGeneralizationSetObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlGeneralizationSetObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlGeneralizationSetObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlGeneralizationSetObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGeneralizationSetObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlGeneralizationSetObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralizationSetObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralizationSetObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralizationSetObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralizationSetObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralizationSetObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlGeneralizationSetObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlGeneralizationSetObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlGeneralizationSetObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralizationSetObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralizationSetObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setName(name);
}

void QUmlGeneralizationSetObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlGeneralizationSetObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlGeneralizationSetObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlGeneralizationSetObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setVisibility(visibility);
}

void QUmlGeneralizationSetObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [GeneralizationSet]

void QUmlGeneralizationSetObject::addGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->addGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlGeneralizationSetObject::removeGeneralization(QObject *generalization)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->removeGeneralization(qmodelingelementproperty_cast<QUmlGeneralization *>(generalization));
}

void QUmlGeneralizationSetObject::setCovering(bool isCovering)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setCovering(isCovering);
}

void QUmlGeneralizationSetObject::unsetCovering()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("covering"));
}

void QUmlGeneralizationSetObject::setDisjoint(bool isDisjoint)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setDisjoint(isDisjoint);
}

void QUmlGeneralizationSetObject::unsetDisjoint()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("disjoint"));
}

void QUmlGeneralizationSetObject::setPowertype(QObject *powertype)
{
    qmodelingelementproperty_cast<QUmlGeneralizationSet *>(this)->setPowertype(qmodelingelementproperty_cast<QUmlClassifier *>(powertype));
}


void QUmlGeneralizationSetObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlGeneralizationSet");
    d->groupProperties.insert(QStringLiteral("QUmlGeneralizationSet"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalizations"))));
    d->groupProperties.insert(QStringLiteral("QUmlGeneralizationSet"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isCovering"))));
    d->groupProperties.insert(QStringLiteral("QUmlGeneralizationSet"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDisjoint"))));
    d->groupProperties.insert(QStringLiteral("QUmlGeneralizationSet"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("powertype"))));
}

void QUmlGeneralizationSetObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, PropertyClassRole, QStringLiteral("QUmlGeneralizationSet"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, DocumentationRole, QStringLiteral("Designates the instances of Generalization which are members of a given GeneralizationSet."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, generalizations, OppositeEndRole, QStringLiteral("Generalization-generalizationSet"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, PropertyClassRole, QStringLiteral("QUmlGeneralizationSet"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, DocumentationRole, QStringLiteral("Indicates (via the associated Generalizations) whether or not the set of specific Classifiers are covering for a particular general classifier. When isCovering is true, every instance of a particular general Classifier is also an instance of at least one of its specific Classifiers for the GeneralizationSet. When isCovering is false, there are one or more instances of the particular general Classifier that are not instances of at least one of its specific Classifiers defined for the GeneralizationSet."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isCovering, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, PropertyClassRole, QStringLiteral("QUmlGeneralizationSet"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, DocumentationRole, QStringLiteral("Indicates whether or not the set of specific Classifiers in a Generalization relationship have instance in common. If isDisjoint is true, the specific Classifiers for a particular GeneralizationSet have no members in common; that is, their intersection is empty. If isDisjoint is false, the specific Classifiers in a particular GeneralizationSet have one or more members in common; that is, their intersection is not empty. For example, Person could have two Generalization relationships, each with the different specific Classifier: Manager or Staff. This would be disjoint because every instance of Person must either be a Manager or Staff. In contrast, Person could have two Generalization relationships involving two specific (and non-covering) Classifiers: Sales Person and Manager. This GeneralizationSet would not be disjoint because there are instances of Person which can be a Sales Person and a Manager."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, isDisjoint, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, PropertyClassRole, QStringLiteral("QUmlGeneralizationSet"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, DocumentationRole, QStringLiteral("Designates the Classifier that is defined as the power type for the associated GeneralizationSet."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralizationSet, powertype, OppositeEndRole, QStringLiteral("Classifier-powertypeExtent"));

}

QT_END_NAMESPACE

