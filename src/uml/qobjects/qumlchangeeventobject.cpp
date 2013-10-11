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
#include "qumlchangeeventobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlChangeEvent>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>
#include <QtUml/QUmlValueSpecification>

QT_BEGIN_NAMESPACE

QUmlChangeEventObject::QUmlChangeEventObject(QUmlChangeEvent *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlChangeEventObject::~QUmlChangeEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlChangeEventObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlChangeEventObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlChangeEventObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlChangeEventObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlChangeEventObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlChangeEventObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlChangeEventObject::name() const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->name();
}

QObject *QUmlChangeEventObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlChangeEventObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->namespace_()->asQModelingObject();
}

QString QUmlChangeEventObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlChangeEventObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->visibility();
}

// OWNED ATTRIBUTES [ChangeEvent]

QObject *QUmlChangeEventObject::changeExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->changeExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->changeExpression()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlChangeEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlChangeEventObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlChangeEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlChangeEventObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlChangeEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlChangeEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlChangeEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlChangeEventObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlChangeEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlChangeEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlChangeEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlChangeEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlChangeEventObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlChangeEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlChangeEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlChangeEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlChangeEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlChangeEventObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setName(name);
}

void QUmlChangeEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlChangeEventObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlChangeEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlChangeEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setVisibility(visibility);
}

void QUmlChangeEventObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [ChangeEvent]

void QUmlChangeEventObject::setChangeExpression(QObject *changeExpression)
{
    qmodelingelementproperty_cast<QUmlChangeEvent *>(this)->setChangeExpression(qmodelingelementproperty_cast<QUmlValueSpecification *>(changeExpression));
}


void QUmlChangeEventObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlChangeEvent");
    d->groupProperties.insert(QStringLiteral("QUmlChangeEvent"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("changeExpression"))));
}

void QUmlChangeEventObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, PropertyClassRole, QStringLiteral("QUmlChangeEvent"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, DocumentationRole, QStringLiteral("A Boolean-valued expression that will result in a change event whenever its value changes from false to true."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlChangeEvent, changeExpression, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

