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
#include "qumldurationobservationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDurationObservation>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlDurationObservationObject::QUmlDurationObservationObject(QUmlDurationObservation *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlDurationObservationObject::~QUmlDurationObservationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDurationObservationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDurationObservationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDurationObservationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlDurationObservationObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlDurationObservationObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDurationObservationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDurationObservationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->name();
}

QObject *QUmlDurationObservationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDurationObservationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDurationObservationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlDurationObservationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->visibility();
}

// OWNED ATTRIBUTES [DurationObservation]

QObject *QUmlDurationObservationObject::event() const
{
    if (!qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->event())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->event()->asQModelingObject();
}

bool QUmlDurationObservationObject::firstEvent() const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->firstEvent();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDurationObservationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationObservationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlDurationObservationObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlDurationObservationObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDurationObservationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDurationObservationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDurationObservationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDurationObservationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDurationObservationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObservationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDurationObservationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObservationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDurationObservationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlDurationObservationObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlDurationObservationObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDurationObservationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObservationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDurationObservationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setName(name);
}

void QUmlDurationObservationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDurationObservationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDurationObservationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlDurationObservationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setVisibility(visibility);
}

void QUmlDurationObservationObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [DurationObservation]

void QUmlDurationObservationObject::setEvent(QObject *event)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setEvent(qmodelingelementproperty_cast<QUmlNamedElement *>(event));
}

void QUmlDurationObservationObject::setFirstEvent(bool firstEvent)
{
    qmodelingelementproperty_cast<QUmlDurationObservation *>(this)->setFirstEvent(firstEvent);
}


void QUmlDurationObservationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlObservation");

    d->propertyGroups << QStringLiteral("QUmlDurationObservation");
    d->groupProperties.insert(QStringLiteral("QUmlDurationObservation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("event"))));
    d->groupProperties.insert(QStringLiteral("QUmlDurationObservation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("firstEvent"))));
}

void QUmlDurationObservationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, PropertyClassRole, QStringLiteral("QUmlDurationObservation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, DocumentationRole, QStringLiteral("The observation is determined by the entering or exiting of the event element during execution."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, event, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, PropertyClassRole, QStringLiteral("QUmlDurationObservation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, DocumentationRole, QStringLiteral("The value of firstEvent[i] is related to event[i] (where i is 1 or 2). If firstEvent[i] is true, then the corresponding observation event is the first time instant the execution enters event[i]. If firstEvent[i] is false, then the corresponding observation event is the time instant the execution exits event[i]. Default value is true applied when event[i] refers an element that represents only one time instant."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlDurationObservation, firstEvent, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

