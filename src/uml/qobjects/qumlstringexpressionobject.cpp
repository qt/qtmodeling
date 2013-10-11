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
#include "qumlstringexpressionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlTemplateBinding>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTemplateSignature>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlStringExpressionObject::QUmlStringExpressionObject(QUmlStringExpression *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlStringExpressionObject::~QUmlStringExpressionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlStringExpression *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlStringExpressionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlStringExpressionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlStringExpressionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlStringExpressionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlStringExpressionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->name();
}

QObject *QUmlStringExpressionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlStringExpressionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->namespace_()->asQModelingObject();
}

QString QUmlStringExpressionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlStringExpressionObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlStringExpressionObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlStringExpressionObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlStringExpressionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [Expression]

const QList<QObject *> QUmlStringExpressionObject::operands() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->operands())
        list.append(element->asQModelingObject());
    return list;
}

QString QUmlStringExpressionObject::symbol() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->symbol();
}

// OWNED ATTRIBUTES [TemplateableElement]

QObject *QUmlStringExpressionObject::ownedTemplateSignature() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->ownedTemplateSignature())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->ownedTemplateSignature()->asQModelingObject();
}

const QSet<QObject *> QUmlStringExpressionObject::templateBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlTemplateBinding *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->templateBindings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [StringExpression]

QObject *QUmlStringExpressionObject::owningExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlStringExpression *>(this)->owningExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->owningExpression()->asQModelingObject();
}

const QSet<QObject *> QUmlStringExpressionObject::subExpressions() const
{
    QSet<QObject *> set;
    foreach (QUmlStringExpression *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->subExpressions())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlStringExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStringExpressionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlStringExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlStringExpressionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlStringExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlStringExpressionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlStringExpressionObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlStringExpressionObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->booleanValue();
}

int QUmlStringExpressionObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->integerValue();
}

bool QUmlStringExpressionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlStringExpressionObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->isComputable();
}

bool QUmlStringExpressionObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->isNull();
}

double QUmlStringExpressionObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->realValue();
}

int QUmlStringExpressionObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->unlimitedValue();
}

// OPERATIONS [TemplateableElement]

bool QUmlStringExpressionObject::isTemplate() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->isTemplate();
}

QSet<QObject *> QUmlStringExpressionObject::parameterableElements() const
{
    QSet<QObject *> set;
    foreach (QUmlParameterableElement *element, qmodelingelementproperty_cast<QUmlStringExpression *>(this)->parameterableElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [StringExpression]

QString QUmlStringExpressionObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlStringExpression *>(this)->stringValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlStringExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStringExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlStringExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStringExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlStringExpressionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlStringExpressionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStringExpressionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlStringExpressionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setName(name);
}

void QUmlStringExpressionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlStringExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlStringExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlStringExpressionObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlStringExpressionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlStringExpressionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlStringExpressionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setVisibility(visibility);
}

void QUmlStringExpressionObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Expression]

void QUmlStringExpressionObject::addOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->addOperand(qmodelingelementproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlStringExpressionObject::removeOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->removeOperand(qmodelingelementproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlStringExpressionObject::setSymbol(QString symbol)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setSymbol(symbol);
}

// SLOTS FOR OWNED ATTRIBUTES [TemplateableElement]

void QUmlStringExpressionObject::setOwnedTemplateSignature(QObject *ownedTemplateSignature)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setOwnedTemplateSignature(qmodelingelementproperty_cast<QUmlTemplateSignature *>(ownedTemplateSignature));
}

void QUmlStringExpressionObject::addTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->addTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

void QUmlStringExpressionObject::removeTemplateBinding(QObject *templateBinding)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->removeTemplateBinding(qmodelingelementproperty_cast<QUmlTemplateBinding *>(templateBinding));
}

// SLOTS FOR OWNED ATTRIBUTES [StringExpression]

void QUmlStringExpressionObject::setOwningExpression(QObject *owningExpression)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->setOwningExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(owningExpression));
}

void QUmlStringExpressionObject::addSubExpression(QObject *subExpression)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->addSubExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(subExpression));
}

void QUmlStringExpressionObject::removeSubExpression(QObject *subExpression)
{
    qmodelingelementproperty_cast<QUmlStringExpression *>(this)->removeSubExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(subExpression));
}


void QUmlStringExpressionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlExpression");
    d->groupProperties.insert(QStringLiteral("QUmlExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("operands"))));
    d->groupProperties.insert(QStringLiteral("QUmlExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("symbol"))));

    d->propertyGroups << QStringLiteral("QUmlTemplateableElement");
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedTemplateSignature"))));
    d->groupProperties.insert(QStringLiteral("QUmlTemplateableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateBindings"))));

    d->propertyGroups << QStringLiteral("QUmlStringExpression");
    d->groupProperties.insert(QStringLiteral("QUmlStringExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlStringExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("subExpressions"))));
}

void QUmlStringExpressionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, PropertyClassRole, QStringLiteral("QUmlStringExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, DocumentationRole, QStringLiteral("The string expression of which this expression is a substring."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, SubsettedPropertiesRole, QStringLiteral("Element-owner"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, owningExpression, OppositeEndRole, QStringLiteral("StringExpression-subExpression"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, PropertyClassRole, QStringLiteral("QUmlStringExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, DocumentationRole, QStringLiteral("The StringExpressions that constitute this StringExpression."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlStringExpression, subExpressions, OppositeEndRole, QStringLiteral("StringExpression-owningExpression"));

}

QT_END_NAMESPACE

