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

QUmlPortObject::QUmlPortObject(QUmlPort *qModelingObject)
{
    setProperty("modelingObject", QVariant::fromValue(static_cast<QModelingObject *>(qModelingObject)));
}

QUmlPortObject::~QUmlPortObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingobjectproperty_cast<QUmlPort *>(this)->deletingFromQObject = true;
        delete qmodelingobjectproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlPortObject::ownedComment() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->ownedComment())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::ownedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->ownedElement())
        set.insert(element->asQObject());
    return set;
}

QObject *QUmlPortObject::owner() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->owner())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->owner()->asQObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlPortObject::clientDependency() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->clientDependency())
        set.insert(element->asQObject());
    return set;
}

QString QUmlPortObject::name() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->name();
}

QObject *QUmlPortObject::nameExpression() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->nameExpression())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->nameExpression()->asQObject();
}

QObject *QUmlPortObject::namespace_() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->namespace_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->namespace_()->asQObject();
}

QString QUmlPortObject::qualifiedName() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlPortObject::visibility() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlPortObject::type() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->type())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->type()->asQObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlPortObject::isOrdered() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isOrdered();
}

bool QUmlPortObject::isUnique() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isUnique();
}

int QUmlPortObject::lower() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->lower();
}

QObject *QUmlPortObject::lowerValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->lowerValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->lowerValue()->asQObject();
}

int QUmlPortObject::upper() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->upper();
}

QObject *QUmlPortObject::upperValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->upperValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->upperValue()->asQObject();
}

// OWNED ATTRIBUTES [RedefinableElement]

bool QUmlPortObject::isLeaf() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isLeaf();
}

const QSet<QObject *> QUmlPortObject::redefinedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlRedefinableElement *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->redefinedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::redefinitionContext() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->redefinitionContext())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Feature]

const QSet<QObject *> QUmlPortObject::featuringClassifier() const
{
    QSet<QObject *> set;
    foreach (QUmlClassifier *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->featuringClassifier())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPortObject::isStatic() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isStatic();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlPortObject::owningTemplateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->owningTemplateParameter()->asQObject();
}
// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlPortObject::end() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->end())
        list.append(element->asQObject());
    return list;
}

QObject *QUmlPortObject::templateParameter() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->templateParameter())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->templateParameter()->asQObject();
}

// OWNED ATTRIBUTES [DeploymentTarget]

const QSet<QObject *> QUmlPortObject::deployedElement() const
{
    QSet<QObject *> set;
    foreach (QUmlPackageableElement *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->deployedElement())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::deployment() const
{
    QSet<QObject *> set;
    foreach (QUmlDeployment *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->deployment())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Property]

QtUml::AggregationKind QUmlPortObject::aggregation() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->aggregation();
}

QObject *QUmlPortObject::association() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->association())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->association()->asQObject();
}

QObject *QUmlPortObject::associationEnd() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->associationEnd())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->associationEnd()->asQObject();
}

QObject *QUmlPortObject::class_() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->class_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->class_()->asQObject();
}

QObject *QUmlPortObject::datatype() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->datatype())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->datatype()->asQObject();
}

QString QUmlPortObject::default_() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->default_();
}

QObject *QUmlPortObject::defaultValue() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->defaultValue())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->defaultValue()->asQObject();
}

QObject *QUmlPortObject::interface_() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->interface_())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->interface_()->asQObject();
}

bool QUmlPortObject::isComposite() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isComposite();
}

bool QUmlPortObject::isDerived() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isDerived();
}

bool QUmlPortObject::isDerivedUnion() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isDerivedUnion();
}

bool QUmlPortObject::isID() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isID();
}

bool QUmlPortObject::isReadOnly() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isReadOnly();
}

QObject *QUmlPortObject::opposite() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->opposite())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->opposite()->asQObject();
}

QObject *QUmlPortObject::owningAssociation() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->owningAssociation())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->owningAssociation()->asQObject();
}

const QList<QObject *> QUmlPortObject::qualifier() const
{
    QList<QObject *> list;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->qualifier())
        list.append(element->asQObject());
    return list;
}

const QSet<QObject *> QUmlPortObject::redefinedProperty() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->redefinedProperty())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::subsettedProperty() const
{
    QSet<QObject *> set;
    foreach (QUmlProperty *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->subsettedProperty())
        set.insert(element->asQObject());
    return set;
}

// OWNED ATTRIBUTES [Port]

bool QUmlPortObject::isBehavior() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isBehavior();
}

bool QUmlPortObject::isConjugated() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isConjugated();
}

bool QUmlPortObject::isService() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isService();
}

QObject *QUmlPortObject::protocol() const
{
    if (!qmodelingobjectproperty_cast<QUmlPort *>(this)->protocol())
        return 0;
    else
        return qmodelingobjectproperty_cast<QUmlPort *>(this)->protocol()->asQObject();
}

const QSet<QObject *> QUmlPortObject::provided() const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->provided())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::redefinedPort() const
{
    QSet<QObject *> set;
    foreach (QUmlPort *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->redefinedPort())
        set.insert(element->asQObject());
    return set;
}

const QSet<QObject *> QUmlPortObject::required() const
{
    QSet<QObject *> set;
    foreach (QUmlInterface *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->required())
        set.insert(element->asQObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlPortObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->allOwnedElements())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPortObject::mustBeOwned() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlPortObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->allNamespaces())
        set.append(element->asQObject());
    return set;
}

QSet<QObject *> QUmlPortObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->allOwningPackages())
        set.insert(element->asQObject());
    return set;
}

bool QUmlPortObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isDistinguishableFrom(qmodelingobjectproperty_cast<QUmlNamedElement *>(n), qmodelingobjectproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlPortObject::separator() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->separator();
}

// OPERATIONS [MultiplicityElement]

bool QUmlPortObject::compatibleWith(QObject *other) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->compatibleWith(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlPortObject::includesCardinality(int C) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->includesCardinality(C);
}

bool QUmlPortObject::includesMultiplicity(QObject *M) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->includesMultiplicity(qmodelingobjectproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlPortObject::is(int lowerbound, int upperbound) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->is(lowerbound, upperbound);
}

bool QUmlPortObject::isMultivalued() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isMultivalued();
}

int QUmlPortObject::lowerBound() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->lowerBound();
}

//int QUmlPortObject::upperBound() const
//{
//    return qmodelingobjectproperty_cast<QUmlPort *>(this)->upperBound();
//}

// OPERATIONS [RedefinableElement]

bool QUmlPortObject::isRedefinitionContextValid(QObject *redefined) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isRedefinitionContextValid(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefined));
}

// OPERATIONS [ParameterableElement]

bool QUmlPortObject::isTemplateParameter() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isTemplateParameter();
}

// OPERATIONS [Property]

bool QUmlPortObject::isAttribute(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isAttribute(qmodelingobjectproperty_cast<QUmlProperty *>(p));
}

bool QUmlPortObject::isCompatibleWith(QObject *p) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isCompatibleWith(qmodelingobjectproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlPortObject::isConsistentWith(QObject *redefinee) const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isConsistentWith(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinee));
}

bool QUmlPortObject::isNavigable() const
{
    return qmodelingobjectproperty_cast<QUmlPort *>(this)->isNavigable();
}

QSet<QObject *> QUmlPortObject::subsettingContext() const
{
    QSet<QObject *> set;
    foreach (QUmlType *element, qmodelingobjectproperty_cast<QUmlPort *>(this)->subsettingContext())
        set.insert(element->asQObject());
    return set;
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlPortObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPortObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeOwnedComment(qmodelingobjectproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlPortObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPortObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeOwnedElement(qmodelingobjectproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlPortObject::setOwner(QObject *owner)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setOwner(qmodelingobjectproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlPortObject::addClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPortObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeClientDependency(qmodelingobjectproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlPortObject::setName(QString name)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setName(name);
}

void QUmlPortObject::setNameExpression(QObject *nameExpression)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setNameExpression(qmodelingobjectproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlPortObject::setNamespace(QObject *namespace_)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setNamespace(qmodelingobjectproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlPortObject::setQualifiedName(QString qualifiedName)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setQualifiedName(qualifiedName);
}

void QUmlPortObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlPortObject::setType(QObject *type)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setType(qmodelingobjectproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlPortObject::setOrdered(bool isOrdered)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setOrdered(isOrdered);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("ordered");
}

void QUmlPortObject::unsetOrdered()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("ordered"));
}

void QUmlPortObject::setUnique(bool isUnique)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setUnique(isUnique);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("unique");
}

void QUmlPortObject::unsetUnique()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("unique"));
}

void QUmlPortObject::setLower(int lower)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setLower(lower);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("lower");
}

void QUmlPortObject::unsetLower()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("lower"));
}

void QUmlPortObject::setLowerValue(QObject *lowerValue)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setLowerValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlPortObject::setUpper(int upper)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setUpper(upper);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("upper");
}

void QUmlPortObject::unsetUpper()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("upper"));
}

void QUmlPortObject::setUpperValue(QObject *upperValue)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setUpperValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [RedefinableElement]

void QUmlPortObject::setLeaf(bool isLeaf)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setLeaf(isLeaf);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("leaf");
}

void QUmlPortObject::unsetLeaf()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("leaf"));
}

void QUmlPortObject::addRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPortObject::removeRedefinedElement(QObject *redefinedElement)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeRedefinedElement(qmodelingobjectproperty_cast<QUmlRedefinableElement *>(redefinedElement));
}

void QUmlPortObject::addRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

void QUmlPortObject::removeRedefinitionContext(QObject *redefinitionContext)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeRedefinitionContext(qmodelingobjectproperty_cast<QUmlClassifier *>(redefinitionContext));
}

// SLOTS FOR OWNED ATTRIBUTES [Feature]

void QUmlPortObject::addFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlPortObject::removeFeaturingClassifier(QObject *featuringClassifier)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeFeaturingClassifier(qmodelingobjectproperty_cast<QUmlClassifier *>(featuringClassifier));
}

void QUmlPortObject::setStatic(bool isStatic)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setStatic(isStatic);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("static");
}

void QUmlPortObject::unsetStatic()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("static"));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlPortObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setOwningTemplateParameter(qmodelingobjectproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlPortObject::addEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlPortObject::removeEnd(QObject *end)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeEnd(qmodelingobjectproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlPortObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setTemplateParameter(qmodelingobjectproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [DeploymentTarget]

void QUmlPortObject::addDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlPortObject::removeDeployedElement(QObject *deployedElement)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeDeployedElement(qmodelingobjectproperty_cast<QUmlPackageableElement *>(deployedElement));
}

void QUmlPortObject::addDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

void QUmlPortObject::removeDeployment(QObject *deployment)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeDeployment(qmodelingobjectproperty_cast<QUmlDeployment *>(deployment));
}

// SLOTS FOR OWNED ATTRIBUTES [Property]

void QUmlPortObject::setAggregation(QtUml::AggregationKind aggregation)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setAggregation(aggregation);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("aggregation");
}

void QUmlPortObject::unsetAggregation()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("aggregation"));
}

void QUmlPortObject::setAssociation(QObject *association)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setAssociation(qmodelingobjectproperty_cast<QUmlAssociation *>(association));
}

void QUmlPortObject::setAssociationEnd(QObject *associationEnd)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setAssociationEnd(qmodelingobjectproperty_cast<QUmlProperty *>(associationEnd));
}

void QUmlPortObject::setClass(QObject *class_)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setClass(qmodelingobjectproperty_cast<QUmlClass *>(class_));
}

void QUmlPortObject::setDatatype(QObject *datatype)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setDatatype(qmodelingobjectproperty_cast<QUmlDataType *>(datatype));
}

void QUmlPortObject::setDefault(QString default_)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setDefault(default_);
}

void QUmlPortObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setDefaultValue(qmodelingobjectproperty_cast<QUmlValueSpecification *>(defaultValue));
}

void QUmlPortObject::setInterface(QObject *interface_)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setInterface(qmodelingobjectproperty_cast<QUmlInterface *>(interface_));
}

void QUmlPortObject::setComposite(bool isComposite)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setComposite(isComposite);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("composite");
}

void QUmlPortObject::unsetComposite()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("composite"));
}

void QUmlPortObject::setDerived(bool isDerived)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setDerived(isDerived);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("derived");
}

void QUmlPortObject::unsetDerived()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("derived"));
}

void QUmlPortObject::setDerivedUnion(bool isDerivedUnion)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setDerivedUnion(isDerivedUnion);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("derivedUnion");
}

void QUmlPortObject::unsetDerivedUnion()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("derivedUnion"));
}

void QUmlPortObject::setID(bool isID)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setID(isID);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("iD");
}

void QUmlPortObject::unsetID()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("iD"));
}

void QUmlPortObject::setReadOnly(bool isReadOnly)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setReadOnly(isReadOnly);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("readOnly");
}

void QUmlPortObject::unsetReadOnly()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("readOnly"));
}

void QUmlPortObject::setOpposite(QObject *opposite)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setOpposite(qmodelingobjectproperty_cast<QUmlProperty *>(opposite));
}

void QUmlPortObject::setOwningAssociation(QObject *owningAssociation)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setOwningAssociation(qmodelingobjectproperty_cast<QUmlAssociation *>(owningAssociation));
}

void QUmlPortObject::addQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlPortObject::removeQualifier(QObject *qualifier)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeQualifier(qmodelingobjectproperty_cast<QUmlProperty *>(qualifier));
}

void QUmlPortObject::addRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addRedefinedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlPortObject::removeRedefinedProperty(QObject *redefinedProperty)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeRedefinedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(redefinedProperty));
}

void QUmlPortObject::addSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addSubsettedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(subsettedProperty));
}

void QUmlPortObject::removeSubsettedProperty(QObject *subsettedProperty)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeSubsettedProperty(qmodelingobjectproperty_cast<QUmlProperty *>(subsettedProperty));
}

// SLOTS FOR OWNED ATTRIBUTES [Port]

void QUmlPortObject::setBehavior(bool isBehavior)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setBehavior(isBehavior);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("behavior");
}

void QUmlPortObject::unsetBehavior()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("behavior"));
}

void QUmlPortObject::setConjugated(bool isConjugated)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setConjugated(isConjugated);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("conjugated");
}

void QUmlPortObject::unsetConjugated()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("conjugated"));
}

void QUmlPortObject::setService(bool isService)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setService(isService);
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties() << QStringLiteral("service");
}

void QUmlPortObject::unsetService()
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->modifiedResettableProperties().removeAll(QStringLiteral("service"));
}

void QUmlPortObject::setProtocol(QObject *protocol)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->setProtocol(qmodelingobjectproperty_cast<QUmlProtocolStateMachine *>(protocol));
}

void QUmlPortObject::addProvided(QObject *provided)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addProvided(qmodelingobjectproperty_cast<QUmlInterface *>(provided));
}

void QUmlPortObject::removeProvided(QObject *provided)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeProvided(qmodelingobjectproperty_cast<QUmlInterface *>(provided));
}

void QUmlPortObject::addRedefinedPort(QObject *redefinedPort)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addRedefinedPort(qmodelingobjectproperty_cast<QUmlPort *>(redefinedPort));
}

void QUmlPortObject::removeRedefinedPort(QObject *redefinedPort)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeRedefinedPort(qmodelingobjectproperty_cast<QUmlPort *>(redefinedPort));
}

void QUmlPortObject::addRequired(QObject *required)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->addRequired(qmodelingobjectproperty_cast<QUmlInterface *>(required));
}

void QUmlPortObject::removeRequired(QObject *required)
{
    qmodelingobjectproperty_cast<QUmlPort *>(this)->removeRequired(qmodelingobjectproperty_cast<QUmlInterface *>(required));
}

QT_END_NAMESPACE

