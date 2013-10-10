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
#include "qumlcollaborationuseobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlCollaborationUse>
#include <QtUml/QUmlCollaboration>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlCollaborationUseObject::QUmlCollaborationUseObject(QUmlCollaborationUse *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlCollaborationUseObject::~QUmlCollaborationUseObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlCollaborationUseObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlCollaborationUseObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCollaborationUseObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlCollaborationUseObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlCollaborationUseObject::name() const
{
    return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->name();
}

QObject *QUmlCollaborationUseObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlCollaborationUseObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->namespace_()->asQModelingObject();
}

QString QUmlCollaborationUseObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlCollaborationUseObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->visibility();
}

// OWNED ATTRIBUTES [CollaborationUse]

const QSet<QObject *> QUmlCollaborationUseObject::roleBindings() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->roleBindings())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlCollaborationUseObject::type() const
{
    if (!qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->type())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->type()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlCollaborationUseObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationUseObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlCollaborationUseObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlCollaborationUseObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlCollaborationUseObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlCollaborationUseObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlCollaborationUseObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationUseObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlCollaborationUseObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationUseObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlCollaborationUseObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlCollaborationUseObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationUseObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlCollaborationUseObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->setName(name);
}

void QUmlCollaborationUseObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlCollaborationUseObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlCollaborationUseObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->setQualifiedName(qualifiedName);
}

void QUmlCollaborationUseObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [CollaborationUse]

void QUmlCollaborationUseObject::addRoleBinding(QObject *roleBinding)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->addRoleBinding(qmodelingelementproperty_cast<QUmlDependency *>(roleBinding));
}

void QUmlCollaborationUseObject::removeRoleBinding(QObject *roleBinding)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->removeRoleBinding(qmodelingelementproperty_cast<QUmlDependency *>(roleBinding));
}

void QUmlCollaborationUseObject::setType(QObject *type)
{
    qmodelingelementproperty_cast<QUmlCollaborationUse *>(this)->setType(qmodelingelementproperty_cast<QUmlCollaboration *>(type));
}


void QUmlCollaborationUseObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlCollaborationUse");
    d->groupProperties.insert(QStringLiteral("QUmlCollaborationUse"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("roleBindings"))));
    d->groupProperties.insert(QStringLiteral("QUmlCollaborationUse"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("type"))));
}

void QUmlCollaborationUseObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, AggregationRole, QStringLiteral("composite"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, PropertyClassRole, QStringLiteral("QUmlCollaborationUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, DocumentationRole, QStringLiteral("A mapping between features of the collaboration type and features of the owning classifier. This mapping indicates which connectable element of the classifier plays which role(s) in the collaboration. A connectable element may be bound to multiple roles in the same collaboration use (that is, it may play multiple roles)."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, SubsettedPropertiesRole, QStringLiteral("Element-ownedElement"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, roleBindings, OppositeEndRole, QStringLiteral(""));

    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, PropertyClassRole, QStringLiteral("QUmlCollaborationUse"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, DocumentationRole, QStringLiteral("The collaboration which is used in this occurrence. The collaboration defines the cooperation between its roles which are mapped to properties of the classifier owning the collaboration use."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlCollaborationUse, type, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

