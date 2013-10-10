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
#include "qumldestructionoccurrencespecificationobject_p.h"
#include "private/qmodelingobject_p.h"

#include <QtUml/QUmlDestructionOccurrenceSpecification>
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

QUmlDestructionOccurrenceSpecificationObject::QUmlDestructionOccurrenceSpecificationObject(QUmlDestructionOccurrenceSpecification *qModelingElement)
{
    setProperty("modelingElement", QVariant::fromValue(static_cast<QModelingElement *>(qModelingElement)));
    setGroupProperties();
    setPropertyData();
}

QUmlDestructionOccurrenceSpecificationObject::~QUmlDestructionOccurrenceSpecificationObject()
{
    if (!property("deletingFromModelingObject").isValid()) {
        qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->deletingFromQModelingObject = true;
        delete qmodelingelementproperty_cast<QUmlComment *>(this);
    }
}

// OWNED ATTRIBUTES [Element]

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::ownedComments() const
{
    QSet<QObject *> set;
    foreach (QUmlComment *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->ownedComments())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::ownedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->ownedElements())
        set.insert(element->asQModelingObject());
    return set;
}

QObject *QUmlDestructionOccurrenceSpecificationObject::owner() const
{
    if (!qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->owner())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->owner()->asQModelingObject();
}

// OWNED ATTRIBUTES [NamedElement]

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::clientDependencies() const
{
    QSet<QObject *> set;
    foreach (QUmlDependency *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->clientDependencies())
        set.insert(element->asQModelingObject());
    return set;
}

QString QUmlDestructionOccurrenceSpecificationObject::name() const
{
    return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->name();
}

QObject *QUmlDestructionOccurrenceSpecificationObject::nameExpression() const
{
    if (!qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->nameExpression())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->nameExpression()->asQModelingObject();
}

QObject *QUmlDestructionOccurrenceSpecificationObject::namespace_() const
{
    if (!qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->namespace_())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->namespace_()->asQModelingObject();
}

QString QUmlDestructionOccurrenceSpecificationObject::qualifiedName() const
{
    return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->qualifiedName();
}

QtUml::VisibilityKind QUmlDestructionOccurrenceSpecificationObject::visibility() const
{
    return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->visibility();
}

// OWNED ATTRIBUTES [InteractionFragment]

QObject *QUmlDestructionOccurrenceSpecificationObject::enclosingInteraction() const
{
    if (!qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingInteraction())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingInteraction()->asQModelingObject();
}

QObject *QUmlDestructionOccurrenceSpecificationObject::enclosingOperand() const
{
    if (!qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingOperand())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->enclosingOperand()->asQModelingObject();
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::generalOrderings() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->generalOrderings())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [OccurrenceSpecification]

QObject *QUmlDestructionOccurrenceSpecificationObject::covered() const
{
    if (!qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->covered())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->covered()->asQModelingObject();
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::toAfters() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->toAfters())
        set.insert(element->asQModelingObject());
    return set;
}

const QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::toBefores() const
{
    QSet<QObject *> set;
    foreach (QUmlGeneralOrdering *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->toBefores())
        set.insert(element->asQModelingObject());
    return set;
}

// OWNED ATTRIBUTES [MessageEnd]

QObject *QUmlDestructionOccurrenceSpecificationObject::message() const
{
    if (!qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->message())
        return 0;
    else
        return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->message()->asQModelingObject();
}

// OPERATIONS [Element]

QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::allOwnedElements() const
{
    QSet<QObject *> set;
    foreach (QUmlElement *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->allOwnedElements())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDestructionOccurrenceSpecificationObject::mustBeOwned() const
{
    return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->mustBeOwned();
}

// OPERATIONS [NamedElement]

QList<QObject *> QUmlDestructionOccurrenceSpecificationObject::allNamespaces() const
{
    QList<QObject *> set;
    foreach (QUmlNamespace *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->allNamespaces())
        set.append(element->asQModelingObject());
    return set;
}

QSet<QObject *> QUmlDestructionOccurrenceSpecificationObject::allOwningPackages() const
{
    QSet<QObject *> set;
    foreach (QUmlPackage *element, qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->allOwningPackages())
        set.insert(element->asQModelingObject());
    return set;
}

bool QUmlDestructionOccurrenceSpecificationObject::isDistinguishableFrom(QObject *n, QObject *ns) const
{
    return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->isDistinguishableFrom(qmodelingelementproperty_cast<QUmlNamedElement *>(n), qmodelingelementproperty_cast<QUmlNamespace *>(ns));
}

QString QUmlDestructionOccurrenceSpecificationObject::separator() const
{
    return qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->separator();
}

// SLOTS FOR OWNED ATTRIBUTES [Element]

void QUmlDestructionOccurrenceSpecificationObject::addOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestructionOccurrenceSpecificationObject::removeOwnedComment(QObject *ownedComment)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeOwnedComment(qmodelingelementproperty_cast<QUmlComment *>(ownedComment));
}

void QUmlDestructionOccurrenceSpecificationObject::addOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestructionOccurrenceSpecificationObject::removeOwnedElement(QObject *ownedElement)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeOwnedElement(qmodelingelementproperty_cast<QUmlElement *>(ownedElement));
}

void QUmlDestructionOccurrenceSpecificationObject::setOwner(QObject *owner)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setOwner(qmodelingelementproperty_cast<QUmlElement *>(owner));
}

// SLOTS FOR OWNED ATTRIBUTES [NamedElement]

void QUmlDestructionOccurrenceSpecificationObject::addClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestructionOccurrenceSpecificationObject::removeClientDependency(QObject *clientDependency)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeClientDependency(qmodelingelementproperty_cast<QUmlDependency *>(clientDependency));
}

void QUmlDestructionOccurrenceSpecificationObject::setName(QString name)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setName(name);
}

void QUmlDestructionOccurrenceSpecificationObject::setNameExpression(QObject *nameExpression)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setNameExpression(qmodelingelementproperty_cast<QUmlStringExpression *>(nameExpression));
}

void QUmlDestructionOccurrenceSpecificationObject::setNamespace(QObject *namespace_)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setNamespace(qmodelingelementproperty_cast<QUmlNamespace *>(namespace_));
}

void QUmlDestructionOccurrenceSpecificationObject::setQualifiedName(QString qualifiedName)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setQualifiedName(qualifiedName);
}

void QUmlDestructionOccurrenceSpecificationObject::setVisibility(QtUml::VisibilityKind visibility)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setVisibility(visibility);
}

// SLOTS FOR OWNED ATTRIBUTES [InteractionFragment]

void QUmlDestructionOccurrenceSpecificationObject::setEnclosingInteraction(QObject *enclosingInteraction)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setEnclosingInteraction(qmodelingelementproperty_cast<QUmlInteraction *>(enclosingInteraction));
}

void QUmlDestructionOccurrenceSpecificationObject::setEnclosingOperand(QObject *enclosingOperand)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setEnclosingOperand(qmodelingelementproperty_cast<QUmlInteractionOperand *>(enclosingOperand));
}

void QUmlDestructionOccurrenceSpecificationObject::addGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

void QUmlDestructionOccurrenceSpecificationObject::removeGeneralOrdering(QObject *generalOrdering)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeGeneralOrdering(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(generalOrdering));
}

// SLOTS FOR OWNED ATTRIBUTES [OccurrenceSpecification]

void QUmlDestructionOccurrenceSpecificationObject::setCovered(QObject *covered)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setCovered(qmodelingelementproperty_cast<QUmlLifeline *>(covered));
}

void QUmlDestructionOccurrenceSpecificationObject::addToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlDestructionOccurrenceSpecificationObject::removeToAfter(QObject *toAfter)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeToAfter(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toAfter));
}

void QUmlDestructionOccurrenceSpecificationObject::addToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->addToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

void QUmlDestructionOccurrenceSpecificationObject::removeToBefore(QObject *toBefore)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->removeToBefore(qmodelingelementproperty_cast<QUmlGeneralOrdering *>(toBefore));
}

// SLOTS FOR OWNED ATTRIBUTES [MessageEnd]

void QUmlDestructionOccurrenceSpecificationObject::setMessage(QObject *message)
{
    qmodelingelementproperty_cast<QUmlDestructionOccurrenceSpecification *>(this)->setMessage(qmodelingelementproperty_cast<QUmlMessage *>(message));
}


void QUmlDestructionOccurrenceSpecificationObject::setGroupProperties()
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

    d->propertyGroups << QStringLiteral("QUmlDestructionOccurrenceSpecification");
}

void QUmlDestructionOccurrenceSpecificationObject::setPropertyData()
{
}

QT_END_NAMESPACE

