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
#include "qumldurationconstraintobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDurationConstraint>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlDurationInterval>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlInterval>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlDurationConstraintObject::QUmlDurationConstraintObject(QUmlDurationConstraint *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlDurationConstraintObject::~QUmlDurationConstraintObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationConstraintObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDurationConstraintObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDurationConstraintObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationConstraintObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlDurationConstraintObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationConstraintObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDurationConstraintObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->name();
}

QObject *QUmlDurationConstraintObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDurationConstraintObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDurationConstraintObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationConstraintObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->visibility();
}

// OWNED ATTRIBUTES [Constraint]

const QList<QObject *> QUmlDurationConstraintObject::constrainedElements() const
{
    QList<QObject *> list;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->constrainedElements())
        list.append(element->asQModelingObject());
    return list;
}

QObject *QUmlDurationConstraintObject::context() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->context())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->context()->asQModelingObject();
}

// OWNED ATTRIBUTES [DurationConstraint]

bool QUmlDurationConstraintObject::firstEvent() const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->firstEvent();
}

QObject *QUmlDurationConstraintObject::specification() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->specification())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->specification()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationConstraintObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationConstraintObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationConstraintObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationConstraintObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationConstraintObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDurationConstraintObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationConstraintObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationConstraintObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationConstraintObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationConstraintObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationConstraintObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationConstraintObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationConstraintObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationConstraintObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationConstraintObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationConstraintObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationConstraintObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationConstraintObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setName(name);
}

void QUmlDurationConstraintObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationConstraintObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationConstraintObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationConstraintObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setVisibility(visibility);
}

void QUmlDurationConstraintObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Constraint]

void QUmlDurationConstraintObject::addConstrainedElement(QObject *constrainedElement)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->addConstrainedElement(qmodelingelementproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlDurationConstraintObject::removeConstrainedElement(QObject *constrainedElement)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->removeConstrainedElement(qmodelingelementproperty_cast<QUmlElement *>(constrainedElement));
}

void QUmlDurationConstraintObject::setContext(QObject *context)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setContext(qmodelingelementproperty_cast<QUmlNamespace *>(context));
}
// SLOTS FOR OWNED ATTRIBUTES [DurationConstraint]

void QUmlDurationConstraintObject::setFirstEvent(bool firstEvent)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setFirstEvent(firstEvent);
}

void QUmlDurationConstraintObject::setSpecification(QObject *specification)
{
    qmodelingelementproperty_cast<QUmlDurationConstraint *>(this)->setSpecification(qmodelingelementproperty_cast<QUmlDurationInterval *>(specification));
}


void QUmlDurationConstraintObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlParameterableElement");
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owningTemplateParameter"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("templateParameter"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));

    d->propertyGroups << QStringLiteral("QUmlPackageableElement");
    d->groupProperties.insert(QStringLiteral("QUmlPackageableElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlConstraint");
    d->groupProperties.insert(QStringLiteral("QUmlConstraint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("constrainedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlConstraint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("context"))));

    d->propertyGroups << QStringLiteral("QUmlIntervalConstraint");

    d->propertyGroups << QStringLiteral("QUmlDurationConstraint");
    d->groupProperties.insert(QStringLiteral("QUmlDurationConstraint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("firstEvent"))));
    d->groupProperties.insert(QStringLiteral("QUmlDurationConstraint"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("specification"))));
}

void QUmlDurationConstraintObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, PropertyClassRole, QStringLiteral("QUmlDurationConstraint"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, DocumentationRole, QStringLiteral("The value of firstEvent[i] is related to constrainedElement[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters constrainedElement[i]. If firstEvent[i] is false, then the corresponding observation event is the last time instant the execution is within constrainedElement[i]. Default value is true applied when constrainedElement[i] refers an element that represents only one time instant."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, firstEvent, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, PropertyClassRole, QStringLiteral("QUmlDurationConstraint"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, DocumentationRole, QStringLiteral("The interval constraining the duration."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, RedefinedPropertiesRole, QStringLiteral("IntervalConstraint-specification"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationConstraint, specification, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

