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
#include "qumlopaqueexpressionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlOpaqueExpression>
#include <QtUml/QUmlBehavior>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>

QT_BEGIN_NAMESPACE

QUmlOpaqueExpressionObject::QUmlOpaqueExpressionObject(QUmlOpaqueExpression *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlOpaqueExpressionObject::~QUmlOpaqueExpressionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlOpaqueExpressionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlOpaqueExpressionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlOpaqueExpressionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlOpaqueExpressionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlOpaqueExpressionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->name();
}

QObject *QUmlOpaqueExpressionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlOpaqueExpressionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->namespace_()->asQModelingObject();
}

QString QUmlOpaqueExpressionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlOpaqueExpressionObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlOpaqueExpressionObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlOpaqueExpressionObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlOpaqueExpressionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [OpaqueExpression]

QObject *QUmlOpaqueExpressionObject::behavior() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->behavior())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->behavior()->asQModelingObject();
}

const QList<QString> QUmlOpaqueExpressionObject::bodies() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->bodies();
}

const QList<QString> QUmlOpaqueExpressionObject::languages() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->languages();
}

QObject *QUmlOpaqueExpressionObject::result() const
{
    if (!qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->result())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->result()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlOpaqueExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueExpressionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlOpaqueExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlOpaqueExpressionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlOpaqueExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlOpaqueExpressionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlOpaqueExpressionObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlOpaqueExpressionObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->booleanValue();
}

int QUmlOpaqueExpressionObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->integerValue();
}

bool QUmlOpaqueExpressionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlOpaqueExpressionObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isComputable();
}

bool QUmlOpaqueExpressionObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isNull();
}

double QUmlOpaqueExpressionObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->realValue();
}

QString QUmlOpaqueExpressionObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->stringValue();
}

int QUmlOpaqueExpressionObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->unlimitedValue();
}

// OPERATIONS [OpaqueExpression]

bool QUmlOpaqueExpressionObject::isIntegral() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isIntegral();
}

bool QUmlOpaqueExpressionObject::isNonNegative() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isNonNegative();
}

bool QUmlOpaqueExpressionObject::isPositive() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->isPositive();
}

int QUmlOpaqueExpressionObject::value() const
{
    return qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->value();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlOpaqueExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlOpaqueExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlOpaqueExpressionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlOpaqueExpressionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueExpressionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlOpaqueExpressionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setName(name);
}

void QUmlOpaqueExpressionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlOpaqueExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlOpaqueExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlOpaqueExpressionObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlOpaqueExpressionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlOpaqueExpressionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlOpaqueExpressionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setVisibility(visibility);
}

void QUmlOpaqueExpressionObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [OpaqueExpression]

void QUmlOpaqueExpressionObject::setBehavior(QObject *behavior)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setBehavior(qmodelingelementproperty_cast<QUmlBehavior *>(behavior));
}

void QUmlOpaqueExpressionObject::addBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->addBody(body);
}

void QUmlOpaqueExpressionObject::removeBody(QString  body)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->removeBody(body);
}

void QUmlOpaqueExpressionObject::addLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->addLanguage(language);
}

void QUmlOpaqueExpressionObject::removeLanguage(QString  language)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->removeLanguage(language);
}

void QUmlOpaqueExpressionObject::setResult(QObject *result)
{
    qmodelingelementproperty_cast<QUmlOpaqueExpression *>(this)->setResult(qmodelingelementproperty_cast<QUmlParameter *>(result));
}


void QUmlOpaqueExpressionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTypedElement");
    d->groupProperties.insert(QStringLiteral("QUmlTypedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlValueSpecification");

    d->propertyGroups << QStringLiteral("QUmlOpaqueExpression");
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("behavior"))));
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("bodies"))));
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("languages"))));
    d->groupProperties.insert(QStringLiteral("QUmlOpaqueExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("result"))));
}

void QUmlOpaqueExpressionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, PropertyClassRole, QStringLiteral("QUmlOpaqueExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, DocumentationRole, QStringLiteral("Specifies the behavior of the opaque expression."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, behavior, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, PropertyClassRole, QStringLiteral("QUmlOpaqueExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, DocumentationRole, QStringLiteral("The text of the expression, possibly in multiple languages."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, bodies, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, PropertyClassRole, QStringLiteral("QUmlOpaqueExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, DocumentationRole, QStringLiteral("Specifies the languages in which the expression is stated. The interpretation of the expression body depends on the languages. If the languages are unspecified, they might be implicit from the expression body or the context. Languages are matched to body strings by order."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, languages, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, PropertyClassRole, QStringLiteral("QUmlOpaqueExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, IsDerivedRole, true);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, DocumentationRole, QStringLiteral("Restricts an opaque expression to return exactly one return result. When the invocation of the opaque expression completes, a single set of values is returned to its owner. This association is derived from the single return result parameter of the associated behavior."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlOpaqueExpression, result, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

