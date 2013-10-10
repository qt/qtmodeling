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
#include "qumlsignaleventobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlSignalEvent>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlParameterableElement>
#include <QtUml/QUmlSignal>
#include <QtUml/QUmlStringExpression>
#include <QtUml/QUmlTemplateParameter>

QT_BEGIN_NAMESPACE

QUmlSignalEventObject::QUmlSignalEventObject(QUmlSignalEvent *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlSignalEventObject::~QUmlSignalEventObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlSignalEventObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlSignalEventObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlSignalEventObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [ParameterableElement]

QObject *QUmlSignalEventObject::owningTemplateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->owningTemplateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->owningTemplateParameter()->asQModelingObject();
}

QObject *QUmlSignalEventObject::templateParameter() const
{
    if (!qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->templateParameter())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->templateParameter()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlSignalEventObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlSignalEventObject::name() const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->name();
}

QObject *QUmlSignalEventObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlSignalEventObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->namespace_()->asQModelingObject();
}

QString QUmlSignalEventObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->qualifiedName();
}

// OWNED ATTRIBUTES [PackageableElement]

QtUml::VisibilityKind QUmlSignalEventObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->visibility();
}

// OWNED ATTRIBUTES [SignalEvent]

QObject *QUmlSignalEventObject::signal() const
{
    if (!qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->signal())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->signal()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlSignalEventObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlSignalEventObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->mustBeOwned();
}

// OPERATIONS [ParameterableElement]

bool QUmlSignalEventObject::isCompatibleWith(QObject *p) const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->isCompatibleWith(qmodelingelementproperty_cast<QUmlParameterableElement *>(p));
}

bool QUmlSignalEventObject::isTemplateParameter() const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->isTemplateParameter();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlSignalEventObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlSignalEventObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlSignalEventObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlSignalEventObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlSignalEventObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSignalEventObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlSignalEventObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSignalEventObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlSignalEventObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [ParameterableElement]

void QUmlSignalEventObject::setOwningTemplateParameter(QObject *owningTemplateParameter)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setOwningTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(owningTemplateParameter));
}

void QUmlSignalEventObject::setTemplateParameter(QObject *templateParameter)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setTemplateParameter(qmodelingelementproperty_cast<QUmlTemplateParameter *>(templateParameter));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlSignalEventObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSignalEventObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlSignalEventObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setName(name);
}

void QUmlSignalEventObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlSignalEventObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlSignalEventObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setQualifiedName(qualifiedName);
}
// SLOTS FOR OWNED ATTRIBUTES [PackageableElement]

void QUmlSignalEventObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setVisibility(visibility);
}

void QUmlSignalEventObject::unsetVisibility()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("visibility"));
}

// SLOTS FOR OWNED ATTRIBUTES [SignalEvent]

void QUmlSignalEventObject::setSignal(QObject *signal)
{
    qmodelingelementproperty_cast<QUmlSignalEvent *>(this)->setSignal(qmodelingelementproperty_cast<QUmlSignal *>(signal));
}


void QUmlSignalEventObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlSignalEvent");
    d->groupProperties.insert(QStringLiteral("QUmlSignalEvent"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("signal"))));
}

void QUmlSignalEventObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, PropertyClassRole, QStringLiteral("QUmlSignalEvent"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, DocumentationRole, QStringLiteral("The specific signal that is associated with this event."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlSignalEvent, signal, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

