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
#include "qumlvariableobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlVariable>
#include <QtUml/QUmlAction>
#include <QtUml/QUmlActivity>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlStructuredActivityNode>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlVariableObject::QUmlVariableObject(QUmlVariable *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlVariableObject::~QUmlVariableObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlVariable *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlVariableObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlVariable *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlVariableObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlVariable *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlVariableObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlVariableObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->isOrdered();
}

bool QUmlVariableObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->isUnique();
}

int QUmlVariableObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->lower();
}

QObject *QUmlVariableObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->lowerValue()->asQModelingObject();
}

int QUmlVariableObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->upper();
}

QObject *QUmlVariableObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlVariableObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlVariable *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlVariableObject::name() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->name();
}

QObject *QUmlVariableObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlVariableObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->namespace_()->asQModelingObject();
}

QString QUmlVariableObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlVariableObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlVariableObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlVariableObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlVariableObject::ends() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingelementproperty_cast<QUmlVariable *>(this)->ends())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlVariableObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [Variable]

QObject *QUmlVariableObject::activityScope() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->activityScope())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->activityScope()->asQModelingObject();
}

QObject *QUmlVariableObject::scope() const
{
    if (!qmodelingelementproperty_cast<QUmlVariable *>(this)->scope())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlVariable *>(this)->scope()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlVariableObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlVariable *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlVariableObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlVariableObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlVariableObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->includesCardinality(C);
}

bool QUmlVariableObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlVariableObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->is(lowerbound, upperbound);
}

bool QUmlVariableObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->isMultivalued();
}

int QUmlVariableObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->lowerBound();
}

//int QUmlVariableObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlVariable *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlVariableObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlVariable *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlVariableObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlVariable *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlVariableObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlVariableObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlVariableObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlVariableObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->isTemplateParameter();
}

// OPERATIONS [Variable]

bool QUmlVariableObject::isAccessibleBy(QObject *a) const
{
    return qmodelingelementproperty_cast<QUmlVariable *>(this)->isAccessibleBy(qmodelingelementproperty_cast<QUmlAction *>(a));
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlVariableObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlVariableObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlVariableObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlVariableObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlVariableObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlVariableObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setOrdered(isOrdered);
}

void QUmlVariableObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlVariableObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setUnique(isUnique);
}

void QUmlVariableObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlVariableObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setLower(lower);
}

void QUmlVariableObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlVariableObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlVariableObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setUpper(upper);
}

void QUmlVariableObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlVariableObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlVariableObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlVariableObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlVariableObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setName(name);
}

void QUmlVariableObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlVariableObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlVariableObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setQualifiedName(qualifiedName);
}

void QUmlVariableObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlVariableObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlVariableObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlVariableObject::addEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->addEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlVariableObject::removeEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->removeEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlVariableObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [Variable]

void QUmlVariableObject::setActivityScope(QObject *activityScope)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setActivityScope(qmodelingelementproperty_cast<QUmlActivity *>(activityScope));
}

void QUmlVariableObject::setScope(QObject *scope)
{
    qmodelingelementproperty_cast<QUmlVariable *>(this)->setScope(qmodelingelementproperty_cast<QUmlStructuredActivityNode *>(scope));
}


void QUmlVariableObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlMultiplicityElement");
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isOrdered"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isUnique"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lower"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("lowerValue"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upper"))));
    d->groupProperties.insert(QStringLiteral("QUmlMultiplicityElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("upperValue"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlTypedElement");
    d->groupProperties.insert(QStringLiteral("QUmlTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlConnectableElement");
    d->groupProperties.insert(QStringLiteral("QUmlConnectableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ends"))));
    d->groupProperties.insert(QStringLiteral("QUmlConnectableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlVariable");
    d->groupProperties.insert(QStringLiteral("QUmlVariable"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("activityScope"))));
    d->groupProperties.insert(QStringLiteral("QUmlVariable"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("scope"))));
}

void QUmlVariableObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, PropertyClassRole, QStringLiteral("QUmlVariable"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, DocumentationRole, QStringLiteral("An activity that owns the variable."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, activityScope, OppositeEndRole, QStringLiteral("Activity-variable"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, PropertyClassRole, QStringLiteral("QUmlVariable"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, DocumentationRole, QStringLiteral("A structured activity node that owns the variable."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, SubsettedPropertiesRole, QStringLiteral("NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlVariable, scope, OppositeEndRole, QStringLiteral("StructuredActivityNode-variable"));

}

QT_END_NAMESPACE

