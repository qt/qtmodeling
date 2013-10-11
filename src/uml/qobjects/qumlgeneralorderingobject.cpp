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
#include "qumlgeneralorderingobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlOccurrenceSpecification>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlGeneralOrderingObject::QUmlGeneralOrderingObject(QUmlGeneralOrdering *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlGeneralOrderingObject::~QUmlGeneralOrderingObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGeneralOrderingObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlGeneralOrderingObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlGeneralOrderingObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlGeneralOrderingObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlGeneralOrderingObject::name() const
{
    return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->name();
}

QObject *QUmlGeneralOrderingObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlGeneralOrderingObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->namespace_()->asQModelingObject();
}

QString QUmlGeneralOrderingObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlGeneralOrderingObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->visibility();
}

// OWNED ATTRIBUTES [GeneralOrdering]

QObject *QUmlGeneralOrderingObject::after() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->after())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->after()->asQModelingObject();
}

QObject *QUmlGeneralOrderingObject::before() const
{
    if (!qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->before())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->before()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGeneralOrderingObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGeneralOrderingObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlGeneralOrderingObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlGeneralOrderingObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGeneralOrderingObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlGeneralOrderingObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGeneralOrderingObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralOrderingObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGeneralOrderingObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralOrderingObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGeneralOrderingObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlGeneralOrderingObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralOrderingObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGeneralOrderingObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setName(name);
}

void QUmlGeneralOrderingObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlGeneralOrderingObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlGeneralOrderingObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setQualifiedName(qualifiedName);
}

void QUmlGeneralOrderingObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [GeneralOrdering]

void QUmlGeneralOrderingObject::setAfter(QObject *after)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setAfter(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(after));
}

void QUmlGeneralOrderingObject::setBefore(QObject *before)
{
    qmodelingelementproperty_cast<QUmlGeneralOrdering *>(this)->setBefore(qmodelingelementproperty_cast<QUmlOccurrenceSpecification *>(before));
}


void QUmlGeneralOrderingObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlGeneralOrdering");
    d->groupProperties.insert(QStringLiteral("QUmlGeneralOrdering"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("after"))));
    d->groupProperties.insert(QStringLiteral("QUmlGeneralOrdering"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("before"))));
}

void QUmlGeneralOrderingObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, PropertyClassRole, QStringLiteral("QUmlGeneralOrdering"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, DocumentationRole, QStringLiteral("The OccurrenceSpecification referenced comes after the OccurrenceSpecification referenced by before."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, after, OppositeEndRole, QStringLiteral("OccurrenceSpecification-toBefore"));

    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, PropertyClassRole, QStringLiteral("QUmlGeneralOrdering"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, DocumentationRole, QStringLiteral("The OccurrenceSpecification referenced comes before the OccurrenceSpecification referenced by after."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlGeneralOrdering, before, OppositeEndRole, QStringLiteral("OccurrenceSpecification-toAfter"));

}

QT_END_NAMESPACE

