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
#include "qumldurationintervalobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDurationInterval>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDuration>
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

QUmlDurationIntervalObject::QUmlDurationIntervalObject(QUmlDurationInterval *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlDurationIntervalObject::~QUmlDurationIntervalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationIntervalObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDurationIntervalObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDurationIntervalObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationIntervalObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDurationIntervalObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->name();
}

QObject *QUmlDurationIntervalObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDurationIntervalObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDurationIntervalObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlDurationIntervalObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationIntervalObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlDurationIntervalObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationIntervalObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->visibility();
}

// OWNED ATTRIBUTES [DurationInterval]

QObject *QUmlDurationIntervalObject::max() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->max())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->max()->asQModelingObject();
}

QObject *QUmlDurationIntervalObject::min() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->min())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->min()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationIntervalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationIntervalObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationIntervalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDurationIntervalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationIntervalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationIntervalObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationIntervalObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlDurationIntervalObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->booleanValue();
}

int QUmlDurationIntervalObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->integerValue();
}

bool QUmlDurationIntervalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationIntervalObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->isComputable();
}

bool QUmlDurationIntervalObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->isNull();
}

double QUmlDurationIntervalObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->realValue();
}

QString QUmlDurationIntervalObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->stringValue();
}

int QUmlDurationIntervalObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationIntervalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationIntervalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationIntervalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationIntervalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationIntervalObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationIntervalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationIntervalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationIntervalObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setName(name);
}

void QUmlDurationIntervalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationIntervalObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationIntervalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlDurationIntervalObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationIntervalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationIntervalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationIntervalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setVisibility(visibility);
}

void QUmlDurationIntervalObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [DurationInterval]

void QUmlDurationIntervalObject::setMax(QObject *max)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setMax(qmodelingelementproperty_cast<QUmlDuration *>(max));
}

void QUmlDurationIntervalObject::setMin(QObject *min)
{
    qmodelingelementproperty_cast<QUmlDurationInterval *>(this)->setMin(qmodelingelementproperty_cast<QUmlDuration *>(min));
}


void QUmlDurationIntervalObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDurationInterval");
    d->groupProperties.insert(QStringLiteral("QUmlDurationInterval"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("max"))));
    d->groupProperties.insert(QStringLiteral("QUmlDurationInterval"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("min"))));
}

void QUmlDurationIntervalObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, PropertyClassRole, QStringLiteral("QUmlDurationInterval"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, DocumentationRole, QStringLiteral("Refers to the Duration denoting the maximum value of the range."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, RedefinedPropertiesRole, QStringLiteral("Interval-max"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, max, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, PropertyClassRole, QStringLiteral("QUmlDurationInterval"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, DocumentationRole, QStringLiteral("Refers to the Duration denoting the minimum value of the range."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, RedefinedPropertiesRole, QStringLiteral("Interval-min"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationInterval, min, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

