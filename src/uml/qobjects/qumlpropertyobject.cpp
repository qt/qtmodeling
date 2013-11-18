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
#include "qumlpropertyobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlProperty>
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
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlPropertyObject::QUmlPropertyObject(QUmlProperty *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPropertyObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlPropertyObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPropertyObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlPropertyObject::name() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->name();
}

QObject *QUmlPropertyObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlPropertyObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->namespace_()->asQModelingObject();
}

QString QUmlPropertyObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPropertyObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlPropertyObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlPropertyObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isOrdered();
}

bool QUmlPropertyObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isUnique();
}

int QUmlPropertyObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->lower();
}

QObject *QUmlPropertyObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->lowerValue()->asQModelingObject();
}

QString QUmlPropertyObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->upper();
}

QObject *QUmlPropertyObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlPropertyObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isLeaf();
}

const QSet<QObject *> QUmlPropertyObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlPropertyObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPropertyObject::isStatic() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isStatic();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlPropertyObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlPropertyObject::ends() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->ends())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlPropertyObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlPropertyObject::deployedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->deployedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::deployments() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->deployments())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Property]

QtUml::AggregationKind QUmlPropertyObject::aggregation() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->aggregation();
}

QObject *QUmlPropertyObject::association() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->association())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->association()->asQModelingObject();
}

QObject *QUmlPropertyObject::associationEnd() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->associationEnd())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->associationEnd()->asQModelingObject();
}

QObject *QUmlPropertyObject::class_() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->class_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->class_()->asQModelingObject();
}

QObject *QUmlPropertyObject::datatype() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->datatype())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->datatype()->asQModelingObject();
}

QString QUmlPropertyObject::default_() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->default_();
}

QObject *QUmlPropertyObject::defaultValue() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->defaultValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->defaultValue()->asQModelingObject();
}

QObject *QUmlPropertyObject::interface_() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->interface_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->interface_()->asQModelingObject();
}

bool QUmlPropertyObject::isComposite() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isComposite();
}

bool QUmlPropertyObject::isDerived() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isDerived();
}

bool QUmlPropertyObject::isDerivedUnion() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isDerivedUnion();
}

bool QUmlPropertyObject::isID() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isID();
}

bool QUmlPropertyObject::isReadOnly() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isReadOnly();
}

QObject *QUmlPropertyObject::opposite() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->opposite())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->opposite()->asQModelingObject();
}

QObject *QUmlPropertyObject::owningAssociation() const
{
    if (!qmodelingelementproperty_cast<QUmlProperty *>(this)->owningAssociation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlProperty *>(this)->owningAssociation()->asQModelingObject();
}

const QList<QObject *> QUmlPropertyObject::qualifiers() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->qualifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlPropertyObject::redefinedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->redefinedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::subsettedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->subsettedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPropertyObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPropertyObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPropertyObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlPropertyObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPropertyObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPropertyObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->separator();
}

// OPERATIONS [MultiplicityElement]

bool QUmlPropertyObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlPropertyObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->includesCardinality(C);
}

bool QUmlPropertyObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlPropertyObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->is(lowerbound, upperbound);
}

bool QUmlPropertyObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isMultivalued();
}

int QUmlPropertyObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->lowerBound();
}

QString QUmlPropertyObject::upperBoundOperation() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->upperBoundOperation();
}

// OPERATIONS [RedefinableElement]

bool QUmlPropertyObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [ParameterableElement]

bool QUmlPropertyObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isTemplateParameter();
}

// OPERATIONS [Property]

bool QUmlPropertyObject::isAttribute(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isAttribute(qmodelingelementproperty_cast<QUmlProperty *>(p));
}

bool QUmlPropertyObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlPropertyObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlPropertyObject::isNavigable() const
{
    return qmodelingelementproperty_cast<QUmlProperty *>(this)->isNavigable();
}

QSet<QObject *> QUmlPropertyObject::subsettingContext() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlProperty *>(this)->subsettingContext())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPropertyObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlPropertyObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
    emit ownedCommentsChanged(this->ownedComments());
}

void QUmlPropertyObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlPropertyObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
    emit ownedElementsChanged(this->ownedElements());
}

void QUmlPropertyObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
    emit ownerChanged(this->owner());
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPropertyObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlPropertyObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
    emit clientDependenciesChanged(this->clientDependencies());
}

void QUmlPropertyObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setName(name);
    emit nameChanged(this->name());
}

void QUmlPropertyObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
    emit nameExpressionChanged(this->nameExpression());
}

void QUmlPropertyObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
    emit namespaceChanged(this->namespace_());
}

void QUmlPropertyObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setQualifiedName(qualifiedName);
    emit qualifiedNameChanged(this->qualifiedName());
}

void QUmlPropertyObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setVisibility(visibility);
    emit visibilityChanged(this->visibility());
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlPropertyObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
    emit typeChanged(this->type());
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlPropertyObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setOrdered(isOrdered);
    emit isOrderedChanged(this->isOrdered());
}

void QUmlPropertyObject::unsetOrdered()
{
    Q_D(QModelingObject);
    setOrdered(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isOrdered"));
}

void QUmlPropertyObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setUnique(isUnique);
    emit isUniqueChanged(this->isUnique());
}

void QUmlPropertyObject::unsetUnique()
{
    Q_D(QModelingObject);

    setUnique(true);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isUnique"));
}

void QUmlPropertyObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setLower(lower);
    emit lowerChanged(this->lower());
}

void QUmlPropertyObject::unsetLower()
{
    Q_D(QModelingObject);
    setLower(1);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlPropertyObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
    emit lowerValueChanged(this->lowerValue());
}

void QUmlPropertyObject::setUpper(QString upper)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setUpper(upper);
    emit upperChanged(this->upper());
}

void QUmlPropertyObject::unsetUpper()
{
    Q_D(QModelingObject);
    setUpper(QStringLiteral("1"));
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlPropertyObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
    emit upperValueChanged(this->upperValue());
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlPropertyObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setLeaf(isLeaf);
    emit isLeafChanged(this->isLeaf());
}

void QUmlPropertyObject::unsetLeaf()
{
    Q_D(QModelingObject);
    setLeaf(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isLeaf"));
}

void QUmlPropertyObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlPropertyObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
    emit redefinedElementsChanged(this->redefinedElements());
}

void QUmlPropertyObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

void QUmlPropertyObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
    emit redefinitionContextsChanged(this->redefinitionContexts());
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlPropertyObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
    emit featuringClassifiersChanged(this->featuringClassifiers());
}

void QUmlPropertyObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
    emit featuringClassifiersChanged(this->featuringClassifiers());
}

void QUmlPropertyObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setStatic(isStatic);
    emit isStaticChanged(this->isStatic());
}

void QUmlPropertyObject::unsetStatic()
{
    Q_D(QModelingObject);
    setStatic(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isStatic"));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlPropertyObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
    emit owningTemplateParameterChanged(this->owningTemplateParameter());
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlPropertyObject::addEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
    emit endsChanged(this->ends());
}

void QUmlPropertyObject::removeEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
    emit endsChanged(this->ends());
}

void QUmlPropertyObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
    emit templateParameterChanged(this->templateParameter());
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlPropertyObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
    emit deployedElementsChanged(this->deployedElements());
}

void QUmlPropertyObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
    emit deployedElementsChanged(this->deployedElements());
}

void QUmlPropertyObject::addDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
    emit deploymentsChanged(this->deployments());
}

void QUmlPropertyObject::removeDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
    emit deploymentsChanged(this->deployments());
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlPropertyObject::setAggregation(QtUml::AggregationKind aggregation)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setAggregation(aggregation);
    emit aggregationChanged(this->aggregation());
}

void QUmlPropertyObject::unsetAggregation()
{
    Q_D(QModelingObject);
    setAggregation(QtUml::AggregationKindNone);
    d->modifiedResettableProperties.removeAll(QStringLiteral("aggregation"));
}

void QUmlPropertyObject::setAssociation(QObject *association)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(association));
    emit associationChanged(this->association());
}

void QUmlPropertyObject::setAssociationEnd(QObject *associationEnd)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setAssociationEnd(qmodelingelementproperty_cast<QUmlProperty *>(associationEnd));
    emit associationEndChanged(this->associationEnd());
}

void QUmlPropertyObject::setClass(QObject *class_)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setClass(qmodelingelementproperty_cast<QUmlClass *>(class_));
    emit classChanged(this->class_());
}

void QUmlPropertyObject::setDatatype(QObject *datatype)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setDatatype(qmodelingelementproperty_cast<QUmlDataType *>(datatype));
    emit datatypeChanged(this->datatype());
}

void QUmlPropertyObject::setDefault(QString default_)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setDefault(default_);
    emit defaultChanged(this->default_());
}

void QUmlPropertyObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setDefaultValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(defaultValue));
    emit defaultValueChanged(this->defaultValue());
}

void QUmlPropertyObject::setInterface(QObject *interface_)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setInterface(qmodelingelementproperty_cast<QUmlInterface *>(interface_));
    emit interfaceChanged(this->interface_());
}

void QUmlPropertyObject::setComposite(bool isComposite)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setComposite(isComposite);
    emit isCompositeChanged(this->isComposite());
}

void QUmlPropertyObject::unsetComposite()
{
    Q_D(QModelingObject);
    setComposite(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isComposite"));
}

void QUmlPropertyObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setDerived(isDerived);
    emit isDerivedChanged(this->isDerived());
}

void QUmlPropertyObject::unsetDerived()
{
    Q_D(QModelingObject);
    setDerived(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isDerived"));
}

void QUmlPropertyObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setDerivedUnion(isDerivedUnion);
    emit isDerivedUnionChanged(this->isDerivedUnion());
}

void QUmlPropertyObject::unsetDerivedUnion()
{
    Q_D(QModelingObject);
    setDerivedUnion(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isDerivedUnion"));
}

void QUmlPropertyObject::setID(bool isID)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setID(isID);
    emit isIDChanged(this->isID());
}

void QUmlPropertyObject::unsetID()
{
    Q_D(QModelingObject);
    setID(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isID"));
}

void QUmlPropertyObject::setReadOnly(bool isReadOnly)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setReadOnly(isReadOnly);
    emit isReadOnlyChanged(this->isReadOnly());
}

void QUmlPropertyObject::unsetReadOnly()
{
    Q_D(QModelingObject);
    setReadOnly(false);
    d->modifiedResettableProperties.removeAll(QStringLiteral("isReadOnly"));
}

void QUmlPropertyObject::setOpposite(QObject *opposite)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setOpposite(qmodelingelementproperty_cast<QUmlProperty *>(opposite));
    emit oppositeChanged(this->opposite());
}

void QUmlPropertyObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->setOwningAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(owningAssociation));
    emit owningAssociationChanged(this->owningAssociation());
}

void QUmlPropertyObject::addQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
    emit qualifiersChanged(this->qualifiers());
}

void QUmlPropertyObject::removeQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
    emit qualifiersChanged(this->qualifiers());
}

void QUmlPropertyObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
    emit redefinedPropertiesChanged(this->redefinedProperties());
}

void QUmlPropertyObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
    emit redefinedPropertiesChanged(this->redefinedProperties());
}

void QUmlPropertyObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->addSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
    emit subsettedPropertiesChanged(this->subsettedProperties());
}

void QUmlPropertyObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlProperty *>(this)->removeSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
    emit subsettedPropertiesChanged(this->subsettedProperties());
}


void QUmlPropertyObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QUmlMultiplicityElement");
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
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
}

void QUmlPropertyObject::setPropertyData()
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

}

QT_END_NAMESPACE

