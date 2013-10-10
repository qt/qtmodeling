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
#include "qumlanyreceiveeventobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlAnyReceiveEvent>
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

QUmlAnyReceiveEventObject::QUmlAnyReceiveEventObject(QUmlAnyReceiveEvent *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlAnyReceiveEventObject::~QUmlAnyReceiveEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlAnyReceiveEventObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlAnyReceiveEventObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlAnyReceiveEventObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlAnyReceiveEventObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlAnyReceiveEventObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlAnyReceiveEventObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlAnyReceiveEventObject::name() const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->name();
}

QObject *QUmlAnyReceiveEventObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlAnyReceiveEventObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->namespace_()->asQModelingObject();
}

QString QUmlAnyReceiveEventObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlAnyReceiveEventObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->visibility();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlAnyReceiveEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAnyReceiveEventObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlAnyReceiveEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlAnyReceiveEventObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlAnyReceiveEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlAnyReceiveEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlAnyReceiveEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlAnyReceiveEventObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlAnyReceiveEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAnyReceiveEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlAnyReceiveEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAnyReceiveEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlAnyReceiveEventObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlAnyReceiveEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlAnyReceiveEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlAnyReceiveEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAnyReceiveEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlAnyReceiveEventObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setName(name);
}

void QUmlAnyReceiveEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlAnyReceiveEventObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlAnyReceiveEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlAnyReceiveEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlAnyReceiveEvent *>(this)->setVisibility(visibility);
}

void QUmlAnyReceiveEventObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}


void QUmlAnyReceiveEventObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlAnyReceiveEvent");
}

void QUmlAnyReceiveEventObject::setPropertyData()
{
}

QT_END_NAMESPACE

