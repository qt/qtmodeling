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
#include "qumlliteralunlimitednaturalobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlLiteralUnlimitedNatural>
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

QUmlLiteralUnlimitedNaturalObject::QUmlLiteralUnlimitedNaturalObject(QUmlLiteralUnlimitedNatural *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlLiteralUnlimitedNaturalObject::~QUmlLiteralUnlimitedNaturalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlLiteralUnlimitedNaturalObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlLiteralUnlimitedNaturalObject::name() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->name();
}

QObject *QUmlLiteralUnlimitedNaturalObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlLiteralUnlimitedNaturalObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->namespace_()->asQModelingObject();
}

QString QUmlLiteralUnlimitedNaturalObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlLiteralUnlimitedNaturalObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlLiteralUnlimitedNaturalObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlLiteralUnlimitedNaturalObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlLiteralUnlimitedNaturalObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->visibility();
}

// OWNED ATTRIBUTES [LiteralUnlimitedNatural]

int QUmlLiteralUnlimitedNaturalObject::value() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->value();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLiteralUnlimitedNaturalObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlLiteralUnlimitedNaturalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlLiteralUnlimitedNaturalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlLiteralUnlimitedNaturalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlLiteralUnlimitedNaturalObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlLiteralUnlimitedNaturalObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlLiteralUnlimitedNaturalObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->booleanValue();
}

int QUmlLiteralUnlimitedNaturalObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->integerValue();
}

bool QUmlLiteralUnlimitedNaturalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlLiteralUnlimitedNaturalObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isNull();
}

double QUmlLiteralUnlimitedNaturalObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->realValue();
}

QString QUmlLiteralUnlimitedNaturalObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->stringValue();
}
// OPERATIONS [LiteralUnlimitedNatural]

bool QUmlLiteralUnlimitedNaturalObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->isComputable();
}

int QUmlLiteralUnlimitedNaturalObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlLiteralUnlimitedNaturalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralUnlimitedNaturalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlLiteralUnlimitedNaturalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralUnlimitedNaturalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlLiteralUnlimitedNaturalObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlLiteralUnlimitedNaturalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralUnlimitedNaturalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlLiteralUnlimitedNaturalObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setName(name);
}

void QUmlLiteralUnlimitedNaturalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlLiteralUnlimitedNaturalObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlLiteralUnlimitedNaturalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlLiteralUnlimitedNaturalObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlLiteralUnlimitedNaturalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlLiteralUnlimitedNaturalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlLiteralUnlimitedNaturalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setVisibility(visibility);
}

void QUmlLiteralUnlimitedNaturalObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [LiteralUnlimitedNatural]

void QUmlLiteralUnlimitedNaturalObject::setValue(int value)
{
    qmodelingelementproperty_cast<QUmlLiteralUnlimitedNatural *>(this)->setValue(value);
}

void QUmlLiteralUnlimitedNaturalObject::unsetValue()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("value"));
}


void QUmlLiteralUnlimitedNaturalObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlLiteralUnlimitedNatural");
    d->groupProperties.insert(QStringLiteral("QUmlLiteralUnlimitedNatural"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("value"))));
}

void QUmlLiteralUnlimitedNaturalObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, PropertyClassRole, QStringLiteral("QUmlLiteralUnlimitedNatural"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, DocumentationRole, QStringLiteral("The specified UnlimitedNatural value."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlLiteralUnlimitedNatural, value, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

