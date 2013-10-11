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
#include "qumlportobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlPort>
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
#include <QtUml/QUmlProtocolStateMachine>
#include <QtUml/QUmlRedefinableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlPortObject::QUmlPortObject(QUmlPort *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlPortObject::~QUmlPortObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlPort *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPortObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlPort *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPort *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlPortObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPortObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlPort *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlPortObject::name() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->name();
}

QObject *QUmlPortObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlPortObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->namespace_()->asQModelingObject();
}

QString QUmlPortObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPortObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlPortObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlPortObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isOrdered();
}

bool QUmlPortObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isUnique();
}

int QUmlPortObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->lower();
}

QObject *QUmlPortObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->lowerValue()->asQModelingObject();
}

int QUmlPortObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->upper();
}

QObject *QUmlPortObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlPortObject::isLeaf() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isLeaf();
}

const QSet<QObject *> QUmlPortObject::redefinedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingelementproperty_cast<QUmlPort *>(this)->redefinedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::redefinitionContexts() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlPort *>(this)->redefinitionContexts())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlPortObject::featuringClassifiers() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingelementproperty_cast<QUmlPort *>(this)->featuringClassifiers())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPortObject::isStatic() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isStatic();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlPortObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlPortObject::ends() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingelementproperty_cast<QUmlPort *>(this)->ends())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlPortObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlPortObject::deployedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingelementproperty_cast<QUmlPort *>(this)->deployedElements())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::deployments() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingelementproperty_cast<QUmlPort *>(this)->deployments())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Property]

QtUml::AggregationKind QUmlPortObject::aggregation() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->aggregation();
}

QObject *QUmlPortObject::association() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->association())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->association()->asQModelingObject();
}

QObject *QUmlPortObject::associationEnd() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->associationEnd())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->associationEnd()->asQModelingObject();
}

QObject *QUmlPortObject::class_() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->class_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->class_()->asQModelingObject();
}

QObject *QUmlPortObject::datatype() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->datatype())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->datatype()->asQModelingObject();
}

QString QUmlPortObject::default_() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->default_();
}

QObject *QUmlPortObject::defaultValue() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->defaultValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->defaultValue()->asQModelingObject();
}

QObject *QUmlPortObject::interface_() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->interface_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->interface_()->asQModelingObject();
}

bool QUmlPortObject::isComposite() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isComposite();
}

bool QUmlPortObject::isDerived() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isDerived();
}

bool QUmlPortObject::isDerivedUnion() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isDerivedUnion();
}

bool QUmlPortObject::isID() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isID();
}

bool QUmlPortObject::isReadOnly() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isReadOnly();
}

QObject *QUmlPortObject::opposite() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->opposite())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->opposite()->asQModelingObject();
}

QObject *QUmlPortObject::owningAssociation() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->owningAssociation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->owningAssociation()->asQModelingObject();
}

const QList<QObject *> QUmlPortObject::qualifiers() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlPort *>(this)->qualifiers())
        list.append(element->asQModelingObject());
    return list;
}

const QSet<QObject *> QUmlPortObject::redefinedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlPort *>(this)->redefinedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::subsettedProperties() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingelementproperty_cast<QUmlPort *>(this)->subsettedProperties())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Port]

bool QUmlPortObject::isBehavior() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isBehavior();
}

bool QUmlPortObject::isConjugated() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isConjugated();
}

bool QUmlPortObject::isService() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isService();
}

QObject *QUmlPortObject::protocol() const
{
    if (!qmodelingelementproperty_cast<QUmlPort *>(this)->protocol())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlPort *>(this)->protocol()->asQModelingObject();
}

const QSet<QObject *> QUmlPortObject::provided() const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingelementproperty_cast<QUmlPort *>(this)->provided())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::redefinedPorts() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingelementproperty_cast<QUmlPort *>(this)->redefinedPorts())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::required() const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingelementproperty_cast<QUmlPort *>(this)->required())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPortObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlPort *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPortObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPortObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlPort *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlPortObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlPort *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlPortObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPortObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->separator();
}

// OPERATIONS [MultiplicityElement]

bool QUmlPortObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlPortObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->includesCardinality(C);
}

bool QUmlPortObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlPortObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->is(lowerbound, upperbound);
}

bool QUmlPortObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isMultivalued();
}

int QUmlPortObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->lowerBound();
}

//int QUmlPortObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlPort *>(this)->upperBound();
//}

// OPERATIONS [RedefinableElement]

bool QUmlPortObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isRedefinitionContextValid(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [ParameterableElement]

bool QUmlPortObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isTemplateParameter();
}

// OPERATIONS [Property]

bool QUmlPortObject::isAttribute(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isAttribute(qmodelingelementproperty_cast<QUmlProperty *>(p));
}

bool QUmlPortObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlPortObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isConsistentWith(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlPortObject::isNavigable() const
{
    return qmodelingelementproperty_cast<QUmlPort *>(this)->isNavigable();
}

QSet<QObject *> QUmlPortObject::subsettingContext() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingelementproperty_cast<QUmlPort *>(this)->subsettingContext())
        set.insert(element->asQModelingObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPortObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPortObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPortObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPortObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPortObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPortObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPortObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPortObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setName(name);
}

void QUmlPortObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPortObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPortObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setQualifiedName(qualifiedName);
}

void QUmlPortObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlPortObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlPortObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setOrdered(isOrdered);
}

void QUmlPortObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlPortObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setUnique(isUnique);
}

void QUmlPortObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlPortObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setLower(lower);
}

void QUmlPortObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlPortObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlPortObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setUpper(upper);
}

void QUmlPortObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlPortObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlPortObject::setLeaf(bool isLeaf)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setLeaf(isLeaf);
}

void QUmlPortObject::unsetLeaf()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("leaf"));
}

void QUmlPortObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPortObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeRedefinedElement(qmodelingelementproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPortObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlPortObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeRedefinitionContext(qmodelingelementproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlPortObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlPortObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeFeaturingClassifier(qmodelingelementproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlPortObject::setStatic(bool isStatic)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setStatic(isStatic);
}

void QUmlPortObject::unsetStatic()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlPortObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlPortObject::addEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlPortObject::removeEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlPortObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlPortObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlPortObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeDeployedElement(qmodelingelementproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlPortObject::addDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlPortObject::removeDeployment(QObject *deployment)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeDeployment(qmodelingelementproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlPortObject::setAggregation(QtUml::AggregationKind aggregation)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setAggregation(aggregation);
}

void QUmlPortObject::unsetAggregation()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("aggregation"));
}

void QUmlPortObject::setAssociation(QObject *association)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(association));
}

void QUmlPortObject::setAssociationEnd(QObject *associationEnd)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setAssociationEnd(qmodelingelementproperty_cast<QUmlProperty *>(associationEnd));
}

void QUmlPortObject::setClass(QObject *class_)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setClass(qmodelingelementproperty_cast<QUmlClass *>(class_));
}

void QUmlPortObject::setDatatype(QObject *datatype)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setDatatype(qmodelingelementproperty_cast<QUmlDataType *>(datatype));
}

void QUmlPortObject::setDefault(QString default_)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setDefault(default_);
}

void QUmlPortObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setDefaultValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(defaultValue));
}

void QUmlPortObject::setInterface(QObject *interface_)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setInterface(qmodelingelementproperty_cast<QUmlInterface *>(interface_));
}

void QUmlPortObject::setComposite(bool isComposite)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setComposite(isComposite);
}

void QUmlPortObject::unsetComposite()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("composite"));
}

void QUmlPortObject::setDerived(bool isDerived)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setDerived(isDerived);
}

void QUmlPortObject::unsetDerived()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derived"));
}

void QUmlPortObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setDerivedUnion(isDerivedUnion);
}

void QUmlPortObject::unsetDerivedUnion()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("derivedUnion"));
}

void QUmlPortObject::setID(bool isID)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setID(isID);
}

void QUmlPortObject::unsetID()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("iD"));
}

void QUmlPortObject::setReadOnly(bool isReadOnly)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setReadOnly(isReadOnly);
}

void QUmlPortObject::unsetReadOnly()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("readOnly"));
}

void QUmlPortObject::setOpposite(QObject *opposite)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setOpposite(qmodelingelementproperty_cast<QUmlProperty *>(opposite));
}

void QUmlPortObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setOwningAssociation(qmodelingelementproperty_cast<QUmlAssociation *>(owningAssociation));
}

void QUmlPortObject::addQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlPortObject::removeQualifier(QObject *qualifier)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeQualifier(qmodelingelementproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlPortObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlPortObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeRedefinedProperty(qmodelingelementproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlPortObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
}

void QUmlPortObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeSubsettedProperty(qmodelingelementproperty_cast<QUmlProperty *>(subsettedProperty));
}

// SLOTS FOR OWNED ATTRIBUTES [Port]

void QUmlPortObject::setBehavior(bool isBehavior)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setBehavior(isBehavior);
}

void QUmlPortObject::unsetBehavior()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("behavior"));
}

void QUmlPortObject::setConjugated(bool isConjugated)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setConjugated(isConjugated);
}

void QUmlPortObject::unsetConjugated()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("conjugated"));
}

void QUmlPortObject::setService(bool isService)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setService(isService);
}

void QUmlPortObject::unsetService()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("service"));
}

void QUmlPortObject::setProtocol(QObject *protocol)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->setProtocol(qmodelingelementproperty_cast<QUmlProtocolStateMachine *>(protocol));
}

void QUmlPortObject::addProvided(QObject *provided)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addProvided(qmodelingelementproperty_cast<QUmlInterface *>(provided));
}

void QUmlPortObject::removeProvided(QObject *provided)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeProvided(qmodelingelementproperty_cast<QUmlInterface *>(provided));
}

void QUmlPortObject::addRedefinedPort(QObject *redefinedPort)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addRedefinedPort(qmodelingelementproperty_cast<QUmlPort *>(redefinedPort));
}

void QUmlPortObject::removeRedefinedPort(QObject *redefinedPort)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeRedefinedPort(qmodelingelementproperty_cast<QUmlPort *>(redefinedPort));
}

void QUmlPortObject::addRequired(QObject *required)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->addRequired(qmodelingelementproperty_cast<QUmlInterface *>(required));
}

void QUmlPortObject::removeRequired(QObject *required)
{
    qmodelingelementproperty_cast<QUmlPort *>(this)->removeRequired(qmodelingelementproperty_cast<QUmlInterface *>(required));
}


void QUmlPortObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlPort");
    d->groupProperties.insert(QStringLiteral("QUmlPort"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isBehavior"))));
    d->groupProperties.insert(QStringLiteral("QUmlPort"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isConjugated"))));
    d->groupProperties.insert(QStringLiteral("QUmlPort"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isService"))));
    d->groupProperties.insert(QStringLiteral("QUmlPort"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("protocol"))));
    d->groupProperties.insert(QStringLiteral("QUmlPort"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("provided"))));
    d->groupProperties.insert(QStringLiteral("QUmlPort"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("redefinedPorts"))));
    d->groupProperties.insert(QStringLiteral("QUmlPort"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("required"))));
}

void QUmlPortObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, PropertyClassRole, QStringLiteral("QUmlPort"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, DocumentationRole, QStringLiteral("Specifies whether requests arriving at this port are sent to the classifier behavior of this classifier. Such ports are referred to as behavior port. Any invocation of a behavioral feature targeted at a behavior port will be handled by the instance of the owning classifier itself, rather than by any instances that this classifier may contain."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isBehavior, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, PropertyClassRole, QStringLiteral("QUmlPort"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, DocumentationRole, QStringLiteral("Specifies the way that the provided and required interfaces are derived from the Port’s Type. The default value is false."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isConjugated, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, PropertyClassRole, QStringLiteral("QUmlPort"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, DocumentationRole, QStringLiteral("If true indicates that this port is used to provide the published functionality of a classifier; if false, this port is used to implement the classifier but is not part of the essential externally-visible functionality of the classifier and can, therefore, be altered or deleted along with the internal implementation of the classifier and other properties that are considered part of its implementation."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, isService, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, PropertyClassRole, QStringLiteral("QUmlPort"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, DocumentationRole, QStringLiteral("References an optional protocol state machine which describes valid interactions at this interaction point."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, protocol, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, PropertyClassRole, QStringLiteral("QUmlPort"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, DocumentationRole, QStringLiteral("References the interfaces specifying the set of operations and receptions that the classifier offers to its environment via this port, and which it will handle either directly or by forwarding it to a part of its internal structure. This association is derived according to the value of isConjugated. If isConjugated is false, provided is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface. If isConjugated is true, it is derived as the union of the sets of interfaces used by the type of the port and its supertypes."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, provided, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, PropertyClassRole, QStringLiteral("QUmlPort"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, DocumentationRole, QStringLiteral("A port may be redefined when its containing classifier is specialized. The redefining port may have additional interfaces to those that are associated with the redefined port or it may replace an interface by one of its subtypes."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, SubsettedPropertiesRole, QStringLiteral("Property-redefinedProperty"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, redefinedPorts, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, PropertyClassRole, QStringLiteral("QUmlPort"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, DocumentationRole, QStringLiteral("References the interfaces specifying the set of operations and receptions that the classifier expects its environment to handle via this port. This association is derived according to the value of isConjugated. If isConjugated is false, required is derived as the union of the sets of interfaces used by the type of the port and its supertypes. If isConjugated is true, it is derived as the union of the sets of interfaces realized by the type of the port and its supertypes, or directly from the type of the port if the port is typed by an interface."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlPort, required, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

