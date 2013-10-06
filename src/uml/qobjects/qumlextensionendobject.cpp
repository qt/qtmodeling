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

QUmlExtensionEndObject::QUmlExtensionEndObject(QUmlExtensionEnd *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlExtensionEndObject::~QUmlExtensionEndObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExtensionEndObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->ownedComments())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->ownedElements())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlExtensionEndObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExtensionEndObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->clientDependencies())
        set.insert(element->asQObject());
    return set;
}

QString QUmlExtensionEndObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->name();
}

QObject *QUmlExtensionEndObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->nameExpression()->asQObject();
}

QObject *QUmlExtensionEndObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->namespace_()->asQObject();
}

QString QUmlExtensionEndObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlExtensionEndObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->visibility();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlExtensionEndObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isOrdered();
}

bool QUmlExtensionEndObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isUnique();
}

QObject *QUmlExtensionEndObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->lowerValue()->asQObject();
}

int QUmlExtensionEndObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->upper();
}

QObject *QUmlExtensionEndObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlExtensionEndObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isLeaf();
}

const QSet<QObject *> QUmlExtensionEndObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->redefinedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->redefinitionContexts())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlExtensionEndObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->featuringClassifiers())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionEndObject::isStatic() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isStatic();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlExtensionEndObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->owningTemplateParameter()->asQObject();
}

// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlExtensionEndObject::ends() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->ends())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlExtensionEndObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlExtensionEndObject::deployedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->deployedElements())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::deployments() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->deployments())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Property]

QtUml::AggregationKind QUmlExtensionEndObject::aggregation() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->aggregation();
}

QObject *QUmlExtensionEndObject::association() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->association())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->association()->asQObject();
}

QObject *QUmlExtensionEndObject::associationEnd() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->associationEnd())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->associationEnd()->asQObject();
}

QObject *QUmlExtensionEndObject::class_() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->class_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->class_()->asQObject();
}

QObject *QUmlExtensionEndObject::datatype() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->datatype())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->datatype()->asQObject();
}

QString QUmlExtensionEndObject::default_() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->default_();
}

QObject *QUmlExtensionEndObject::defaultValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->defaultValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->defaultValue()->asQObject();
}

QObject *QUmlExtensionEndObject::interface_() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->interface_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->interface_()->asQObject();
}

bool QUmlExtensionEndObject::isComposite() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isComposite();
}

bool QUmlExtensionEndObject::isDerived() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isDerived();
}

bool QUmlExtensionEndObject::isDerivedUnion() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isDerivedUnion();
}

bool QUmlExtensionEndObject::isID() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isID();
}

bool QUmlExtensionEndObject::isReadOnly() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isReadOnly();
}

QObject *QUmlExtensionEndObject::opposite() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->opposite())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->opposite()->asQObject();
}

QObject *QUmlExtensionEndObject::owningAssociation() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->owningAssociation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->owningAssociation()->asQObject();
}

const QList<QObject *> QUmlExtensionEndObject::qualifiers() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->qualifiers())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlExtensionEndObject::redefinedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->redefinedProperties())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlExtensionEndObject::subsettedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->subsettedProperties())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [ExtensionEnd]

int QUmlExtensionEndObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->lower();
}

QObject *QUmlExtensionEndObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->type()->asQObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExtensionEndObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionEndObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExtensionEndObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlExtensionEndObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlExtensionEndObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExtensionEndObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->separator();
}

// OPERATIONS [MultiplicityElement]

bool QUmlExtensionEndObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlExtensionEndObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->includesCardinality(C);
}

bool QUmlExtensionEndObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlExtensionEndObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->is(lowerbound, upperbound);
}

bool QUmlExtensionEndObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isMultivalued();
}

//int QUmlExtensionEndObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->upperBound();
//}

// OPERATIONS [RedefinableElement]

bool QUmlExtensionEndObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [ParameterableElement]

bool QUmlExtensionEndObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isTemplateParameter();
}

// OPERATIONS [Property]

bool QUmlExtensionEndObject::isAttribute(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(p));
}

bool QUmlExtensionEndObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlExtensionEndObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlExtensionEndObject::isNavigable() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->isNavigable();
}

QSet<QObject *> QUmlExtensionEndObject::subsettingContext() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->subsettingContext())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [ExtensionEnd]

int QUmlExtensionEndObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->lowerBound();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExtensionEndObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionEndObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExtensionEndObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionEndObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExtensionEndObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExtensionEndObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionEndObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExtensionEndObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setName(name);
}

void QUmlExtensionEndObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExtensionEndObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExtensionEndObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setQualifiedName(qualifiedName);
}

void QUmlExtensionEndObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlExtensionEndObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setOrdered(isOrdered);
}

void QUmlExtensionEndObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlExtensionEndObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setUnique(isUnique);
}

void QUmlExtensionEndObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlExtensionEndObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlExtensionEndObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setUpper(upper);
}

void QUmlExtensionEndObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlExtensionEndObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlExtensionEndObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setLeaf(isLeaf);
}

void QUmlExtensionEndObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlExtensionEndObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionEndObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlExtensionEndObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlExtensionEndObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlExtensionEndObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlExtensionEndObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlExtensionEndObject::setStatic(bool isStatic)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setStatic(isStatic);
}

void QUmlExtensionEndObject::unsetStatic()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExtensionEndObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlExtensionEndObject::addEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlExtensionEndObject::removeEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlExtensionEndObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlExtensionEndObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlExtensionEndObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlExtensionEndObject::addDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlExtensionEndObject::removeDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlExtensionEndObject::setAggregation(QtUml::AggregationKind aggregation)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setAggregation(aggregation);
}

void QUmlExtensionEndObject::unsetAggregation()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("aggregation"));
}

void QUmlExtensionEndObject::setAssociation(QObject *association)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setAssociation(qmodelingobjectproperty_cast<QUmlAssociation *>(association));
}

void QUmlExtensionEndObject::setAssociationEnd(QObject *associationEnd)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setAssociationEnd(qmodelingobjectproperty_cast<QUmlProperty *>(associationEnd));
}

void QUmlExtensionEndObject::setClass(QObject *class_)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setClass(qmodelingobjectproperty_cast<QUmlClass *>(class_));
}

void QUmlExtensionEndObject::setDatatype(QObject *datatype)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setDatatype(qmodelingobjectproperty_cast<QUmlDataType *>(datatype));
}

void QUmlExtensionEndObject::setDefault(QString default_)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setDefault(default_);
}

void QUmlExtensionEndObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setDefaultValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(defaultValue));
}

void QUmlExtensionEndObject::setInterface(QObject *interface_)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setInterface(qmodelingobjectproperty_cast<QUmlInterface *>(interface_));
}

void QUmlExtensionEndObject::setComposite(bool isComposite)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setComposite(isComposite);
}

void QUmlExtensionEndObject::unsetComposite()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("composite"));
}

void QUmlExtensionEndObject::setDerived(bool isDerived)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setDerived(isDerived);
}

void QUmlExtensionEndObject::unsetDerived()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("derived"));
}

void QUmlExtensionEndObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setDerivedUnion(isDerivedUnion);
}

void QUmlExtensionEndObject::unsetDerivedUnion()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("derivedUnion"));
}

void QUmlExtensionEndObject::setID(bool isID)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setID(isID);
}

void QUmlExtensionEndObject::unsetID()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("iD"));
}

void QUmlExtensionEndObject::setReadOnly(bool isReadOnly)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setReadOnly(isReadOnly);
}

void QUmlExtensionEndObject::unsetReadOnly()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("readOnly"));
}

void QUmlExtensionEndObject::setOpposite(QObject *opposite)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setOpposite(qmodelingobjectproperty_cast<QUmlProperty *>(opposite));
}

void QUmlExtensionEndObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setOwningAssociation(qmodelingobjectproperty_cast<QUmlAssociation *>(owningAssociation));
}

void QUmlExtensionEndObject::addQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlExtensionEndObject::removeQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlExtensionEndObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addRedefinedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlExtensionEndObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeRedefinedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlExtensionEndObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->addSubsettedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(subsettedProperty));
}

void QUmlExtensionEndObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->removeSubsettedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(subsettedProperty));
}

// SLOTS FOR OWNED ATTRIBUTES [ExtensionEnd]

void QUmlExtensionEndObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setLower(lower);
}

void QUmlExtensionEndObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlExtensionEndObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlExtensionEnd *>(this)->setType(qmodelingobjectproperty_cast<QUmlStereotype *>(type));
}

QT_END_NAMESPACE

