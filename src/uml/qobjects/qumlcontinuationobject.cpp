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
#include "qumlcontinuationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlContinuation>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlContinuationObject::QUmlContinuationObject(QUmlContinuation *modelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(modelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlContinuationObject::~QUmlContinuationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlContinuation *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlContinuationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlContinuationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlContinuationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlContinuation *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlContinuation *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlContinuationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlContinuationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlContinuation *>(this)->name();
}

QObject *QUmlContinuationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlContinuation *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlContinuation *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlContinuationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlContinuation *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlContinuation *>(this)->namespace_()->asQModelingObject();
}

QString QUmlContinuationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlContinuation *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlContinuationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlContinuation *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

const QSet<QObject *> QUmlContinuationObject::covered() const
{
    QSet<QObject *> set;
    foreach (QUmlLifeline *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->covered())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlContinuationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlContinuation *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlContinuation *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlContinuationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlContinuation *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlContinuation *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlContinuationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [Continuation]

bool QUmlContinuationObject::setting() const
{
    return qmodelingelementproperty_cast<QUmlContinuation *>(this)->setting();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlContinuationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlContinuationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlContinuation *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlContinuationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlContinuationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlContinuation *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlContinuationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlContinuation *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlContinuationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlContinuation *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlContinuationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlContinuationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlContinuationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlContinuationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlContinuationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlContinuationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlContinuationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlContinuationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setName(name);
}

void QUmlContinuationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlContinuationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlContinuationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setQualifiedName(qualifiedName);
}

void QUmlContinuationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlContinuationObject::addCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->addCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlContinuationObject::removeCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->removeCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlContinuationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlContinuationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlContinuationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlContinuationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [Continuation]

void QUmlContinuationObject::setSetting(bool setting)
{
    qmodelingelementproperty_cast<QUmlContinuation *>(this)->setSetting(setting);
}

void QUmlContinuationObject::unsetSetting()
{
    Q_D(QModelingObject);
    d->modifiedResettableProperties.removeAll(QStringLiteral("setting"));
}


void QUmlContinuationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlInteractionFragment");
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingInteraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingOperand"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalOrderings"))));

    d->propertyGroups << QStringLiteral("QUmlContinuation");
    d->groupProperties.insert(QStringLiteral("QUmlContinuation"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("setting"))));
}

void QUmlContinuationObject::setPropertyData()
{
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, AggregationRole, QStringLiteral("none"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, PropertyClassRole, QStringLiteral("QUmlContinuation"));
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, IsDerivedRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, IsDerivedUnionRole, false);
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, DocumentationRole, QStringLiteral("True: when the Continuation is at the end of the enclosing InteractionFragment and False when it is in the beginning."));
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, RedefinedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, SubsettedPropertiesRole, QStringLiteral(""));
    Q_DECLARE_METAPROPERTY_INFO(QUmlContinuation, setting, OppositeEndRole, QStringLiteral(""));

}

QT_END_NAMESPACE

