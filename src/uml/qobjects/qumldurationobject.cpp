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
#include "qumldurationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDuration>
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

QUmlDurationObject::QUmlDurationObject(QUmlDuration *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlDurationObject::~QUmlDurationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlDuration *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDurationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDurationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDurationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->name();
}

QObject *QUmlDurationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDurationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDurationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlDurationObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlDurationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->visibility();
}

// OWNED ATTRIBUTES [Duration]

QObject *QUmlDurationObject::expr() const
{
    if (!qmodelingelementproperty_cast<QUmlDuration *>(this)->expr())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDuration *>(this)->expr()->asQModelingObject();
}

const QSet<QObject *> QUmlDurationObject::observations() const
{
    QSet<QObject *> set;
    foreach (QUmlObservation *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->observations())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDurationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDuration *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlDurationObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->booleanValue();
}

int QUmlDurationObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->integerValue();
}

bool QUmlDurationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isComputable();
}

bool QUmlDurationObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->isNull();
}

double QUmlDurationObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->realValue();
}

QString QUmlDurationObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->stringValue();
}

int QUmlDurationObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlDuration *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setName(name);
}

void QUmlDurationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlDurationObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setVisibility(visibility);
}

void QUmlDurationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Duration]

void QUmlDurationObject::setExpr(QObject *expr)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->setExpr(qmodelingelementproperty_cast<QUmlValueSpecification *>(expr));
}

void QUmlDurationObject::addObservation(QObject *observation)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->addObservation(qmodelingelementproperty_cast<QUmlObservation *>(observation));
}

void QUmlDurationObject::removeObservation(QObject *observation)
{
    qmodelingelementproperty_cast<QUmlDuration *>(this)->removeObservation(qmodelingelementproperty_cast<QUmlObservation *>(observation));
}


void QUmlDurationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDuration");
    d->groupProperties.insert(QStringLiteral("QUmlDuration"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("expr"))));
    d->groupProperties.insert(QStringLiteral("QUmlDuration"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("observations"))));
}

void QUmlDurationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, PropertyClassRole, QStringLiteral("QUmlDuration"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, DocumentationRole, QStringLiteral("The value of the Duration."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, expr, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, PropertyClassRole, QStringLiteral("QUmlDuration"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, DocumentationRole, QStringLiteral("Refers to the time and duration observations that are involved in expr."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDuration, observations, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

