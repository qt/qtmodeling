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
#include "qumlintervalobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInterval>
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

QUmlIntervalObject::QUmlIntervalObject(QUmlInterval *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlIntervalObject::~QUmlIntervalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInterval *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlIntervalObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInterval *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlIntervalObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterval *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlIntervalObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlIntervalObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInterval *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlIntervalObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->name();
}

QObject *QUmlIntervalObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlIntervalObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->namespace_()->asQModelingObject();
}

QString QUmlIntervalObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlIntervalObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlIntervalObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlIntervalObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlIntervalObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->visibility();
}

// OWNED ATTRIBUTES [Interval]

QObject *QUmlIntervalObject::max() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->max())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->max()->asQModelingObject();
}

QObject *QUmlIntervalObject::min() const
{
    if (!qmodelingelementproperty_cast<QUmlInterval *>(this)->min())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInterval *>(this)->min()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlIntervalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInterval *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlIntervalObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlIntervalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInterval *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlIntervalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInterval *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlIntervalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlIntervalObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlIntervalObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlIntervalObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->booleanValue();
}

int QUmlIntervalObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->integerValue();
}

bool QUmlIntervalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlIntervalObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->isComputable();
}

bool QUmlIntervalObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->isNull();
}

double QUmlIntervalObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->realValue();
}

QString QUmlIntervalObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->stringValue();
}

int QUmlIntervalObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlInterval *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlIntervalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIntervalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIntervalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIntervalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIntervalObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlIntervalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIntervalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIntervalObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setName(name);
}

void QUmlIntervalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlIntervalObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlIntervalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlIntervalObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlIntervalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlIntervalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlIntervalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setVisibility(visibility);
}

void QUmlIntervalObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Interval]

void QUmlIntervalObject::setMax(QObject *max)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setMax(qmodelingelementproperty_cast<QUmlValueSpecification *>(max));
}

void QUmlIntervalObject::setMin(QObject *min)
{
    qmodelingelementproperty_cast<QUmlInterval *>(this)->setMin(qmodelingelementproperty_cast<QUmlValueSpecification *>(min));
}


void QUmlIntervalObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInterval");
    d->groupProperties.insert(QStringLiteral("QUmlInterval"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("max"))));
    d->groupProperties.insert(QStringLiteral("QUmlInterval"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("min"))));
}

void QUmlIntervalObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, PropertyClassRole, QStringLiteral("QUmlInterval"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, DocumentationRole, QStringLiteral("Refers to the ValueSpecification denoting the maximum value of the range."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, max, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, PropertyClassRole, QStringLiteral("QUmlInterval"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, DocumentationRole, QStringLiteral("Refers to the ValueSpecification denoting the minimum value of the range."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInterval, min, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

