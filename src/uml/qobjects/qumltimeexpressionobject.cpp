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
#include "qumltimeexpressionobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTimeExpression>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlObservation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlTimeExpressionObject::QUmlTimeExpressionObject(QUmlTimeExpression *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlTimeExpressionObject::~QUmlTimeExpressionObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTimeExpressionObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTimeExpressionObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTimeExpressionObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTimeExpressionObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlTimeExpressionObject::name() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->name();
}

QObject *QUmlTimeExpressionObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlTimeExpressionObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->namespace_()->asQModelingObject();
}

QString QUmlTimeExpressionObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlTimeExpressionObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlTimeExpressionObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlTimeExpressionObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlTimeExpressionObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->visibility();
}

// OWNED ATTRIBUTES [TimeExpression]

QObject *QUmlTimeExpressionObject::expr() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->expr())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->expr()->asQModelingObject();
}

const QSet<QObject *> QUmlTimeExpressionObject::observations() const
{
    QSet<QObject *> set;
    foreach (QUmlObservation *element, qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->observations())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTimeExpressionObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTimeExpressionObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTimeExpressionObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlTimeExpressionObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTimeExpressionObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTimeExpressionObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlTimeExpressionObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlTimeExpressionObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->booleanValue();
}

int QUmlTimeExpressionObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->integerValue();
}

bool QUmlTimeExpressionObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlTimeExpressionObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->isComputable();
}

bool QUmlTimeExpressionObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->isNull();
}

double QUmlTimeExpressionObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->realValue();
}

QString QUmlTimeExpressionObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->stringValue();
}

int QUmlTimeExpressionObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeExpressionObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeExpressionObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeExpressionObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeExpressionObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeExpressionObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeExpressionObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeExpressionObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeExpressionObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setName(name);
}

void QUmlTimeExpressionObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTimeExpressionObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTimeExpressionObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlTimeExpressionObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeExpressionObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlTimeExpressionObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeExpressionObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setVisibility(visibility);
}

void QUmlTimeExpressionObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TimeExpression]

void QUmlTimeExpressionObject::setExpr(QObject *expr)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->setExpr(qmodelingelementproperty_cast<QUmlValueSpecification *>(expr));
}

void QUmlTimeExpressionObject::addObservation(QObject *observation)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->addObservation(qmodelingelementproperty_cast<QUmlObservation *>(observation));
}

void QUmlTimeExpressionObject::removeObservation(QObject *observation)
{
    qmodelingelementproperty_cast<QUmlTimeExpression *>(this)->removeObservation(qmodelingelementproperty_cast<QUmlObservation *>(observation));
}


void QUmlTimeExpressionObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTimeExpression");
    d->groupProperties.insert(QStringLiteral("QUmlTimeExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("expr"))));
    d->groupProperties.insert(QStringLiteral("QUmlTimeExpression"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("observations"))));
}

void QUmlTimeExpressionObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, PropertyClassRole, QStringLiteral("QUmlTimeExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, DocumentationRole, QStringLiteral("The value of the time expression."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, expr, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, PropertyClassRole, QStringLiteral("QUmlTimeExpression"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, DocumentationRole, QStringLiteral("Refers to the time and duration observations that are involved in expr."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeExpression, observations, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

