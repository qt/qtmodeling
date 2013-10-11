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
#include "qumlincludeobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlInclude>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlUseCase>

QT_BEGIN_NAMESPACE

QUmlIncludeObject::QUmlIncludeObject(QUmlInclude *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlIncludeObject::~QUmlIncludeObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlInclude *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlIncludeObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlIncludeObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlIncludeObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlInclude *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInclude *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlIncludeObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlIncludeObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlIncludeObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlIncludeObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlIncludeObject::name() const
{
    return qmodelingelementproperty_cast<QUmlInclude *>(this)->name();
}

QObject *QUmlIncludeObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlInclude *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInclude *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlIncludeObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlInclude *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInclude *>(this)->namespace_()->asQModelingObject();
}

QString QUmlIncludeObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlInclude *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlIncludeObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlInclude *>(this)->visibility();
}

// OWNED ATTRIBUTES [Include]

QObject *QUmlIncludeObject::addition() const
{
    if (!qmodelingelementproperty_cast<QUmlInclude *>(this)->addition())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInclude *>(this)->addition()->asQModelingObject();
}

QObject *QUmlIncludeObject::includingCase() const
{
    if (!qmodelingelementproperty_cast<QUmlInclude *>(this)->includingCase())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlInclude *>(this)->includingCase()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlIncludeObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlIncludeObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlInclude *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlIncludeObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlIncludeObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlInclude *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlIncludeObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlInclude *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlIncludeObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlInclude *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlIncludeObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIncludeObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlIncludeObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIncludeObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlIncludeObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlIncludeObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlIncludeObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlIncludeObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlIncludeObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlIncludeObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlIncludeObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlIncludeObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIncludeObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlIncludeObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setName(name);
}

void QUmlIncludeObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlIncludeObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlIncludeObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setQualifiedName(qualifiedName);
}

void QUmlIncludeObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [Include]

void QUmlIncludeObject::setAddition(QObject *addition)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setAddition(qmodelingelementproperty_cast<QUmlUseCase *>(addition));
}

void QUmlIncludeObject::setIncludingCase(QObject *includingCase)
{
    qmodelingelementproperty_cast<QUmlInclude *>(this)->setIncludingCase(qmodelingelementproperty_cast<QUmlUseCase *>(includingCase));
}


void QUmlIncludeObject::setGroupProperties()
{
    Q_D(QModelingObject);
    const QMetaObject *metaObject = this->metaObject();

    d->propertyGroups << QStringLiteral("QObject");
    d->groupProperties.insert(QStringLiteral("QObject"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("objectName"))));

    d->propertyGroups << QStringLiteral("QUmlElement");
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedComments"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("ownedElements"))));
    d->groupProperties.insert(QStringLiteral("QUmlElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("owner"))));

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlDirectedRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));

    d->propertyGroups << QStringLiteral("QUmlNamedElement");
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clientDependencies"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("name"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("nameExpression"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("namespace_"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("qualifiedName"))));
    d->groupProperties.insert(QStringLiteral("QUmlNamedElement"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("visibility"))));

    d->propertyGroups << QStringLiteral("QUmlInclude");
    d->groupProperties.insert(QStringLiteral("QUmlInclude"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("addition"))));
    d->groupProperties.insert(QStringLiteral("QUmlInclude"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("includingCase"))));
}

void QUmlIncludeObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, PropertyClassRole, QStringLiteral("QUmlInclude"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, DocumentationRole, QStringLiteral("References the use case that is to be included."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-target"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, addition, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, PropertyClassRole, QStringLiteral("QUmlInclude"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, DocumentationRole, QStringLiteral("References the use case which will include the addition and owns the include relationship."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, SubsettedPropertiesRole, QStringLiteral("DirectedRelationship-source NamedElement-namespace"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlInclude, includingCase, OppositeEndRole, QStringLiteral("UseCase-include"));

}

QT_END_NAMESPACE

