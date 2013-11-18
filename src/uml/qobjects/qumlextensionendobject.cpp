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
#include "qumlextensionendobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlExtensionEnd>
#include <QtUml/QUmlAssociation>
#include <QtUml/QUmlClass>
#include <QtUml/QUmlClassifier>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDataType>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDeployment>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterface>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlPackageableElement>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlProperty>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStereotype>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlExtensionEndObject::QUmlExtensionEndObject(QUmlExtensionEnd *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExtensionEndObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExtensionEndObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExtensionEndObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlExtensionEndObject::name() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->name();
}

QObject *QUmlExtensionEndObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlExtensionEndObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->namespace_()->asQModelingObject();
}

QString QUmlExtensionEndObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExtensionEndObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->visibility();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlExtensionEndObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isOrdered();
}

bool QUmlExtensionEndObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isUnique();
}

QObject *QUmlExtensionEndObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->lowerValue()->asQModelingObject();
}

QString QUmlExtensionEndObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->upper();
}

QObject *QUmlExtensionEndObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExtensionEndObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExtensionEndObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlExtensionEndObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionEndObject::isStatic() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isStatic();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlExtensionEndObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlExtensionEndObject::ends() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->ends())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlExtensionEndObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlExtensionEndObject::deployedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->deployedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::deployments() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->deployments())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Property]

QtUml::AggregationKind QUmlExtensionEndObject::aggregation() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->aggregation();
}

QObject *QUmlExtensionEndObject::association() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->association())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->association()->asQModelingObject();
}

QObject *QUmlExtensionEndObject::associationEnd() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->associationEnd())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->associationEnd()->asQModelingObject();
}

QObject *QUmlExtensionEndObject::class_() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->class_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->class_()->asQModelingObject();
}

QObject *QUmlExtensionEndObject::datatype() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->datatype())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->datatype()->asQModelingObject();
}

QString QUmlExtensionEndObject::default_() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->default_();
}

QObject *QUmlExtensionEndObject::defaultValue() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->defaultValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->defaultValue()->asQModelingObject();
}

QObject *QUmlExtensionEndObject::interface_() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->interface_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->interface_()->asQModelingObject();
}

bool QUmlExtensionEndObject::isComposite() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isComposite();
}

bool QUmlExtensionEndObject::isDerived() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isDerived();
}

bool QUmlExtensionEndObject::isDerivedUnion() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isDerivedUnion();
}

bool QUmlExtensionEndObject::isID() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isID();
}

bool QUmlExtensionEndObject::isReadOnly() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isReadOnly();
}

QObject *QUmlExtensionEndObject::opposite() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->opposite())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->opposite()->asQModelingObject();
}

QObject *QUmlExtensionEndObject::owningAssociation() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->owningAssociation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->owningAssociation()->asQModelingObject();
}

const QList<QObject *> QUmlExtensionEndObject::qualifiers() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->qualifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlExtensionEndObject::redefinedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->redefinedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::subsettedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->subsettedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [ExtensionEnd]

int QUmlExtensionEndObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->lower();
}

QObject *QUmlExtensionEndObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->type()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExtensionEndObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionEndObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExtensionEndObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExtensionEndObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExtensionEndObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExtensionEndObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->separator();
}

// OPERATIONS [MultiplicityElement]

bool QUmlExtensionEndObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlExtensionEndObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->includesCardinality(C);
}

bool QUmlExtensionEndObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlExtensionEndObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->is(lowerbound, upperbound);
}

bool QUmlExtensionEndObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isMultivalued();
}

QString QUmlExtensionEndObject::upperBoundOperation() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->upperBoundOperation();
}

// OPERATIONS [RedefinableElement]

bool QUmlExtensionEndObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [ParameterableElement]

bool QUmlExtensionEndObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isTemplateParameter();
}

// OPERATIONS [Property]

bool QUmlExtensionEndObject::isAttribute(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isAttribute(qmodelingelementproperty_cast<QUmlProperty *>(p));
}

bool QUmlExtensionEndObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlExtensionEndObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExtensionEndObject::isNavigable() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->isNavigable();
}

QSet<QObject *> QUmlExtensionEndObject::subsettingContext() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->subsettingContext())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [ExtensionEnd]

int QUmlExtensionEndObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->lowerBound();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExtensionEndObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlExtensionEndObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlExtensionEndObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlExtensionEndObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlExtensionEndObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtensionEndObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlExtensionEndObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlExtensionEndObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlExtensionEndObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlExtensionEndObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlExtensionEndObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlExtensionEndObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlExtensionEndObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOrdered(isOrdered);
    emit isOrderedChanged(this->isOrdered());
}

void QUmlExtensionEndObject::unsetOrdered()
{
    Q_D(QModelingObject);
    setOrdered(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isOrdered"));
}

void QUmlExtensionEndObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setUnique(isUnique);
    emit isUniqueChanged(this->isUnique());
}

void QUmlExtensionEndObject::unsetUnique()
{
    Q_D(QModelingObject);

    setUnique(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isUnique"));
}

void QUmlExtensionEndObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
    emit lowerValueChanged(this->lowerValue());
}

void QUmlExtensionEndObject::setUpper(QString upper)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setUpper(upper);
    emit upperChanged(this->upper());
}

void QUmlExtensionEndObject::unsetUpper()
{
    Q_D(QModelingObject);
    setUpper(QStringLiteral("1"));
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlExtensionEndObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
    emit upperValueChanged(this->upperValue());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExtensionEndObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlExtensionEndObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlExtensionEndObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlExtensionEndObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlExtensionEndObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlExtensionEndObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlExtensionEndObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
    emit featuringClassifiersChanged(this->featuringClassifiers());
}

void QUmlExtensionEndObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
    emit featuringClassifiersChanged(this->featuringClassifiers());
}

void QUmlExtensionEndObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setStatic(isStatic);
    emit isStaticChanged(this->isStatic());
}

void QUmlExtensionEndObject::unsetStatic()
{
    Q_D(QModelingObject);
    setStatic(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isStatic"));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExtensionEndObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
    emit owningTemplateParameterChanged(this->owningTemplateParameter());
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlExtensionEndObject::addEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
    emit endsChanged(this->ends());
}

void QUmlExtensionEndObject::removeEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
    emit endsChanged(this->ends());
}

void QUmlExtensionEndObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
    emit templateParameterChanged(this->templateParameter());
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlExtensionEndObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
    emit deployedElementsChanged(this->deployedElements());
}

void QUmlExtensionEndObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
    emit deployedElementsChanged(this->deployedElements());
}

void QUmlExtensionEndObject::addDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
    emit deploymentsChanged(this->deployments());
}

void QUmlExtensionEndObject::removeDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
    emit deploymentsChanged(this->deployments());
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlExtensionEndObject::setAggregation(QtUml::AggregationKind aggregation)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setAggregation(aggregation);
    emit aggregationChanged(this->aggregation());
}

void QUmlExtensionEndObject::unsetAggregation()
{
    Q_D(QModelingObject);
    setAggregation(QtUml::AggregationKindNone);
    d->modifiedResettableProperties.removeAll(QStringLiteral("aggregation"));
}

void QUmlExtensionEndObject::setAssociation(QObject *association)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(association));
    emit associationChanged(this->association());
}

void QUmlExtensionEndObject::setAssociationEnd(QObject *associationEnd)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setAssociationEnd(qmodelingelementproperty_cast<QUmlProperty *>(associationEnd));
    emit associationEndChanged(this->associationEnd());
}

void QUmlExtensionEndObject::setClass(QObject *class_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setClass(qmodelingelementproperty_cast<QUmlClass *>(class_));
    emit classChanged(this->class_());
}

void QUmlExtensionEndObject::setDatatype(QObject *datatype)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDatatype(qmodelingelementproperty_cast<QUmlDataType *>(datatype));
    emit datatypeChanged(this->datatype());
}

void QUmlExtensionEndObject::setDefault(QString default_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDefault(default_);
    emit defaultChanged(this->default_());
}

void QUmlExtensionEndObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDefaultValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(defaultValue));
    emit defaultValueChanged(this->defaultValue());
}

void QUmlExtensionEndObject::setInterface(QObject *interface_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setInterface(qmodelingelementproperty_cast<QUmlInterface *>(interface_));
    emit interfaceChanged(this->interface_());
}

void QUmlExtensionEndObject::setComposite(bool isComposite)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setComposite(isComposite);
    emit isCompositeChanged(this->isComposite());
}

void QUmlExtensionEndObject::unsetComposite()
{
    Q_D(QModelingObject);
    setComposite(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isComposite"));
}

void QUmlExtensionEndObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDerived(isDerived);
    emit isDerivedChanged(this->isDerived());
}

void QUmlExtensionEndObject::unsetDerived()
{
    Q_D(QModelingObject);
    setDerived(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isDerived"));
}

void QUmlExtensionEndObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDerivedUnion(isDerivedUnion);
    emit isDerivedUnionChanged(this->isDerivedUnion());
}

void QUmlExtensionEndObject::unsetDerivedUnion()
{
    Q_D(QModelingObject);
    setDerivedUnion(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isDerivedUnion"));
}

void QUmlExtensionEndObject::setID(bool isID)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setID(isID);
    emit isIDChanged(this->isID());
}

void QUmlExtensionEndObject::unsetID()
{
    Q_D(QModelingObject);
    setID(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isID"));
}

void QUmlExtensionEndObject::setReadOnly(bool isReadOnly)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setReadOnly(isReadOnly);
    emit isReadOnlyChanged(this->isReadOnly());
}

void QUmlExtensionEndObject::unsetReadOnly()
{
    Q_D(QModelingObject);
    setReadOnly(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isReadOnly"));
}

void QUmlExtensionEndObject::setOpposite(QObject *opposite)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOpposite(qmodelingelementproperty_cast<QUmlProperty *>(opposite));
    emit oppositeChanged(this->opposite());
}

void QUmlExtensionEndObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOwningAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(owningAssociation));
    emit owningAssociationChanged(this->owningAssociation());
}

void QUmlExtensionEndObject::addQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
    emit qualifiersChanged(this->qualifiers());
}

void QUmlExtensionEndObject::removeQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
    emit qualifiersChanged(this->qualifiers());
}

void QUmlExtensionEndObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
    emit redefinedPropertiesChanged(this->redefinedProperties());
}

void QUmlExtensionEndObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
    emit redefinedPropertiesChanged(this->redefinedProperties());
}

void QUmlExtensionEndObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
    emit subsettedPropertiesChanged(this->subsettedProperties());
}

void QUmlExtensionEndObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
    emit subsettedPropertiesChanged(this->subsettedProperties());
}

// SLOTS FOR OWNED ATTRIBUTES [ExtensionEnd]

void QUmlExtensionEndObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setLower(lower);
    emit lowerChanged(this->lower());
}

void QUmlExtensionEndObject::unsetLower()
{
    Q_D(QModelingObject);
    setLower(0);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlExtensionEndObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setType(qmodelingelementproperty_cast<QUmlStereotype *>(type));
    emit typeChanged(this->type());
}


void QUmlExtensionEndObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTypedElement");

    d->propertyGroups << QStringLiteral("QUmlMultiplicityElement");
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lowerValue"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upperValue"))));

    d->propertyGroups << QStringLiteral("QUmlRedefinableElement");
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isLeaf"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlRedefinableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinitionContexts"))));

    d->propertyGroups << QStringLiteral("QUmlFeature");
    d->groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("featuringClassifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlFeature"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStatic"))));

    d->propertyGroups << QStringLiteral("QUmlStructuralFeature");

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlConnectableElement");
    d->groupProperties.insert(QStringLiteral("QUmlConnectableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ends"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnectableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlDeploymentTarget");
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlDeploymentTarget"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("deployments"))));

    d->propertyGroups << QStringLiteral("QUmlProperty");
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("aggregation"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("association"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("associationEnd"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("class_"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("datatype"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("default_"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("defaultValue"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("interface_"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isComposite"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDerived"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isDerivedUnion"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isID"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isReadOnly"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("opposite"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningAssociation"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiers"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedProperties"))));
    d->groupProperties.insert(QStringLiteral("QUmlProperty"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subsettedProperties"))));

    d->propertyGroups << QStringLiteral("QUmlExtensionEnd");
    d->groupProperties.insert(QStringLiteral("QUmlExtensionEnd"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QUmlExtensionEnd"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));
}

void QUmlExtensionEndObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, PropertyClassRole, QStringLiteral("QUmlTypedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, DocumentationRole, QStringLiteral("This information is derived from the return result for this Operation.The type of the TypedElement."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTypedElement, type, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attribute specifies whether the values in an instantiation of this element are sequentially ordered."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isOrdered, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, DocumentationRole, QStringLiteral("For a multivalued multiplicity, this attributes specifies whether the values in an instantiation of this element are unique."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, isUnique, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, DocumentationRole, QStringLiteral("Specifies the lower bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, DocumentationRole, QStringLiteral("The specification of the lower bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, lowerValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, DocumentationRole, QStringLiteral("Specifies the upper bound of the multiplicity interval."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upper, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, PropertyClassRole, QStringLiteral("QUmlMultiplicityElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, DocumentationRole, QStringLiteral("The specification of the upper bound for this multiplicity."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlMultiplicityElement, upperValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, DocumentationRole, QStringLiteral("Indicates whether it is possible to further redefine a RedefinableElement. If the value is true, then it is not possible to further redefine the RedefinableElement. Note that this property is preserved through package merge operations; that is, the capability to redefine a RedefinableElement (i.e., isLeaf=false) must be preserved in the resulting RedefinableElement of a package merge operation where a RedefinableElement with isLeaf=false is merged with a matching RedefinableElement with isLeaf=true: the resulting RedefinableElement will have isLeaf=false. Default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, isLeaf, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, DocumentationRole, QStringLiteral("The redefinable element that is being redefined by this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, PropertyClassRole, QStringLiteral("QUmlRedefinableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, DocumentationRole, QStringLiteral("References the contexts that this element may be redefined from."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlRedefinableElement, redefinitionContexts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, PropertyClassRole, QStringLiteral("QUmlFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, IsDerivedUnionRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, DocumentationRole, QStringLiteral("The Classifiers that have this Feature as a feature."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, featuringClassifiers, OppositeEndRole, QStringLiteral("Classifier-feature"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, PropertyClassRole, QStringLiteral("QUmlFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, DocumentationRole, QStringLiteral("Specifies whether this feature characterizes individual instances classified by the classifier (false) or the classifier itself (true)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlFeature, isStatic, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, PropertyClassRole, QStringLiteral("QUmlStructuralFeature"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, DocumentationRole, QStringLiteral("States whether the feature's value may be modified by a client."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStructuralFeature, isReadOnly, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, DocumentationRole, QStringLiteral("The formal template parameter that owns this element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, SubsettedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, owningTemplateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-ownedParameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlParameterableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, DocumentationRole, QStringLiteral("The template parameter that exposes this element as a formal parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterableElement, templateParameter, OppositeEndRole, QStringLiteral("TemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, PropertyClassRole, QStringLiteral("QUmlConnectableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, DocumentationRole, QStringLiteral("Denotes a set of connector ends that attaches to this connectable element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, ends, OppositeEndRole, QStringLiteral("ConnectorEnd-role"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, PropertyClassRole, QStringLiteral("QUmlConnectableElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, DocumentationRole, QStringLiteral("The ConnectableElementTemplateParameter for this ConnectableElement parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, RedefinedPropertiesRole, QStringLiteral("ParameterableElement-templateParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlConnectableElement, templateParameter, OppositeEndRole, QStringLiteral("ConnectableElementTemplateParameter-parameteredElement"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, PropertyClassRole, QStringLiteral("QUmlDeploymentTarget"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, DocumentationRole, QStringLiteral("The set of elements that are manifested in an Artifact that is involved in Deployment to a DeploymentTarget."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployedElements, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, PropertyClassRole, QStringLiteral("QUmlDeploymentTarget"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, DocumentationRole, QStringLiteral("The set of Deployments for a DeploymentTarget."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement NamedElement-clientDependency"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDeploymentTarget, deployments, OppositeEndRole, QStringLiteral("Deployment-location"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, DocumentationRole, QStringLiteral("Specifies the kind of aggregation that applies to the Property."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, aggregation, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, DocumentationRole, QStringLiteral("References the association of which this property is a member, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, SubsettedPropertiesRole, QStringLiteral("A_member_memberNamespace-memberNamespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, association, OppositeEndRole, QStringLiteral("Association-memberEnd"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, DocumentationRole, QStringLiteral("Designates the optional association end that owns a qualifier attribute."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, associationEnd, OppositeEndRole, QStringLiteral("Property-qualifier"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, DocumentationRole, QStringLiteral("References the Class that owns the Property.References the Class that owns the Property."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, SubsettedPropertiesRole, QStringLiteral("A_attribute_classifier-classifier A_ownedAttribute_structuredClassifier-structuredClassifier NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, class_, OppositeEndRole, QStringLiteral("Class-ownedAttribute"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, DocumentationRole, QStringLiteral("The DataType that owns this Property."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, SubsettedPropertiesRole, QStringLiteral("A_attribute_classifier-classifier NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, datatype, OppositeEndRole, QStringLiteral("DataType-ownedAttribute"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, DocumentationRole, QStringLiteral("Specifies a String that represents a value to be used when no argument is supplied for the Property.A String that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, default_, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, DocumentationRole, QStringLiteral("A ValueSpecification that is evaluated to give a default value for the Property when an object of the owning Classifier is instantiated."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, defaultValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, DocumentationRole, QStringLiteral("References the Interface that owns the Property"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, SubsettedPropertiesRole, QStringLiteral("A_attribute_classifier-classifier NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, interface_, OppositeEndRole, QStringLiteral("Interface-ownedAttribute"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, DocumentationRole, QStringLiteral("If isComposite is true, the object containing the attribute is a container for the object or value contained in the attribute.This is a derived value, indicating whether the aggregation of the Property is composite or not."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isComposite, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, DocumentationRole, QStringLiteral("If isDerived is true, the value of the attribute is derived from information elsewhere.Specifies whether the Property is derived, i.e., whether its value or values can be computed from other information."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerived, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, DocumentationRole, QStringLiteral("Specifies whether the property is derived as the union of all of the properties that are constrained to subset it."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isDerivedUnion, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, DocumentationRole, QStringLiteral("True indicates this property can be used to uniquely identify an instance of the containing Class."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isID, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, DocumentationRole, QStringLiteral("If true, the attribute may only be read, and not written.If isReadOnly is true, the attribute may not be written to after initialization."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, RedefinedPropertiesRole, QStringLiteral("StructuralFeature-isReadOnly"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, isReadOnly, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, DocumentationRole, QStringLiteral("In the case where the property is one navigable end of a binary association with both ends navigable, this gives the other end."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, opposite, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, DocumentationRole, QStringLiteral("References the owning association of this property, if any."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, SubsettedPropertiesRole, QStringLiteral("Feature-featuringClassifier RedefinableElement-redefinitionContext NamedElement-namespace Property-association"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, owningAssociation, OppositeEndRole, QStringLiteral("Association-ownedEnd"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, DocumentationRole, QStringLiteral("An optional list of ordered qualifier attributes for the end. If the list is empty, then the Association is not qualified."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, qualifiers, OppositeEndRole, QStringLiteral("Property-associationEnd"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, DocumentationRole, QStringLiteral("References the properties that are redefined by this property."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, SubsettedPropertiesRole, QStringLiteral("RedefinableElement-redefinedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, redefinedProperties, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, PropertyClassRole, QStringLiteral("QUmlProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, DocumentationRole, QStringLiteral("References the properties of which this property is constrained to be a subset."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlProperty, subsettedProperties, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, PropertyClassRole, QStringLiteral("QUmlExtensionEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, DocumentationRole, QStringLiteral("This redefinition changes the default multiplicity of association ends, since model elements are usually extended by 0 or 1 instance of the extension stereotype."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, RedefinedPropertiesRole, QStringLiteral("MultiplicityElement-lower"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, lower, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, PropertyClassRole, QStringLiteral("QUmlExtensionEnd"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, DocumentationRole, QStringLiteral("References the type of the ExtensionEnd. Note that this association restricts the possible types of an ExtensionEnd to only be Stereotypes."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, RedefinedPropertiesRole, QStringLiteral("TypedElement-type"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExtensionEnd, type, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

