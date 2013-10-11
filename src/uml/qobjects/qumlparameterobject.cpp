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
#include "qumlparameterobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlParameter>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConnectableElementTemplateParameter>
#include <QtUml/QUmlConnectorEnd>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMultiplicityElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlParameterObject::QUmlParameterObject(QUmlParameter *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlParameterObject::~QUmlParameterObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlParameter *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlParameterObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlParameterObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlParameterObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [MultiplicityElement]

bool QUmlParameterObject::isOrdered() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isOrdered();
}

bool QUmlParameterObject::isUnique() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isUnique();
}

int QUmlParameterObject::lower() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->lower();
}

QObject *QUmlParameterObject::lowerValue() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->lowerValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->lowerValue()->asQModelingObject();
}

int QUmlParameterObject::upper() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->upper();
}

QObject *QUmlParameterObject::upperValue() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->upperValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->upperValue()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlParameterObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlParameterObject::name() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->name();
}

QObject *QUmlParameterObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlParameterObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->namespace_()->asQModelingObject();
}

QString QUmlParameterObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlParameterObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->visibility();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlParameterObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlParameterObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->owningTemplateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [ConnectableElement]

const QList<QObject *> QUmlParameterObject::ends() const
{
    QList<QObject *> list;
    foreach (QUmlConnectorEnd *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->ends())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlParameterObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [Parameter]

QString QUmlParameterObject::default_() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->default_();
}

QObject *QUmlParameterObject::defaultValue() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->defaultValue())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->defaultValue()->asQModelingObject();
}

QtUml::ParameterDirectionKind QUmlParameterObject::direction() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->direction();
}

QtUml::ParameterEffectKind QUmlParameterObject::effect() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->effect();
}

bool QUmlParameterObject::isException() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isException();
}

bool QUmlParameterObject::isStream() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isStream();
}

QObject *QUmlParameterObject::operation() const
{
    if (!qmodelingelementproperty_cast<QUmlParameter *>(this)->operation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameter *>(this)->operation()->asQModelingObject();
}

const QSet<QObject *> QUmlParameterObject::parameterSets() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterSet *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->parameterSets())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlParameterObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlParameterObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->mustBeOwned();
}

// OPERATIONS [MultiplicityElement]

bool QUmlParameterObject::compatibleWith(QObject *other) const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->compatibleWith(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(other));
}

bool QUmlParameterObject::includesCardinality(int C) const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->includesCardinality(C);
}

bool QUmlParameterObject::includesMultiplicity(QObject *M) const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->includesMultiplicity(qmodelingelementproperty_cast<QUmlMultiplicityElement *>(M));
}

bool QUmlParameterObject::is(int lowerbound, int upperbound) const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->is(lowerbound, upperbound);
}

bool QUmlParameterObject::isMultivalued() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isMultivalued();
}

int QUmlParameterObject::lowerBound() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->lowerBound();
}

//int QUmlParameterObject::upperBound() const
//{
//    return qmodelingelementproperty_cast<QUmlParameter *>(this)->upperBound();
//}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlParameterObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlParameterObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlParameter *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlParameterObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlParameterObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlParameterObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlParameterObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlParameter *>(this)->isTemplateParameter();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlParameterObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [MultiplicityElement]

void QUmlParameterObject::setOrdered(bool isOrdered)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setOrdered(isOrdered);
}

void QUmlParameterObject::unsetOrdered()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("ordered"));
}

void QUmlParameterObject::setUnique(bool isUnique)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setUnique(isUnique);
}

void QUmlParameterObject::unsetUnique()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("unique"));
}

void QUmlParameterObject::setLower(int lower)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setLower(lower);
}

void QUmlParameterObject::unsetLower()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("lower"));
}

void QUmlParameterObject::setLowerValue(QObject *lowerValue)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setLowerValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(lowerValue));
}

void QUmlParameterObject::setUpper(int upper)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setUpper(upper);
}

void QUmlParameterObject::unsetUpper()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("upper"));
}

void QUmlParameterObject::setUpperValue(QObject *upperValue)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setUpperValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(upperValue));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlParameterObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setName(name);
}

void QUmlParameterObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlParameterObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlParameterObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setQualifiedName(qualifiedName);
}

void QUmlParameterObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlParameterObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlParameterObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}
// SLOTS FOR OWNED ATTRIBUTES [ConnectableElement]

void QUmlParameterObject::addEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->addEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlParameterObject::removeEnd(QObject *end)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->removeEnd(qmodelingelementproperty_cast<QUmlConnectorEnd *>(end));
}

void QUmlParameterObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlConnectableElementTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [Parameter]

void QUmlParameterObject::setDefault(QString default_)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setDefault(default_);
}

void QUmlParameterObject::setDefaultValue(QObject *defaultValue)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setDefaultValue(qmodelingelementproperty_cast<QUmlValueSpecification *>(defaultValue));
}

void QUmlParameterObject::setDirection(QtUml::ParameterDirectionKind direction)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setDirection(direction);
}

void QUmlParameterObject::unsetDirection()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("direction"));
}

void QUmlParameterObject::setEffect(QtUml::ParameterEffectKind effect)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setEffect(effect);
}

void QUmlParameterObject::setException(bool isException)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setException(isException);
}

void QUmlParameterObject::unsetException()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("exception"));
}

void QUmlParameterObject::setStream(bool isStream)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setStream(isStream);
}

void QUmlParameterObject::unsetStream()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("stream"));
}

void QUmlParameterObject::setOperation(QObject *operation)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->setOperation(qmodelingelementproperty_cast<QUmlOperation *>(operation));
}

void QUmlParameterObject::addParameterSet(QObject *parameterSet)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->addParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(parameterSet));
}

void QUmlParameterObject::removeParameterSet(QObject *parameterSet)
{
    qmodelingelementproperty_cast<QUmlParameter *>(this)->removeParameterSet(qmodelingelementproperty_cast<QUmlParameterSet *>(parameterSet));
}


void QUmlParameterObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlParameter");
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("default_"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("defaultValue"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("direction"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("effect"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isException"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("isStream"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("operation"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameter"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameterSets"))));
}

void QUmlParameterObject::setPropertyData()
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

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, DocumentationRole, QStringLiteral("Specifies a String that represents a value to be used when no argument is supplied for the Parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, default_, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, DocumentationRole, QStringLiteral("Specifies a ValueSpecification that represents a value to be used when no argument is supplied for the Parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, defaultValue, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, DocumentationRole, QStringLiteral("Indicates whether a parameter is being sent into or out of a behavioral element."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, direction, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, DocumentationRole, QStringLiteral("Specifies the effect that the owner of the parameter has on values passed in or out of the parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, effect, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, DocumentationRole, QStringLiteral("Tells whether an output parameter may emit a value to the exclusion of the other outputs."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isException, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, DocumentationRole, QStringLiteral("Tells whether an input parameter may accept values while its behavior is executing, or whether an output parameter post values while the behavior is executing."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, isStream, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, DocumentationRole, QStringLiteral("References the Operation owning this parameter."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, SubsettedPropertiesRole, QStringLiteral("A_ownedParameter_ownerFormalParam-ownerFormalParam"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, operation, OppositeEndRole, QStringLiteral("Operation-ownedParameter"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, PropertyClassRole, QStringLiteral("QUmlParameter"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, DocumentationRole, QStringLiteral("The parameter sets containing the parameter. See ParameterSet."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameter, parameterSets, OppositeEndRole, QStringLiteral("ParameterSet-parameter"));

}

QT_END_NAMESPACE

