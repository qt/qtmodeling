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

QUmlExtensionEndObject::QUmlExtensionEndObject(QUmlExtensionEnd *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlExtensionEndObject::~QUmlExtensionEndObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
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

int QUmlExtensionEndObject::upper() const
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

//int QUmlExtensionEndObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->upperBound();
//}

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
}

void QUmlExtensionEndObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionEndObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionEndObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionEndObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtensionEndObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionEndObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionEndObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setName(name);
}

void QUmlExtensionEndObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExtensionEndObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExtensionEndObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setQualifiedName(qualifiedName);
}

void QUmlExtensionEndObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlExtensionEndObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOrdered(isOrdered);
}

void QUmlExtensionEndObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlExtensionEndObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setUnique(isUnique);
}

void QUmlExtensionEndObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlExtensionEndObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlExtensionEndObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setUpper(upper);
}

void QUmlExtensionEndObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlExtensionEndObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExtensionEndObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setLeaf(isLeaf);
}

void QUmlExtensionEndObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlExtensionEndObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionEndObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionEndObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExtensionEndObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlExtensionEndObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlExtensionEndObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlExtensionEndObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setStatic(isStatic);
}

void QUmlExtensionEndObject::unsetStatic()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExtensionEndObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlExtensionEndObject::addEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlExtensionEndObject::removeEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlExtensionEndObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlExtensionEndObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlExtensionEndObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlExtensionEndObject::addDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlExtensionEndObject::removeDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlExtensionEndObject::setAggregation(QtUml::AggregationKind aggregation)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setAggregation(aggregation);
}

void QUmlExtensionEndObject::unsetAggregation()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("aggregation"));
}

void QUmlExtensionEndObject::setAssociation(QObject *association)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(association));
}

void QUmlExtensionEndObject::setAssociationEnd(QObject *associationEnd)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setAssociationEnd(qmodelingelementproperty_cast<QUmlProperty *>(associationEnd));
}

void QUmlExtensionEndObject::setClass(QObject *class_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setClass(qmodelingelementproperty_cast<QUmlClass *>(class_));
}

void QUmlExtensionEndObject::setDatatype(QObject *datatype)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDatatype(qmodelingelementproperty_cast<QUmlDataType *>(datatype));
}

void QUmlExtensionEndObject::setDefault(QString default_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDefault(default_);
}

void QUmlExtensionEndObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDefaultValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(defaultValue));
}

void QUmlExtensionEndObject::setInterface(QObject *interface_)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setInterface(qmodelingelementproperty_cast<QUmlInterface *>(interface_));
}

void QUmlExtensionEndObject::setComposite(bool isComposite)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setComposite(isComposite);
}

void QUmlExtensionEndObject::unsetComposite()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("composite"));
}

void QUmlExtensionEndObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDerived(isDerived);
}

void QUmlExtensionEndObject::unsetDerived()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derived"));
}

void QUmlExtensionEndObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setDerivedUnion(isDerivedUnion);
}

void QUmlExtensionEndObject::unsetDerivedUnion()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derivedUnion"));
}

void QUmlExtensionEndObject::setID(bool isID)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setID(isID);
}

void QUmlExtensionEndObject::unsetID()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("iD"));
}

void QUmlExtensionEndObject::setReadOnly(bool isReadOnly)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setReadOnly(isReadOnly);
}

void QUmlExtensionEndObject::unsetReadOnly()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("readOnly"));
}

void QUmlExtensionEndObject::setOpposite(QObject *opposite)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOpposite(qmodelingelementproperty_cast<QUmlProperty *>(opposite));
}

void QUmlExtensionEndObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setOwningAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(owningAssociation));
}

void QUmlExtensionEndObject::addQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlExtensionEndObject::removeQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlExtensionEndObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlExtensionEndObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlExtensionEndObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->addSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
}

void QUmlExtensionEndObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->removeSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
}

// SLOTS FOR OWNED ATTRIBUTES [ExtensionEnd]

void QUmlExtensionEndObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setLower(lower);
}

void QUmlExtensionEndObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlExtensionEndObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlExtensionEnd *>(this)->setType(qmodelingelementproperty_cast<QUmlStereotype *>(type));
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

