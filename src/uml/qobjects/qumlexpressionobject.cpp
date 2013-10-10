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
#include "qumlexpressionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlExpression>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlExpressionObject::QUmlExpressionObject(QUmlExpression *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlExpressionObject::~QUmlExpressionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlExpression *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlExpressionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlExpression *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlExpressionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExpression *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlExpressionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlExpression *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpression *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlExpressionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlExpression *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlExpressionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->name();
}

QObject *QUmlExpressionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlExpression *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpression *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlExpressionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlExpression *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpression *>(this)->namespace_()->asQModelingObject();
}

QString QUmlExpressionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlExpressionObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlExpression *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpression *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlExpressionObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExpression *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpression *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlExpressionObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlExpression *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlExpression *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlExpressionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [Expression]

const QList<QObject *> QUmlExpressionObject::operands() const
{
    QList<QObject *> list;
    foreach (QUmlValueSpecification *element, qmodelingelementproperty_cast<QUmlExpression *>(this)->operands())
        list.append(element->asQModelingObject());
    return list;
}

QString QUmlExpressionObject::symbol() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->symbol();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlExpression *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpressionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlExpression *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlExpressionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlExpression *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlExpressionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlExpressionObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlExpressionObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->booleanValue();
}

int QUmlExpressionObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->integerValue();
}

bool QUmlExpressionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlExpressionObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->isComputable();
}

bool QUmlExpressionObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->isNull();
}

double QUmlExpressionObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->realValue();
}

QString QUmlExpressionObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->stringValue();
}

int QUmlExpressionObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlExpression *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlExpressionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlExpressionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpressionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlExpressionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setName(name);
}

void QUmlExpressionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlExpressionObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlExpressionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlExpressionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlExpressionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setVisibility(visibility);
}

void QUmlExpressionObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Expression]

void QUmlExpressionObject::addOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->addOperand(qmodelingelementproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlExpressionObject::removeOperand(QObject *operand)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->removeOperand(qmodelingelementproperty_cast<QUmlValueSpecification *>(operand));
}

void QUmlExpressionObject::setSymbol(QString symbol)
{
    qmodelingelementproperty_cast<QUmlExpression *>(this)->setSymbol(symbol);
}


void QUmlExpressionObject::setGroupProperties()
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
}

void QUmlExpressionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, PropertyClassRole, QStringLiteral("QUmlExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, DocumentationRole, QStringLiteral("Specifies a sequence of operands."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, operands, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, PropertyClassRole, QStringLiteral("QUmlExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, DocumentationRole, QStringLiteral("The symbol associated with the node in the expression tree."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlExpression, symbol, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

