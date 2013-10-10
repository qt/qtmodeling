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
#include "qumlparametersetobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlParameterSet>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlConstraint>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameter>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlParameterSetObject::QUmlParameterSetObject(QUmlParameterSet *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlParameterSetObject::~QUmlParameterSetObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlParameterSet *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlParameterSetObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlParameterSetObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlParameterSetObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlParameterSet *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlParameterSetObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlParameterSetObject::name() const
{
    return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->name();
}

QObject *QUmlParameterSetObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlParameterSet *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlParameterSetObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlParameterSet *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->namespace_()->asQModelingObject();
}

QString QUmlParameterSetObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlParameterSetObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->visibility();
}

// OWNED ATTRIBUTES [ParameterSet]

const QSet<QObject *> QUmlParameterSetObject::conditions() const
{
    QSet<QObject *> set;
    foreach (QUmlConstraint *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->conditions())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlParameterSetObject::parameters() const
{
    QSet<QObject *> set;
    foreach (QUmlParameter *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->parameters())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlParameterSetObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlParameterSetObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlParameterSetObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlParameterSetObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlParameterSet *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlParameterSetObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlParameterSetObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlParameterSet *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlParameterSetObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterSetObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlParameterSetObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterSetObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlParameterSetObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlParameterSetObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterSetObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlParameterSetObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->setName(name);
}

void QUmlParameterSetObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlParameterSetObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlParameterSetObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->setQualifiedName(qualifiedName);
}

void QUmlParameterSetObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterSet]

void QUmlParameterSetObject::addCondition(QObject *condition)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->addCondition(qmodelingelementproperty_cast<QUmlConstraint *>(condition));
}

void QUmlParameterSetObject::removeCondition(QObject *condition)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->removeCondition(qmodelingelementproperty_cast<QUmlConstraint *>(condition));
}

void QUmlParameterSetObject::addParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->addParameter(qmodelingelementproperty_cast<QUmlParameter *>(parameter));
}

void QUmlParameterSetObject::removeParameter(QObject *parameter)
{
    qmodelingelementproperty_cast<QUmlParameterSet *>(this)->removeParameter(qmodelingelementproperty_cast<QUmlParameter *>(parameter));
}


void QUmlParameterSetObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlParameterSet");
    d->groupProperties.insert(QStringLiteral("QUmlParameterSet"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("conditions"))));
    d->groupProperties.insert(QStringLiteral("QUmlParameterSet"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("parameters"))));
}

void QUmlParameterSetObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, PropertyClassRole, QStringLiteral("QUmlParameterSet"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, DocumentationRole, QStringLiteral("Constraint that should be satisfied for the owner of the parameters in an input parameter set to start execution using the values provided for those parameters, or the owner of the parameters in an output parameter set to end execution providing the values for those parameters, if all preconditions and conditions on input parameter sets were satisfied."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, conditions, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, PropertyClassRole, QStringLiteral("QUmlParameterSet"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, DocumentationRole, QStringLiteral("Parameters in the parameter set."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlParameterSet, parameters, OppositeEndRole, QStringLiteral("Parameter-parameterSet"));

}

QT_END_NAMESPACE

