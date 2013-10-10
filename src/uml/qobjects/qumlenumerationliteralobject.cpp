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
#include "qumlenumerationliteralobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlEnumerationLiteral>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlEnumeration>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSlot>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlEnumerationLiteralObject::QUmlEnumerationLiteralObject(QUmlEnumerationLiteral *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlEnumerationLiteralObject::~QUmlEnumerationLiteralObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlEnumerationLiteralObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationLiteralObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlEnumerationLiteralObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlEnumerationLiteralObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlEnumerationLiteralObject::name() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->name();
}

QObject *QUmlEnumerationLiteralObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlEnumerationLiteralObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->namespace_()->asQModelingObject();
}

QString QUmlEnumerationLiteralObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlEnumerationLiteralObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlEnumerationLiteralObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlEnumerationLiteralObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->visibility();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlEnumerationLiteralObject::deployedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->deployedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlEnumerationLiteralObject::deployments() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->deployments())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [InstanceSpecification]

const QSet<QObject *> QUmlEnumerationLiteralObject::slots_() const
{
    QSet<QObject *> set;
    foreach (QUmlSlot *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->slots_())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlEnumerationLiteralObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->specification()->asQModelingObject();
}

// OWNED ATTRIBUTES [EnumerationLiteral]

QObject *QUmlEnumerationLiteralObject::classifier() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->classifier())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->classifier()->asQModelingObject();
}

QObject *QUmlEnumerationLiteralObject::enumeration() const
{
    if (!qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->enumeration())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->enumeration()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlEnumerationLiteralObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlEnumerationLiteralObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlEnumerationLiteralObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlEnumerationLiteralObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlEnumerationLiteralObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlEnumerationLiteralObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlEnumerationLiteralObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlEnumerationLiteralObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlEnumerationLiteralObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationLiteralObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlEnumerationLiteralObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationLiteralObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlEnumerationLiteralObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlEnumerationLiteralObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationLiteralObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlEnumerationLiteralObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setName(name);
}

void QUmlEnumerationLiteralObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlEnumerationLiteralObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlEnumerationLiteralObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlEnumerationLiteralObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlEnumerationLiteralObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlEnumerationLiteralObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setVisibility(visibility);
}

void QUmlEnumerationLiteralObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlEnumerationLiteralObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlEnumerationLiteralObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlEnumerationLiteralObject::addDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlEnumerationLiteralObject::removeDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [InstanceSpecification]

void QUmlEnumerationLiteralObject::addSlot(QObject *slot_)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->addSlot(qmodelingelementproperty_cast<QUmlSlot *>(slot_));
}

void QUmlEnumerationLiteralObject::removeSlot(QObject *slot_)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->removeSlot(qmodelingelementproperty_cast<QUmlSlot *>(slot_));
}

void QUmlEnumerationLiteralObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlValueSpecification *>(specification));
}

// SLOTS FOR OWNED ATTRIBUTES [EnumerationLiteral]

void QUmlEnumerationLiteralObject::setClassifier(QObject *classifier)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setClassifier(qmodelingelementproperty_cast<QUmlEnumeration *>(classifier));
}

void QUmlEnumerationLiteralObject::setEnumeration(QObject *enumeration)
{
    qmodelingelementproperty_cast<QUmlEnumerationLiteral *>(this)->setEnumeration(qmodelingelementproperty_cast<QUmlEnumeration *>(enumeration));
}


void QUmlEnumerationLiteralObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDeployedArtifact");

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlDeploymentTarget");
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployments"))));

    d->propertyGroups << QStringLiteral("QUmlInstanceSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlInstanceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("slots_"))));
    d->groupProperties.insert(QStringLiteral("QUmlInstanceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));

    d->propertyGroups << QStringLiteral("QUmlEnumerationLiteral");
    d->groupProperties.insert(QStringLiteral("QUmlEnumerationLiteral"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("classifier"))));
    d->groupProperties.insert(QStringLiteral("QUmlEnumerationLiteral"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enumeration"))));
}

void QUmlEnumerationLiteralObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, PropertyClassRole, QStringLiteral("QUmlEnumerationLiteral"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, DocumentationRole, QStringLiteral("The classifier of this EnumerationLiteral derived to be equal to its enumeration."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, RedefinedPropertiesRole, QStringLiteral("InstanceSpecification-classifier"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, classifier, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, PropertyClassRole, QStringLiteral("QUmlEnumerationLiteral"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, DocumentationRole, QStringLiteral("The Enumeration that this EnumerationLiteral is a member of."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlEnumerationLiteral, enumeration, OppositeEndRole, QStringLiteral("Enumeration-ownedLiteral"));

}

QT_END_NAMESPACE

