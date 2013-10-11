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
#include "qumlliteralbooleanobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlLiteralBoolean>
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

QT_BEGIN_NAMESPACE

QUmlLiteralBooleanObject::QUmlLiteralBooleanObject(QUmlLiteralBoolean *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlLiteralBooleanObject::~QUmlLiteralBooleanObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralBooleanObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLiteralBooleanObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLiteralBooleanObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralBooleanObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlLiteralBooleanObject::name() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->name();
}

QObject *QUmlLiteralBooleanObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlLiteralBooleanObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->namespace_()->asQModelingObject();
}

QString QUmlLiteralBooleanObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralBooleanObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralBooleanObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlLiteralBooleanObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralBooleanObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->visibility();
}

// OWNED ATTRIBUTES [LiteralBoolean]

bool QUmlLiteralBooleanObject::value() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralBooleanObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLiteralBooleanObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralBooleanObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlLiteralBooleanObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLiteralBooleanObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralBooleanObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralBooleanObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

int QUmlLiteralBooleanObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->integerValue();
}

bool QUmlLiteralBooleanObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlLiteralBooleanObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->isNull();
}

double QUmlLiteralBooleanObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->realValue();
}

QString QUmlLiteralBooleanObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->stringValue();
}

int QUmlLiteralBooleanObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->unlimitedValue();
}

// OPERATIONS [LiteralBoolean]

bool QUmlLiteralBooleanObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->booleanValue();
}

bool QUmlLiteralBooleanObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->isComputable();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralBooleanObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralBooleanObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralBooleanObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralBooleanObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralBooleanObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralBooleanObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralBooleanObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralBooleanObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setName(name);
}

void QUmlLiteralBooleanObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralBooleanObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralBooleanObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralBooleanObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralBooleanObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralBooleanObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralBooleanObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setVisibility(visibility);
}

void QUmlLiteralBooleanObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [LiteralBoolean]

void QUmlLiteralBooleanObject::setValue(bool value)
{
    qmodelingelementproperty_cast<QUmlLiteralBoolean *>(this)->setValue(value);
}

void QUmlLiteralBooleanObject::unsetValue()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("value"));
}


void QUmlLiteralBooleanObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlLiteralSpecification");

    d->propertyGroups << QStringLiteral("QUmlLiteralBoolean");
    d->groupProperties.insert(QStringLiteral("QUmlLiteralBoolean"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QUmlLiteralBooleanObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, PropertyClassRole, QStringLiteral("QUmlLiteralBoolean"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, DocumentationRole, QStringLiteral("The specified Boolean value."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralBoolean, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

