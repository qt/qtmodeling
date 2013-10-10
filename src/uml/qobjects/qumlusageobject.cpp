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
#include "qumlusageobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlUsage>
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

QUmlUsageObject::QUmlUsageObject(QUmlUsage *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlUsageObject::~QUmlUsageObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlUsage *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlUsageObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUsageObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlUsageObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlUsage *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUsage *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlUsageObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlUsage *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUsage *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlUsageObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlUsage *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUsage *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlUsageObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlUsageObject::name() const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->name();
}

QObject *QUmlUsageObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlUsage *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUsage *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlUsageObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlUsage *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlUsage *>(this)->namespace_()->asQModelingObject();
}

QString QUmlUsageObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlUsageObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->visibility();
}

// OWNED ATTRIBUTES [Relationship]

const QSet<QObject *> QUmlUsageObject::relatedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->relatedElements())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [DirectedRelationship]

const QSet<QObject *> QUmlUsageObject::sources() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->sources())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUsageObject::targets() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->targets())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Dependency]

const QSet<QObject *> QUmlUsageObject::clients() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->clients())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlUsageObject::suppliers() const
{
    QSet<QObject *> set;
    foreach (QUmlNamedElement *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->suppliers())
        set.insert(element->asQModelingObject());
    return set;
}

// OPERATIONS [Element]

QSet<QObject *> QUmlUsageObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUsageObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlUsageObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlUsageObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlUsageObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlUsageObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlUsage *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlUsageObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlUsageObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlUsage *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlUsageObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUsageObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlUsageObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUsageObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlUsageObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlUsageObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlUsageObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlUsageObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUsageObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlUsageObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setName(name);
}

void QUmlUsageObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlUsageObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlUsageObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlUsageObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->setVisibility(visibility);
}

void QUmlUsageObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [Relationship]

void QUmlUsageObject::addRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

void QUmlUsageObject::removeRelatedElement(QObject *relatedElement)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeRelatedElement(qmodelingelementproperty_cast<QUmlElement *>(relatedElement));
}

// SLOTS FOR OWNED ATTRIBUTES [DirectedRelationship]

void QUmlUsageObject::addSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlUsageObject::removeSource(QObject *source)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeSource(qmodelingelementproperty_cast<QUmlElement *>(source));
}

void QUmlUsageObject::addTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

void QUmlUsageObject::removeTarget(QObject *target)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeTarget(qmodelingelementproperty_cast<QUmlElement *>(target));
}

// SLOTS FOR OWNED ATTRIBUTES [Dependency]

void QUmlUsageObject::addClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlUsageObject::removeClient(QObject *client)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeClient(qmodelingelementproperty_cast<QUmlNamedElement *>(client));
}

void QUmlUsageObject::addSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->addSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}

void QUmlUsageObject::removeSupplier(QObject *supplier)
{
    qmodelingelementproperty_cast<QUmlUsage *>(this)->removeSupplier(qmodelingelementproperty_cast<QUmlNamedElement *>(supplier));
}


void QUmlUsageObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("relatedElements"))));

    d->propertyGroups << QStringLiteral("QUmlDirectedRelationship");
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("sources"))));
    d->groupProperties.insert(QStringLiteral("QUmlDirectedRelationship"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("targets"))));

    d->propertyGroups << QStringLiteral("QUmlDependency");
    d->groupProperties.insert(QStringLiteral("QUmlDependency"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("clients"))));
    d->groupProperties.insert(QStringLiteral("QUmlDependency"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("suppliers"))));

    d->propertyGroups << QStringLiteral("QUmlUsage");
}

void QUmlUsageObject::setPropertyData()
{
}

QT_END_NAMESPACE

