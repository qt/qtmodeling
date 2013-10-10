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
#include "qumlmessageoccurrencespecificationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlMessageOccurrenceSpecification>
#include <QtUml/QUmlComment>
#include <QtUml/QUmlDependency>
#include <QtUml/QUmlElement>
#include <QtUml/QUmlGeneralOrdering>
#include <QtUml/QUmlInteraction>
#include <QtUml/QUmlInteractionOperand>
#include <QtUml/QUmlLifeline>
#include <QtUml/QUmlMessage>
#include <QtUml/QUmlNamedElement>
#include <QtUml/QUmlNamespace>
#include <QtUml/QUmlPackage>
#include <QtUml/QUmlStringExpression>

QT_BEGIN_NAMESPACE

QUmlMessageOccurrenceSpecificationObject::QUmlMessageOccurrenceSpecificationObject(QUmlMessageOccurrenceSpecification *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlMessageOccurrenceSpecificationObject::~QUmlMessageOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlMessageOccurrenceSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlMessageOccurrenceSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->name();
}

QObject *QUmlMessageOccurrenceSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlMessageOccurrenceSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlMessageOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlMessageOccurrenceSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlMessageOccurrenceSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlMessageOccurrenceSpecificationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlMessageOccurrenceSpecificationObject::covered() const
{
    if (!qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->covered())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->covered()->asQModelingObject();
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::toAfters() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->toAfters())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::toBefores() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->toBefores())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [MessageEnd]

QObject *QUmlMessageOccurrenceSpecificationObject::message() const
{
    if (!qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->message())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->message()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlMessageOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlMessageOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlMessageOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlMessageOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlMessageOccurrenceSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlMessageOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlMessageOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlMessageOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlMessageOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlMessageOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setName(name);
}

void QUmlMessageOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlMessageOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlMessageOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlMessageOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlMessageOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlMessageOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlMessageOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlMessageOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlMessageOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlMessageOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlMessageOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlMessageOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->addToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlMessageOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->removeToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

// SLOTS FOR OWNED ATTRIBUTES [MessageEnd]

void QUmlMessageOccurrenceSpecificationObject::setMessage(QObject *message)
{
    qmodelingelementproperty_cast<QUmlMessageOccurrenceSpecification *>(this)->setMessage(qmodelingelementproperty_cast<QUmlMessage *>(message));
}


void QUmlMessageOccurrenceSpecificationObject::setGroupProperties()
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
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingInteraction"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("enclosingOperand"))));
    d->groupProperties.insert(QStringLiteral("QUmlInteractionFragment"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("generalOrderings"))));

    d->propertyGroups << QStringLiteral("QUmlOccurrenceSpecification");
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("covered"))));
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("toAfters"))));
    d->groupProperties.insert(QStringLiteral("QUmlOccurrenceSpecification"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("toBefores"))));

    d->propertyGroups << QStringLiteral("QUmlMessageEnd");
    d->groupProperties.insert(QStringLiteral("QUmlMessageEnd"), new QMetaProperty(metaObject->property(metaObject->indexOfProperty("message"))));

    d->propertyGroups << QStringLiteral("QUmlMessageOccurrenceSpecification");
}

void QUmlMessageOccurrenceSpecificationObject::setPropertyData()
{
}

QT_END_NAMESPACE

