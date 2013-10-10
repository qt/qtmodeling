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
#include "qumltimeintervalobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlTimeInterval>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlTimeExpression>
#include <QtUml/QUmlType>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlTimeIntervalObject::QUmlTimeIntervalObject(QUmlTimeInterval *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlTimeIntervalObject::~QUmlTimeIntervalObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlTimeIntervalObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlTimeIntervalObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlTimeIntervalObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlTimeIntervalObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlTimeIntervalObject::name() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->name();
}

QObject *QUmlTimeIntervalObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlTimeIntervalObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->namespace_()->asQModelingObject();
}

QString QUmlTimeIntervalObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [TypedElement]

QObject *QUmlTimeIntervalObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->type()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlTimeIntervalObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlTimeIntervalObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlTimeIntervalObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->visibility();
}

// OWNED ATTRIBUTES [TimeInterval]

QObject *QUmlTimeIntervalObject::max() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->max())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->max()->asQModelingObject();
}

QObject *QUmlTimeIntervalObject::min() const
{
    if (!qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->min())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->min()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlTimeIntervalObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTimeIntervalObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlTimeIntervalObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlTimeIntervalObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlTimeIntervalObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlTimeIntervalObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->separator();
}

// OPERATIONS [ParameterableElement]

bool QUmlTimeIntervalObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->isTemplateParameter();
}

// OPERATIONS [ValueSpecification]

bool QUmlTimeIntervalObject::booleanValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->booleanValue();
}

int QUmlTimeIntervalObject::integerValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->integerValue();
}

bool QUmlTimeIntervalObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlTimeIntervalObject::isComputable() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->isComputable();
}

bool QUmlTimeIntervalObject::isNull() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->isNull();
}

double QUmlTimeIntervalObject::realValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->realValue();
}

QString QUmlTimeIntervalObject::stringValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->stringValue();
}

int QUmlTimeIntervalObject::unlimitedValue() const
{
    return qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->unlimitedValue();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlTimeIntervalObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeIntervalObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlTimeIntervalObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeIntervalObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlTimeIntervalObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlTimeIntervalObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeIntervalObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlTimeIntervalObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setName(name);
}

void QUmlTimeIntervalObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlTimeIntervalObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlTimeIntervalObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [TypedElement]

void QUmlTimeIntervalObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setType(qmodelingelementproperty_cast<QUmlType *>(type));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlTimeIntervalObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlTimeIntervalObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlTimeIntervalObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setVisibility(visibility);
}

void QUmlTimeIntervalObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [TimeInterval]

void QUmlTimeIntervalObject::setMax(QObject *max)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setMax(qmodelingelementproperty_cast<QUmlTimeExpression *>(max));
}

void QUmlTimeIntervalObject::setMin(QObject *min)
{
    qmodelingelementproperty_cast<QUmlTimeInterval *>(this)->setMin(qmodelingelementproperty_cast<QUmlTimeExpression *>(min));
}


void QUmlTimeIntervalObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlTimeInterval");
    d->groupProperties.insert(QStringLiteral("QUmlTimeInterval"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("max"))));
    d->groupProperties.insert(QStringLiteral("QUmlTimeInterval"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("min"))));
}

void QUmlTimeIntervalObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, PropertyClassRole, QStringLiteral("QUmlTimeInterval"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, DocumentationRole, QStringLiteral("Refers to the TimeExpression denoting the maximum value of the range."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, RedefinedPropertiesRole, QStringLiteral("Interval-max"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, max, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, PropertyClassRole, QStringLiteral("QUmlTimeInterval"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, DocumentationRole, QStringLiteral("Refers to the TimeExpression denoting the minimum value of the range."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, RedefinedPropertiesRole, QStringLiteral("Interval-min"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlTimeInterval, min, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

