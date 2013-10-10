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
#include "qumlcalleventobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlCallEvent>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOperation>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlCallEventObject::QUmlCallEventObject(QUmlCallEvent *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCallEventObject::~QUmlCallEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCallEvent *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCallEventObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCallEvent *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCallEventObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCallEvent *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCallEventObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCallEvent *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlCallEventObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlCallEvent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlCallEventObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlCallEvent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCallEventObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCallEvent *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCallEventObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->name();
}

QObject *QUmlCallEventObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCallEvent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCallEventObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCallEvent *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCallEventObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlCallEventObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->visibility();
}

// OWNED ATTRIBUTES [CallEvent]

QObject *QUmlCallEventObject::operation() const
{
    if (!qmodelingelementproperty_cast<QUmlCallEvent *>(this)->operation())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->operation()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCallEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCallEvent *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCallEventObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlCallEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlCallEventObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCallEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCallEvent *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCallEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCallEvent *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCallEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCallEventObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCallEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCallEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCallEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCallEventObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlCallEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlCallEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCallEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCallEventObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setName(name);
}

void QUmlCallEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCallEventObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCallEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlCallEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setVisibility(visibility);
}

void QUmlCallEventObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [CallEvent]

void QUmlCallEventObject::setOperation(QObject *operation)
{
    qmodelingelementproperty_cast<QUmlCallEvent *>(this)->setOperation(qmodelingelementproperty_cast<QUmlOperation *>(operation));
}


void QUmlCallEventObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlEvent");

    d->propertyGroups << QStringLiteral("QUmlMessageEvent");

    d->propertyGroups << QStringLiteral("QUmlCallEvent");
    d->groupProperties.insert(QStringLiteral("QUmlCallEvent"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("operation"))));
}

void QUmlCallEventObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, PropertyClassRole, QStringLiteral("QUmlCallEvent"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, DocumentationRole, QStringLiteral("Designates the operation whose invocation raised the call event."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCallEvent, operation, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

