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
#include "qumlgateobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlGate>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlGateObject::QUmlGateObject(QUmlGate *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlGateObject::~QUmlGateObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlGate *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlGateObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlGate *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlGateObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGate *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlGateObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlGate *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGate *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlGateObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlGate *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlGateObject::name() const
{
    return qmodelingelementproperty_cast<QUmlGate *>(this)->name();
}

QObject *QUmlGateObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlGate *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGate *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlGateObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlGate *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGate *>(this)->namespace_()->asQModelingObject();
}

QString QUmlGateObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlGate *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlGateObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlGate *>(this)->visibility();
}

// OWNED ATTRIBUTES [MessageEnd]

QObject *QUmlGateObject::message() const
{
    if (!qmodelingelementproperty_cast<QUmlGate *>(this)->message())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlGate *>(this)->message()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlGateObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlGate *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGateObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlGate *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlGateObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlGate *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlGateObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlGate *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlGateObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlGate *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlGateObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlGate *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlGateObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGateObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlGateObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGateObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlGateObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlGateObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGateObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlGateObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->setName(name);
}

void QUmlGateObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlGateObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlGateObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->setQualifiedName(qualifiedName);
}

void QUmlGateObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [MessageEnd]

void QUmlGateObject::setMessage(QObject *message)
{
    qmodelingelementproperty_cast<QUmlGate *>(this)->setMessage(qmodelingelementproperty_cast<QUmlMessage *>(message));
}


void QUmlGateObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlMessageEnd");
    d->groupProperties.insert(QStringLiteral("QUmlMessageEnd"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("message"))));

    d->propertyGroups << QStringLiteral("QUmlGate");
}

void QUmlGateObject::setPropertyData()
{
}

QT_END_NAMESPACE

