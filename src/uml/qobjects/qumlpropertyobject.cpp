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

QUmlPropertyObject::QUmlPropertyObject(QUmlProperty *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(qModelingObject));
}

QUmlPropertyObject::~QUmlPropertyObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlProperty *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPropertyObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPropertyObject::owner() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPropertyObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlPropertyObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->name();
}

QObject *QUmlPropertyObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->nameExpression()->asQObject();
}

QObject *QUmlPropertyObject::namespace_() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->namespace_()->asQObject();
}

QString QUmlPropertyObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPropertyObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlPropertyObject::type() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlPropertyObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isOrdered();
}

bool QUmlPropertyObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isUnique();
}

int QUmlPropertyObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->lower();
}

QObject *QUmlPropertyObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->lowerValue()->asQObject();
}

int QUmlPropertyObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->upper();
}

QObject *QUmlPropertyObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlPropertyObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isLeaf();
}

const QSet<QObject *> QUmlPropertyObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlPropertyObject::featuringClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->featuringClassifier())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPropertyObject::isStatic() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isStatic();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlPropertyObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlPropertyObject::end() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->end())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlPropertyObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlPropertyObject::deployedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->deployedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::deployment() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->deployment())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Property]

QtUml::AggregationKind QUmlPropertyObject::aggregation() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->aggregation();
}

QObject *QUmlPropertyObject::association() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->association())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->association()->asQObject();
}

QObject *QUmlPropertyObject::associationEnd() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->associationEnd())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->associationEnd()->asQObject();
}

QObject *QUmlPropertyObject::class_() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->class_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->class_()->asQObject();
}

QObject *QUmlPropertyObject::datatype() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->datatype())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->datatype()->asQObject();
}

QString QUmlPropertyObject::default_() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->default_();
}

QObject *QUmlPropertyObject::defaultValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->defaultValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->defaultValue()->asQObject();
}

QObject *QUmlPropertyObject::interface_() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->interface_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->interface_()->asQObject();
}

bool QUmlPropertyObject::isComposite() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isComposite();
}

bool QUmlPropertyObject::isDerived() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isDerived();
}

bool QUmlPropertyObject::isDerivedUnion() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isDerivedUnion();
}

bool QUmlPropertyObject::isID() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isID();
}

bool QUmlPropertyObject::isReadOnly() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isReadOnly();
}

QObject *QUmlPropertyObject::opposite() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->opposite())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->opposite()->asQObject();
}

QObject *QUmlPropertyObject::owningAssociation() const
{
    if (!qmodelingobjectproperty_cast<QUmlProperty *>(this)->owningAssociation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlProperty *>(this)->owningAssociation()->asQObject();
}

const QList<QObject *> QUmlPropertyObject::qualifier() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->qualifier())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlPropertyObject::redefinedProperty() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->redefinedProperty())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPropertyObject::subsettedProperty() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->subsettedProperty())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPropertyObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPropertyObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPropertyObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlPropertyObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPropertyObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPropertyObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->separator();
}

// OPERATIONS [MultiplicityElement]

bool QUmlPropertyObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlPropertyObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->includesCardinality(C);
}

bool QUmlPropertyObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlPropertyObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->is(lowerbound, upperbound);
}

bool QUmlPropertyObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isMultivalued();
}

int QUmlPropertyObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->lowerBound();
}

//int QUmlPropertyObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->upperBound();
//}

// OPERATIONS [RedefinableElement]

bool QUmlPropertyObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [ParameterableElement]

bool QUmlPropertyObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isTemplateParameter();
}

// OPERATIONS [Property]

bool QUmlPropertyObject::isAttribute(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(p));
}

bool QUmlPropertyObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlPropertyObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlPropertyObject::isNavigable() const
{
    return qmodelingobjectproperty_cast<QUmlProperty *>(this)->isNavigable();
}

QSet<QObject *> QUmlPropertyObject::subsettingContext() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlProperty *>(this)->subsettingContext())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPropertyObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPropertyObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPropertyObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPropertyObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPropertyObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPropertyObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPropertyObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPropertyObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setName(name);
}
    
void QUmlPropertyObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPropertyObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPropertyObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setQualifiedName(qualifiedName);
}
    
void QUmlPropertyObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setVisibility(visibility);
}
    
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlPropertyObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlPropertyObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setOrdered(isOrdered);
}
    
void QUmlPropertyObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setUnique(isUnique);
}
    
void QUmlPropertyObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setLower(lower);
}
    
void QUmlPropertyObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlPropertyObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setUpper(upper);
}
    
void QUmlPropertyObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlPropertyObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setLeaf(isLeaf);
}
    
void QUmlPropertyObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPropertyObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPropertyObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlPropertyObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlPropertyObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlPropertyObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlPropertyObject::setStatic(bool isStatic)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setStatic(isStatic);
}
    
// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlPropertyObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlPropertyObject::addEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlPropertyObject::removeEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlPropertyObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlPropertyObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlPropertyObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlPropertyObject::addDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlPropertyObject::removeDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlPropertyObject::setAggregation(QtUml::AggregationKind aggregation)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setAggregation(aggregation);
}
    
void QUmlPropertyObject::setAssociation(QObject *association)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setAssociation(qmodelingobjectproperty_cast<QUmlAssociation *>(association));
}

void QUmlPropertyObject::setAssociationEnd(QObject *associationEnd)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setAssociationEnd(qmodelingobjectproperty_cast<QUmlProperty *>(associationEnd));
}

void QUmlPropertyObject::setClass(QObject *class_)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setClass(qmodelingobjectproperty_cast<QUmlClass *>(class_));
}

void QUmlPropertyObject::setDatatype(QObject *datatype)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setDatatype(qmodelingobjectproperty_cast<QUmlDataType *>(datatype));
}

void QUmlPropertyObject::setDefault(QString default_)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setDefault(default_);
}
    
void QUmlPropertyObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setDefaultValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(defaultValue));
}

void QUmlPropertyObject::setInterface(QObject *interface_)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setInterface(qmodelingobjectproperty_cast<QUmlInterface *>(interface_));
}

void QUmlPropertyObject::setComposite(bool isComposite)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setComposite(isComposite);
}
    
void QUmlPropertyObject::setDerived(bool isDerived)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setDerived(isDerived);
}
    
void QUmlPropertyObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setDerivedUnion(isDerivedUnion);
}
    
void QUmlPropertyObject::setID(bool isID)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setID(isID);
}
    
void QUmlPropertyObject::setReadOnly(bool isReadOnly)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setReadOnly(isReadOnly);
}
    
void QUmlPropertyObject::setOpposite(QObject *opposite)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setOpposite(qmodelingobjectproperty_cast<QUmlProperty *>(opposite));
}

void QUmlPropertyObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->setOwningAssociation(qmodelingobjectproperty_cast<QUmlAssociation *>(owningAssociation));
}

void QUmlPropertyObject::addQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlPropertyObject::removeQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlPropertyObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addRedefinedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlPropertyObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeRedefinedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlPropertyObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->addSubsettedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(subsettedProperty));
}

void QUmlPropertyObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingobjectproperty_cast<QUmlProperty *>(this)->removeSubsettedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(subsettedProperty));
}

QT_END_NAMESPACE

